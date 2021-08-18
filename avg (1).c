#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("enter the marks of 5 subject");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	printf("an average of all marks is %f",avg);
	return 0;
}
