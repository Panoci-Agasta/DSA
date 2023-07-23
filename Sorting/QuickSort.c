#include <stdio.h>
#include "Utilities.c"
int Pivot(int Array[],int start,int end){
    // int Pivot = end; In this variation pivot is always the end.
    int i = start-1;
    
    for(int j = start;j<end;j++){
        if(Array[end] > Array[j]){ //changing <,> chnages ascending or desceding.
            i++;
            swap(&Array[i],&Array[j]);
        }
    }
    i++;
    swap(&Array[i],&Array[end]);
    return i;
}
void QuickSort(int Array[],int start,int end){
    if (end <= start){
        return ;
    }
    int pivot = Pivot(Array,start,end);
    QuickSort(Array,start,pivot-1);
    QuickSort(Array,pivot+1,end);
}

void main(){
    int Array[] = {8,2,4,7,1,3,9,6,5};
    int size = sizeof(Array)/sizeof(int);

    display(Array,size);
    QuickSort(Array,0,size-1);
    display(Array,size);
}