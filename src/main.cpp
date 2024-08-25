#include "s_container.hpp"
#include "l_container.hpp"

#include <iostream>
#include <vector>

int main(int argc, char * argv[]) 
{
    std::cout << "\nSequental container:\n";
    // tasks 1-4
    SequentalContainer s_cont;
    const std::vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int el : numbers) 
    {
        s_cont.push_back(el);
    }
    s_cont.show();
    std::cout << "Size of s_cont: " << s_cont.size() << '\n';

    // tasks 5-6
    const std::vector<size_t> positions = {3, 5, 7};
    int i = 0;
    for (int el : positions) 
    {
        i++;
        s_cont.erase(el - i);
    }
    s_cont.show();

    // task 7-8
    s_cont.insert(10, 0);
    s_cont.show();

    // task 9-10
    s_cont.insert(20, 4);
    s_cont.show();

    // task 11-12
    s_cont.push_back(30);
    s_cont.show();

    std::cout << "\nLinked container:\n";
    // tasks 1-4
    LinkedContainer l_cont;
    const std::vector<int> numbers2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int el : numbers2) 
    {
        l_cont.push_back(el);
    }
    l_cont.show();
    std::cout << "Size of l_cont: " << l_cont.size() << '\n';

     // tasks 5-6
    const std::vector<size_t> positions2 = {3, 5, 7};
    int i = 0;
    for (int el : positions2) 
    {
        i++;
        l_cont.erase(el - i);
    }
    l_cont.show();





    return EXIT_SUCCESS;
}