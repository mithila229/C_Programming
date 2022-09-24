//1 A 2 B
//1 A 2
//1 A
//1




#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=1;
		char ch='A';
		for(int j=rows;j>=i;j--){
			if(j%2==0){
				printf("%d ",x);
				x++;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
