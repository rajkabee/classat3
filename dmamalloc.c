#include<stdio.h>
void main(){
    int n, i;
    int *ptr;
    printf("Enter the no. of data: ");
    scanf("%d", &n);
    //ptr = malloc(n*sizeof(char));
    ptr = calloc(n,sizeof(int));
    printf("%d", ptr);
    printf("enter the values: ");
    /*
    for(i=0; i<n; i++){
        scanf(" %c", ptr+i);
    }
    */
    printf("The data you entered are: \n");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }

}
