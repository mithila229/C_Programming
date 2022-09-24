//WAP to print sqr root of num from range 100 to 300



#include<stdio.h>
void main(){

	double x,root;

	printf("Enter a number between 100 to 300: ");
	scanf("%lf",&x);

	root=sqrt(x);
	printf("square root of %lf is %lf",x,root);
}


