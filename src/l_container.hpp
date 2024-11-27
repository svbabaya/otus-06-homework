#pragma once
#include <cstddef>
#include <iostream>

template <typename T>
class LinkedContainer
{
public:
    LinkedContainer() : m_size{0}, m_first{nullptr}, m_last{nullptr}  
    {
        // std::cout << "Linked container is made\n";
    }
    ~LinkedContainer() 
    {
        // Delete heap's data
        Node* del_ptr = m_first;
        Node* next_node = nullptr;
        do 
        {
            next_node = del_ptr->next;
            delete del_ptr;
            del_ptr = next_node;
        }
        while (del_ptr->next != nullptr);

        // std::cout << "Heap's data of linked container is deleted\n";
        // std::cout << "Linked container is deleted\n";
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
    size_t m_size;  
    struct Node 
    {
        Node* next;
        Node* prev;
        T data;
    };

    Node* m_first;
    Node* m_last;
    Node* search_2(const size_t pos) const;

};
