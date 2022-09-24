//WAP in which according to month number enter num of days in month


/*#include<stdio.h>
void main(){
	int x;
	
	printf("Enter month number: ");
	scanf("%d",&x);

	if(x==1){
		printf("january has 31 days\n");
	}else if(x==2){
		printf("feb has 28 or 29 days\n");
	}else if(x==3){
		printf("march has 31 days\n");
	}else if(x==4){
		printf("april has 30 days\n");
	}else if(x==5){
		printf("may has 31 days\n");
	}else if(x==6){
		printf("june has 30 days\n");
	}else if(x==7){
		printf("jully has 31 days\n");
	}else if(x==8){
		printf("august has 31 days\n ");
	}else if(x==9){
		printf("september has 30 days\n");
	}else if(x==10){
		printf("octomber has 31 days\n");
	}else if(x==11){
		printf("november has 30 days\n");
	}else if(x==12){
		printf("december has 31 days\n");
	}else{
		printf("there are only 12 months");
	}
}*/



#include<stdio.h>
void main(){
	int x;
	printf("Enter month number: ");
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("January has 31 days\n");
			break;
		case 2:
			printf("feb has 28 or 29 days\n");
			break;
		case 3:
			printf("march has 31 days\n");
			break;
		case 4: 
			printf("April has 30 days\n");
			break;
		case 5:
			printf("may has 31 days\n");
			break;
		case 6:
			printf("june has 30 days\n");
			break;
		case 7:
			printf("july has 31 days\n");
			break;
		case 8:
			printf("aug has 31 days\n");
			break;
		case 9: 
			printf("sept has 30 days\n");
			break;
		case 10:
			printf("oct has 31 days\n");
			break;
		case 11:
			printf("nov has 30 days\n");
			break;
		case 12:
			printf("dec has 31 days\n");
			break;
		default:
			printf("there are only 12 months you idiot\n");
	}
}
































