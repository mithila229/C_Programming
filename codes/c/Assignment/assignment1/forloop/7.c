//WAP to calculate LCM of two nums



#include<stdio.h>
void main(){
	int x,y,max;

	printf("Enter 1st numbers: ");
	scanf("%d",&x);

	printf("Enter 2nd number: ");
	scanf("%d",&y);

	if(x>y){
		max=x;
	}else{
		max=y;
	}
	
	for(int i=0; i<=max; i++){
		if(max%x==0 && max%y==0){
			printf("lcm is %d",max);
			break;
		}
		max++;
	}
}
