#pragma once
#include <iostream>

class Container 
{
public:
    virtual void push_back(const int el) = 0;
    virtual void insert(const int el) = 0;
    virtual void erase(const size_t pos) = 0;
    virtual int get(const size_t pos) const = 0;
    virtual int operator[](const size_t pos) const = 0;
    virtual size_t size() const = 0;
    virtual void show() const = 0;

};

class SequentalContainer : public Container
{
public:
    SequentalContainer();
    ~SequentalContainer();
    void push_back(const int el) override;
    void insert(const int el) override;
    void erase(const size_t pos) override;
    int get(const size_t pos) const override;
    int operator[](const size_t pos) const override;
    size_t size() const override;
    void show() const override;
    // void sort();
    // voide reverse();

private:
    int * m_arr;
    size_t m_size;
};

class ConnectedContainer : public Container
{
public:
    ConnectedContainer() {};

private:    

};