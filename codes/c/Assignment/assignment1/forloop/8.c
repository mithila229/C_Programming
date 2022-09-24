//WAP to take two char if these char are same then print the same but if not same print there difference


#include<stdio.h>
void main(){

	char ch1;
	char ch2;

	printf("Enter char 1: ");
	scanf(" %c",&ch1);

	printf("Enter char 2:");
	scanf(" %c",&ch2);

	if(ch1==ch2){
		printf("ch1= %c  ch2= %c ",ch1,ch2);
	}else{
		printf("difference between %c and %c is %d",ch1,ch2,ch2-ch1);
	}
}
