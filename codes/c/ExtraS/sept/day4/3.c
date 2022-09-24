//3 b 2 d
//b 2 d
//1 d
//d



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=rows-i;
		char ch=97+i;
		for(int j=rows;j>=1;j--){
			if(i+j % 2!=0){
				printf("%d ",x);
				x--;
				
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}

