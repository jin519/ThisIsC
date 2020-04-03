#include <stdio.h>
#include <stdarg.h>

double mySum(const char* format, ...) 
{
	va_list pa;
	double tot = 0;

	va_start(pa, format);

	while (*format) 
	{
		if (*format == 'd')
			tot += va_arg(pa, int);
		else if (*format == 'f')
			tot += va_arg(pa, double);

		format++;
	}

	va_end(pa);

	return tot; 
}

int main() 
{
	double res; 

	res = mySum("ddff", 1, 2, 3.0, 4.5);
	printf("res: %.1lf\n", res); 

	return 0; 
}
