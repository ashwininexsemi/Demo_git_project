#include<stdio.h>
#define positive_negative(num)  num&(1<<31)
void main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	result=positive_negative(num);
	if(result==0)
		printf("number is positive");
	else
		printf("number is negative");
}
