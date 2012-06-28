/****************************************************************
*	Week4_leap_year.c											*
*	Function: Calculate if a year is a leap year or not			*
*	Author:	Tan Jiing Jiunn										*
****************************************************************/

#include <stdio.h>
int leap_year(int x); //prototype

void main(void)
{
	int year;//declaration of variable
	
	printf("Insert year. \n");
	scanf("%d",&year);
	leap_year(year);
}

int leap_year(int x) //calculation of leap year
{
	if(x%4 == 0 && x%100 != 0 || x%400 == 0)
	{
		printf("Year %d is a leap year.",x);
	}
	else
	{
		printf("Year %d is not a leap year.",x);
	}
}
