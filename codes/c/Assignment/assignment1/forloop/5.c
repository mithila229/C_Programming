//WAp to take i/p from user and print all factors



#include<stdio.h>
void main(){

	int num;
	printf("Enter number: ");
	scanf("%d",&num);
        
	printf("factors of %d are: ",num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d ",i);
		}
	}
}
