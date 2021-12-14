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
 * @brief Header file with function declarations for the stats.c file
 *
 * @author Mubashira Zaman
 * @date 13-12-2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print the statistics of the data in the array
 *
 * Given an array of data and a length, 
 * print the statistics of the array
 * such as minimum, maximum, mean, and median values
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return 
 */
void print_statistics(unsigned char arr [], int length);


/**
 * @brief Print the array
 *
 * Given an array of data and a length, 
 * print the contents of the array
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return 
 */
void print_array(unsigned char arr [], int length);


/**
 * @brief Find median value in the array
 *
 * Given an array of data and a length, 
 * return the median value in the array
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return the median value
 */
unsigned char find_median(unsigned char * arr, int length);


/**
 * @brief Find mean value of the array contents
 *
 * Given an array of data and a length, 
 * return the mean value in the array
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return the mean value
 */
unsigned char find_mean(unsigned char * arr, int length);


/**
 * @brief Find maximum value in the array
 *
 * Given an array of data and a length, 
 * return the maximum value in the array
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return the maximum value
 */
unsigned char find_maximum(unsigned char * arr, int length);


/**
 * @brief Find minimum value in the array
 *
 * Given an array of data and a length, 
 * return the minimum value in the array
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return the minimum value
 */
unsigned char find_minimum(unsigned char * arr, int length);


/**
 * @brief Sorts the array in descending order
 *
 * Given an array of data and a length, this function 
 * sorts the array from largest to smallest.
 * The zeroth Element should be the largest value,
 * and the last element (n-1) should be the smallest value.
 * It modifies the input array instead of creating a new one.
 * 
 * @param arr       Pointer to input array
 * @param length    Length of input array
 *
 * @return
 */
void sort_array(unsigned char * arr, int length);

#endif /* __STATS_H__ */
