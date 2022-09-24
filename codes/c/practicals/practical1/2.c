//WAP to find max num among 3 numbers


#include<stdio.h>
void main(){
	int x,y,z;
        printf("1st num is: ");
	scanf("%d",&x);

	printf("2nd num: ");
	scanf("%d",&y);

	printf("3rd num is: ");
	scanf("%d",&z);

	if(x>y && x>z){
		printf("%d is max number",x);
	}else if(y>x && y>z){
		printf("%d is max number",y);
	}else if(z>x && z>y){
		printf("%d is max number",z);
	}else{
		printf("nums are same");
	}
}
