//4  3  2  1
//5  4  3  2  
//6  5  4  3
//7  6  5  4
//



#include<stdio.h>
void main(){
	int rows;

	printf("Enter no. of rows: ");
	scanf("%d",&rows);

	for(int i=0;i<=rows;i++){
		int x=4+i;
		for(int j=1;j<=4;j++){
			printf("%d ",x);
			x--;
		}
		printf("\n");
	}
}
