#include "l_container.hpp"
#include <iostream>

LinkedContainer::LinkedContainer() : m_size(0) 
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
    new_node.prev = m_last;
    new_node.next = nullptr;
    new_node.data = el;
    m_last = new_node;
    m_size += 1;

    // std::cout << "One element is added\n";
}