//D1 C2 B3 A4
//e5 f4 g3 h2
//F3 E4 D5 C6
//g7 h6 i5 j4


#include<stdio.h>
void main(){
	int rows;

	printf("Enter number of rows: ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='D'+i-1;
		char ch2='e'+i-2;
		int x1=1+i-1;
		int x2=5+i-2;
		for(int j=1;j<=rows;j++){
			if(i%2!=0){
				printf("%c%d\t",ch1,x1);
				ch1--;
				x1++;
				


			}else{
				printf("%c%d\t",ch2,x2);
				ch2++;
				x2--;
			
			}
		}
		printf("\n");
	}

}
