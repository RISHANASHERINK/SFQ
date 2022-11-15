#include<stdio.h>
int rsk(int x, int y)
{
int c;
c=x+y;
return(c);
}
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
int result=rsk(a,b);
printf("result is %d\n",result);
}
