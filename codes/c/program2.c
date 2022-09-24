#include <stdio.h>
/*int x=10;
void fun(){
	int y=20;
	int ans;
	ans=++x + ++y;
	printf("%d\n",ans);
}
void main(){
	printf("In main");
	fun();
	printf("%d\n",x);
	printf("End main");
}*/

/*void main(){
	int x=5;
	int ans;
	printf("%d\n",x);
	ans=++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans);
}*/

/*void main(){
	int x=5;
	int ans;
	printf("%d\n",x);
	ans=x++ + x++;
	printf("%d\n",x);
	printf("%d\n",ans);
}*/

/*void main(){
	int x=8;
	int ans;
	printf("%d\n",x);
	ans=x++ + ++x;
	printf("%d\n",x);
	printf("%d\n",ans);
}*/

/*void main(){
	int x=8;
	int ans;
	printf("%d\n",x);
	ans=++x + ++x + ++x;
	printf("%d\n",x);
        printf("%d\n",ans);
}*/

/*void main(){
	int x=5;
	int ans;
	printf("%d\n",x);
	ans=++x + x-- + x++ + ++x;
	printf("%d\n",ans);
	printf("%d\n",x);
}*/

/*void main(){
	int x=5;
	int y=7;
	int ans;
	ans=x || y;
	printf("%d\n",ans);
	ans=x && y;
	printf("%d\n",ans);
}*/

/*void main(){
	int x=8;
	int y=11;
	int ans;
	ans=++x || ++y;
	printf("%d\n",ans);
	printf("%d\n",x);
        printf("%d\n",y);

	ans=x++ && ++y;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=0;
	int y=5;
	int ans;
	ans=x++ || ++y;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);

	ans=x++ && y++;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=0;
	int y=5;
	int ans;
	ans=x++ || --x;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);

	ans=x && --y;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=1;
	int y=5;
	int ans;
	ans=--x || --x;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);

	ans=++x && --y;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=8;
	int y=7;
	printf("%d\n", x<=y);
	printf("%d\n",x==y);
	printf("%d\n", x>=y);
	printf("%d\n",x!=y);
	printf("%d\n",x<y);
	printf("%d\n",x>y);
}*/

/*void main(){
	int x=4;
	int y=5;
	int ans;
	ans=x & y;
	printf("%d\n",ans);
}*/

/*void main(){
	int x=4;
	int y=5;
	int ans;
	ans=++x & ++y;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=4;
	int y=5;
	int ans;
	ans=x-- | ++y;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=4;
	int ans;
	int y=5;
	ans=x-- ^ ++y;
        printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}*/

/*void main(){
	int x=15;
	int y=78;
	int ans;
	ans=x<<3;
	printf("%d\n",ans);

	ans=y>>2;
	printf("%d\n",ans);
        
	ans=x-- <<3;
	printf("%d\n",ans);
        printf("%d\n",x);

	ans=++y>>4;
	printf("%d\n",ans);
	printf("%d\n",y);
}*/

/*void main(){
	int x=10,20,30;
	printf("%d\n",x);

	int y={10,20,30};
	printf("%d\n",y);

	int z=(10,20,30);
	printf("%d\n",z);
}*/

/*void main(){
	int numOfStud=350;
	float sal=70.50;
	char ch='A';
	int __age=30;
	float company15=75.50;
	char 1val='z';
	int c2w=1000;
	char val$Data='w';
	int -xyz=70;
}*/

/*void main(){
	for(int i=0;i<=127;i++){
		printf("%c=%d\n",i,i);
	}
}*/

/*void main(){
	int x;
	printf("Enter value: ");
	scanf("%d", &x);
	printf("%d\n",x);
}*/

/*void main(){
	char x;
	printf("Enter character: ");
	scanf("%c",&x);
	printf("%c\n",x);
}*/

/*void main(){
	float income;
	printf("Enter your income: ");
	scanf("%f",& income);
	printf("%f\n",income);

	if (income>=0 && income<=500000){
		printf("0%  tax\n" );
	}
	if(income>=5000000 && income<=1000000){
		printf("10% tax\n");
	}
	if (income>=1000000 && income<=1500000){
		printf("15% tax\n");
	}
	if (income>=200000000){
		printf("30% tax\n");
	}
}*/

/*void main(){
	int age;
	printf("Enter age: ");
	scanf("%d",& age);
	printf("%d\n",age);
	if (age<10 && age>5){
		printf("no need of ticket");
	}
	if (age <=18 && age>10){
		printf("half ticket");
	}
	if (age>18){
		printf("full ticket");
	}
}*/

/*void main(){
	printf("start main\n");
	int x=0;
	int y=20;
	if(x){
		printf("In 1st if-block\n");
	}
	if(y){
		printf("In 2nd if-block\n");
	}
	printf("end main\n");
}*/

/*void main(){
	printf("start main\n");
	char ch1 ='A';
	char ch2 =48;
	if (ch1){
		printf("In 1st if-block\n");
	}
	if (ch2){
		printf("In 2nd if-block\n");
	}
	printf("end main\n");
}*/

/*void main(){
	printf("start main\n");
	char ch1 ='A';
	char ch2 ='48';
	if (ch1){
		printf("In 1st if-block\n");
	}
	if (ch2){
		printf("In 2nd if-block\n");
	}
	printf("end main\n");
}*/

/*void main(){
	int x=10;
	char ch1='A';
	char ch2=97;
	char ch3=128;

	printf("%d\n",x);
	printf("%c\n",ch1);
	printf("%c\n",ch2);
	printf("%d\n",ch3);
}*/

