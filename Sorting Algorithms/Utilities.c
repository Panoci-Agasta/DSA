void display(int Array[],int size){
    printf("The Array is : ");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",Array[i]);
    }
    printf("\n");
}
void swap(int *p,int *q){
    int temp = *q;
    *q = *p;
    *p = temp;
}