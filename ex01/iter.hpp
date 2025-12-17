/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:11:31 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/08 17:41:28 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
template <typename T, typename F>

void iter(T *array, std::size_t length, F func) {
  for (size_t i = 0; i < length; i++) {
    func(array[i]);
  }
};
#endif
