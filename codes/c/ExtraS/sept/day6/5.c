//a
//b c
//d e f
//g h
//i



#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);

	
	for(int i=1;i<=rows;i++){
		char ch=97+i-1;
		if(rows/2+1){
			for(int j=1;j<=i;j++){
				printf("%c\t",ch);
				ch++;
			}
		}else{
			for(int j=i;j<=rows;j++){
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
