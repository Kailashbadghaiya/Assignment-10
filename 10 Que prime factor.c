#include<stdio.h>
#include<conio.h>
void primeFactor(int n)
{
    int i =2 ;

    for(i=2;i<=n;i++)
    {
        while(n%i == 0)
        {
            printf("%d ",i);
            n = n/i ;
        }
    }
}
int main()
{
    primeFactor(36);
}
