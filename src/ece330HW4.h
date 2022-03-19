#ifndef ECE330HW4_H
#include <stdlib.h>

/*
 * STEP 1: Generates an array of a specified size and populates it with random numbers
 * STEP 2: calculates the sum of all the even numbers in the array
 * STEP 3: calculates the sum of all the odd numbers in the array
 * STEP 4: prints the larger of the two sums
 * size - the size (number of elements) of the array to be created and populated
 */
void evensNodds(int size){
    int evenSum;
    int oddSum;
    int tempRandom;
    int arr[size];

    for(int i = 0; i < size; i++){
        tempRandom = (rand() % 11) + 1;
        arr[i] = tempRandom;
        printf("%d ", arr[i]);
    }



}


#endif