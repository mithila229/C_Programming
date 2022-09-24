#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=rows*i;
		for(int j=1;j<=rows;j++){
			printf("%d ",x);
			x=x+i;
		}
		printf("\n");
	}
}
