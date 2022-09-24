//      d
//    c d
//  b c d
//a b c d



#include<stdio.h>
void main(){
	int rows;
	printf("Enter num of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch=97+rows-i;
		for(int sp=rows-i;sp>=2;sp--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
