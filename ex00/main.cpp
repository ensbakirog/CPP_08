#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(3);
        vec.push_back(5);
        vec.push_back(7);

        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Found in vector: " << *it << std::endl;

        it = easyfind(vec, 9); // bulunamayacak
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);

        std::list<int>::iterator it2 = easyfind(lst, 20);
        std::cout << "Found in list: " << *it2 << std::endl;

        it2 = easyfind(lst, 99);
        std::cout << "Found in list: " << *it2 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}