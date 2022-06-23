#include<stdio.h>
#include<conio.h>
void main(){
    int num[5] = {1,2,3,4,5};
    int i;
    for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }
    printf("\n");
    incr(&num);
    printf("Back to the main: ");
     for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }
    getch();
}
void incr(short *ptr){
    int i;
    for(i=0; i<5; i++){
        *(ptr+i)+=100;
    }
    printf("in the function\n");
    for(i=0; i<5; i++){
        printf("%d\t", *(ptr+i));
    }
    printf("\n");
}
