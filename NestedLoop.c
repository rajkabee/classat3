#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(j=1; j<=5; j++){
        for(i=1; i<=5; i++){
            printf("*\t");
        }
        printf("\n\n");
    }

    printf("\n\n");
    printf("\n\n");

    for(j=1; j<=5; j++){
        for(i=1; i<=j; i++){
            printf("*\t");
        }
        printf("\n\n");
    }


    printf("\n\n");
    printf("\n\n");

    for(j=1; j<=5; j++){
        for(i=1; i<=6-j; i++){
            printf("*\t");
        }
        printf("\n\n");
    }

    printf("\n\n");
    printf("\n\n");

    for(j=1; j<=5; j++){
        for(i=1; i<=5-j; i++){
            printf(" \t");
        }
        for(i=1; i<=j; i++){
            printf("*\t");
        }
        printf("\n\n");
    }
    getch();
}
