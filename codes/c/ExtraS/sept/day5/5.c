//a  
//a  b
//a  b  c
//a  b  c  d
//a  b  c
//a  b 
//a



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch='a';
		if(i<=rows/2+1){
					
			for(int j=1;j<=i;j++){
				printf("%c  ",ch);
				ch++;
			}
		}else{
					
			for(int j=i; j<=rows; j++){
				printf("%c  ",ch);
				ch++;
			}
		}
		

	printf("\n");
	}
}

