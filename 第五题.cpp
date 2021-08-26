#include<stdio.h>
#include<string.h>
char fanxu(b)
char b[100];
{
    int i,j,t;
    char c[100];strcpy(c,b);
    t=strlen(b);
    for(i=0,j=t-1;j>-1;i++,j--)
    b[i]=c[j];

}
main()
{
    char a[100],i;
    gets(a);
    fanxu(a);
    puts(a);
}
