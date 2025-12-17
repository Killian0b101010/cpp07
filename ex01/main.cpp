/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:25:26 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/13 17:39:25 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"
#include <iterator>
void toMaj(char &c) {
  c = std::toupper(c);
  std::cout << c;
}
void toMin(char &c) {
  c = std::tolower(c);
  std::cout << c;
}

void ft_modify(int &n) { n = 42; }

void ft_print_string(std::string &str) { std::cout << str << std::endl; }

void ft_print_int(int &n) { std::cout << n << std::endl; }

int main(void) {
  int n[] = {15, 12, 13, 14};
  std::string test = "test";
  ::iter(&test[0], 4, toMaj);
  std::cout << std::endl;
  ::iter(&test[0], 4, toMin);
  ::iter(&n[2], 4, ft_modify);
  ::iter(n, 4, ft_print_int);
}
