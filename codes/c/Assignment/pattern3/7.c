//1 4 27 
//4 27 16
//27 16 125




#include<stdio.h>
void main(){
	int r;
	
	printf("Enter number of rows: ");
	scanf("%d",&r);

	for(int i=1;i<=r;i++){
		int x=0+i;
		for(int j=1;j<=r;j++){
			if(x%2==0){
				printf("%d ",x*x);
				x=x+1;
			}else{
				printf("%d ",x*x*x);
				x=x+1;
			}
		}
		printf("\n");
	}
}
