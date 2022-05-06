#include<stdio.h>
#include<conio.h>
void main(){
    int num[] = {5,8,3,9,1};
    int min, max, avg, i, sum;
    min = num[0];
    max = num[0];
    for(i=1; i<5; i++){
        if(min>num[i]){
            min=num[i];
        }
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("Minimum Value: %d\n", min);
    printf("Maximun value: %d\n", max);

    sum=0;
    for(i=0; i<5; i++){
        sum+=num[i];
    }
    avg = sum/5;
    printf("Average Mean value : %d", avg);

    getch();
}
