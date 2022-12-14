#include<stdio.h>
#include<conio.h>
void print(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int num ;
    printf("Enter a number\n");
    scanf("%d",&num);

    print(num);
    return 0;
}