/*void main(){
	int x=1;
	printf("start code\n");
	if(--x){
		printf("in 1st block\n");
	}
	if (++x || x++){
		printf("in 2nd block\n");
	}
	printf("%d\n",x);
	printf("end code");
}*/

/*void main(){
	int x;
	printf("enter number: ");
	scanf("%d",&x);
	if (x%2==0){
		printf("divisible by 2");
	}
}*/

/*void main(){
	int x;
	printf("enter number: ");
	scanf("%d",&x);
	if(x%4==0 && x%5==0){
		printf("divisible by 4 and 5");
	}
	else{
		printf("not divisible by 4 and 5");
	}
}*/

/*void main(){
	char ch;
	printf("are you alive\n");
	printf("enter y or n\n");

	scanf("%c",& ch);
	if (ch=='y' || ch=='Y'){
		printf("nice\n");
	}
	else{
		printf("you are died\n");
	}
}*/

/*void main(){
	int x;
	printf("Enter your marks: ");
	scanf("%d", &x);
	if (x>=50){
		printf("eligible for drive\n");
	}else{
		printf("not eligible\n");
	}
}*/

/*void main(){
	float Pmoney;
	printf("Enter you pocket money: ");
	scanf("%f",&Pmoney);
	if(Pmoney>=5000){
		printf("Happipola\n");
	}else if(Pmoney>=3000){
		printf("co2\n");
	}else if(Pmoney>=2500){
		printf("sarovar\n");
	}else if(Pmoney>=1000){
		printf("vaishali\n");
	}else{
		printf("mess ch j1\n");
	}
}*/

/*void main(){
	float budget;
	printf("Enter your budget: ");
	scanf("%f",&budget);
	if(budget>=10000){
		printf("chalo shimla\n");
	}else if(budget>=7000){
		printf("chalo goa\n");
	}else if(budget>=5000){
		printf("chalo mahabaleshwar\n");
	}else if(budget>=3000){
		printf("chalo visapur\n");
	}else{
		printf("basa gharich\n");
	}
}*/

/*void main(){
	int x;
	printf("Enter number between 1 to 10: ");
	scanf("%d",&x);
	if (x==1){
		printf("ONE\n");
	}else if(x==2){
		printf("TWO\n");
	}else if(x==3){
		printf("THREE\n");
	}else if(x==4){
		printf("FOUR\n");
	}else if(x==5){
		printf("FIVE\n");
	}else if(x==6){
		printf("SIX\n");
	}else if(x==7){
		printf("SEVEN\n");
	}else if(x==8){
		printf("EIGHT\n");
	}else if(x==9){
		printf("NINE\n");
	}else if(x==10){
		printf("TEN\n");
	}else{
	        printf("invalid\n");
}*/

/*void main(){
	int x;
	printf("Enter num between 1 to 10: ");
	scanf("%d",&x);
	
	switch(x){
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		case 4:
			printf("four\n");
			break;
		case 5:
			printf("five\n");
			break;
		case 6:
			printf("six\n");
			break;
		case 7:
			printf("seven\n");
			break;
		case 8:
			printf("eight\n");
			break;
		case 9:
			printf("nine\n");
			break;
		case 10:
			printf("ten\n");
			break;
		default:
			printf("invalid\n");
	}
}*/

/*void main(){
	char x;
	printf("Enter number between 1 to 5: ");
	scanf("%c",&x);
	switch(x){
		case 'A':
			printf("One\n");
			break;
		case 'B':
			printf("Two\n");
			break;
		case 'C':
			printf("THREE\n");
			break;
		case 'D':
			printf("Four\n");
			break;
		case 'E':
			printf("five\n");
			break;
		default:
			printf("invalid\n");
	}
}*/

/*void main(){
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);
	if(x%3==0 && x%7==0){
		printf("%d is divisible by 3 and 7",x);
	}else{
		printf("%d is not divisible by 3 and 7",x);
	}
}*/

/*void main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num%2==0){
		printf("divisible by 2");
	}if(num%3==0){
		printf("divisible by 3");
	}if(num%4==0){
		printf("divisible by 4");
	}if(num%5==0){
		printf("divisible by 5");
	}if(num%6==0){
		printf("divisible by 6");
	}if(num%7==0){
		printf("divisible by 7");
	}if(num%8==0){
		printf("divisible by 8");
	}if(num%9==0){
		printf("divisible by 9");
	}
}*/

//error
/*void main(){
	int x;
	printf("Enter value: ");
	scanf("%d",&x);
	switch(x){
		case 65:
			printf("value of x is 65\n");
			break;
		case 'A':
			printf("value of x is A\n");
			break;
		case 66:
			printf("value of x is 66\n");
			break;
		case 'B':
			printf("value of x is B\n");
			break;
		default:
			printf("wrong input\n");
	}
}*/

/*void main(){
	const int x=10;
	printf("%d",&x);
	x=20;
	printf("%d",&x);
}*/

/*void main(){
	int numprsn;
	float tikprice;
	char row;
	printf("Enter number of persons: \n");
	scanf("%d",&numprsn);
	printf("Enter price: \n");
	scanf("%f",&tikprice);
	printf("Enter row: \n");
	scanf(" %c",&row);

	printf("no of persons are: %d\n",numprsn);

	printf("price of tickit is: %f\n",tikprice);

	printf("row is: %c\n",row);
}*/

/*void main(){
	int x=7;
	int ans;
	ans= ++x + x++ + ++x + x++ + x++;
	printf("x is %d\n",x);
	printf("ans is %d\n",ans);
}*/
















































































































































































































