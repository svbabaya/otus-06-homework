#include "s_container.inl"
#include "l_container.inl"

#include <iostream>
#include <vector>

template <typename T>
void test(T& t) 
{
    // tasks 1-4
    const std::vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int el : numbers) 
    {
        t.push_back(el);
    }
    t.show();
    std::cout << "Size of container: " << t.size() << '\n';

    // tasks 5-6
    const std::vector<size_t> positions = {3, 5, 7};
    int i = 0;
    try
    {
        for (int el : positions) 
        {
            i++;
            t.erase(el - i);
        }
    }
    catch(const OutOfRangeException& ex)
    {
        std::cout << "Fault in arguments erase(). " << ex.getMessage() << '\n';
    }
    t.show();

    // task 7-8
    try 
    {
        t.insert(10, 0); 
    }
    catch(const OutOfRangeException& ex) 
    {
        std::cout << "Fault in arguments insert(). " << ex.getMessage() << '\n';
    }
    t.show();

    // task 9-10
    try
    {
        t.insert(20, 4);
    }
    catch(const OutOfRangeException& ex) 
    {
        std::cout << "Fault in arguments insert(). " << ex.getMessage() << '\n';
    }
    t.show();

    // task 11-12
    t.push_back(30);
    t.show();

    // check get() and operator[]
    try 
    {
        std::cout << "container.get(5): " << t.get(5) << '\n';
        std::cout << "container[5]: " << t[5] << '\n';
    }
    catch(const OutOfRangeException& ex) 
    {
        std::cout << "Fault in get() or operator[]. " << ex.getMessage() << '\n';
    }

}

int main(int argc, char* argv[]) 
{
    std::cout << "\nSequental container:\n";
    SequentalContainer<int> s_cont;
    test(s_cont);
    std::cout << "\nLinked container:\n";
    LinkedContainer<int> l_cont;
    test(l_cont);

    // Test for copy constructor
    // SequentalContainer<int> a;
    // a.push_back(10);
    // a.push_back(20);
    // a.show();
    // SequentalContainer<int> b{a};
    // b.show();

    // Test for copy assignment operator
    // SequentalContainer<int> c;
    // c.push_back(30);
    // c.push_back(40);
    // c.show();
    // SequentalContainer<int> d;
    // d = c;
    // d.show();

    std::cout << '\n';

    return EXIT_SUCCESS;
}
