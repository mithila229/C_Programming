//WAP to print product of 1st 10 numbers

#include<stdio.h>
void main(){
	int mul=1;
	for(int i=1;i<=10;i++){
		mul=mul*i;
	}
	printf("%d\n",mul);
}
