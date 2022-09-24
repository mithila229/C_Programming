
//WAP to take two characters if these char are equal then print as it is but if they are unequal then print their difference




#include<stdio.h>
void main(){
	char var1;
	char var2;

	printf("Enter char 1: ");
	scanf("%c",&var1);

	printf("Enter char 2: ");
	scanf(" %c",&var2);

        if(var1==var2){
		printf("var1=%c  var2=%c\n",var1,var2);
	}else{
		printf("The difference between %c and %c is %d\n",var1,var2,var2-var1);
	}
}

