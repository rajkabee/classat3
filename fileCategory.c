#include<stdio.h>
#include<conio.h>
struct Category
{
    int id;
    char name[50];
}*ptr,cat;
void main()
{
    //struct Category *ptr;
    //struct Category *cat;
    FILE *fp;
    char fileName[50];
    strcpy(fileName, "Category.txt");
    char ch;
    int id;


    do
    {
        printf("Enter your choice: \n");
        printf(" a. add a category\n b. view a category \n c. view all categories \n d. delete a category \n e. update a category\n :-");
        do
        {
            ch = getch();
        }
        while(!(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'));
        printf("\n");

        if(ch=='a'||ch=='A')
        {
            ptr = calloc(1, sizeof(struct Category));
            printf("Enter the category details:\n");
            printf("Id: ");
            scanf("%d", &(ptr->id));
            printf("Name: ");
            scanf(" %[^\n]s", &(ptr->name));
            fp = fopen(fileName, "a+");
            fwrite(ptr, sizeof(struct Category), 1, fp);
            fclose(fp);

        }
        else if(ch=='b'||ch=='B')
        {
            ptr = calloc(1, sizeof(struct Category));
            printf("Enter the category Id:");
            scanf("%d", &id);
            fp = fopen(fileName, "r");
            while(fread(ptr, sizeof(struct Category), 1, fp))
            {
                if(id==ptr->id)
                {
                    printf("%d. %s\n", ptr->id, ptr->name);
                    break;
                }
            }
            fclose(fp);
        }
        else if(ch=='c'||ch=='C')
        {
            ptr = calloc(1, sizeof(struct Category));
            printf("List of the categorys:\n");
            fp = fopen(fileName, "r");
            while(fread(ptr, sizeof(struct Category), 1, fp))
            {
                printf("%d. %s\n", ptr->id, ptr->name);
            }

            fclose(fp);
        }
        else if(ch=='e'||ch=='E'){
            ptr = calloc(1, sizeof(struct Category));
            printf("Enter the category Id:");
            scanf("%d", &id);
            fp = fopen(fileName, "r");
            while(fread(ptr, sizeof(struct Category), 1, fp))
            {
                if(id==ptr->id)
                {
                    printf("%d. %s\n", ptr->id, ptr->name);
                    break;
                }
            }
            fclose(fp);
            printf("Enter the new Category name: ");
            scanf(" %[^\n]s", &(ptr->name));

            fp = fopen(fileName, "r+");

            while(fread(&cat, sizeof(struct Category), 1, fp))
            {
                if(cat.id==id){
                    fseek(fp, -sizeof(struct Category), SEEK_CUR);
                    fwrite(ptr, sizeof(struct Category), 1, fp);
                    break;
                }
            }
            fclose(fp);
        }


        do
        {
            printf("press 'y' to go back to main menu or 'n' to exit: ");
            ch = getch();
        }
        while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N'));
    }while(ch=='y'||ch=='Y');


}
