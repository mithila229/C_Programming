//factorial of num


#include<stdio.h>
void main(){
	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d ",i);
		}
	}
}
