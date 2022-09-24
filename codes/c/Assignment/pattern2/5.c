//D C B A
//e d c b
//F E D C 
//g f e d



#include<stdio.h>
void main(){

	int rows;
	
	printf("Enter rows: ");
	scanf("%d",&rows);

	for(int i=0;i<=rows;i++){
		char ch1='D'+i;
		char ch2='e'+i-1;
		for(int j=1;j<=4;j++){
			if(i==1 ||i==3){
				printf(" %c  ",ch1);
				ch1--;
			}
			else{
				printf(" %c  ",ch2);
				ch2--;
			}
		}
		printf("\n");
	}
}
