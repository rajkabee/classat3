#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;

    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n\n triangele 1: \n");

    for(i=1; i<=10; i++){
        for(j=1; j<=i; j++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("\n\n\n triangele 2: \n");

    for(i=1; i<=10; i++){
        for(j=1; j<=11-i; j++){
            printf("*  ");
        }
        printf("\n");
    }

    printf("\n\n\n triangele 3: \n");
    for(i=1; i<=10; i++){
        for(j=1; j<i; j++){
            printf("   ");
        }
        for(j=1; j<=11-i; j++){
            printf("*  ");
        }
        printf("\n");
    }



55
    printf("\n\n\n triangele 4: \n");
    for(i=1; i<=10; i++){
        for(j=1; j<=10-i; j++){
            printf("   ");
        }
        for(j=1; j<=i; j++){
            printf("*  ");
        }
        printf("\n");
    }

    getch();
}
