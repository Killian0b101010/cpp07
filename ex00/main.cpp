/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:09:58 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/08 15:33:05 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void) {
  int x = 15;
  int y = 10;

  std::string a = "Killian";
  std::string b = "Teixeira";
  std::cout << "After swap" << std::endl;
  std::cout << x << " " << y << std::endl;
  std::cout << a << " " << b << std::endl;
  std::cout << "Valeurs min est = " << min(x, y) << std::endl;
  std::cout << "Valeurs max est = " << max(y, x) << std::endl;
  std::cout << "Valeurs min est = " << min(a, b) << std::endl;
  std::cout << "Valeurs max est = " << max(a, b) << std::endl;
  swap(x, y);
  swap(a, b);
  std::cout << x << " " << y << std::endl;
  std::cout << a << " " << b << std::endl;
}
