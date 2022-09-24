//16 15 14 13
//L K J I
//8 7 6 5
//D C B A



#include<stdio.h>
void main(){
	int rows;
	int x=16;
	char ch='P';

	printf("Enter number of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		
		for(int j=1;j<=rows;j++){
			if(i%2!=0){
				printf("%d  ",x);
				x--;
				ch--;
			}else{
				printf("%c  ",ch);
				ch--;
				x--;
			}
		}
		printf("\n");
		
	}
}
