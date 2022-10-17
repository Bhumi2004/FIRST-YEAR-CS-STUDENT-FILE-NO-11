#include<stdio.h>
int main()
{
	int fact=1,i,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("the factorial of number is %d\n",fact);	
	}
	return 0;
	
	
}
