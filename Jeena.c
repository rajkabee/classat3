#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    char name[50];
    char description[50];
    char company[30];
    float salary;
};
void main()
{
    int id;
    char choice;
    struct employee e;
    FILE *fp;
    struct employee *ePtr;
    do
    {

        printf("Enter a choice: \n");
        printf("a. Add a employee \nb. View  employee \nc. View all employees \n");
        printf("d. Update a employee \ne. Delete a employee \n");
        //scanf("%c", &choice);
        do
        {
            choice=getch();
        }
        while(!(choice == 'a'||choice=='b'||choice=='c'||choice=='d'||choice=='e'));

        if(choice=='a'||choice=='A')
        {
            fp=fopen("employeesdata.bin","a+");

            printf("Enter the employee's details: \n");
            printf("Employee's Id: \n ");
            scanf("%d", &e.id);

            printf("Employee's Name: \n ");
            scanf(" %s", &e.name);

            printf("Employee's Description: \n ");
            scanf(" %[^\n]s", &e.description);

            printf("Employee's company: \n ");
            scanf(" %s", &e.company);

            printf("Employee's salary: \n ");
            scanf("%f", &e.salary);

            fwrite(&e, sizeof(struct employee), 1,fp);
            fclose(fp);

        }
        else if(choice=='b'||choice=='B')
        {
            printf("Enter the id of the product to view:\n");
            scanf("%d", &id);
            printf("Id. \tName \tDescription \tCompnay \tSalary\n");
            printf("___________________________________________...");
            fp=fopen("employeesdata.bin","r");
            do
            {
                if(fread(&e,sizeof(struct employee), 1,fp)==EOF)
                {
                    break;
                }
                printf("%d. \t%s \t%s \t%s \t%f \n", e.id, e.name, e.description, e.company, e.salary);

            }
            while(e.id!=id);
            //printf("%d. \t%s \t%s \t%s \t%f \n", e.id, e.name, e.description, e.company, e.salary);
            fclose(fp);
        }
        else if(choice=='c'||choice=='C')
        {
            fp=fopen("employeesdata.bin","r");
            while(fread(&e,sizeof(struct employee), 1, fp))
            {
                printf("%d. %s %s %s \t %f \n", e.id, e.name, e.description, e.company, e.salary);
            }
            fclose(fp);
        }

        printf("Continue?");
        choice=getch();

    }
    while(choice=='y'||choice=='Y');
    getch();
}
