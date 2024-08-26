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
    if (!s_cont.insert(10, 0)) 
    {
        std::cout << "Too large value of position\n";
    }
    s_cont.show();

    // task 9-10
    if (!s_cont.insert(20, 4)) 
    {
        std::cout << "Too large value of position\n";
    }
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
    int j = 0;
    for (int el : positions2) 
    {
        j++;
        l_cont.erase(el - j);
    }
    l_cont.show();

    // task 7-8
    if (!l_cont.insert(10, 0)) 
    {
        std::cout << "Too large value of position\n";
    }
    l_cont.show();

    // task 9-10
    if (!l_cont.insert(20, 4)) 
    {
        std::cout << "Too large value of position\n";
    }
    l_cont.show();

    // task 11-12
    l_cont.push_back(30);
    l_cont.show();

    // std::cout << l_cont.get(5) << '\n';
    // std::cout << l_cont[5] << '\n';

    return EXIT_SUCCESS;
}

// int main(int argc, char * argv[]) 
// {
//     std::cout << "\nSequental container:\n";
//     SequentalContainer s_cont;
//     void test (s_cont);
//     std::cout << '\n';
//     std::cout << "\nLinked container:\n";
//     LinkedContainer l_cont;
//     void test (l_cont);

//     return EXIT_SUCCESS;
// }