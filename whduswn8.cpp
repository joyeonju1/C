#include <stdio.h>
	/*
	int a=3;
	int b=2;
	printf("%d",a+b);
}
int main() {
	plus();
	*/
	/*
	printf("%d",num1+num2);
}
int main()
{
	int a=3;
	int b=2;
	plus(a,b);
	plus(5,3);
	*/
	/*
	int a=3;
	int b=2;
	return a + b;
}
int main()
{
	int num=plus();
	printf("%d\n",num);
	printf("%d\n",plus());
	printf("%d\n",plus()+10);
	*/
int plus(int num1,int num2)
{
	return num1+num2;	
}
int main()
{
	int a = 3;
	int b = 2;
	int num1 = plus(a,b);
	printf("%d\n",num1);
	
	num1=plus(3,5);
	printf("%d\n",num1);
	
	num1=plus(3,5);
	printf("%d\n",num1 + 10);
	
}

	


	
