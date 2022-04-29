#include<stdio.h>
#include<conio.h>
void main(){
    int b, p, temp, res;
    printf("Enter the base and the power: ");
    scanf("%d%d", &b, &p);

    res=1;
    for(temp=p;p>0; p--){
        res*=b;
    }
    printf("%d to the power %d = %d", b, temp, res);
    getch();
}
