#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,area ;

    printf("Enter a radius\n");
    scanf("%f",&radius);

    area = 3.14*radius*radius;
    printf("calculate radius = %.2f is area = %.2f",radius,area);
    return 0;
}
float area (float radius,float area)
{
    return 3.14*radius*radius ;
}
