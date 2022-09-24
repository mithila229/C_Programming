//      1       
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5   


#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
        int sp;
	for(int i=1;i<=rows;i++){
		int x=1;
		for( sp=rows;sp>=2;sp--){
			printf(" ");
		}
		if(i%2==1 && sp%2==1){
			printf("%d",x);
			x++;
		}else{
			printf(" ");
		}
		for( sp=rows-1;sp>=2;sp--){
			printf(" ");
		}
		printf("\n");
	}
}


