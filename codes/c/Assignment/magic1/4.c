//*
//  *
//    *
//      *



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(j==i){
				printf("*  ");
			}
		}
		printf("\n");
	}
}

