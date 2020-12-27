#include <stdio.h>

int main(){
	float radius;
	char option;
	float result;
	float pi = 3.14;
	printf("Please enter radius: ");
	scanf("%f", &radius);
	printf("Your option:\nA - Calculate Area \nC - Calculate Circumference \nD - Calculate Diameter\n");
	scanf("%s", &option);
	if(option=='A' || option=='a'){
		result=pi*radius*radius;
		printf("Area of circle with %.2f radius is %.2f", radius, result);
	}
	else if(option=='C' || option=='c'){
		result=2*pi*radius;
		printf("Circumference of circle with %.2f radius is %.2f", radius, result);
	}
	else if(option=='D' || option=='d'){
		result=2*radius;
		printf("Diameter of circle with %.2f radius is %.2f", radius, result);
	}
	return 0;
}
