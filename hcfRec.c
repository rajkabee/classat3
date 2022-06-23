#include<stdio.h>
#include<conio.h>
void main(){
    int a,b, hcf;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    hcf = getHcf(a,b);
    printf("HCF : %d", hcf);
    getch();
}

getHcf(int x, int y){
    if(y==0){
        return x;
    }
    else{
        return getHcf(y, x%y);
    }
}
