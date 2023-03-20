#include <stdio.h>
#define square(x) x*x

void main()
{
	int i;

	i = 64 / square(4);
	printf("%d\n", i);
}
