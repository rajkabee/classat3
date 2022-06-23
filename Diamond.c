
#include<stdio.h>
#include<conio.h>
void main(){

    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for(i=1; i<=5; i++){
        for(j=1; j<=6-i; j++){
            printf("*  ");
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(i=1; i<=5; i++){
        for(j=1; j<i; j++){
            printf("   ");
        }
        for(j=1; j<=6-i; j++){
            printf("*  ");
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(i=1; i<=5; i++){
        for(j=1; j<6-i; j++){
            printf("   ");
        }
        for(j=1; j<=i; j++){
            printf("*  ");
        }

        printf("\n");
    }


    printf("\n");
    printf("\n");
    printf("\n");

    for(i=1; i<=5; i++){
        for(j=1; j<6-i; j++){
            printf("   ");
        }
        for(j=1; j<=i; j++){
            printf("*  ");
        }
        for(j=1; j<i; j++){
            printf("*  ");
        }
        printf("\n");
    }
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("   ");
        }
        for(j=1; j<6-i; j++){
            printf("*  ");
        }
        for(j=1;j<=4-i; j++ ){
            printf("*  ");
        }

        printf("\n");
    }


    getch();
}
