#include <stdio.h>
#include "Utilities.c"

void InsertionSort(int Array[],int size){
    int key,j;

    for(int i = 1;i<size;i++){
        key = Array[i];
        j = i-1;

        while(j >= 0 && Array[j]>key){
            Array[j+1] = Array[j];
            j = j-1;
        }
        Array[j+1] = key;
    }
}
void main(){
    int Array[] = {8,2,4,7,1,3,9,6,5};
    int size = sizeof(Array)/sizeof(Array[1]);

    display(Array,size);
    InsertionSort(Array,size);
    display(Array,size);
}