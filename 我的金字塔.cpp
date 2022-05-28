#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("请输入金字塔的层数：");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a*2-1;c++)
		{
			printf("*"); 
		}
		printf("\n");
	 } 
	 return 0;
}

