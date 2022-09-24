// 1   2   3   4
// 2   3   4   5
// 3   4   5   6   
// 4   5   6   7



#include<stdio.h>
void main(){
	int rows;
	

	printf("Enter number of rows: ");
	scanf("%d",&rows);
        
	for(int i=0;i<=rows;i++){
		int x=1+i;
		for(int j=1;j<=4;j++){
			
			printf("%d ",x);
			x++;
			
						
		}
		
		printf("\n");
	}
}




