#include<stdio.h>
int main()
{
	float kg,g,tonne,mg;
	printf("\n enter the valuein kilogram");
	scanf("%f",&kg);
	tonne=0.001*kg;
	g=1000*kg;
	mg=1000*g;
	printf("\n tonne=%f",tonne);
	printf("\n kg=%f",kg);
	printf("\n gram=%f",g);
	printf("\n mg=%f",mg);
	return 0;
}
