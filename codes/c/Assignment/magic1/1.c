//Wap to print all divisors of given num


#include<stdio.h>
void main(){
	int x;
	printf("Enter num: ");
	scanf("%d",&x);

	for(int i=1;i<=x;i++){
		if(x%i==0){
			printf("%d ",i);
		}
	}
}
