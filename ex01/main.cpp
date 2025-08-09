#include <iostream>
#include "Span.hpp"

int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << '\n';
        std::cout << "Longest span: " << sp.longestSpan() << '\n';
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Span bigSpan(100);
        std::vector<int> data;
        for (int i = 0; i < 100; ++i)
            data.push_back(i * 2);

        bigSpan.addRange(data.begin(), data.end());

        std::cout << "Big span shortest: " << bigSpan.shortestSpan() << '\n';
        std::cout << "Big span longest: " << bigSpan.longestSpan() << '\n';
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}