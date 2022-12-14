#include<stdio.h>
#include<conio.h>
float simple_int(float p,float t,float r)
{
    float si ;
    si = (p*t*r)/100 ;
    return si ;
}
int main()
{
    float a,b,c,interest ;

    printf("Enter principal\n");
    scanf("%f",&a);

    printf("Enter year\n");
    scanf("%f",&b);

    printf("Enter Rate\n");
    scanf("%f",&c);

    interest = simple_int(a,b,c);

    printf("simple interest = %.2f\n",interest);
    printf("\n");
    return 0;
}
