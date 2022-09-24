//WAP to take i/p amd print whether prime or not




#include<stdio.h>
void main(){
	int x;
	int count=0;

	printf("Enter number: ");
	scanf("%d",&x);

	for(int i=1; i<=x; i++){

		if(x%i==0){

			count=count+1;

		}
	}

	if(count==2){


		printf("%d is Prine Number ",x);

	}
	else{
		printf("%d is Not prime Number ",x);

	}


}
			
