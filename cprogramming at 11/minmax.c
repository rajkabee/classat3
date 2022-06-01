#include<stdio.h>
#include<conio.h>
void main(){
    int  num[5] = {21,23,4,76,14};
    int min, max, i, mean, sum;
    min = num[0];
    max = num[0];
    for(i=1; i<5; i++){
        if(min>num[i]){
            min=num[i];
        }

        if(max<num[i]){
            max = num[i];
        }
    }
    printf("min: %d\n", min);
    printf("max: %d\n", max);


    //mean

    sum=0;
    for(i=0; i<5; i++){
        sum+=num[i];
    }
    mean = sum/5;
    printf("Mean Values:  %d", mean);



    getch();
}
