#include<stdio.h>
void main(){
    char name[50];
    //printf("Enter your name: ");
    //scanf("%s", &name);
    //strcpy(name, "Kabiraj");
    //strcat(name," Shrestha");
    printf("Hello, %s", name);
    if(strcmp(name, "Pratik Rai")==0){
        printf("Match");
    }

}
