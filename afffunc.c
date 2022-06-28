#include<stdio.h>
#include<conio.h>
void incr(int *ptr){
    int i;
    for(i=0; i<5; i++){
        *(ptr+i)+=123;
    }
}
void main(){
    int num[5] = {1,2,3,4,5};
    int i;
    incr(&num);
    for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }
    getch();
}
