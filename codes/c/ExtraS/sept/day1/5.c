//D C B A
//e f g h
//F E D C
//g h i j



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);


	for(int i=1;i<=rows;i++){ 
        char ch1=64+rows+i-1;
		for(int j=1;j<=rows;j++){
			if(i%2!=0){
				printf("%c ",ch1);
				ch1--;
			}else{
				printf("%c ",ch1+32);
				ch1++;
			}

	
		}
		
		printf("\n");
		
	}
}

