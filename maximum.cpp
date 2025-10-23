#include<stdio.h>
int main()
{
	//maimum find
	int arr[3][3]={2,3,4,6,7,8,9,10,4};
	int i,j;
	int max=arr[0][0];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
		}
		}
	}
	printf("%d",max);
	
}
