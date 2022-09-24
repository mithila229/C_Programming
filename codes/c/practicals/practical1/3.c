//WAP to check minimum amg 3 numbers



#include<stdio.h>
void main(){
	int a,b,c;
        
	printf("Enter 1st num: ");
	scanf("%d",&a);
	
	printf("Enter 2nd num: ");
	scanf("%d",&b);

	printf("Enter 3rd num: ");
	scanf("%d",&c);

	if(a<b && a<c){
		printf("%d is minimum",a);
	}else if(b<a && b<c){
		printf("%d is minimum",b);
	}else if(c<a && c<b){
		printf("%d is minimum",c);
	}else{
		printf("same nums");
	}
}






