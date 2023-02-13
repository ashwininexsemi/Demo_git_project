#include<stdio.h>
int poweroftwo(num)
{
	num=num&(num-1);
	return num;


}
void main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	result=poweroftwo(num);
	if(result==0)
		printf("no is power of two");
	else
		printf("no is not power of two");
}
