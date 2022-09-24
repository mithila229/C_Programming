//take i/p from user and print fibonacci series upto that num



#include<stdio.h>
void main(){
	int x;
	int n1=0;
	int n2=1;
	int n3=0;

	printf("enter num: ");
	scanf("%d",&x);

	//printf("%d %d ",n1,n2);
	while(n3<=x){
		
	       
		printf("%d ",n3);
		n1 = n2;
		n2 =n3 ;
               
	        n3=n2+n1;	
		
		
	}

	printf("\n");
}
