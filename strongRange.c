#include<stdio.h>
#include<conio.h>
void main(){
    int range, num, temp, strong, rem, fact;
    printf("Enter the range of the strong numbers: ");
    scanf("%d", &range);
    for(num=1; num<=range; num++){
        temp = num;
        strong = 0;
        while(temp!=0){
            rem = temp%10;
            fact=1;
            while(rem!=0){
                fact*=rem;
                rem--;
            }
            strong+=fact;
            temp/=10;
        }
        if(num==strong){
            printf("%d\n", num);
        }
    }
    getch();
}
