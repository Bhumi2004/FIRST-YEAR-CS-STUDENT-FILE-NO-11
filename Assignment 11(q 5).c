#include<stdio.h>
int main()
{
	int a,b,s;
	printf("enter the value OF PAIRS\n");
	scanf("%d",&s);
	while(s>0)
	{
		printf("enter pairs\n");
		scanf("%d%d",&a,&b);
		printf("sum of the pair is %d\n",a+b);
		s=s-1;
	}
	return 0;

	

}
