#include<stdio.h>
void main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is greater",a);
}
else if(b>c)
{
printf("%d is greater",b);
}
else
{
printf("%dis greater",c);
}

}
