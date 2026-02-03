#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

size_t	displayInteger(int value)
{
	size_t	size;

	if (value < 10)
	{
		putchar(0x30 + value);
		return (1);
	}
	size = displayInteger(value / 10);
	putchar(0x30 + value % 10);
	return (1 + size);
}

/*
 * This function is a very simplified version of printf.
 * The only supported formats are:
 *      %s : inject a string
 *      %d : inject an integer value
 *      %f : inject a double value
 */
int	myPrintf(const char *format, ...)
{
	va_list		parametersInfos;
	size_t		writtenCharacters;
	char		currentChar;
	int			integerValue;
	double		doubleValue;
	int			leftPart;
	const char	*string = (const char *)va_arg(parametersInfos, const char *);

	/* Initialize the va_list structure */
	va_start(parametersInfos, format);
	writtenCharacters = 0;
	while ((currentChar = *format) != '\0')
	{
		format++;
		if (currentChar != '%')
		{
			putchar(currentChar);
			writtenCharacters++;
			continue ;
		}
		switch (*format++)
		{
		case 'd':
		{
			integerValue = (int)va_arg(parametersInfos, int);
			writtenCharacters += displayInteger(integerValue);
		}
		break ;
		case 'f':
		{
			doubleValue = (double)va_arg(parametersInfos, double);
			leftPart = (int)doubleValue;
			writtenCharacters += displayInteger(leftPart);
			doubleValue -= leftPart;
			putchar('.');
			writtenCharacters++;
			while ((doubleValue - (int)doubleValue) > 10e-6)
			{
				doubleValue *= 10;
			}
			writtenCharacters += displayInteger((int)doubleValue);
		}
		break ;
		case 's':
		{
			while (*string != '\0')
			{
				putchar(*string++);
				writtenCharacters++;
			}
		}
		break ;
		default:
			fprintf(stderr, "Specified format is not supported!");
			abort();
		}
	}
	/* Release va_list resources */
	va_end(parametersInfos);
	return (writtenCharacters);
}

int	main(int argc, char *argv[])
{
	size_t size = myPrintf("Begin %s End\n", "Middle");
	return (EXIT_SUCCESS);
}