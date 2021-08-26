#include<stdio.h>
#include<math.h>
int sushu(int a)
{
    int i,k=sqrt(a);
    for(i=2;i<=k+1;i++)
    if(a%i==0)break;
    if(i<k+1) return 0;
    else return 1;
}
main()
{
    int a,b;
    printf("请输入一个整数：\n");
    scanf("%d",&a);
    b=sushu(a);
    if(b) printf("%d是一个素数\n",a);
    else printf("%d不是一个素数\n",a);
}
