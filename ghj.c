#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter the values\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	printf("sum of numbers=%.2f\nAverage is=%.2f",(a+b+c+d+e),(a+b+c+d+e)/5);
	return 0;
}
