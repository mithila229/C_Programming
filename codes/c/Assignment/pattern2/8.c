//18 16 14 
//12 10 8 
//6 4 2


#include<stdio.h>
void main(){
	int x=18,rows;

	printf("Enter no. rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",x);
			x=x-2;
		}
		printf("\n");
	}
}
