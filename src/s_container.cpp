#include "s_container.hpp"
#include <iostream>

SequentalContainer::SequentalContainer() : m_size(0) 
{
    m_arr = new int[0];
    // std::cout << "Container sequental is made\n";
}

void SequentalContainer::push_back(const int el) 
{   
    int * tmp_arr = new int[m_size + 1];
    for (size_t i = 0; i < m_size; i++) 
    {
        tmp_arr[i] = m_arr[i];
    }
    tmp_arr[m_size] = el;
    delete [] m_arr;
    m_arr = tmp_arr;
    m_size += 1;
    // std::cout << "One element is added\n";
}

bool SequentalContainer::insert(const int el, const size_t pos) 
{   
    if (pos > m_size - 1) 
    {
        return false;
    }
    int * tmp_arr = new int[m_size + 1];
    for (size_t i = 0; i < m_size + 1; i++)
     {
        if (i < pos) 
        {
            tmp_arr[i] = m_arr[i];
        } else if (i == pos)
        {
            tmp_arr[i] = el;
        } else 
        {
            tmp_arr[i] = m_arr[i - 1];
        }
    }

    delete [] m_arr;
    m_arr = tmp_arr;
    m_size += 1;

    return true;
}

bool SequentalContainer::erase(const size_t pos) 
{
    if (pos >= m_size) 
    {
        return false;
    }
    int * tmp_arr = new int[m_size - 1];
    for (size_t i = 0; i < m_size - 1; i++) 
    {   
        if (i < pos) 
        {
            tmp_arr[i] = m_arr[i];
        } else 
        {
            tmp_arr[i] = m_arr[i + 1];
        }
    }

    delete [] m_arr;
    m_arr = tmp_arr;
    m_size -= 1;

    return true;
}

int SequentalContainer::get(const size_t pos) const
{   
    if (pos > m_size - 1) 
    {
        std::cout << "Too large value of position\n";
        return -1;
    }
    return m_arr[pos];
}

int SequentalContainer::operator[](const size_t pos) const
{
    if (pos > m_size - 1) 
    {
        std::cout << "Too large value of position\n";
        return -1;
    }
    return m_arr[pos];
}

size_t SequentalContainer::size() const 
{
    return m_size;
}

void SequentalContainer::show() const 
{
    std::cout << "Show s_cont: ";
    for (size_t i = 0; i < m_size; i++) 
    {
        std::cout << m_arr[i];
        if (i < m_size - 1) 
        {
            std::cout << ", ";
        }
    }
    std::cout << '\n';
}