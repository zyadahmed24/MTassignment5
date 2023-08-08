/*
 ============================================================================
 Name        : Problem_04.c
 Author      : zyad ahmed
 Copyright   : out of order...., I will show you the out of order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char hours;
	char minutes;
	char seconds;
}instant;

void subInstants(instant ins1,instant ins2)
{
	char hd,md,sd;
	hd = ins2.hours-ins1.hours;
	if(ins2.minutes>ins1.minutes)
	{
		md = ins2.minutes-ins1.minutes;
	}
	else
	{
		hd--;
		md = (60 - ins1.minutes) + ins2.minutes;
	}
	if(ins2.seconds>ins1.seconds)
	{
		sd = ins2.seconds-ins1.seconds;
	}
	else
	{
		md--;
		sd = (60 - ins1.seconds) + ins2.seconds;
	}

	printf("The difference is %d hours\n%d minutes\n%d seconds",hd,md,sd);
}

int main(void) {
	setbuf(stdout,NULL);
	instant ins1,ins2;
	printf("Enter the first instant:\n");
	scanf("%hhd",&ins1.hours);
	scanf("%hhd",&ins1.minutes);
	scanf("%hhd",&ins1.seconds);
	printf("Enter the second instant:\n");
	scanf("%hhd",&ins2.hours);
	scanf("%hhd",&ins2.minutes);
	scanf("%hhd",&ins2.seconds);

	subInstants(ins1, ins2);
	return EXIT_SUCCESS;
}
