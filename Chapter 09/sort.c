/*
* Name: sort.c
* Purpose: Function Implementation for sort.c
* Author: Faseeh Ur Rehman
*/

#include"sort.h"

void quicksort(int array[],int left , int right){

    int middle;
    if(left >= right) return;
    middle = split(array , left , right);
    quicksort(array , left , middle-1);
    quicksort(array , middle + 1 , right);

}
int split(int array[],int left , int right){
    int part_element = array[left];
    for(;;){
        while( left < right && part_element <= array[right])
                right--;
        if(left >= right) break;
        array[left++]=array[right];

        while(left < right && part_element >= array[left])
                left++;
        if(left >= right) break;
        array[right--]=array[left];
    }
    array[right] = part_element;
    return right;
}
