//2  5  10
//17  26  37  
//50  65  82




#include<stdio.h>
void main(){

	int x=1;
	int rows;

	printf("Enter number of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",x*x+1);
			x++;
		}
		printf("\n");
	}
}


