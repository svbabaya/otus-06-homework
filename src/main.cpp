#include <iostream>

template <typename T>
class Container {
public:
    Container() : m_size(0) {}
    bool push_back(const T & t) = 0;
    bool insert(const T & t) = 0;
    bool erase(const size_t pos) = 0;
    bool get(const size_t pos, T & out) const = 0;
    // T operator[](const size_t pos) const = 0;
    size_t size() const {
        return m_size;
    }

private:
    size_t m_size;

};

template <typename T>
class SequentalContainer : public Container<T> {
public:
    SequentalContainer() {}

private: 

};

template <typename T>
class ConnectedContainer : public Container<T> {
public:
    ConnectedContainer() {}

private:    

};



int main(int argc, char * argv[]) {


    return EXIT_SUCCESS;
}