#include<stdio.h>
#define swap_num(num)  (num&0xff00)>>8|(num&0x00ff)<<8
void main()
{
	int result,num=0x1234;
	result=swap_num(num);
	printf("%x",result);
}


