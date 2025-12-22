/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:53:03 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/22 03:10:48 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <array>
class Array
{
  private : 
  T *array; 
  public:
  Array();
  ~Array();
  Array(unsigned int n);
   &operator=(const Array &cpy);
  Array &operator[](const Array &cpy);
};
#endif