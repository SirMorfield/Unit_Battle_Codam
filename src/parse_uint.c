#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <ctype.h>

unsigned long	ft_strtonum_u(const char *str)
{
	unsigned long	result;

	if (*str == '+')
		str++;
	result = 0;
	while (isdigit(*str))
	{
		result *= 10;
		result += (unsigned long)(*str - '0');
		str++;
	}
	return (result);
}

// true on success
bool parse_uint(const char *s, unsigned int *result,\
	unsigned int min, unsigned int max)
{
	size_t	i;
	long	num;

	if (s[0] == '\0')
		return (false);
	i = s[0] == '+';
	while (isdigit(s[i]))
		i++;
	if (s[i] != '\0')
		return (false);
	num = ft_strtonum_u(s);
	if (num > max || num < min)
		return (false);
	return (num);
}
