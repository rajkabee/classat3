#include<conio.h>
void main(){
    int b, p, result,t;
    printf("Enter base and power number: ");
    scanf("%d%d", &b, &p);
    t=p;
    result =1;
    while(p>0){
        result=result*b;
        p--;
    }
    printf("%d to the power %d = %d.", b,t,result);

    getch();
}

