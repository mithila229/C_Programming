//3 2 1
//c b a
//3 2 1 
//c b a



#include<stdio.h>
void main(){

	int rows;

	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=3;
		char ch='c';

		for(int j=1;j<=3;j++){
			if(i==1 || i==3){
				printf("%d  ",x);
				x--;
			}
			else{
				printf("%c  ",ch);
				ch--;
			}
		}
		printf("\n");
	}
}
