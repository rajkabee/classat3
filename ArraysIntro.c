#include<stdio.h>
#include<conio.h>
void main(){
    int num[5] = {123,456,789,567,234};
    int  i;
    // index of an array starts at 0
    //5 in num[5] indicates the size of the array
    //num[0], num[1],num[2], num[3], num[4]
    printf("first value in the array: %d", num[0]);
    printf("last value in the array: %d", num[4]);

    /*
    for(i=0; i<10; i++){
        printf("Enter the %dth number: ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0; i<10; i++){
        printf("%dth number: %d\n", i+1, num[i]);
    }
    */

    getch();
}
