#include <stdio.h>
int main ()
{  /*
	int i;
	for (i=1; i<=10; i++)
	{
	printf("%d\n", i);
    }
    */
    /*
    int i;
	for (i=0; i<=10; i++)
	{
		printf("i=%d\n", i);
    }
    printf("마지막i = %d\n", i);
    */
    /*
	for (int i=0; i < 10; i++)
	{
		printf("i=%d\n", i);
    }
    printf("마지막i = %d\n", i);
	*/
	int a,b ;
	a=1;
	b=1;
	for (a=0; a < 10; a++){
		printf("%2d", (a+1)* b);
		b = b * -1;
		
		
    }
    return 0;
}

