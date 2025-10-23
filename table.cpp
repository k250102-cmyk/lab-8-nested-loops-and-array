#include<stdio.h>
int main()
{
	int i;
	int j;
	int tab;
	for(i=1;i<=5;i++)
	{
		printf("Row %d|", i);
		for(j=1;j<=5;j++)
		{
			tab=i*j;
			printf("%4d",tab);
		}
		printf("\n");
	}
}
