//1   3   5
//7   9   11 
//13  15  17



#include<stdio.h>
void main(){
        int rows;
	int x=1;

	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",x);
			x=x+2;
		}
		printf("\n");
	}
}
