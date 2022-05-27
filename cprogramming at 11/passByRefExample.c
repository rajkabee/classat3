#include<stdio.h>
#include<conio.h>
void increment(int);
void incr(int num[3]);
void main(){
    int n =5, num[3]={1,2,3},i;
    printf("before method call n: %d\n" , n);
    increment(n);
    incr(num);
    printf("after method call n: %d\n" , n);
    for(i=0; i<3; i++){
        printf("after method call num[%d]: %d\n",i , num[i]);
    }
	getch();
}
void increment(int n){
    n+=100;
    printf("inside method call n: %d\n" , n);
}
void incr(int num[3]){
    int i;
    for(i=0; i<3; i++){
        num[i]+=100;
        printf("inside method call num[%d]: %d\n",i , num[i]);
    }
}
