#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    int i,f=1 ;

    for(i=1;i<=n;i++)
        f=f*i ;
    return f ;
}
int comb(int n,int r)
{
    return fact(n) / (fact(r)*fact(n-r));
}
int per(int n,int r)
{
    return fact(n) / (fact(n-r));
}
    int main()
    {
        int a = comb(10,2),b=per(10,2) ;
        printf("Combination = %d\n",a);
        printf("Permutation = %d\n",b);
    }

