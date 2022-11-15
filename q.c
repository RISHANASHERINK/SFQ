#include <stdio.h>
void main()
{
int a,b,c,sum,q;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("enter c");
scanf("%d",&c);
sum=a+b+c;
q=50;
printf("sum of the numbers is %d\n",sum);

if(q<=sum)
{
printf("q is small");
}
else
{
printf("q is large");
}

}

