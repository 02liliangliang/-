#include<stdio.h>
#include<math.h>
#define disc b*b-4*a*c
double x1,x2;
void m(float a,float b,float c)
{
    printf("方程式有两个不相等的实根：\n");
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b-sqrt(disc))/(2*a);
    printf("方程式的根是：%.2lf\t%.2lf",x1,x2);
}
void n(float a,float b,float c)
{
    printf("方程式有两个相等的实根：\n");
    x1=x2=(-b)/(2*a);
    printf("方程式的根是：%.2lf\t%.2lf",x1,x2);
}
void f(float a,float b,float c)
{
    printf("方程式没有实根");
}
main()
{
    float a,b,c;
    printf("请输入a,b,c的值：\n");
    scanf("%f%f%f",&a,&b,&c);
    if(disc>0) m(a,b,c);
    else if(disc==0) n(a,b,c);
    else f(a,b,c);
}
