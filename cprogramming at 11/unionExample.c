#include<stdio.h>
#include<conio.h>
union myData{
    int num;
    char name[50];
    float percent;
};
void main(){
    union myData x;
    x.percent = 79.765f;
    x.num = 123;
    strcpy(x.name, "saugat");

    printf("Id = %d\n", x.num);
    printf("name = %s\n", x.name);
    printf("percent  = %.3f", x.percent);

}
