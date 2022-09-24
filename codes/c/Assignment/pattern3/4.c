//a B c D
//b C d E
//c D e F
//d E f G



#include<stdio.h>
void main(){
	int r;
	printf("Enter number of rows: ");
	scanf("%d",&r);

	for(int i=0;i<=r-1;i++){

	        char ch1='a'+i;
		char ch2='B'+i;
		for(int j=1;j<=r;j++){
			if(j%2!=0){
				printf("%c ",ch1);
				ch1=ch1+2;
			}else{
				printf("%c ",ch2);
				ch2=ch2+2;
			}
		}
		printf("\n");
	}
}
