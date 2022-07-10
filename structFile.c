#include<stdio.h>
#include<conio.h>

struct Student{
    int id;
    char name[50];
    char address[50];
};

struct Student getStudent(){
    struct Student st;
    printf("Enter the students details: \n Id:  ");
    scanf("%d", &st.id);
    printf("Name: ");
    scanf(" %[^\n]s", &st.name);
    printf("Address: ");
    scanf(" %s", &st.address);
    return st;
}
void displayStudent(struct Student st){
    printf("%d. %s\t%s\n", st.id, st.name, st.address);
}
void main(){
    struct Student *stp;
    struct Student st;
    FILE *fp;
    int n, id, i;
    char ch;
    do{
            do{
            printf("Main Menu\n a. Add a student \n b. View A Student \n c. View all Studnets \n");
            printf(" d. Delete  a student \n e. Update a student\n    :- ");
            scanf(" %c",&ch);
            }while(!(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'));
            if(ch=='a'){
                fp = fopen("StudentsRecord.txt", "a+");
                st = getStudent();
                fwrite(&st, sizeof(struct Student), 1, fp);
                fclose(fp);
            }
            else if(ch=='b'){
                printf("Enter the id of the student: ");
                scanf("%d", &id);
                fp = fopen("StudentsRecord.txt", "r");
                while(fread(&st, sizeof(struct Student), 1, fp)){
                  if(st.id==id){
                    displayStudent(st);
                    break;
                  }
                }
                fclose(fp);

            }

            else if(ch=='c'){
                fp = fopen("StudentsRecord.txt", "r");
                while(fread(&st, sizeof(struct Student), 1, fp)){
                    displayStudent(st);
                }

                fclose(fp);
            }
            else if(ch=='d'){
                printf("Enter the id of the student to be deleted: ");
                scanf("%d", &id);
                n=0;
                fp = fopen("StudentsRecord.txt", "r");
                    while(fread(&st, sizeof(struct Student), 1, fp)){
                        if(st.id==id){
                            displayStudent(st);
                        }
                        n++;
                    }
                fclose(fp);
                printf("Confirm Delete(y/n)?");
                do{
                    scanf("%c", &ch);
                }while(!(ch=='y'||ch=='n'||ch=='Y'||ch=='N'));

                if(ch=='y'||ch=='Y'){
                    stp = calloc(n, sizeof(struct Student));
                    i=0;
                    fp = fopen("StudentsRecord.txt", "r");
                    while(fread((stp+i), sizeof(struct Student), 1, fp)){
                        i++;
                    }
                    fclose(fp);

                    fp = fopen("StudentsRecord.txt", "w");
                    for(i=0;i<n; i++){
                        if((stp+i)->id!=id){
                            fwrite(stp+i, sizeof(struct Student), 1, fp);
                        }
                    }
                    fclose(fp);
                }
            }

            else if(ch=='e'){
                printf("Enter the id of the student to be updated: ");
                scanf("%d", &id);

                fp = fopen("StudentsRecord.txt", "r+");
                while(fread(&st, sizeof(struct Student), 1, fp)){
                  if(st.id==id){
                    displayStudent(st);
                    break;
                  }
                }
                printf("Enter the new Details: \n Name: ");
                scanf(" %[^\n]s", &st.name);
                printf("Address: ");
                scanf("%s", &st.address);
                fseek(fp, -sizeof(struct Student),SEEK_CUR);
                fwrite(&st,sizeof(struct Student), 1, fp);
                fclose(fp);


            }



        do{
            printf("Go back to main menu(y/n)?   :- ");
            scanf(" %c", &ch);
        }while(!(ch=='y'||ch=='n'||ch=='Y'||ch=='N'));

    }while(ch=='y'||ch=='Y');
    getch();
}
