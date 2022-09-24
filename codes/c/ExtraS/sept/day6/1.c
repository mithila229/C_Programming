//A B C D
//  B C D
//    C D
//      D


#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch=65+i-1;
		for(int sp=2;sp<=i;sp++){
			printf(" ");
		}
		for(int j=rows;j>=i;j--){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}

