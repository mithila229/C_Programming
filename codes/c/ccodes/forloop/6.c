#include<stdio.h>
void main(){
	int x,y;
	int sum=0;
	printf("enter starting: \n");
	scanf("%d",&x);
	printf("enter ending: \n");
	scanf("%d",&y);
	for (int i=x; i<=y;i++){
		if(i%2==0){
		sum = sum + i;
		}
	}
	printf("Addition of even numbers is : %d",sum);
}

		
