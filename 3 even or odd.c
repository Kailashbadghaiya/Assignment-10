#include<stdio.h>
#include<conio.h>
int evenOrOdd(int n)
{
    return (n%2==0);
}
int main()
{
    int n ;

    printf("Enter a number\n");
    scanf("%d",&n);

    if((evenOrOdd(n) == 1))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
