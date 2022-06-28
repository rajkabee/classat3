#include<stdio.h>
#include<conio.h>
void main(){
    int n, *ptr, i;
    printf("Enter the no. of numbers: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter the %d values: ",n);
    for(i=0; i<n; i++){
        scanf("%d", ptr+i);
    }

    printf("The Values you entered are: \n");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }
    getch();
}
