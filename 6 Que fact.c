#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i ;
    return f ;
}
int main()
{
    int a = fact(6) ;
    printf("Fcatorial is %d\n",a);
}
