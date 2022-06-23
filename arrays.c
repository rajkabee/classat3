#include<stdio.h>
#include<conio.h>
void main(){
    int marks[5]={1,2,3,4,5};
    int i;
    /*
    printf("Enter the marks obtained in 5 subjects");
    for(i=0; i<5; i++){

        scanf("%d", &marks[i]);
    }
    */
    for(i=0; i<5; i++){
        printf("the marks obtained in %dnd subject: %d\n", i+1, marks[i]);

    }


    getch();
}
