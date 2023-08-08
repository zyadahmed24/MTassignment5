/*
 ============================================================================
 Name        : Problem_06.c
 Author      : zyad ahmed
 Version     :
 Copyright   : out of order...., I will show you the out of order
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef union{
	char first_name[30];
	char last_name[30];
}family_name;

int main(void) {
	setbuf(stdout,NULL);
	family_name name;
	printf("Enter the first name:");
	scanf("%s",&name.first_name);
	printf("the last name is:%s",name.last_name);
	printf("\nthe size of the struture is:%lld",sizeof(name));
	return EXIT_SUCCESS;
}
