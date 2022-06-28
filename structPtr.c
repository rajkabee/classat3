#include<stdio.h>
#include<conio.h>
struct Product{
    int id;
    char name[20];
};
void getProduct(struct Product *, int );
void displayProduct(struct Product *, int);
void main(){
    struct Product *p;
    int n;
    printf("Enter the no. of products: ");
    scanf("%d", &n);
    p = calloc(n, sizeof(struct Product));
    getProduct(p, n);
    displayProduct(p,n);
    getch();
}

void getProduct(struct Product *ptr,int n){
    int i;
    for(i=0; i<n; i++){
        printf("Enter the id of the product: ");
        scanf("%d", &(ptr+i)->id);
        printf("Enter the name of the product: ");
        scanf(" %[^\n]s", &(ptr+i)->name);
    }
}
void displayProduct(struct Product *ptr,int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d.\t%s\n", (ptr+i)->id, (ptr+i)->name);
    }
}
