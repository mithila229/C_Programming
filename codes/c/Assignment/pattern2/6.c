//= = = =
//$ $ $ $
//= = = =
//$ $ $ $



#include<stdio.h>
void main(){

	int rows;
	printf("Enter num iof rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=4;j++){
			if(i==1 || i==3){
				printf("= ");
			}else{
				printf("$ ");
			}
		}
		printf("\n");
	}
}

	


