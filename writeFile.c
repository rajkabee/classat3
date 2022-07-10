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
void showCompanyDetails(struct Company *p){
    printf("%d. %s \t %s \t %s \n", p->id, p->name, p->regd, p->address);
}
void main(){
    struct Company *ptr;
    FILE *fp;
    ptr = calloc(1, sizeof(struct Company));
    getCompanyDetails(ptr);
    showCompanyDetails(ptr);
    fp = fopen("CompanyRegister.txt", "a+");
    fwrite(ptr, sizeof(struct Company), 1, fp);
    fclose(fp);
    getch();
}
