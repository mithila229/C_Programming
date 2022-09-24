//1  2  9  4
//25 6  49 8
//81 10 121 12
//169 14 225 16




#include<stdio.h>
void main(){
        int rows;
	int x=1;

	printf("Enter no of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=4;j++){
			if(j==1 || j==3){
				printf("%d ",x*x);
				x++;
			}else{
				printf("%d ",x);
				x++;
			}
		}
		printf("\n");
	}
}
