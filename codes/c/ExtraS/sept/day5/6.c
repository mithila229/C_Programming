//WAp to print count of given num

#include<stdio.h>
void main(){
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	int count=0;
	while(num>0){
		int rem=num%10;
		count++;
		num=num/10;
	}
	printf("%d is count \n",count);
}

