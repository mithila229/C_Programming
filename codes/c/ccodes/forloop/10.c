//WAP to print sqr of odd and cube of even nums btwn range


#include<stdio.h>
void main(){
	int x,y;
	printf("Enter start num: ");
	scanf("%d",&x);

	printf("Enter end num: ");
	scanf("%d",&y);

	for(int i=x; i<=y; i++){
		if(i%2==0){
			printf("%d\n",i*i*i);
		}else{
			printf("%d\n",i*i);
		}
	}
}
