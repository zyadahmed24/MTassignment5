/*
 ============================================================================
 Name        : Problem_05.c
 Author      : zyad ahmed
 Copyright   : out of order...., I will show you the out of order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[10];
	int ID;
	int grade;
}student;

void storeInforamtion(student *arr,int size)
{
	char i=0;
	while(i<size)
	{
		printf("Enter the student number %d information\n",i+1);
		scanf("%s",&(arr+i)->name);
		scanf("%d",&((arr+i)->ID));
		scanf("%d",&((arr+i)->grade));
		i++;
	}
}

void printInformations(student *arr,int size)
{
	char i=0;
	while(i<size)
	{
		printf("student number %d information -> name:%s ID:%d grade:%d\n",i+1,(arr+i)->name,(arr+i)->ID,(arr+i)->grade);
		i++;
	}
}

int main(void) {
	setbuf(stdout,NULL);
	student arr[10];
	storeInforamtion(arr,10);
	printInformations(arr,10);
	return EXIT_SUCCESS;
}
