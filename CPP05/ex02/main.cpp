/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:55:19 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/03 19:03:53 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "================[Form]Test1:easy test================" << std::endl;
	try {
        Bureaucrat bureaucrat("Test1", 5);
        Form form("Form1", 4, 4);
        bureaucrat.signForm(form);
        bureaucrat.incrementGrade();
        bureaucrat.signForm(form);
        bureaucrat.decrementGrade();
        bureaucrat.signForm(form);
        std::cout << form;
    } catch (std::exception &e) {
        std::cout << "Exception Catch: " << e.what() << std::endl;
    }
    std::cout << "================[Form]Test2:Too low================" << std::endl;
    try {
        Bureaucrat bureaucrat("Test2", 150);
        Form form("Form2", 151, 151);
        bureaucrat.signForm(form);
        std::cout << form;
    } catch (std::exception &e) {
        std::cout << "Exception Catch: " << e.what() << std::endl;
    }
    std::cout << "================[Form]Test3:Too high================" << std::endl;
    try {
        Bureaucrat bureaucrat("Test3", 1);
        Form form("Form3", 0, 0);
        bureaucrat.signForm(form);
        std::cout << form;
    } catch (std::exception &e) {
        std::cout << "Exception Catch: " << e.what() << std::endl;
    }
    std::cout << "================[Form]Test4:Copy================" << std::endl;
    try {
        Form form("Form4", 4, 4);
        Form form2(form);
        std::cout << form2;
    } catch (std::exception &e) {
        std::cout << "Exception Catch: " << e.what() << std::endl;
    }
    std::cout << "================[Form]Test5:Assign operator================" << std::endl;
    try {
        Form form("Form5", 4, 4);
        Form form2 = form;
        std::cout << form2;
    } catch (std::exception &e) {
        std::cout << "Exception Catch: " << e.what() << std::endl;
    }
	return (0);
}