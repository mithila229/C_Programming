//= = = = = =
//$ $ $ $ $ $
//@ @ @ @ @ @
//= = = = = =
//$ $ $ $ $ $
//@ @ @ @ @ @




#include<stdio.h>
void main(){

	int r;
	printf("Enter rows: ");
	scanf("%d",&r);

	for(int i=1;i<=r;i++){
		
		for(int j=1;j<=r;j++){
			if(i%3==1){
				printf("= ");
				
			}else if(i%3==2){
				printf("$ ");
			}else if(i%3==0){
				printf("@ ");
			}
		}
		printf("\n");
	}

}
			
