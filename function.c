#include<stdio.h>
#include<conio.h>
int main(){
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    sum = add(a,b);
    printf("Sum: %d", sum);
    getch();
    return 0;
}


int add(int x, int y){
    int s = x+y;
    return s;
}
