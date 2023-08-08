/*
 ============================================================================
 Name        : Problem_03.c
 Author      : zyad ahmed
 Copyright   : out of order...., I will show you the out of order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int real;
	int imagin;
}complex;

void addComp(complex,complex);

int main(void) {
	setbuf(stdout,NULL);
	complex num1,num2;
	printf("Enter the first complex number in positive\n");
	scanf("%d",&num1.real);
	scanf("%d",&num1.imagin);
	printf("num1= %d+%dj\n",num1.real,num1.imagin);
	printf("Enter the second complex number in positive\n");
	scanf("%d",&num2.real);
	scanf("%d",&num2.imagin);
	printf("num1= %d+%dj\n",num2.real,num2.imagin);
	addComp(num1,num2);
	return EXIT_SUCCESS;
}

void addComp(complex num1,complex num2)
{
	printf("The summation of the two compelx numbers:%d+%dj",num1.real+num2.real,num1.imagin+num2.imagin);
}
