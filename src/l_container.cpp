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
        new_node->next = nullptr;
        new_node->data = el;
        m_last = new_node;
    }
        m_size += 1;
}

bool LinkedContainer::insert(const int el, const size_t pos)
{
    if (pos > m_size - 1) 
    {
        return false;
    }
    
    // find node on position pos
    Node *n_tmp;
    size_t index = 0;
    n_tmp = m_first;
    while (n_tmp->next != nullptr) 
    {
        if (index == pos)
        {
            break;
        } 
        n_tmp = n_tmp->next;
        index++;
    }

    Node *prev_tmp;
    Node * new_node = new Node{};

    prev_tmp = n_tmp->prev;
    new_node->prev = prev_tmp;
    new_node->next = n_tmp;
    n_tmp->prev = new_node;
    if (index == 0) 
    {
        m_first = new_node;
    } else 
    {
        prev_tmp->next = new_node;
    }

    new_node->data = el;
    m_size += 1;
    return true;
}

bool LinkedContainer::erase(const size_t pos) 
{
    if (pos > m_size - 1) 
    {
        return false;
    }
    
    Node *n_tmp, *prev_tmp, *next_tmp;

    size_t index = 0;
    n_tmp = m_first;
    while (n_tmp != nullptr) {
        if (index == pos)
        {
            break;
        } 
        n_tmp = n_tmp->next;
        index++;
    }

    prev_tmp = n_tmp->prev;
    next_tmp = n_tmp->next;
    prev_tmp->next = next_tmp;
    next_tmp->prev = prev_tmp;

    m_size -= 1;
    delete n_tmp;
    return true;
}

int LinkedContainer::get(const size_t pos) const 
{
    if (pos > m_size - 1) 
    {
        std::cout << "Too large value of position\n";
        return -1;
    }

    // find node on position pos
    Node *n_tmp;
    size_t index = 0;
    n_tmp = m_first;
    while (n_tmp->next != nullptr) 
    {
        if (index == pos)
        {
            break;
        } 
        n_tmp = n_tmp->next;
        index++;
    }

    return n_tmp->data;
}
    
int LinkedContainer::operator[](const size_t pos) const 
{
    if (pos > m_size - 1) 
    {
        std::cout << "Too large value of position\n";
        return -1;
    }

    // find node on position pos
    Node *n_tmp;
    size_t index = 0;
    n_tmp = m_first;
    while (n_tmp->next != nullptr) 
    {
        if (index == pos)
        {
            break;
        } 
        n_tmp = n_tmp->next;
        index++;
    }

    return n_tmp->data;
}

void LinkedContainer::show() const 
{
    std::cout << "Show l_cont: ";
    Node * n_tmp;
    n_tmp = m_first;
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
    std::cout << '\n';
}
    
size_t LinkedContainer::size() const 
{
    return m_size;
}