#include<stdio.h>
#include<conio.h>
void main(){
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = natural(num);
    printf("Sum: %d", sum);
    getch();
}

int natural(int n){
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    return sum;

}
