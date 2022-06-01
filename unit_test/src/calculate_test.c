/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safoh <safoh@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:46:15 by safoh             #+#    #+#             */
/*   Updated: 2022/05/30 23:43:09 by safoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"


// double ft_pow(double x, double y)
// {
// 	return (x * y);
// }

// void	tester(double x, double y, double expected)
// {
// 	double submitted;
// 	submitted = ft_pow(x, y);
// 	cr_assert(submitted == expected,
// 		"Submitted:\t%f for %f to the power of %f\nExpected:\t%f\n",
// 		submitted, x, y, expected
// 		);
// }

// Test(Example_Tests, should_pass_all_tests_provided)
// {
// 	tester(1.0, 1.0, 1.0);
// }

int calculate(unsigned int *arr, int count);

void test_calculate(unsigned int *arr, int count, int expected)
{
	int submitted;
	submitted = calculate(arr, count);
	cr_assert(submitted == expected,
		"Submitted:\t%i with arguments arr: %p, count: %i\nExpected:\t%i\n",
		submitted, arr, count, expected
		);
}

Test(foo, calculate)
{
	unsigned int arr[] = {1, 2, 3};
	int count = 3;

	(void)arr;
	test_calculate(NULL, count, -1);

	unsigned int arr2[] = {9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0};
	test_calculate(arr2, 20, 90);

	unsigned int arr3[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
	test_calculate(arr3, 10, 300);
}
