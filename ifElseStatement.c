#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age<18){
        printf("you are still a minor!");
    }else if(age>=18 && age<60){
        printf("You are a valued citizen!");
    }
    else{
        printf("You are a senior citizen!");
    }
    getch();
}
/*
    Control Statement
        conditional statements
            if else
            switch case
        loops
            while
            do while
            for


*/
