//0 1 1 2
//3 5 8
//13 21
//34



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);
        int num1=0, num2=1, num3=0,n=0;

	for(int i=1;i<=rows;i++){

		for(int j=rows;j>=1;j--){
			
			while(num3>n){
				printf("%d ",num3);
				num1=num2;
				num2=num1;
				num3=num1+num2;
				
			}
		}

		printf("\n");
	}
}
