/*
 ============================================================================
 Name        : Problem_02.c
 Author      : zyad ahmed
 Copyright   : out of order...., I will show you the out of order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char inch;
	char feet;
}distance;

int main(void) {
	setbuf(stdout,NULL);
	distance dist;
	printf("Enter the distance twice in feets then inches\n");
	scanf("%d",&dist.feet);
	printf("the distance is:%d feets\n",dist.feet);
	scanf("%d",&dist.inch);
	printf("the distance is:%d inches",dist.inch);
	return EXIT_SUCCESS;
}
