#include "l_container.hpp"
#include <iostream>

LinkedContainer::LinkedContainer() : m_size(0), m_first(nullptr), m_last(nullptr)
{
    // std::cout << "Container is made\n";
}

LinkedContainer::~LinkedContainer() 
{
    // std::cout << "Container is deleted\n";
}

void LinkedContainer::push_back(const int el) 
{   
    Node * new_node = new Node{};
    if (m_size == 0) 
    {
       m_first = new_node;
       m_last = new_node;
       new_node->prev = nullptr; 
       new_node->next = nullptr;
    } else 
    {
        new_node->prev = m_last;
        m_last->next = new_node;
        //std::cout << "m_last->next=" << m_last->next << '\n';
        new_node->next = nullptr;
        new_node->data = el;
        m_last = new_node;
    }
        m_size += 1;

    // std::cout << "m_size=" << m_size << '\n';
    // std::cout << "m_first=" << m_first << '\n';
    // std::cout << "m_last=" << m_last << '\n';
    // std::cout << "new_node->prev=" << new_node->prev << '\n';
    // std::cout << "new_node->next=" << new_node->next << '\n';
    // std::cout << "new_node->data=" << new_node->data << '\n';
    // std::cout << "*****" << '\n';


    //std::cout << "One element is added\n";
}

bool LinkedContainer::insert(const int el, const size_t pos)
{
    return true;
}

bool LinkedContainer::erase(const size_t pos) 
{
    return true;
}

int LinkedContainer::get(const size_t pos) const 
{
    return 1;
}
    
int LinkedContainer::operator[](const size_t pos) const 
{
    return 1;
}

void LinkedContainer::show() const 
{
    std::cout << "Show l_cont: ";
    Node * n_tmp = new Node{};
    n_tmp = m_first;
    //std::cout << "m_first = " << m_first << '\n';
    //std::cout << "n_tmp = " << n_tmp << '\n'; 
    //std::cout << "n_tmp->next = " << n_tmp->next << '\n';
    //std::cout << "m_first->data = " << m_first->data << '\n';
    //std::cout << "m_first->next = " << m_first->next << '\n';

    while (n_tmp != nullptr) 
    {
        std::cout << n_tmp->data;
        n_tmp = n_tmp->next;
        if (n_tmp == nullptr)
        {
            break;
        } 
        std::cout << ", ";
    }
    delete n_tmp;
    std::cout << '\n';
}
    
size_t LinkedContainer::size() const 
{
    return m_size;
}