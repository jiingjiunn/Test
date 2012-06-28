#include <stdio.h>

int secret_number = 34,
	guess_number,
	flag = 0;
	
void compare_number(int x, int y);
	
int main(void)
{
	while(flag == 0)
	{
		printf("Please input a number between 1 and 100.\n");
		scanf("%d", &guess_number);
		printf("%lf", &guess_number);
		if(guess_number < 1 || guess_number > 100)
		{
			printf("Number input is not between 1 and 100!\n");	
			flag = 1;
		}
		else
		{
			flag = 1;
			compare_number(guess_number, secret_number);
		}
	}
	
	return 0;
}	

void compare_number(int x, int y)
{
	printf("%s,%s", x, y);
	if(x == y)
	{
		printf("You have guessed the correct number.\n");
		flag = 1;
	}
	else if(x > y)
	{
		printf("Number guessed is too high!\n");
		flag = 0;
	}
	else if(x < y)
	{
		printf("Number guessed is too low!\n");
		flag = 0;
	}
	else
	{
		printf("Its not a number.\n");
		flag = 0;
	}
}	