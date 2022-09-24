#include<stdio.h>
void main(){
	char arr[]={'A','B','C','D'};

	char *ptr1=&arr[2];
	char *ptr2=&arr[3];

	printf("%c\n",*ptr1);
	printf("%c\n",*ptr2);

	printf("%c\n",*(ptr1+2));
	printf("%c\n",*(ptr2+1));
}
