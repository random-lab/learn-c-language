#include <stdio.h>
int main()
{
	int x = 10;
	int *p = &x;
	printf("the address is %p\n",p);
	printf("the value is %d\n",*p);

	return 0;
}
