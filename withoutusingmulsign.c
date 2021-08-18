//wap to c alculate multiplication of two number without using * sign.
#include<stdio.h>
int main()
{
	int a,b,i,mul=0;
	printf("\n enter any 2 values");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		mul=mul+b;
	}
	printf("\n multiplication of two number is=%d",mul);
	return 0;
}

