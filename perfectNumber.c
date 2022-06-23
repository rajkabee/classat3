#include<stdio.h>
#include<conio.h>
void main(){
    int num, perfect, i, range;
    printf("Enter the range: ");
    scanf("%d", &range);
    for(num=1; num<=range; num++){
        perfect = 0;
        for(i=1; i<=num/2; i++){
            if(num%i==0){
                perfect+=i;
            }
        }
        if(perfect==num){
            printf("%d\n", num);
        }
    }
    getch();
}
