#include <stdio.h>
#include "Utilities.c"
void Heapify(int Array[],int size,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if (left<size && Array[left] > Array[largest]){
        largest = left;
    } 
    if (right<size && Array[right] > Array[largest]){
        largest = right;
    } 
    if(largest != i){
        swap(&Array[i],&Array[largest]);
        Heapify(Array,size,largest);
    }
}
void HeapSort(int Array[],int size){
    for(int i = size/2-1;i>=0;i--){
        Heapify(Array,size,i);
    }
    for(int i = size-1;i>=0;i--){
        swap(&Array[0],&Array[i]);
        Heapify(Array,i,0);
    }
}
void main(){
    int Array[] = {8,2,4,7,1,3,9,6,5};
    int size = sizeof(Array)/sizeof(Array[1]);

    display(Array,size);
    HeapSort(Array,size);
    display(Array,size);
}