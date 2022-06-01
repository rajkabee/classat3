#include<stdio.h>
#include<conio.h>
void main(){
    int  num[5] = {21,23,43,76,14};
    int i;

    num[4] = 234;

    for(i=0; i<5; i++){
        printf("%d\n", num[i]);
    }

	getch();
}
