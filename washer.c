/*******************************************
* Name: 	Washer.c                	   *
* Function:	Calculate weight of washers.   *
* Author:	Tan Jiing Jiunn                *
*******************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double circle_area(double diameter)
{
	return PI*pow(diameter/2,2);
}

int main(void)
{
	int qty;        	//Quantity of washer
	double weight,		//Weight of each washer, to get from other parameters
		volume,		//Volume, to get from rim area and thickness
		density,		//density of material (either a constant or a input
		d1,			//inner diameter (raw input)
		d2,			//outer diameter (raw input)
		area,			//area to get from diameters
		thickness;	//thickness of a drum (raw input)

	printf("Please input inner diameter and input outer diameter in centimeter in following format: [inner diameter],[outer diameter]\n");
	scanf("%lf,%lf" , &d1, &d2);
	//printf("%lf and %lf", d1, d2);
	
	printf("Please input thickness of the drum in centimeters.\n");
	scanf("%lf", &thickness);
	
	printf("Please input density of the material in g/cm^3.\n");
	scanf("%lf", &density);
	
	printf("Please input quantity of the washer.\n");
	scanf("%d", &qty);
	
	area = circle_area(d2)-circle_area(d1);
	volume = area * thickness;
	weight = volume * density;
	
	printf("the weight of %d washers is %lf g.", qty, qty * weight);
	
	return 0;



}