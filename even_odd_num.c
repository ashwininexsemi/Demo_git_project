#include<stdio.h>
#define even_odd(num) num%2
void main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	result=even_odd(num);
	if(result==0)
		printf("number is even");
	else
		printf("number is odd");
}
