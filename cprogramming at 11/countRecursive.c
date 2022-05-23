#include<stdio.h>
#include<conio.h>
void count(int , int );
void main(){
    count(1, 10);
    getch();
}

void count(int i, int j){
    printf("%d\n", i);
    if(i==j){
        return 0;
    }
    return count(i+1, j);
}
