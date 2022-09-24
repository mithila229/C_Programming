//a
//b B 
//c C c
//d D d D


#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch1=97+i-1;
		char ch2=65+i-1;
		for(int j=1;j<=i;j++){
			if(j%2==1){
				printf("%c ",ch1);
				
			}else{
				printf("%c ",ch2);
				
			}
			
		}
		ch1++;
		ch2++;
		printf("\n");
	}
}



