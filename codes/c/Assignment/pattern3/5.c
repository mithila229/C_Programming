//1 4 3 
//16 5 36 
//7 64 9


#include<stdio.h>
void main(){
	int r;
	printf("Enter number of rows: ");
	scanf("%d",&r);
        int x=1;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=r;j++){
			if(x%2==0){

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

