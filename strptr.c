
#include<stdio.h>
void main(){
    char name[50], namecpy[50];
    char ch='a';
    printf("Enter your name: ");
    scanf("%s", &name);
    strcopy(name, namecpy);
    printf("%s", namecpy);
    change(ch);
    printf("ch: %c", ch);

}

void strcopy(char name[50], char namecpy[50]){
    strcpy(namecpy, name);
}

void change(char ch){
    ch='f';
}
