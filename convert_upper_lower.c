#include<stdio.h>
char upper_lower(char ch)
{
  ch=ch^32;
  return ch;
}
void main()
{
	char ch,result;
	printf("enter the character\n");
	scanf("%c",&ch);
	result=upper_lower(ch);

	printf("%c %d",result,result);
}

