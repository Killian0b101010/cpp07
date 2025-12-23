/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:58:11 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/22 02:48:39 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP
#include <cstddef>
#include <iostream>

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
    _array._arrLength = cpy._arrLength;
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
Array::size_t size(){return(_arrLength);}

#endif 