#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 0; i < 10; ++i)
        vec.push_back(i);


    for (int i = 0; i < 10; ++i)
        lst.push_back(i * 2);
    
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Found value in vector: " << *it << std::endl;

        std::list<int>::iterator lit = easyfind(lst, 6);
        std::cout << "Found value in list: " << *lit << std::endl;
        
        it = easyfind(vec, 10);
    }
    catch(const std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
