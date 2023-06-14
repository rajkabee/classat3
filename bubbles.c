#include<stdio.h>
void main(){
    int a=5, b=2;
    int sum=0;
    add(a,b);
    //printf("SUM: %d", sum);
    int p = prime(sum);
    if(p==0){
        printf("Composite");
    }
    else{
        printf("Prime");
    }
}

void add(int x, int y){
    int z;
    z=x+y;
    printf("SUM: %d", z);
}

int prime(int num){
    int i;
    for(i=2; i<=num/2; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

float pi(){
    return 3.1415f;

}


