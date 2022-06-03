#include<stdio.h>
#include<conio.h>
union var{
    int i;
    char ch;
    char name[100];
    float f;
};
void main(){
    union var v;
    v.i = 123;
    v.ch = 'A';
    strcpy(v.name, "Manisha");
    printf("%d\n", v.i);
    printf("%c\n", v.ch);
    printf("%s\n", v.name);
    getch();
}
