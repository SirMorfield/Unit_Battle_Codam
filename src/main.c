#include <stdio.h>
#include <limits.h>
#define MAX_INPUTS 21

int	main(int argc, char **argv)
{
	unsigned int	scores[MAX_INPUTS];
	size_t			i;
	int				score;

	if (argc > MAX_INPUTS + 1)
	{
		printf("Error");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (!parse_uint(argv[i], &scores[i], 0, ULONG_MAX))
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	score = calculate(scores, argc - 1);
	if (score < 0)
		printf("Error");
	else
		printf("%d", score);
	return (score >= 0);
}
