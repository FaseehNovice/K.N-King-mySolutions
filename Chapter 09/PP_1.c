/*
* Name: PP_1.c
* Purpose: Selection Sort
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>

void selection_sort(int array[], int n);

int main(void){
    int dummy_arr[] = {6,7,3,2,1,8};

    selection_sort(dummy_arr, sizeof(dummy_arr)/sizeof(dummy_arr[0]));

    for(int i = 0 ; i < sizeof(dummy_arr)/sizeof(dummy_arr[0]) ; i++){{
        printf("%d " , dummy_arr[i]);
    }}
}

void selection_sort(int array[], int n){

    int largest_num = 0;
    for(int i = 0 ; i < n ; i++){
        if(array[i] > array[largest_num]){
            largest_num = i;
        }
    }
    int temp;
    temp = array[n-1];
    array[n-1] = array[largest_num];
    array[largest_num] = temp;

    if(n  >= 2)
        selection_sort(array , n - 1);

}