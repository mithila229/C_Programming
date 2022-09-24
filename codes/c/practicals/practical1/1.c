//WAP to check whether the input is leap year or not


#include<stdio.h>
void main(){
	int x;
	printf("Enter year: ");
	scanf("%d",&x);
	
	if(x%4==0){
		printf("%d is Leap year\n",x);
	}else{
		printf("%d is not leap year\n",x);
	}
}

//practice

/*#include<stdio.h>
void main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);

	if(year%4==0){
		printf("%d is leap year\n",year);
	}
	else{
		printf("%d is not leap year",year);
	}
}*/
