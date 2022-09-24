//WAP print reverse table of 11



#include<stdio.h>
void main(){
	int x;

	printf("Enter num: ");
	scanf("%d",&x);

	for (int i=10;i>=1;i--){
		printf("%d * %d = %d\n",x,i,x*i);
	}
}	
