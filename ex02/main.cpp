#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define MAX_VAL 10

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout << GREEN  <<"[" << i << "]"<<  numbers[i] << " " << RESET << std::endl;
        std::cout << CYAN  <<"[" << i << "]"<<  mirror[i] << " " << RESET << std::endl;
    }
    
      Array<int> tmp = numbers;
      Array<int> test(tmp);
    
  std::cout << "Test operateur = et constructeur de copie" << std::endl;
   for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << GREEN << tmp[i] <<  std::endl;
        std::cout << CYAN <<  test[i] <<  std::endl;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED << "didn't save the same value!!" << RESET << std::endl;
            return 1;
        }
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (test[i] != tmp[i])
        {
            std::cerr << RED << "didn't save the same value!!" << RESET << std::endl;
            return 1;
        }
    }
    std::cout << RED << "Test try catch" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
        std::cout << GREEN  <<"[" << i << "]"<<  numbers[i] << " " << RESET << std::endl;
    }
    tmp = numbers;
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        tmp[i] = rand();
        std::cout << GREEN  <<"[" << i << "]"<<  numbers[i] << " " << RESET << std::endl;
    }
    delete [] mirror;
    return 0;
}