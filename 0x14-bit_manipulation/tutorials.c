#include <stdio.h>

int main()
{
	int a, b;
       	a = 56 ;
	b = 1;
	printf("%ld\n", sizeof(unsigned long int));
	printf("%d & %d = %d\n", a, b, a & b);
	b *= 2;
	printf("%d & %d = %d\n", a, b, a & b);
	b *= 2;
	printf("%d & %d = %d\n", a, b, a & b);
	b *= 2;
	printf("%d & %d = %d\n", a, b, a & b);
	b *= 2;
	printf("%d & %d = %d\n", a, b, a & b);
	b *= 2;
	printf("%d & %d = %d\n", a, b, a & b);
	b *= 2;
	return 0;
	
}
