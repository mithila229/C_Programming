//While loop WAP take i/p from user and count the no. of digits
//i/p=2534
//o/p= number of digits in 2534 is 4


#include<stdio.h>
void main(){
	int x;
	int count=0;
	printf("Enter num: ");
	scanf("%d",&x);

	while(x>0){
		int rem=x%10;
		count++;
		x=x/10;
	}
	printf("%d",count);
}
		
