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
 * @brief Calculates statistics of the given data
 *
 *
 * @author Mubashira Zaman
 * @date 13-12-2021
 *
 */

#include <stdio.h>
#include <limits.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
}


void print_statistics(unsigned char * arr, int length) //- A function that prints the statistics of an array including minimum, maximum, mean, and median.
{
  printf("\nArray Statistics:\n");
  printf("Minimum value of the array data = %u \n", find_minimum(arr, length));
  printf("Maximum value of the array data = %u \n", find_maximum(arr, length));
  printf("Mean value of the array data = %u \n", find_maximum(arr, length));
  printf("Median value of the array data = %u \n", find_median(arr, length));
}

void print_array(unsigned char * arr, int length) //-  Given an array of data and a length, prints the array to the screen
{
  for (int i = 0; i < length; i++)
  {
    printf("Array[%d] = %u\n", i, arr[i]);
  }
}

unsigned char find_median(unsigned char * arr, int length)// - Given an array of data and a length, returns the median value
{
  unsigned char median;
  if (length % 2 == 0)
  {
    median = (arr[length/2 - 1] + arr[length/2]) / 2;
  }
  else
  {
    median = arr[length/2];
  }
  return median;
}

unsigned char find_mean(unsigned char * arr, int length) //-  Given an array of data and a length, returns the mean
{
  unsigned char mean;
  unsigned int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += arr[i];
  }

  mean = sum / length;
  return mean;
}

unsigned char find_maximum(unsigned char * arr, int length)// -  Given an array of data and a length, returns the maximum
{
  unsigned char max = 0;
  for (int i = 0; i < length; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }

  return max;
}

unsigned char find_minimum(unsigned char * arr, int length)// -  Given an array of data and a length, returns the minimum
{
  unsigned char min = UCHAR_MAX;
  for (int i = 0; i < length; i++)
  {
    if (arr[i] < min)
      min = arr[i];
  }

  return min;
}

void sort_array(unsigned char * arr, int length)
{
  int key = 0;
  int j = 0;

  for (int i = 1; i < length; i++) 
  {
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key) 
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}


 
