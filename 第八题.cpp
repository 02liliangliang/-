#include<stdio.h>
void f(int n)
{
    int a,b,c,d;
    a=n/1000;
    b=(n-a*1000)/100;
    c=(n-a*1000-b*100)/10;
    d=n-a*1000-b*100-c*10;
    printf("输出4位数数字字符：\n");
    printf("%d %d %d %d\n",a,b,c,d);
}
main()
{
    int n;
    printf("输入一个4位数字：\n");
    scanf("%d",&n);
    f(n);
}
