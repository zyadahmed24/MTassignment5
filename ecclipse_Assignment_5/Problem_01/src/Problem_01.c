/*
 ============================================================================
 Name        : Problem_01.c
 Author      : zyad ahmed
 Copyright   : out of order...., I will show you the out of order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	char roll;
	char marks;
}student;

int main(void) {
	setbuf(stdout,NULL);
	student man;
	printf("Enter the student name:");
	gets(man.name);
	printf("Enter the student roll:");
	scanf("%d",&man.roll);
	printf("Enter the student marks:");
	scanf("%d",&man.marks);

	printf("\nthe name:%s\nthe roll:%d\nthe marks:%d",man.name,man.roll,man.marks);
	return EXIT_SUCCESS;
}
