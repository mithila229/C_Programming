//D C B A
//c b a
//B A
//a



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);
	

	for(int i=1;i<=rows;i++){
		char ch=65+rows-i;
		for(int j=rows;j>=i;j--){
			if(i%2!=0){
				printf("%c ",ch);
				ch--;
			}else{
				printf("%c ",ch+32);
				ch--;
			}
		}
	
		printf("\n");
	}
}
