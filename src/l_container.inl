#include "l_container.hpp"
#include "outofrangeexception.hpp"

template <typename T>
void LinkedContainer<T>::push_back(const T el) 
{   
    Node* new_node = new Node{};
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

template <typename T>
void LinkedContainer<T>::insert(const T el, const size_t pos)
{
    if (pos > m_size - 1) 
    {
        throw OutOfRangeException("Position is out of range!");
    }
    
    // find node on position pos
    Node* n_tmp = search(pos, n_tmp);

    Node* prev_tmp;
    Node* new_node = new Node{};

    prev_tmp = n_tmp->prev;
    new_node->prev = prev_tmp;
    new_node->next = n_tmp;
    n_tmp->prev = new_node;
    if (pos == 0) 
    {
        m_first = new_node;
    } else 
    {
        prev_tmp->next = new_node;
    }

    new_node->data = el;
    m_size += 1;
}

template <typename T>
void LinkedContainer<T>::erase(const size_t pos) 
{
    if (pos > m_size - 1) 
    {
        throw OutOfRangeException("Position is out of range!");
    }
    
    Node* prev_tmp;
    Node* next_tmp;

    // find node on position pos
    Node* n_tmp = search(pos, n_tmp);

    prev_tmp = n_tmp->prev;
    next_tmp = n_tmp->next;
    prev_tmp->next = next_tmp;
    next_tmp->prev = prev_tmp;

    m_size -= 1;
    delete n_tmp;
}

template <typename T>
T LinkedContainer<T>::get(const size_t pos) const 
{
    if (pos > m_size - 1) 
    {
        throw OutOfRangeException("Position is out of range!");
    }

    // find node on position pos
    Node* n_tmp = search(pos, n_tmp);

    return n_tmp->data;
}

template <typename T>  
T LinkedContainer<T>::operator[](const size_t pos) const 
{
    if (pos > m_size - 1) 
    {
        throw OutOfRangeException("Position is out of range!");
    }

    // find node on position pos
    Node* n_tmp = search(pos, n_tmp);

    return n_tmp->data;
}

template <typename T>
void LinkedContainer<T>::show() const 
{
    std::cout << "Show l_cont: ";
    Node* n_tmp;
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

template <typename T>
typename LinkedContainer<T>::Node* LinkedContainer<T>::search(const size_t pos, Node* n_ptr) const
{
    size_t index = 0;
    n_ptr = m_first;
    while (n_ptr->next != nullptr) 
    {
        if (index == pos)
        {
            break;
        } 
        n_ptr = n_ptr->next;
        index++;
    }
    return n_ptr;
}
