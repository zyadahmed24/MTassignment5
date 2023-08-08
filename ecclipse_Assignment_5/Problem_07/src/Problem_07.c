/*
 ============================================================================
 Name        : Problem_07.c
 Author      : zyad ahmed
 Version     :
 Copyright   : out of order...., I will show you the out of order
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum{
	 level1=1,
	 level2,
	 level3
}fan_level;

int main(void) {
	setbuf(stdout,NULL);
	fan_level fan1;
	int num;
	printf("enter the needed speed\n");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		fan1 = level1;
		break;
	case 2:
		fan1 = level2;
		break;
	case 3:
		fan1 = level3;
		break;
	default:
		fan1 = level1;
		break;
	}
	printf("the fan level is %d",fan1);
	return EXIT_SUCCESS;
}
