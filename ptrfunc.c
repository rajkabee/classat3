#include<stdio.h>
void main(){
    int x=123, y=456;
    incr(&x, &y);
    printf("Value of x(main): %d\n", x);
    printf("Value of y(main): %d\n", y);

}
void incr(int *p1, int *p2){
    *p1+=100;
    *p2+=200;
    //printf("Value at ptr(incr): %d\n", *p1);
}

