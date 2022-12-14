#include<stdio.h>
#include<conio.h>
void Odd(int n)
{
    int i ;

    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
    }
}
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);
    Odd(num);
    return 0;
}
