#include<stdio.h>
void main(){

    char ch='a';
    change(&ch);
    printf("ch: %c", ch);
}
void change(char *ptr){
    *ptr='f';
}
