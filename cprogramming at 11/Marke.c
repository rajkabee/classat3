#include<stdio.h>
#include<conio.h>
void main(){
    int marks[5];
    char students[5][20] = {"ram", "shyam", "hari","rita", "geeta"};
    int i;
    printf("Enter the marks of five students: \n");
    for(i=0; i<5; i++){
        printf("Enter marks obtained by %s: ", students[i]);
        scanf("%d", &marks[i]);
    }
    printf("The marks of the five students: \n");
    for(i=0; i<5; i++){
        printf("%s\t:\t%d\n",students[i], marks[i]);
    }
	getch();
}
