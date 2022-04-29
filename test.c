#include<stdio.h>
#include<conio.h>
void main () {
	int i, num, res;
	printf("Enter a number: ");
	scanf("%d", &num);
	i=1;                //initialization
	while(i<11){        //while(condition)
        res = num*i;
        printf("%d X %d = %d\n", num, i, res);
        i++;            //iteration
	}


	getch();
}
