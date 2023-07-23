#include <stdio.h>
#include "utilities.c"

void merge(int Array[],int l , int m , int u){
    int s1 = m-l+1;
    int s2 = u-m;
    int l1[s1];
    int l2[s2];

    for(int i = 0;i<s1;i++){
        l1[i] = Array[l+i];
    }
    for(int j = 0;j<s2;j++){
        l2[j] = Array[m+1+j];
    }

    int i = 0,j = 0,k = l;

    while(i < s1 && j < s2){
        if(l1[i] < l2[j]){// changes ascending to descending
            Array[k] = l1[i];
            i++;
            k++;
        }
        else{
            Array[k] = l2[j];// changes ascending to descending
            j++;
            k++;
        }
    }
    while(i<s1){
        Array[k] = l1[i];
        i++;
        k++;
    }
    while(j<s2){
        Array[k] = l2[j];
        j++;
        k++;
    }
}

void MergeSort(int Array[],int start,int end){
    if (start < end){
        int middle = start + (end-start)/2;
        MergeSort(Array,start,middle);
        MergeSort(Array,middle+1,end);
        merge(Array,start,middle,end);
    }
}

void main(){
    int Array[] = {8,2,4,7,1,3,9,6,5};
    int size = sizeof(Array)/sizeof(Array[1]);

    display(Array,size);
    MergeSort(Array,0,size-1);
    display(Array,size);
}