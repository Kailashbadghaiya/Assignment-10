#include<stdio.h>
#include<conio.h>
int check(int digit,int num)
{
    while(num!=0)
    {
        if((num%10) == digit)
            return 1 ;
        num=num/10 ;
    }
    return 0;
}
int main()
{
    if(check(5,123))
        printf("yes\n");
    else
        printf("No\n");

}
