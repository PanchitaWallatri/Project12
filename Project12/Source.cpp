#include<stdio.h>
int main()
{
	int a, b, c;
	printf("input length of side A : ");
	scanf_s("%d", &a);
	printf("input length of side B : ");
	scanf_s("%d", &b);
	printf("input length of side C : ");
	scanf_s("%d", &c);
	if ((a*a==b*b+c*c)||(b*b == a*a+c*c)||(c*c== a*a+b*b))
	printf("A,B,C are sides of right triangle.\n");
	else printf("A,B,C are not sides of right triangle.\n");
	return 0;
}