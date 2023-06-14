#include<stdio.h>
#include<conio.h>
void main(){
    int num[5];
    int arr[]={5,4,6,7,2};
    //arr[4]=1234;

    int i, sum=0;
    for(i=0; i<5; i++){
        printf("%d\n", arr[i]);
        sum+=arr[i];
    }
    printf("Sum: %d", sum);

}
