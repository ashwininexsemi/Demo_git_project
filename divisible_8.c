#include<stdio.h>
#define divisible_8(num)  num&7
void main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	result=divisible_8(num);
	if(result==0)
		printf("num is divisible by 8");
	else
		printf("num is not divible by 8");
}
