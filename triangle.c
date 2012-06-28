/**************************************************************
* Name 		= triangle.c									  *
* Function 	= Calculate the perimeter of triangle.            *
* Author	= Tan Jiing Jiunn								  *
**************************************************************/

#include <stdio.h>
#include <math.h>

//Prototypes starts here
double distance (double, double, double, double);

//Instantiation
void main(void)
{
	//Declaration of variables
	double	perimeter,
			x1,
			x2,
			x3,
			y1,
			y2,
			y3;
			
	printf("Insert coordinate of the first point of the triangle.");
	scanf("%lf %lf", &x1, &y1);
	printf("Insert coordinate of the second point of the triangle.");
	scanf("%lf %lf", &x2, &y2);
	printf("Insert coordinate of the third point of the triangle.");
	scanf("%lf %lf", &x3, &y3);	
	
	perimeter = distance(x1,y1,x2,y2)+distance(x2,y2,x3,y3)+distance(x3,y3,x1,y1);
	
	printf("Perimeter = %.2lf.",perimeter);
}

//Calculates the distance between 2 points
double distance (double a, double b, double c, double d)
{
	//printf("%lf",pow((a-c),2));
	return sqrt(pow((a-c),2)+pow((b-d),2));
}	