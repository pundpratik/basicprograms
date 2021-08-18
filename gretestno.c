#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	big=(a>b&&a>c?a:b>c?b:c);
	printf("the gratest no among this number is %d",big);
	return 0;
	
}



