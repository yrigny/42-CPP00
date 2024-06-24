/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:22:21 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/24 18:22:27 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void print_upper_case(std::string str) {
    for (unsigned long i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
    std::cout << str;
}

int main(int ac, char **av) {
    for (int i = 1; i < ac; i++)
        print_upper_case(av[i]);
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
