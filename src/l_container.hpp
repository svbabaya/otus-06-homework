#pragma once
#include <cstddef>
#include <iostream>

template <typename T>
class LinkedContainer
{
public:
    LinkedContainer() : m_size{0}, m_first{nullptr}, m_last{nullptr}  
    {
        std::cout << "Container linked is made\n";
    }
    ~LinkedContainer() 
    {
        std::cout << "Container linked is deleted\n";
    }

    void push_back(const T el);
    bool insert(const T el, const size_t pos);
    bool erase(const size_t pos);
    int get(const size_t pos) const;
    int operator[](const size_t pos) const;
    void show() const;

    size_t size() const 
    {
        return m_size;
    }

private:
    size_t m_size;  
    struct Node 
    {
        Node* next;
        Node* prev;
        T data;
    };

    Node* m_first;
    Node* m_last;
    Node* search(const size_t pos, Node* n) const;

};