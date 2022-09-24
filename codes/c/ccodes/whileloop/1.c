//WAP to print num divisible by 4 & 5 btwn range



#include<stdio.h>
void main(){
	int x,y;
	
	printf("Enter start num: ");
	scanf("%d",&x);

	printf("Enter end num: ");
	scanf("%d",&y);

	int i=x;

	while(i<=y){
		if(i%4==0 && i%5==0){
			printf("%d\n",i);
		}
		i++;
	}
}
