#include "Span.hpp"
#include <iostream>

Span::Span() : max_size(0) {}

Span::Span(unsigned int n) : max_size(n) {}

Span::Span(const Span& other) : numbers(other.numbers), max_size(other.max_size) {}

const Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        numbers = other.numbers;
        max_size = other.max_size;
    }

    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (numbers.size() >= max_size)
        throw std::overflow_error("Span is full! Cannot add more numbers.");

    numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span.");

    std::vector<int> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());

    int min_span = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted_numbers.size(); ++i)
    {
        int span = sorted_numbers[i] - sorted_numbers[i - 1];
        if (span < min_span)
            min_span = span;
    }

    return min_span;
}