#include "s_container.hpp"
// #include <iostream>

template <typename T>
void SequentalContainer<T>::push_back(const T el)
{   
    T* tmp_arr = new T[m_size + 1];
    for (size_t i = 0; i < m_size; i++) 
    {
        tmp_arr[i] = m_arr[i];
    }
    tmp_arr[m_size] = el;
    delete [] m_arr;
    m_arr = tmp_arr;
    m_size += 1;
}

template <typename T>
bool SequentalContainer<T>::insert(const T el, const size_t pos) 
{   
    if (pos > m_size - 1) 
    {
        return false;
    }
    T* tmp_arr = new T[m_size + 1];
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

template <typename T>
bool SequentalContainer<T>::erase(const size_t pos) 
{
    if (pos >= m_size) 
    {
        return false;
    }
    T* tmp_arr = new T[m_size - 1];
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

template <typename T>
T SequentalContainer<T>::get(const size_t pos) const
{   
    if (pos > m_size - 1) 
    {
        std::cout << "Too large value of position\n";
        return -1;
    }
    return m_arr[pos];
}

template <typename T>
T SequentalContainer<T>::operator[](const size_t pos) const
{
    if (pos > m_size - 1) 
    {
        std::cout << "Too large value of position\n";
        return -1;
    }
    return m_arr[pos];
}

template <typename T>
void SequentalContainer<T>::show() const 
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