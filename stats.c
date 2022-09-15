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
 * @file <stats.c> 
 * @brief <Source codes for program which find statistics of the given array>
 *
 * <Finding minimum, maximum, mean and median of the "test" array, also sorting the "test" array from largest to smallest>
 *
 * @author <Barış Polat>
 * @date <15.09.2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  printf("ARRAY: /n");    		//to print array (unsorted)
  print_array(test,SIZE);
  
  printf("/n/nSORTED ARRAY: /n"); 	//to print array (sorted)
  sort_array(test,SIZE);
      
  unsigned char mean = find_mean(test,SIZE);
  
  unsigned char median = find_median(test,SIZE);
  
  unsigned char maximum = find_maximum(test,SIZE);
  
  unsigned char minimum = find_minimum(test,SIZE);
  
  printf("/n/n STATISTICS: /n");
  print_statistics(mean,median,maximum,minimum);

  return 0;
}

  void print_array(unsigned char *value, int value_length){
    for(int i = 0; i<value_length; ++i){
  	printf("%u, ",value[i]);
  	}}
  
  unsigned char find_mean(unsigned char *value, int value_length){
    int k = 0;                         //k is sum of the array
    int i;
      for(i = 0; i<value_length; ++i){
      k += value[i]; 
      }
    int m = k/value_length;   	       //m is mean
    return m;
    }
    	
  void change(unsigned char *a, unsigned char *b){
    unsigned char t;
    t = *a;
    *b = t;
    }
  
  void sort_array(unsigned char *value, int value length){
    int flag, i, j;
    for(i = 0; i<value_length; i++){
      flag=0;
      for(j=0;j<(value_length - (i+1)); j++){
        if(value[j] < value[j+1]){
          change(&value[j], &value[j+1]);
           flag=1;
           }}
      if(flag==0){
        break
        }}}     
  
  unsigned char find_median(unsigned char *value, int value_length){
    unsigned char median;
    unsigned char mediansum;
    sort_array(value, value_length);
    int mid = (value_length/2);
    if((value_length%2)==0){
      mediansum = (value[mid-1] + value[mid]);  
      median = mediansum/2;
    }       
    else if (value_length != 0){
      median = value[mid];
    }
    return median;
    }
  
  unsigned char find_minimum(unsigned char *value, int value_length){
    unsigned char minimum = value[0];
    int i;
    for(i=1; i<value_length;++i){
      if(minimum > value[i]){
        minimum=value[i];
        }}
    return minimum;
    }
     
  unsigned char find_maximum(unsigned char *value, int value_length){
    unsigned char maximum = value[0];
    int i;
    for(i=1; i<value_length;++i){
      if(maximum < value[i]){
        maximum = value[i];
        }}
    return maximum;
    }
  
  void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum){
    unsigned char mean = find_mean(test, SIZE);
    unsigned char median = find_median(test, SIZE);
    unsigned char minimum = find_minimum(test, SIZE);
    unsigned char maximum = find_maximum(test, SIZE);
    printf("Mean of the array:    %u /n", &mean);
    printf("Median of the array:  %u /n", &median);
    printf("Maximum of the array: %u /n", &maximum);
    printf("Minimum of the array: %u /n", &minimum);                    
/* Add other Implementation File Code Here */
