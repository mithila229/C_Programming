//WAP to print product of digit of num


#include<stdio.h>
void main(){
	int x;
	int rem;
	int y=1;

	printf("Enter num: ");
	scanf("%d",&x);
        
	while(x>0){
		rem=x%10;
		y=y*rem;
		x=x/10;
	}
	printf("product of given digits is %d\n",y);
}
