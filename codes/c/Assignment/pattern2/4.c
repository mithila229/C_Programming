//I H G
//F E D
//C B A




#include<stdio.h>
void main(){

	char ch='I';
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%c  ",ch);
			ch--;
		}
		printf("\n");
	}
}

