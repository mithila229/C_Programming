//A  B  C  D
//B  C  D  E
//C  D  E  F
//D  E  F  G



#include<stdio.h>
void main(){

	int rows;
        printf("Enter num of rows: ");
	scanf("%d",&rows);

  	for(int i=0;i<=rows;i++){

		char ch='A'+i;
		for(int j=1;j<=4;j++){
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
	}
}
