/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unit_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 16:46:15 by safoh         #+#    #+#                 */
/*   Updated: 2022/06/01 15:48:39 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

void	string_to_num_tester(const char *input, unsigned int expected);
bool	parse_uint(const char *s, unsigned int *result, int min, int max);


Test(string_to_num, should_pass_all_tests_provided)
{
	string_to_num_tester("100", 100);
	string_to_num_tester("10", 10);
	string_to_num_tester("1000", 1000);
	string_to_num_tester("1001", 1001);
}

bool	parse_uint(const char *s, unsigned int *result, int min, int max)
{
	(void)s;
	(void)result;
	(void)min;
	(void)max;
	return (false);
}

void	string_to_num_tester(const char *input, unsigned int expected)
{
	int min = 0;
	int max = 20000000;

	unsigned int result;
	
	bool output = parse_uint(input, &result, min, max);
	(void)output;
	cr_assert(result == expected, "Submitted: %s as an input and expected %i", input, expected);
}

// void	tester(double x, double y, double expected);

// double ft_pow(double x, double y)
// {
// 	return (x * y);
// }

// Test(Example_Tests, should_pass_all_tests_provided)
// {
// 	tester(1.0, 1.0, 1.0);
// }

// void	tester(double x, double y, double expected)
// {
// 	double submitted;
// 	submitted = ft_pow(x, y);
// 	cr_assert(ft_pow(x, y) == expected,
// 		"Submitted:\t%f for %f to the power of %f\nExpected:\t%f\n",
// 		submitted, x, y, expected
// 		);
// }
