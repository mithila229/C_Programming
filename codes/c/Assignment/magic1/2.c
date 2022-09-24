//WAP to count digits in given num


#include<stdio.h>
void main(){
	int x,count=0;
	printf("Enter num: ");
	scanf("%d",&x);

	for(int i=1;i<=x;i++){
		x=x/10;
		count=count+1;
	}
	printf("%d\n",count);
}

