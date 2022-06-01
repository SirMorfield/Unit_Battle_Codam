#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <ctype.h>

// true on success
bool	ft_strtonum_u(const char *str, unsigned int *result)
{
	unsigned int	prev;

	if (*str == '+')
		str++;
	*result = 0;
	while (isdigit(*str))
	{
		prev = *result;
		*result *= 10;
		*result += (unsigned int)(*str - '0');
		if (*result < prev)
			return (false);
		str++;
	}
	return (true);
}

// true on success
bool parse_uint(const char *s, unsigned int *result,\
	unsigned int min, unsigned int max)
{
	size_t			i;

	if (s[0] == '\0')
		return (false);
	i = s[0] == '+';
	while (isdigit(s[i]))
		i++;
	if (s[i] != '\0')
		return (false);
	if (!ft_strtonum_u(s, result))
		return (false);
	if (*result > max || *result < min)
		return (false);
	return (true);
}
