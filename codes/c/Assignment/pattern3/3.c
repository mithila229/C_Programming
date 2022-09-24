//4 a 3 b
//4 a 3 b
//4 a 3 b
//4 a 3 b




#include<stdio.h>
void main(){
	int r;
	printf("Enter number of rows: ");
	scanf("%d",&r);

	for(int i=1;i<=r;i++){
		int x=4;
		char ch='a';
		for(int j=1;j<=r;j++){
			if(j%2!=0){
				printf("%d ",x);
				x--;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
