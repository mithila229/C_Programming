//WAP to print table of 12



#include<stdio.h>
void main(){
	int x;
	printf("Enter num: ");
	scanf("%d",&x);

	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n",x,i,x*i);
	}
}
			
