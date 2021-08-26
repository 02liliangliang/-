#include<stdio.h>
int exchange(b)
int b[3][3];
{
    int i,j,t;
    for(i=0;i<3;i++)
    for(j=0;j>=i&&j<3-i;j++)
    {
        t=b[i][j];b[i][j]=b[j][i];b[j][i]=t;
    }
}
main()
{
    int i,j,a[3][3];
    printf("请输入3*3整形数组：\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("原数组：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%5d",a[i][j]);
        printf("\n");
    }
    printf("\n");
    exchange(a);
    printf("行列互换：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%5d",a[i][j]);
        printf("\n");
    }
}
