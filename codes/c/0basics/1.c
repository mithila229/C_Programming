#include<stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;
	printf("Enter character : ");
	scanf("%c",&chr);
	printf("Enter number: ");
	scanf("%d",&num);
	printf("Enter any float value: ");
	scanf("%f",&rs);
	printf("Enter any double value: ");
	scanf("%lf",&crMoney);

        printf("size of %d is %ld\n",num,sizeof(int));
	
        printf("size of %c is %ld\n",chr,sizeof(char));
        
	printf("size of %f is %ld\n",rs,sizeof(float));
        
	printf("size of %lf is %ld\n",crMoney,sizeof(double));
}

/*#include <stdio.h>
void main(){
	int x=9;
	int ans;
	int ans1;
	int ans2;
	int ans3;

	ans=++x + x++ + ++x;
	printf("%d\n",ans);
	printf("%d\n",x);

	ans1=++x + ++x + ++x + ++x;
	printf("%d\n",ans1);
	printf("%d\n",x);

	ans2=x++ + x++ + ++x + x++ + ++x;
	printf("%d\n",ans2);
	printf("%d\n",x);

	ans3=x++ + x++ + x++ + x++;
	printf("%d\n",ans3);
	printf("%d\n",x);

}*/

/*#include<stdio.h>
void main(){
	int a;
	int b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	if(a<b){
		printf("%d\n",b);
	}
}*/

/*#include<stdio.h>
void main(){
	int x;
	int y;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);

	if(x<y){
		printf("%d\n",x);
	}
}*/

/*#include<stdio.h>
void main(){
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);

	if(x%5==0 && x%11==0){
		printf("is divisible by 5 & 11");
	}else{
		printf("is not divisible by 5 & 11");
	}
}*/

/*#include <stdio.h>
void main(){
	int var;
	printf("var= ");
	scanf("%d",&var);

	if(var%2==0){
		printf(var,"It is an even number");
	}else{
		printf(var,"it is not even number");
	}
}*/

/*#include<stdio.h>
void main(){
	int var;
	printf("var= ");
	scanf("%d",&var);

	if(var<10){
		printf("It is less than 10\n");
	}else{
		printf("It is greater than 10\n");
	}
}*/

/*#include<stdio.h>
void main(){
	int var;
	printf("var= ");
	scanf("%d",&var);

	if(var>0){
		printf("positive number");
	}else{
		printf("negative number");
	}
}*/

/*#include<stdio.h>
void main(){
	char var;
	printf("var= ");
	scanf("%c",&var);
	
	if(var=='A' || var=='E' || var=='I' || var=='O' || var=='U' || var=='a' || var=='e' ||  var=='i' || var=='o' || var=='u'){
		printf("vowel\n");
	}else{
		printf("consonants\n");
	}
}*/

/*#include<stdio.h>
void main(){
	char var;
	printf("Enter character: ");
	scanf("%c",&var);

	if(var>='A'&& var<='Z'){
		printf("You entered UPPERCASE character");
	}else{
		printf("you entered lowercase character");
	}
}*/




































































































































































































