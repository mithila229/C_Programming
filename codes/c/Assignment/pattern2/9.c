//1 3 8 
//15 24 35
//48 63 80


#include<stdio.h>
void main(){
	int rows,x=1;

	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",x*x-1);
			x++;
		}
		printf("\n");
	}
}
