#include<stdio.h>
#include<conio.h>
struct Product{
    int id;
    char name[50];
    char description[100];
    float price;
};
void displayProduct(struct Product *pd){
    printf("%d. %s\t%s\t%f\n", pd->id, pd->name, pd->description, pd->price);
}
void main(){
    struct Product *p;
    FILE *fp;
    char ch;
    int id;
    do{
        do{
            printf("\tMain Menu\n");
            printf(" a. Add Product \n b. View a Product \n c. View all Products\n");
            printf(" d. Delete a Product \n e. Delete All Product \n f. Update a Product \n g. Cancel \n :- ");
            ch = getch();
            printf("\n");
        }while(!(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'));
        if(ch=='a'){
            p = calloc(1, sizeof(struct Product));
            printf("Enter the product details: \n");
            printf("Product Id: ");
            scanf("%d", &p->id);
            printf("Product Name: ");
            scanf(" %[^\n]s", &p->name);
            printf("Description: ");
            scanf(" %[^\n]s", &p->description);
            printf("Price: ");
            scanf("%f", &p->price );
            fp = fopen("productDetails.txt", "a+");
            fwrite(p, sizeof(struct Product), 1, fp);
            fclose(fp);

        }
        else if(ch=='b'){
            printf("Enter the id of the product: ");
            scanf("%d", &id);
            p = calloc(1, sizeof(struct Product));
            fp = fopen("productDetails.txt", "a+");
            while(fread(p, sizeof(struct Product), 1, fp)){
                if(p->id==id){
                    displayProduct(p);
                    break;
                }
            }
            fclose(fp);
        }
        else if(ch=='c'){
            p = calloc(1, sizeof(struct Product));
            fp = fopen("productDetails.txt", "a+");
            while(fread(p, sizeof(struct Product), 1, fp)){
                    displayProduct(p);
            }
            fclose(fp);
        }
        else if(ch=='f'){
            printf("Enter the id of the product: ");
            scanf("%d", &id);
            p = calloc(1, sizeof(struct Product));
            fp = fopen("productDetails.txt", "a+");
            while(fread(p, sizeof(struct Product), 1, fp)){
                if(p->id==id){
                    displayProduct(p);
                    break;
                }
            }
            fclose(fp);
            printf("Enter the products new Details: \n ");
            printf("Product Name: ");
            scanf(" %[^\n]s", &p->name);
            printf("Description: ");
            scanf(" %[^\n]s", &p->description);
            printf("Price: ");
            scanf("%f", &p->price );
            fp = fopen("productDetails.txt", "a+");
            while(fread(p, sizeof(struct Product), 1, fp)){
                if(p->id==id){
                    fseek(fp, -sizeof(struct Product), SEEK_CUR);
                    fwrite(p, sizeof(struct Product), 1, fp);
                    break;
                }
            }
            fclose(fp);
        }

        do{
            printf("\nGo back to Main Menu(y/n)?\n :-");
            scanf(" %c", &ch);
        }while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N'));
    }while(ch=='y'||ch=='Y');

}
