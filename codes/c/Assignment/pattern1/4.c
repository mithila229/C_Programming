//A   B   C
//D   E   F
//G   H   I



#include<stdio.h>
void main(){
        int rows;
	char ch='A';
	printf("Enter no.of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=3;j++){
			printf("%c  ",ch);
			ch=ch+1;
		}
		printf("\n");
	}
}
