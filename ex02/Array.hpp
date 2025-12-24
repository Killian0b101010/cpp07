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
#include <exception>

template <typename T>
class Array
{
  private : 
  
  T *_array;
  size_t _arrLength;
  
  public:
  Array();
  ~Array();
  Array(unsigned int n);
  Array(const Array &cpy);
  Array &operator=(const Array &cpy);
  T &operator[](size_t index);
  T const &operator[](size_t index)const ;
  size_t size()const;
};

template<typename T> 
Array <T>::Array() : _array(NULL), _arrLength(0)
{
    
}

template<typename T> 
Array<T>::~Array()
{
    delete _array;
}

template<typename T> 
Array<T>::Array(unsigned int n)
{
    _array = new T[n]();
    _arrLength = n;
}

template <typename T> 
Array<T>::Array(const Array &cpy)
{
    _arrLength = cpy._arrLength;
    _array = new T[_arrLength];
    for(size_t i = 0; i < cpy._arrLength;i++)
        _array[i] = cpy._array[i];
}

template <typename T> 
Array<T> &Array <T>::operator=(const Array &cpy)
{
    if(this != cpy)
    {
        delete _array; 
        _array = new T[_arrLength];
        cpy._array = new T[_arrLength];
        for(int i = 0; i < cpy._arrLength;i++)
            _array[i] = cpy._array[i];
    }
    return(*this);
}
template <typename T> 
T &Array<T>::operator[](size_t index)
{
    if(index >= _arrLength || index < 0)
        throw(std::out_of_range("index incorrect"));
    return(_array[index]);
}

template <typename T> 
T const &Array<T>::operator[](size_t index)const
{
     if(index >= _arrLength || index < 0)
        throw(std::out_of_range("index incorrect"));
    return(_array[index]);
}

template <typename T> 
size_t Array<T>::size() const {return(_arrLength);}
#endif