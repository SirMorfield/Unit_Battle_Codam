/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unit_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 16:46:15 by safoh         #+#    #+#                 */
/*   Updated: 2022/06/01 16:32:16 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "../../include/main.h"

void	string_to_num_tester(const char *input, unsigned int expected, bool func_return);

Test(string_to_num, should_pass_all_tests_provided)
{
	string_to_num_tester("100", 100, true);
	string_to_num_tester("10", 10, true); 
	string_to_num_tester("1000", 1000, true);
	string_to_num_tester("1001", 1001, true);

	string_to_num_tester("-0", 1001, false);
	string_to_num_tester("-9999", 1001, false);
	string_to_num_tester("9999999999999999999", 1001, false);
	
}

void	string_to_num_tester(const char *input, unsigned int expected, bool func_return)
{
	unsigned int min = 0;
	unsigned int max = 20000000;

	unsigned int result;
	
	bool output = parse_uint(input, &result, min, max);

	if (output == true)
	{
		cr_assert(output == func_return, "Submitted: %s as an input and expected the function return to be %i", input, func_return);
	}
	cr_assert(result == expected, "Submitted: %s as an input and expected %i", input, expected);
}
