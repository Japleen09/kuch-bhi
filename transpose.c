#include<stdio.h>
#define ROW 3
#define COL 4
void main()
{
    int mat1[ROW][COL], mat2[ROW][COL],i,j;
    printf("Enter matrix mat1[%d][%d]",ROW,COL);
    for(i=0; i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0; i<COL;i++)
    {
        for(j=0;j<ROW;j++)
        {
            mat2[i][j]=mat1[j][i];
          } }
}
