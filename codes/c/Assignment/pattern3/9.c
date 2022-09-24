//0 1 1 2
//3 5 8 13
//21 34 55 89
//144 233 377 610




#include<stdio.h>
void main(){
	int rows,n1=0,n2=1,n3=0;
	printf("Enter number of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",n3);
			n1=n2;
			n2=n3;
			n3=n2+n1;
		}
		printf("\n");
	}
}
