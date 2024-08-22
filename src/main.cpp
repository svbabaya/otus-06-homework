#include "container.hpp"
#include <iostream>

int main(int argc, char * argv[]) 
{
    SequentalContainer s_cont;

    s_cont.push_back(42);
    s_cont.push_back(3);
    s_cont.push_back(56);
    s_cont.push_back(23);

    std::cout << s_cont.size() << '\n';
    std::cout << s_cont.get(2) << '\n'; 

    return EXIT_SUCCESS;
}