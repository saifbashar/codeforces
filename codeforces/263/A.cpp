#include<stdio.h>
int main()
{
	int n[5][5],i,j,row=0,column=0,c=0,d=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d", &n[i][j]);
			if(n[i][j]== 1)
			{
				row=i;
				column=j;
			}
		}
	}
	c=(2-row)>0?2-row:-(2-row);
	d=(2-column)>0?2-column:-(2-column);
	printf("%d",c+d);
	return 0;
}
