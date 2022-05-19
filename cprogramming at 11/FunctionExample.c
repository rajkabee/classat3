#include<stdio.h>
#include<conio.h>

//function declaration
int add(int, int);

int main(){
    int p, b, pow;
    printf("Enter the base and the power: ");
    scanf("%d%d", &b, &p);

    pow = power(b,p);
    printf("Sum: %d", pow);

    function(5, 6, 45.543f);
    getch();
    return 0;
}

int add(int x, int y){
    int res;
    res = x+y;
    return res;
}
int power(int b, int p){
    int res = 1;
    while(p!=0){
       res*=b;
       p--;
    }
    return res;
}


void function(char ch, int i, float f){
    printf("%c %d %f", ch,i,f);
    //function logic

}

float pi(){
    return 3.1415f;
}
