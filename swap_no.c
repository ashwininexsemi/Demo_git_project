#include<stdio.h>
void swap_num(int a,int b)
{
a=a^b;
b=a^b;
a=a^b;
printf("a=%d b=%d",a,b);
}
void main()
{
	int a,b,result;
	printf("enter the a and b\n");
	scanf("%d %d",&a,&b);
	swap_num(a,b);
	//printf("%d",result);
}
