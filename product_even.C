#include<stdio.h>
void main()
{
int n1,n2,p,a;
printf("Enter the two numbers:");
scanf("%d%d",&n1,&n2);
p=n1*n2;
a=p%2;
if(a==0)
{
printf("EVEN\n");
}
else
{
printf("ODD\n");
}
getch();
}
