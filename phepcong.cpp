#include "phepcong.h"
#include <iostream>

phepcong::phepcong(const int a, const int b)
{
    std::cout << __FUNCTION__ << "__builtin_extract_return_addr(__builtin_return_address(0)): "
              << __builtin_extract_return_addr(__builtin_return_address(0))
              << &std::endl;
    std::cout << __FUNCTION__ << "__builtin_return_address(0): " << __builtin_return_address(0)
              << &std::endl;
    m_a=a;
    m_b=b;
    m_re = m_a+m_b;
}

int phepcong::get()
{
    return m_re;
}
