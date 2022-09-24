//D4  C3  B2  A1
//D4  C3  B2  A1
//D4  C3  B2  A1
//D4  C3  B2  A1




#include<stdio.h>
void main(){
	int rows;
	
	

	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

	        char ch='D';
		int x=4;
		for(int j=1;j<=4;j++){
			printf("%c%d  ",ch,x);
			ch--;
			x--;
		}
		printf("\n");
	}
}
