/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implement statistics functions. Also contains entry point.
 *
 *
 * @author Jad Bassil
 * @date 24/02/2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* length of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test,SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
 
}

/* Add other Implementation File Code Here */
void print_array(unsigned char *data, int length) {
  int i;

  printf("Array: ");
  for(int i=0; i<length; i++) {
    printf("%u ", data[i]);
  }
  printf("\n");
}

void print_statistics(unsigned char *data, int length) {
  printf("Statistics: \n");
  printf("\tMedian %u\n", find_median(data, length));
  printf("\tMean %u\n", find_mean(data, length));
  printf("\tMaximum %u\n", find_maximum(data, length));
  printf("\tMinimum %u\n", find_minimum(data, length));
}

unsigned char find_median(unsigned char *data, int length) {
  if(length %2 == 0) {
    return (data[(length-1)/2] + data[(length)/2]) / 2;
  } else {
    return data[length/2];
  }
}

unsigned char find_mean(unsigned char *data, int length) {
  unsigned int sum = 0;
  int i;
  for(i=0; i<length; i++) {
    sum += (unsigned int) data[i];
  }
  sum /= length;
  return (unsigned char) sum;
}

unsigned char find_maximum(unsigned char *data, int length) {
  return data[0];
}

unsigned char find_minimum(unsigned char *data, int length) {
  return data[length-1];
}

void sort_array(unsigned char *data, int length) {
  int i, j;
  for(int i=1; i < length ; i++) {
    for(int j = 0; j < i; j++) {
      if(data[i] > data[j]) {
        int tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }
}