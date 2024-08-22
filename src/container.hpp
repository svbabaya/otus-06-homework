#pragma once
#include <iostream>

class Container 
{
public:
    Container();
    ~Container();
    virtual bool push_back(const int el) = 0;
    virtual bool insert(const int el) = 0;
    virtual bool erase(const size_t pos) = 0;
    virtual bool get(const size_t pos, int & out) const = 0;
    virtual int operator[](const size_t pos) const = 0;
    size_t size() const 
    {
        return m_size;
    }

private:
    size_t m_size;
    int * ptr;
};

class SequentalContainer : public Container
{
public:
    SequentalContainer() {};

private: 

};

class ConnectedContainer : public Container
{
public:
    ConnectedContainer() {};

private:    

};