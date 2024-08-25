#pragma once
#include <cstddef>

class IContainer 
{
public:
    virtual void push_back(const int el) = 0;
    virtual bool insert(const int el, const size_t pos) = 0;
    virtual bool erase(const size_t pos) = 0;
    virtual int get(const size_t pos) const = 0;
    virtual int operator[](const size_t pos) const = 0;
    virtual size_t size() const = 0;
    virtual void show() const = 0;
};