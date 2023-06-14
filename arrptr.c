#include<stdio.h>
void main(){
    short arr[]={1,2,3,4,5};
    short i, *ptr;
    for(i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    ptr=&arr;
    printf("%d : %d\n",&arr, ptr);
    printf("First Value: %d", *(ptr+1));
    printf("All Values: \n");
    for(i=0; i<5; i++){
        printf("%d\t", *(ptr+i));
    }

}
