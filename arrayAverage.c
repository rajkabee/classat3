#include<stdio.h>
#include<conio.h>
void main(){
    int num[5]={51,62,33,24,45};
    int i, min, max;
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
    printf("
           Min: %d\n Max: %d", min,max);


    getch();
}
