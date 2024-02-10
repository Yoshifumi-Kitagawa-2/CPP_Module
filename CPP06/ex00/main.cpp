/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:08:53 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/10 18:49:04 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	//if (argc != 2)
	//{
	//	std::cerr << "Invalid argments. Please Input like ./conver something." << std::endl;
	//	return (EXIT_FAILURE);
	//}
	//ScalarConverter ScalarConvert(argv[1]);
	//int i = ScalarConvert.getType();
	//std::cout << i << std::endl;
	//std::cout << ScalarConvert;
	(void) argc;
	(void) argv;
	//test case
	std::cout << "=====test case1=====" << std::endl;
	ScalarConverter test1("0");
	std::cout << test1;
	std::cout << "=====test case2=====" << std::endl;
	ScalarConverter test2("0.0");
	std::cout << test2;
	std::cout << "=====test case3=====" << std::endl;
	ScalarConverter test3("0.0f");
	std::cout << test3;
	std::cout << "=====test case4=====" << std::endl;
	ScalarConverter test4("42.0f");
	std::cout << test4;
	std::cout << "=====test case5=====" << std::endl;
	ScalarConverter test5("42.0");
	std::cout << test5;
	std::cout << "=====test case6=====" << std::endl;
	ScalarConverter test6("nan");
	std::cout << test6;
	std::cout << "=====test case7=====" << std::endl;
	ScalarConverter test7("nanf");
	std::cout << test7;
	std::cout << "=====test case8=====" << std::endl;
	ScalarConverter test8("+inf");
	std::cout << test8;
	std::cout << "=====test case9=====" << std::endl;
	ScalarConverter test9("+inff");
	std::cout << test9;
	std::cout << "=====test case10=====" << std::endl;
	ScalarConverter test10("-inf");
	std::cout << test10;
	std::cout << "=====test case11=====" << std::endl;
	ScalarConverter test11("-inff");
	std::cout << test11;
	std::cout << "=====test case12=====" << std::endl;
	ScalarConverter test12("a");
	std::cout << test12;
	std::cout << "=====test case13=====" << std::endl;
	ScalarConverter test13("aaa");
	std::cout << test13;
	std::cout << "=====test case14=====" << std::endl;
	//intMax
	ScalarConverter test14("2147483647");
	std::cout << test14;
	std::cout << "=====test case15=====" << std::endl;
	//intMin
	ScalarConverter test15("-2147483648");
	std::cout << test15;
	std::cout << "=====test case16=====" << std::endl;
	//floatMax
	ScalarConverter test16("340282346638528859811704183484516925440.0f");
	std::cout << test16;
	std::cout << "=====test case17=====" << std::endl;
	//floatMin
	ScalarConverter test17("-340282346638528859811704183484516925440.0f");
	std::cout << test17;
	std::cout << "=====test case18=====" << std::endl;
	//doubleMax
	ScalarConverter test18("179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0");
	std::cout << test18;
	std::cout << "=====test case19=====" << std::endl;
	//doubleMin
	ScalarConverter test19("-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0");
	std::cout << test19;
	return (0);
}