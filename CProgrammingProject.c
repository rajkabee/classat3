#include<stdio.h>
#include<conio.h>
struct product{
    int id;
    char name[50];
    char description[50];
    char manufacturer[30];
    float price;
};

void main(){
    char ch;
    int id;
    struct product p;
    do{
        printf("Enter a choice: \n");
        printf(" a. Add a Product \n b. View a Product \n c. View All Products \n");
        printf(" d. Update a product \n e. Delete a Product \n  :-");
        scanf(" %c", &ch);
      if(ch=='a'||ch=='A'){
        printf("Enter the product's details: \n");
        printf("Product Id: ");
        scanf("%d", &p.id);
        printf("Product Name: ");
        scanf("%[^\n]s", &p.name);
        printf();

        //write the product to the file;
      }
      else if(ch=='b'){
        printf("Enter the id of the product to view: ");
        scanf("%d", id);
        //find the product with the given id and display
      }




       do{
        printf("Do you want to continue: ");
        scanf(" %c", &ch);
       } while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N'));


    }while(ch=='y'||ch=='Y');
    getch();
}
