//5
//5  d  
//5  d  4
//5  d  4  b
//5  d  4  b  3


#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=rows;
		char ch=97+rows-1;
		for(int j=1;j<=i;j++){
			if(j%2==1){
				printf("%d  ",x);
				x--;
				ch--;
			}else{
				printf("%c  ",ch);
				ch=ch--;
			}
		}
		printf("\n");
	}
}
