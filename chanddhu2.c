#include<stdio.h>
void main ()
{
int a,b,temp;
printf("enter a:\n");
scanf("%d",&a);
printf("enter b:\n");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("after swapping a=%d\n",a);
printf("after swapping b=%d\n",b);
}

