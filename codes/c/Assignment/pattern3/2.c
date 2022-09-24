//3 b 1 d
//a 2 c 0
//3 b 1 d
//a 2 c 0


#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x1=3;
		
		char ch1='a';

		for(int j=1;j<=rows;j++){
	
			if((i+j)%2==0){

			        printf("%d ",x1);
				x1--;
				ch1++;
			
			}else{

				printf("%c ",ch1);
				ch1++;
				x1--;
			}
		}
		printf("\n");
	}
}
