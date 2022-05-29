#include<stdio.h>
#include<conio.h>
void main(){
    char ch[5];
    int i;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Hello, %s!", name);


    /*
    printf("Enter five characters: ");
    for(i=0; i<5; i++){
        scanf(" %c", &ch[i]);
    }
    printf("The characters you entered: ");

    for(i=0; i<5; i++){
        printf("%c", ch[i]);
    }*/
	getch();
}
