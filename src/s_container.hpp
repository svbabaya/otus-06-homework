#pragma once
#include <cstddef>
#include <iostream>

template <typename T>
class SequentalContainer
{
public:
    SequentalContainer() : m_size{0}
    {
        m_arr = new T[0];
        // std::cout << "Sequental container is made\n";
    }
    ~SequentalContainer() 
    {
        delete[] m_arr;
        // std::cout << "Heap's data of sequental container is deleted\n";
        // std::cout << "Sequental container is deleted\n";
    }

    void push_back(const T el);
    void insert(const T el, const size_t pos);
    void erase(const size_t pos);
    T get(const size_t pos) const;
    T operator[](const size_t pos) const;
    void show() const;

    size_t size() const 
    {
        return m_size;
    }

private:   
    T* m_arr;
    size_t m_size;

};
