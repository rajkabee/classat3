#include<stdio.h>
void main(){
    int i,j;
   /* printf("Rectangle: \n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("*  ");
        }
        printf("\n");
    }

    printf("Triangle 1: \n");
    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            printf("*  ");
        }
        printf("\n");
    }

    printf("Triangle 2: \n");
    for(i=0; i<5; i++){
        for(j=0; j<5-i; j++){
            printf("*  ");
        }
        printf("\n");
    }


    printf("Triangle 3: \n");
    for(i=0; i<5; i++){
        for(j=0; j<i; j++){
            printf("   ");
        }
        for(j=0; j<5-i; j++){
            printf("*  ");
        }
        printf("\n");
    }

    printf("Triangle 4: \n");
    for(i=0; i<5; i++){
        for(j=0; j<4-i; j++){
            printf("   ");
        }
        for(j=0; j<=i; j++){
            printf("*  ");
        }
        printf("\n");
    }
*/

    printf("Pyramid: \n");
    for(i=0; i<5; i++){
        for(j=0; j<4-i; j++){
            printf("   ");
        }
        for(j=0; j<=i; j++){
            printf("*  ");
        }
        for(j=0; j<i; j++){
            printf("*  ");
        }
        printf("\n");
    }
    for(i=0; i<4; i++){
        for(j=0; j<=i; j++){
            printf("   ");
        }
        for(j=0; j<4-i; j++){
            printf("*  ");
        }
        for(j=0; j<3-i; j++){
            printf("*  ");
        }
        printf("\n");
    }

}
