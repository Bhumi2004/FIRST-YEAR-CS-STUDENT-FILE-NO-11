#include<stdio.h>
int main()
{
	int n=1;
	printf("enter the first 10 natural number square\n");
	scanf("d",&n);
	for(n*n>0;n*n<=100;n++)
	{
		printf("\n%d\n",n*n);
	}
	return 0;
	
}
