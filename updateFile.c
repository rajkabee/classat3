#include<stdio.h>
#include<conio.h>
struct Company{
    int id;
    char regd[20];
    char name[100];
    char address[100];
};
void getCompanyDetails(struct Company *p){
    printf("Enter the Company details: \n");
    printf("Id: ");
    scanf("%d", &p->id);
    printf("Company Name: ");
    scanf(" %[^\n]s", &p->name);
    printf("Registration Number: ");
    scanf(" %s", &p->regd);
    printf("Address: ");
    scanf(" %[^\n]s", &p->address);
}
void getUpdatedCompanyDetails(struct Company *p){
    printf("Enter the Company details: \n");
    printf("Company Name: ");
    scanf(" %[^\n]s", &p->name);
    printf("Registration Number: ");
    scanf(" %s", &p->regd);
    printf("Address: ");
    scanf(" %[^\n]s", &p->address);
}
void showCompanyDetails(struct Company *p){
    printf("%d. %s \t %s \t %s \n", p->id, p->name, p->regd, p->address);
}


void main(){
    struct Company *ptr, *ptr2;
    FILE *fp;
    int id;
    printf("Enter the id of the company: ");
    scanf("%d", &id);
    ptr = calloc(1, sizeof(struct Company));
    fp = fopen("CompanyRegister.txt", "r");
    while(fread(ptr, sizeof(struct Company), 1, fp)){
        if(ptr->id==id){
            break;
        }
    }
    showCompanyDetails(ptr);
    fclose(fp);
    getUpdatedCompanyDetails(ptr);
    fp = fopen("CompanyRegister.txt", "r+");
    ptr2 = calloc(1, sizeof(struct Company));
    while(fread(ptr2, sizeof(struct Company), 1, fp)){
        if(ptr2->id==id){
            break;
        }
    }
    showCompanyDetails(ptr2);
    fseek(fp, -sizeof(struct Company), SEEK_CUR);
    fwrite(ptr, sizeof(struct Company), 1, fp);

    fclose(fp);

    getch();
}
