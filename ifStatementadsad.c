#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age<18){
        printf("you are a minor!");
    }else if(age<60){
        printf("You are an adult!");
    }
    else{
        printf("you are a senior citizen!");
    }

}
