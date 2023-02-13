#include<stdio.h>
#define campare_num(a,b)  a^b
void main()
{
	int a,b,result;
	printf("enter the a and b\n");
	scanf("%d %d",&a,&b);
	result=campare_num(a,b);
	if(result==0)
		printf("numbers are same");
	else
		printf("numbers are different");

}
