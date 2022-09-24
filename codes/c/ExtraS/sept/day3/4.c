//2 3 5
//7 11 13
//17 19 23



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);
	
	int x=2;

	for(int i=1;i<=rows;i++){
		
		for(int j=1;j<=rows;){
			int count=0;

			for(int k=1;k<=x;k++){
				if(x%k==0){
					count++;
				}
			}
				
			
		        if(count==2){
				printf("%d ",x);
				j++;
				
			}
			x++;
			
		}
		printf("\n");
	}
}
