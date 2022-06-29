#include<stdio.h>
#include<conio.h>
struct Employee{
    int id;
    char name[50];
    char position[50];
    float salary;
};
void insertEmployee(struct Employee *p){
    printf("Enter the employee details: \n");
    printf("Id: ");
    scanf("%d", &p->id);
    printf("Name: ");
    scanf(" %[^\n]s", &p->name);
    printf("Position: ");
    scanf(" %[^\n]s", &p->position);
    printf("Salary: ");
    scanf("%f", &p->salary);
}
void updateEmployee(){
    int id;
    struct Employee *p;
    FILE *fp;
    printf("Enter the id of the Employee: ");
    scanf("%d", &id);
    p = calloc(1, sizeof(struct Employee));
    fp = fopen("EmployeeRecords.txt", "r+");
    while(fread(p, sizeof(struct Employee), 1, fp)){
        if(p->id ==id){
            displayEmployee(p);
            break;
        }
    }
    printf("Enter the employee details: \n");
    printf("Name: ");
    scanf(" %[^\n]s", &p->name);
    printf("Position: ");
    scanf(" %[^\n]s", &p->position);
    printf("Salary: ");
    scanf("%f", &p->salary);
    fseek(fp, -sizeof(struct Employee), SEEK_CUR);
    fwrite(p, sizeof(struct Employee), 1, fp);
    fclose(fp);
}
void displayEmployee(struct Employee *p){
    printf("%d. %s\t%s\t%f\n", p->id, p->name, p->position, p->salary);
}
void main(){
    struct Employee *e, *emp;
    FILE *fp;
    int i, id, count;
    char ch;

    do{
        printf("\t MAIN MENU\n");
        printf(" a. Add a Employee\n b. View a Employee \n c. View All Employees \n");
        printf(" d. Update a Employee \n e. Delete a Employee \n f. Delete All Employee \n g. Cancel");
        printf("\n :-");
        do{
          ch = getch();
          printf("\n");
        }while(!(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'));
        if(ch=='a'){
            e = calloc(1, sizeof(struct Employee));
            insertEmployee(e);
            fp = fopen("EmployeeRecords.txt", "a+");
            fwrite(e, sizeof(struct Employee), 1, fp);
            fclose(fp);
        }
        else if(ch=='b'){
            printf("Enter the id of the Employee: ");
            scanf("%d", &id);
            emp = calloc(1, sizeof(struct Employee));
            fp = fopen("EmployeeRecords.txt", "r");
            while(fread(emp, sizeof(struct Employee), 1, fp)){
                if(emp->id ==id){
                    displayEmployee(emp);
                    break;
                }
            }
            fclose(fp);
        }
        else if(ch=='c'){
            emp = calloc(1, sizeof(struct Employee));
            fp = fopen("EmployeeRecords.txt", "r");
            while(fread(emp, sizeof(struct Employee), 1, fp)){
                displayEmployee(emp);
                }
        }
        else if(ch=='d'){
            updateEmployee();
        }
        else if(ch=='e'){
            printf("Enter the id of the Employee: ");
            scanf("%d", &id);
            emp = calloc(1, sizeof(struct Employee));
            fp = fopen("EmployeeRecords.txt", "r");
            count=0;
            while(fread(emp, sizeof(struct Employee), 1, fp)){
                if(emp->id ==id){
                    displayEmployee(emp);
                }
                count++;
            }
            fclose(fp);
            printf("Delete confirm(y/n)?");
            do{
                ch = getch();
                printf("\n");
            }while(!(ch=='y'||ch=='Y'||ch=='N'||ch=='n'));
            if(ch=='y'||ch=='Y'){
                e = calloc(count, sizeof(struct Employee));
                i=0;
                fp = fopen("EmployeeRecords.txt", "r");
                while(fread(e+i, sizeof(struct Employee), 1, fp)){
                    i++;
                }
                fclose(fp);

                fp = fopen("EmployeeRecords.txt", "w");
                for(i=0; i<count; i++){
                    if((e+i)->id!=id){
                        fwrite(e+i, sizeof(struct Employee), 1, fp);
                    }
                }
                fclose(fp);
            }
        }

        else if(ch=='f'){
            fp = fopen("EmployeeRecords.txt", "w");
            fclose(fp);
        }

        else if(ch=='g'){
            break;
        }

        printf("Go to Main Menu(y/n)?\n :-");
        do{
            ch = getch();
        }while(!(ch=='y'||ch=='Y'||ch=='N'||ch=='n'));


    }while(ch=='y'||ch=='Y');
}
