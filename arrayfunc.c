#include<stdio.h>
#include<conio.h>

void myFunc(int *ptr){
    *ptr+=100;
}

void main(){
    int num = 5;
    myFunc(&num);
    printf("num =%d\n", num);

}
