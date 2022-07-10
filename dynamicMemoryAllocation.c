#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int num[5] = {1,2,3,4,5};
    int *ptr;
    //short *ptr
    int i;
    ptr = &num;
    for(i=0; i<5; i++){
        printf("%d\t", *(ptr+i));
    }
    printf("\n");
    ptr = malloc(5*sizeof(int));
    for(i=0; i<5; i++){
        printf("%d\t", *(ptr+i));
    }
    printf("\n");
    ptr = calloc(5, sizeof(int));
    for(i=0; i<5; i++){
        printf("%d\t", *(ptr+i));
    }
}
