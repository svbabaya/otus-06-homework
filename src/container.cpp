#include "container.hpp"

#include <iostream>

SequentalContainer::SequentalContainer() : m_size(0) {
    m_arr = new int[0];
    std::cout << "Container is made\n";
}

SequentalContainer::~SequentalContainer() {
    delete [] m_arr;
    std::cout << "Container is deleted\n";
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
    m_size++;

    std::cout << "One element is added\n";
}

void SequentalContainer::insert(const int el) 
{
    // TODO
}

void SequentalContainer::erase(const size_t pos) 
{
    // TODO
}

int SequentalContainer::get(const size_t pos) const
{
    if (pos >= m_size) 
    {
        std::cout << "Wrong position" << '\n';
        return 0;
    } else 
    {
        return m_arr[pos];
    }
}

int SequentalContainer::operator[](const size_t pos) const
{
    return m_arr[pos];
}

size_t SequentalContainer::size() const 
{
        return m_size;
}