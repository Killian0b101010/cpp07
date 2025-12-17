/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:06:58 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/08 15:31:30 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>

void swap(T &a, T &b) {
  T temp;

  temp = a;
  a = b;
  b = temp;
}

template <typename T> T min(T &a, T &b) {
  T min;
  return (min = a < b ? a : b);
}

template <typename T> T max(T &a, T &b) {
  T max;
  return (max = a > b ? a : b);
}
