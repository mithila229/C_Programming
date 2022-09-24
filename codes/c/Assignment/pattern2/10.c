//D4 C3 B2 A1
//A1 B2 C3 D4
//D4 C3 B2 A1
//A1 B2 C3 D4



#include<stdio.h>
void main(){


	int rows;

	printf("Enter number of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

	        int x2=1;
		int x1=4;

	        char ch2='A';
		char ch1='D';
		for(int j=1;j<=4;j++){
			if(i==1 || i==3){
				printf("%c%d ",ch1,x1);
				x1--;
				ch1--;
			}else{
				printf("%c%d ",ch2,x2);
				x2++;
				ch2++;
			}
		}
		printf("\n");
	}
}



