#include<stdio.h>
#include<conio.h>
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

void main(){
    int num[5] = {1,2,3,4,5}, i;
    incr(num);
    for(i=0; i<5; i++){
        printf("%d\n", num[i]);
    }
    increment(&num);
    for(i=0; i<5; i++){
        printf("%d\n", num[i]);
    }
    getch();
}
