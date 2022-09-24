//1 4 7 10
//7 10 13 16
//13 16 19 22
//19 22 25 28



#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);

	int x=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d ",x);
			x=x+3;
		}
		x=x-6;
		printf("\n");
	}
}
