//WAp to print num is oerfect or not


#include<stdio.h>
void main(){
	int x;
	printf("Enter num: ");
	scanf("%d",&x);
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0){
			sum=sum+i;
		}
	}
	if(sum==x){
		printf("%d is Perfect num\n",x);
	}else{
		printf("%d is not perfect num\n",x);
	}
}
