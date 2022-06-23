#include<stdio.h>
#include<conio.h>
int countData();
struct Student
{
    int id;
    char fname[30];
    char lname[30];
    char email[50];
};

void main()
{
//Crud operations in a file
    int id,i;
    char choice;
    struct Student st;
    int count;
    FILE *fp;
    struct Student *stPtr;

    do
    {
        //main program logic
        printf("Options: \n a. Add a new Student\n b. View a Student's Details\n");
        printf(" c. View all Student's Details\n d. Update a Student's Details\n");
        printf(" e. Delete a Student's Details\n-");
        do
        {
            choice=getch();
        }
        while(!(choice=='a'|| choice=='b'||choice=='c'||choice=='d'||choice=='e'));

        if(choice=='a')
        {
            fp=fopen("StudentsRecord.bin","a+");
            printf("Enter the students details: \nid: ");
            scanf("%d", &st.id);
            printf("Enter the first name of student: \nfirst name: ");
            scanf(" %s", &st.fname);
            printf(" Enter the last name of student: \nlast name: ");
            scanf(" %s", &st.lname);
            printf(" Enter the email of student: \nemail: ");
            scanf(" %s", &st.email);

            fwrite(&st, sizeof(struct Student), 1, fp);
            fclose(fp);
        }
        else if (choice=='b')
        {
            printf("Enter the id of the Student:");
            scanf("%d",&id);
            fp=fopen("StudentsRecord.bin","r");
            do
            {
                if(fread(&st,sizeof(struct Student), 1, fp)==EOF)
                {
                    break;
                }
            }
            while(st.id!=id);
            printf("%d. %s %s \t %s \n", st.id, st.fname,st.lname,st.email);
            fclose(fp);
        }
        else if (choice=='c')
        {

            fp=fopen("StudentsRecord.bin","r");

            while(fread(&st,sizeof(struct Student), 1, fp))
            {
                printf("%d. %s %s \t %s \n", st.id, st.fname,st.lname,st.email);

            }
            fclose(fp);
        }
        else if (choice=='d')
        {
            printf("Enter the id of the Student to be updated:");
            scanf("%d",&id);
            fp=fopen("StudentsRecord.bin","r+");
            do
            {
                if(fread(&st,sizeof(struct Student), 1, fp)==EOF)
                {
                    break;
                }
            }
            while(st.id!=id);
            printf("%d. %s %s \t %s \n", st.id, st.fname,st.lname,st.email);


            printf("Enter the students details to be updated: \n");
            printf("first name: ");
            scanf(" %s", &st.fname);
            printf("last name: ");
            scanf(" %s", &st.lname);
            printf("email: ");
            scanf(" %s", &st.email);
            fseek(fp, -sizeof(struct Student), SEEK_CUR);
            fwrite(&st, sizeof(struct Student), 1, fp);
            fclose(fp);

        }

        else if (choice=='e')
        {
            printf("Enter the id of the Student to be deleted:");
            scanf("%d",&id);
            fp=fopen("StudentsRecord.bin","r+");
            do
            {
                if(fread(&st,sizeof(struct Student), 1, fp)==EOF)
                {
                    break;
                }
            }
            while(st.id!=id);
            printf("%d. %s %s \t %s \n", st.id, st.fname,st.lname,st.email);
            fclose(fp);
            do
            {
                printf("Confirm delete(y/n):");
                choice=getch();
            }
            while(!(choice=='y'||choice=='n'));
            if(choice=='y')
            {
                /*
                while(fread(&st,sizeof(struct Student), 1,fp))
                {
                    fseek(fp, -sizeof(struct Student)*2, SEEK_CUR);
                    fwrite(&st, sizeof(struct Student),1,fp);
                    fseek(fp, sizeof(struct Student), SEEK_CUR);

                }
                fseek(fp, -sizeof(struct Student), SEEK_CUR);
                fprintf(fp,"\0");
                fclose(fp);
                */

                count = countData();
                //printf("There are %d students in the record.", count);
                stPtr =(struct Student*) calloc(count, sizeof(struct Student));

                fp=fopen("StudentsRecord.bin","r");
                i=0;
                while(fread((stPtr+i),sizeof(struct Student), 1, fp))
                {
                    i++;
                }
                for(i=0; i<count; i++)
                {
                    printf("%s\n", (stPtr+i)->fname);
                }
                fclose(fp);
                fp = fopen("StudentsRecord.bin", "w");
                for(i=0; i<count; i++){
                    if(id!=(stPtr+i)->id){
                        fwrite((stPtr+i), sizeof(struct Student), 1, fp);
                    }
                }
                fclose(fp);
            }

        }

        do
        {
            printf("\n Do you want to continue (y/n)?");
            choice=getch();
        }
        while(!(choice=='y'||choice=='n'));
    }


    while (choice=='y');
    getch();
}


int countData()
{
    struct Student st;
    FILE *fp;
    int count=0;
    fp = fopen("StudentsRecord.bin", "r");
    while(fread(&st,sizeof(struct Student), 1, fp))
    {
        count++;
    }

    fclose(fp);
    return count;
}
