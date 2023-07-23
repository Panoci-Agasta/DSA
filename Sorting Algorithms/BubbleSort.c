#include <stdio.h>
#include "Utilities.c"

void BubbleSort(int Array[],int size){
    for(int round = 0 ; round < size ; round++){
        for(int i = 0; i < size-1 ; i++){
            if (Array[i] > Array[i+1]){ //changing <,> chnages ascending or desceding.
                int temp = Array[i];
                Array[i] = Array[i+1];
                Array[i+1] = temp;
            }
        }
    }
}
void main(){
    int Array[] = {8,2,4,7,1,3,9,6,5};
    int size = sizeof(Array)/sizeof(Array[1]);

    display(Array,size);
    BubbleSort(Array,size);
    display(Array,size);
}