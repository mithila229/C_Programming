//WAP to print count of divisors of num



#include<stdio.h>
void main(){
	int num;
	int count;
        printf("enter number: ");
	scanf("%d",&num);
	printf("Divisors of %d are\n",num);
        
	for(int i=1;i<num;i++){
		if(num%i==0){
			printf("%d\n",i);
		}
	}
}

			

