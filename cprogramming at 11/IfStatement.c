/*
    if statement

    if(condition){
        //work to be done
    }
    else{
       //work to be done
    }
*/

#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age<18){
        printf("You are a minor!");
    }
    else if(age>60){
        printf("You are a senior citizen!");
    }
    else{
       printf("You are an adult.");
    }

    getch();
}
