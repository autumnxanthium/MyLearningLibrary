#include <stdio.h>

int main()
{
	char s;
	long double b = 0;
	long double a = 0;
	while(1)
	{
		if (getchar() == 'n')
		{
			break;
		}
		b++;
		a = a + (1 / b);
		printf("%f\n", a);	
	}
	return a;
}