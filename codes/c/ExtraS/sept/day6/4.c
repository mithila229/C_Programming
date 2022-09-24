//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3
//1 2
//1



#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int x=1;
		if(i<=rows/2+1){
			for(int j=1;j<=i;j++){
				printf("%d\t",x);
				x++;
			}
		}else{
			for(int j=i;j<=rows;j++){
				printf("%d\t",x);
				x++;
			}
		}
		printf("\n");
	}
}
