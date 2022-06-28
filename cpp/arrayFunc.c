#include<stdio.h>
#include<conio.h>
void main(){
    int num[5]= {1,2,3,4,5}, i;
    incr(num);
    for(i=0; i<5; i++){
        printf("%d\t",num[i]);
    }
    increment(&num);
    printf("\nAfter increment\n");
    for(i=0; i<5; i++){
        printf("%d\t",num[i]);
    }
    getch();
}

void incr(int num[5]){
    int i;
    for(i=0; i<5; i++){
        num[i]+=100;
    }
}

void increment(int *ptr){
    int i;
    for(i=0; i<5; i++){
        *(ptr+i)+=100;
    }
}
