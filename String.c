
#include<stdio.h>
#include<conio.h>
void main(){
    char fname[20], lname[20], name[40];
    int l, i;
    printf("Enter your first name: ");
    scanf("%s", &fname);
    printf("Enter your last name: ");
    scanf("%s", &lname);
    printf("Hello, %s %s!\n", fname, lname);
    l=0;
    while(fname[l]!=NULL){
        l++;
    }
    printf("There are %d characters in your first name.\n", l);

    l=0;
    while(fname[l]!=NULL){
        name[l]=fname[l];
        l++;
    }
    name[l]=' ';
    l++;
    i=0;

    while(lname[i]!=NULL){
        name[l]=lname[i];
        l++;
        i++;
    }
    name[l]=NULL;

    printf("Full Name: %s\n", name);


    getch();

}
