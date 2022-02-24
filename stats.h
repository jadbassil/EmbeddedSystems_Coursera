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
 * @file stats.h
 * @brief Data analysis functions + presentation function
 *
 * This file includes the data analysis function of an unsigned char array:
 * maximum, minimum, mean, and median of the data set.
 * It also include functions for presenting the data: print in a decrease order.
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes as input a pointer to an unsigned char array and its length to print the
 * content of the array on the screen.
 *
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return void
 */
void print_array(unsigned char *data, int length);

/**
 * @brief  A function that prints the statistics of an array including minimum, maximum, mean, and
 * median.
 *
 * This function takes as input a pointer to an unsigned char array and its length and print. It
 * prints the statistics performed on the array on the screen.
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return void
 */
void print_statistics(unsigned char *data, int length);

/**
 * @brief   Given an array of data and a length, returns the median value
 *
 * This function takes as input a pointer to an unsigned char array and its length and print. It returns the median value
 * 
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return The median value
 */
unsigned char find_median(unsigned char *data, int length);

/**
 * @brief   Given an array of data and a length, returns the mean value
 *
 * This function takes as input a pointer to an unsigned char array and its length and print. It returns the mean value
 * 
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return The mean value
 */
unsigned char find_mean(unsigned char *data, int length);

/**
 * @brief   Given an array of data and a length, returns the maximum value
 *
 * This function takes as input a pointer to an unsigned char array and its length and print. It returns the maximum value
 * 
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return The maximum value
 */
unsigned char find_maximum(unsigned char *data, int length);

/**
 * @brief   Given an array of data and a length, returns the minimum value
 *
 * This function takes as input a pointer to an unsigned char array and its length and print. It returns the minimum value
 * 
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return The minimum value
 */
unsigned char find_minimum(unsigned char *data, int length);

/**
 * @brief   Given an array of data and a length, sorts the array from largest to smallest
 *
 * This function takes as input a pointer to an unsigned char array and its length and print. It sorts it in_place
 * 
 * @param data Pointer to the array
 * @param length Array length
 *
 * @return void
 */
void sort_array(unsigned char *data, int length);

#endif /* __STATS_H__ */
