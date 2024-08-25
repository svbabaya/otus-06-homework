#pragma once
#include "i_container.hpp"

class SequentalContainer : public IContainer
{
public:
    SequentalContainer();
    ~SequentalContainer();
    void push_back(const int el) override;
    bool insert(const int el, const size_t pos) override;
    bool erase(const size_t pos) override;
    int get(const size_t pos) const override;
    int operator[](const size_t pos) const override;
    void show() const override;
    size_t size() const override;
private:    
    int * m_arr;
    size_t m_size;
};
