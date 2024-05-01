
#include<stdio.h>
void main()
{
	int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	int mat2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d ",mat1[i][j]+mat2[i][j]);
		}
		printf("\n");
	}
	
}
