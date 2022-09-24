//wild & null pointer


#include<stdio.h>
void main(){
	int x=10;

	int *iptr;	//wild pointer

	printf("%d\n",*iptr);

	int *ptr1=0;    //null pointer
        
	ptr1=&x;
	printf("%d\n",*ptr1);
}

