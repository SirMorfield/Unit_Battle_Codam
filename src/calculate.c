#include <stddef.h>

/**
*	1. Spares
*	2. Strikes
**/

int calculate(unsigned int *arr, int count)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	if (arr == NULL)
		return (-1);

	while (i < count)
	{
		// spares
		if (i > 0 && arr[i] == 10 && arr[i - 1] == 10)
			sum += arr[i + 1];
		sum += arr[i];
		i++;
	}
	return (sum);
}
