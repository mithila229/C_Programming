//sum of aray elements



#include<stdio.h>
void main(){
	int row;
	printf("Enter row of array: ");
	scanf("%d",&row);

	int col;
	printf("Enter col: ");
	scanf("%d",&col);
        
	int sum=0;
	int arr[row][col];
	printf("Enter elements: ");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[row][col]);
			sum=sum+arr[row][col];
		}
	}
	printf("sum is : %d\n",sum);
}
		


