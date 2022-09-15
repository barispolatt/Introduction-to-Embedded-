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
 * @brief Header file for the functions in the statistical analysis of an array assingment.
 *
 * Headers for the functions of mean, median, minimum and maximum in the program.
 * Also the headers for the printing unsorted array, sorted array and swap functions. 
 * For this assingment, program uses at least 7 functions which has to be in header file.
 * stats program calculates mean, median, minimum, maximum of the given array which is data type of unsigned char.
 * stats program rounds calculated values to the nearest integer number. 
 * stats program prints the sorted and unsorted states of the array too.
 * 
 * @author Barış Polat
 * @date   13.09.2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

  void print_array(unsigned char *value, int value_length);
  
/**
 * @brief <Prints the unsorted array>
 *
 * This function prints given array without sorting it. For this it uses a 'for' loop and 'printf' function.
 *
 * @param <unsigned char *value> <given array data in the assingment>
 * @param <int value_length> <Data length of the given array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <There is no return because it is just a printing function>
 */



void sort_array(unsigned char *value, int value_length);
  
/**
 * @brief <Prints the sorted array>
 *
 * This function prints given array in order from largest to smallest. For this it uses a 'for' loop and 'printf' function.
 *
 * @param <unsigned char *value> <given array data in the assingment>
 * @param <int value_length> <Data length of the given array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <returns given array to sort, also unsigned char value>
 */

 

  void change(unsigned char *a, unsigned char *b);
  
/**
 * @brief <Prints the unsorted array>
 *
 * This function prints given array without sorting it. For this it uses a 'for' loop and 'printf' function.
 *
 * @param <unsigned char *a> <1st changed parameter>
 * @param <unsigned char *b> <2nd changed parameter>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <There is no return>
 */




  unsigned char find_mean(unsigned char *value, int value_length);
  
/**
 * @brief <Finds the mean value of the array>
 *
 * This function finds the mean value of given array in the assingment. Mean is the sum of values divided by value_length
 *
 * @param <unsigned char *value> <given array data in the assingment>
 * @param <int value_length> <Data length of the given array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Returns mean value>
 */




  unsigned char find_median(unsigned char *value, int value_length);
  
/**
 * @brief <Finds the median value of the array>
 *
 * This function prints given array without sorting it. For this it uses a 'for' loop and 'printf' function.
 *
 * @param <unsigned char *value> <given array data in the assingment>
 * @param <int value_length> <Data length of the given array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Returns median value>
 */




  unsigned char find_minimum(unsigned char *value, int value_length);
  
/**
 * @brief <Finds minimum value of the array>
 *
 * This function prints given array without sorting it. For this it uses a 'for' loop and 'printf' function.
 *
 * @param <unsigned char *value> <given array data in the assingment>
 * @param <int value_length> <Data length of the given array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Returns minimum value>
 */




  unsigned char find_maximum(unsigned char *value, int value_length);
  
/**
 * @brief <Finds maximum value of the array>
 *
 * This function prints given array without sorting it. For this it uses a 'for' loop and 'printf' function.
 *
 * @param <unsigned char *value> <given array data in the assingment>
 * @param <int value_length> <Data length of the given array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Returns maximum value>
 */
 
 
 
 void print_statistics(unsigned char mean, unsigned char median, unsigned char minimum, unsigned char maximum);
  
/**
 * @brief <Prints the statics of the given array>
 *
 * This function prints given array statics. For this it uses a 'printf' function.
 *
 * @param <unsigned char mean> <mean of the array>
 * @param <unsigned char median> <median of the array>
 * @param <unsigned char maximum> <maximum of the array>
 * @param <unsigned char minimum> <minimum of the array>
 *
 * @return <>
 */




  

 
 
 
#endif /* __STATS_H__ */
