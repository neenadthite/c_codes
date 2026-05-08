#include<stdio.h>

int main()
{
	int a=-5, b=2, c=16;
	float p=8.3, q=4.6;
	//Modulus operator assigns the sign of the numerator
	printf("\na%3= %d", a % 3);
	printf("\nb%-3= %d", b % -3);
	
	//In case of int and float arithmetic operation, float takes precedence
	printf("\np/q= %f", p / q);
	printf("\np/b= %f", p / b);
	printf("\nc/q= %f", c / q);

	//Operators always follow left to right associativity
	printf("\n5/3*6= %d",5/3*6);

	return 0;
}