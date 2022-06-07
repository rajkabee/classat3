
#include<stdio.h>
#include<conio.h>

void main(){
    int *marks;
    int n, i;
    printf("Enter the no of students: ");
    scanf("%d", &n);

    marks = (int*)calloc(n, sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d", marks+i);
    }

    for(i=0; i<n; i++){
        printf("%d\t", *(marks+i));
    }


    getch();
}

