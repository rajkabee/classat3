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
    int n=0, i, id;
    char ch;
    ptr = calloc(1, sizeof(struct Company));
    printf("Enter the id of the Company to be deleted: ");
    scanf("%d", &id);
    fp = fopen("CompanyRegister.txt", "r");
    while(fread(ptr, sizeof(struct Company), 1, fp)){
        if(id==ptr->id){
            showCompanyDetails(ptr);
        }
        n++;
    }
    fclose(fp);
    printf("Confirm Delete(y/n)?");
    scanf(" %c", &ch);
    if(ch=='y'){
        ptr  = calloc(n, sizeof(struct Company));
        fp = fopen("CompanyRegister.txt", "r");
        n=0;
        while(fread(ptr+n, sizeof(struct Company), 1, fp)){
            n++;
        }
        fclose(fp);
        fp = fopen("CompanyRegister.txt", "w");
        for(i=0; i<n; i++){
            if((ptr+i)->id!=id){
                 fwrite(ptr+i, sizeof(struct Company), 1, fp);
            }
        }
        fclose(fp);
        printf("data deleted successfully!");
    }
    else{
        printf("delete cancelled!");
    }
    getch();
}

