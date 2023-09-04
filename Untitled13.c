//Write a C program to enter the radius of a circle and displays the diameter, the circumference
//and the area.

//diameter=2*radius
//circumference=2*(22/7)*radius
//area=(22/7)*(radius^2)
//22/7=3.14


#include <stdio.h>
int main(void){
//	creating variables
	int radius, diameter;
	float circumference, area;
	
//	input data (radius of circle)
	printf("Enter radius of circle : ");
	scanf("%d",&radius);
	
//	calculation
	diameter=2*radius;
	circumference=2*(3.14)*radius;
	area=(3.14)*(radius^2);
	
//	print out put (diameter, circumference, area)
	printf("Diameter of circle : %d\n",diameter);
	printf("Circumference of circle : %.2f\n",circumference);
	printf("Area of circle : %.2f\n",area);
	
	return 0;

	
}
