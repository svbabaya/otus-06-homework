#include "container.hpp"

#include <iostream>

Container::Container() : m_size(0) {
    ptr = new int[0];
}

Container::~Container() {
    delete [] ptr;
}

bool Container::push_back(const int el) 
{
    bool status = true;
    
    m_size++;
    int * tmp_ptr = new int[m_size];
    for (size_t i = 0; i < m_size - 1; i++) {
        tmp_ptr[i] = ptr[i];
    }
    tmp_ptr[m_size] = el;
    ptr = tmp_ptr;
    delete [] tmp_ptr;

    return status;
}