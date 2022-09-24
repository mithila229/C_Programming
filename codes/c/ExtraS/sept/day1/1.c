//1
//3 5
//7 9 11
//13 15 17 19



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);
	int x=1;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",x);
			x=x+2;
		}
		printf("\n");
	}
}
