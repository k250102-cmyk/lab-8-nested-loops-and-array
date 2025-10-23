#include<stdio.h>
int main()
{
	int arr[5][5]={
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15},
	{16,17,18,19,20},
	{21,22,23,24,25}
};
	int student=0,empty_desk=0;
	int i,j;
	printf("x=student\n");
	printf("o=empty\n");
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		printf("row%d ",i);
		for(j=0;j<5;j++)
		{
			if(arr[i][j]%2!=0)
			{
				printf("o ");
				empty_desk++;
			}
			if(arr[i][j]%2==0)
			{
				printf("x ");
				student++;
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("summary:\n");
	printf("empty desk=%d\n",empty_desk);
	printf("student desk=%d\n",student);
	printf("total desk=%d",empty_desk+student);
}
