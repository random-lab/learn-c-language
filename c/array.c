#include <stdio.h>
int main()
{
	const int length = 10;
	char c[length];
	char i=0;
	for (;i<length;i++)
	{
		c[i] = 65+i;
	}
	for (i=0; i<length;i++)
	{
		printf("%c\n",c[i]);
	}
	return 0;
}
