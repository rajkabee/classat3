#include<stdio.h>
#include<conio.h>
void main(){
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    sum = add(x,y);
    printf("Sum: %d", sum);
    getch();
}
add(int a, int b){
    int s;
    s=a+b;
    return s;

}
