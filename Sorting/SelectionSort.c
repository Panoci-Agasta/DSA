#include <stdio.h>
#include "Utilities.c"

void SelectionSort(int Array[],int size){
    int minIndex,i,j;
    for (int i = 0;i < size-1;i++){
        minIndex = i;
        for(j = i+1 ; j<size; j++){
            if(Array[j]<Array[minIndex]){  //changing <,> chnages ascending or desceding.
                minIndex = j;
            }
        }
        if (minIndex != i){
            swap(&Array[minIndex],&Array[i]);
        }
    }
}
void main(){
    int Array[] = {8,2,4,7,1,3,9,6,5};
    int size = sizeof(Array)/sizeof(Array[1]);

    display(Array,size);
    SelectionSort(Array,size);
    display(Array,size);
}