#include <stdio.h>

int mul(int a, int b)
{
	int ret;

	return (ret = a * b);
}

int main(void)
{
	int a = 3;
	int b = 4;
	int c = a + b;
	printf("a: %d\n", c);
	printf("ret: %d\n", mul(a, b));

	int i = 0;
	for(i = 0; i < 10; ++i)
	{
		printf("%d: %d\n", i, mul(i, i));
	}

	return 0;
}
