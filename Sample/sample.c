#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// int i;
	// printf("Hello! ¾È³ç!\n");
	// scanf("%d", &i);
	// printf("%d\n", i);

	int a, b, c;
	a = 10; b = 20; c = 30;
	printf("%d %d %d %d\n", a, b, c, a + b * c);
	printf("%d %d %d %d\n", a, b, c, a = b += 2 * c);
	printf("%d %d %d %d\n", a, b, c, a = (b > c) ? b : c);
	printf("%d %d %d %d\n", a, b, c, a / b * c);
	printf("%d %d %d %d\n", a, b, c, a *= b = c + 5);
}