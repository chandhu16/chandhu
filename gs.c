#include<stdio.h>
int main()
{
int s1,s2,s3,sum,perc
printf("enter the marks of s1,s2,s3:\n);
scanf("%d %d %d",&s1,&s2,&s3);
sum=s1+s2+s3;
perc=(sum/100)*100;
if(perc>=90)
printf("grade=s\n");
else if(perc>80&perc<=89)
printf("grade=A\n");
else if (perc>70&perc<=79)
printf("grade=B\n");
else if (perc>60&perc<=69)
printf("grade=C\n");
else
printf("grade=fail\n");
}
