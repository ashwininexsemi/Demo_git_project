#include<stdio.h>
//#define set_bit(num,pos)   num|(1<<pos)
//#define clear_bit(num,pos) num & ~(1<<pos)
#define toggle_bit(num,pos) num^(1<<pos)
void main()
{
	int num,pos,result;
	printf("enter the number and pos\n");
	scanf("%d %d",&num,&pos);
//	result=set_bit(num,pos);
//	result=clear_bit(num,pos);
	result=toggle_bit(num,pos);
	printf("%d",result);
}
