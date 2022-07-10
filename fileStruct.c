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
    struct Product *p, *pd;
    FILE *fp;
    char ch;
    int id, count, i;
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
            fp = fopen("productDetails.txt", "r");
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
            fp = fopen("productDetails.txt", "r");
            while(fread(p, sizeof(struct Product), 1, fp)){
                    displayProduct(p);
            }
            fclose(fp);
        }
        else if(ch=='d'){
            printf("Enter the id of the product: ");
            scanf("%d", &id);
            p = calloc(1, sizeof(struct Product));
            fp = fopen("productDetails.txt", "r");
            while(fread(p, sizeof(struct Product), 1, fp)){
                if(p->id==id){
                    displayProduct(p);
                    break;
                }
            }
            fclose(fp);
            printf("Confirm Delete(y/n)?");
             do{
                scanf(" %c", &ch);
            }while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N'));
            if(ch=='y'||ch=='Y'){
                count=0;
                fp = fopen("productDetails.txt", "r");
                p = calloc(1, sizeof(struct Product));
                while(fread(p, sizeof(struct Product), 1, fp)){
                    count++;
                }
                fclose(fp);

                p = calloc(count, sizeof(struct Product));
                fp = fopen("productDetails.txt", "r");
                i=0;
                while(fread(p+i, sizeof(struct Product), 1, fp)){
                    i++;
                }
                fclose(fp);
                fp = fopen("productDetails.txt", "w");
                for(i=0; i<count; i++){
                    if((p+i)->id!=id){
                        fwrite(p+i, sizeof(struct Product),1, fp);
                    }
                }
                fclose(fp);
            }
        }
        else if(ch=='e'){
            fp = fopen("productDetails.txt", "w");
            fclose(fp);
        }
        else if(ch=='f'){
            printf("Enter the id of the product: ");
            scanf("%d", &id);
            p = calloc(1, sizeof(struct Product));
            fp = fopen("productDetails.txt", "r");
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
            displayProduct(p);
            fp = fopen("productDetails.txt", "r+");
            pd = calloc(1, sizeof(struct Product));
            while(fread(pd, sizeof(struct Product), 1, fp)){
                if(pd->id==id){
                    displayProduct(pd);
                    fseek(fp, -sizeof(struct Product), SEEK_CUR);
                    fwrite(p, sizeof(struct Product), 1, fp);
                    break;
                }
            }
            fclose(fp);
        }
        else if(ch=='g'){
            break;
        }

        do{
            printf("\nGo back to Main Menu(y/n)?\n :-");
            scanf(" %c", &ch);
        }while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N'));
    }while(ch=='y'||ch=='Y');

}
