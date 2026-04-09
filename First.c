#include<stdio.h>

int main(){

    float a,b,c,d,e,f,g;

    printf("\n enter the value of a:");
    scanf("%f",&a);

    printf("\n enter the value of b:");
    scanf("%f",&b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g= (int)a%(int)b;

    printf("\n the sum of a and b is %f",c);
    printf("\n the difference of a and b is %f",d);
    printf("\n the product of a and b is %f",e);
    printf("\n the quotient of a and b is %f",f);
    printf("\n the remainder of a and b is %f",g);
}