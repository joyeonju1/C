#include<stdio.h>
int main()
{
	/*int res;
	res=0 && 0;
	printf("%d\n",res);
	res=0 && 1;
	printf("%d\n",res);
	res=1 && 0;
	printf("%d\n",res);
	res=1 && 1;
	printf("%d\n",res);
	
	
	res=0 || 0;
	printf("%d\n",res);
	res=0 || 1;
	printf("%d\n",res);
	res=1 || 0;
	printf("%d\n",res);
	res=1 || 1;
	printf("%d\n",res);
	
	printf("%d\n", !res);

	return 0;
	*/
	/*
	int n;
	scanf("%d",&n);
	printf("%d\n",n % 2 == 0 && n % 3 == 0);
	printf("%d\n",!(n % 2 == 0) && !(n % 3 == 0));
	
	
	return 0;
	*/
	/*
	int n;
	scanf("%d",&n);
	printf("%d\n",n % 2 != 0 || n % 5 != 0);
	printf("%d\n",!(n % 2 == 0) || !(n % 5 == 0));
	return 0;
	*/
	int n;
	scanf("%d",&n);
	printf("%d\n",n / 7 == 5);
	printf("%d\n",n % 3 == 0);
	printf("%d\n",n % 5 != 0);
	printf("%d\n",(n % 3 == 0) && (n % 2 == 0));
	printf("%d\n",(n % 4 == 0) || (n % 7 == 0));
	return 0;
	
	}

