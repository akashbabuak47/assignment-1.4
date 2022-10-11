#include<stdio.h>
void main()
{
    int a=0,b=0,hcf=0;
    printf("Enter the width of 1st strap in cm: ");
    scanf("%d",&a);
    printf("Enter the width of 2nd strap in cm: ");
    scanf("%d",&b);
    for(int i=1;i<=b||i<=a;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;
    }   
    printf("The equal width at which both strips should cut is: %d cm",hcf);
}