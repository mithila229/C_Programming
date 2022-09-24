//a
//A B
//a b c
//A B C D



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch1=97;
		char ch2=65;
		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%c ",ch1);
				ch1++;
			}else{
				printf("%c ",ch2);
				ch2++;
			}
		}
		printf("\n");
	}
}

