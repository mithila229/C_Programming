#include<stdio.h>
void main(){
	int x=10;
	int *ptr1=&x;
	char *ptr2=&x;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
}
