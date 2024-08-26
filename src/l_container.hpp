#pragma once
#include "i_container.hpp"

class LinkedContainer : public IContainer
{
public:
    LinkedContainer();
    void push_back(const int el) override;
    bool insert(const int el, const size_t pos) override;
    bool erase(const size_t pos) override;
    int get(const size_t pos) const override;
    int operator[](const size_t pos) const override;
    void show() const override;
    size_t size() const override;
private:    
    size_t m_size;
    struct Node 
    {
        Node * next;
        Node * prev;
        int data;
    };
    Node * m_first;
    Node * m_last;

};