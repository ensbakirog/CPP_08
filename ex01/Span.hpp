#ifndef SPAN_HPP
#define SPAN_HPP

	#include <vector>
	#include <stdexcept>
	#include <algorithm>

	class Span
	{
	private:
	    unsigned int _maxSize;
	    std::vector<int> _numbers;

	public:
		Span();
	    Span(unsigned int capacity);
	    Span(const Span& other);
	    Span& operator=(const Span& other);
	    ~Span();

	    void addNumber(int num);

	    template <typename Iterator>
	    void addRange(Iterator begin, Iterator end)
	    {
	        if (_numbers.size() + std::distance(begin, end) > _maxSize)
	            throw std::runtime_error("Not enough capacity to add range");
	        _numbers.insert(_numbers.end(), begin, end);
	    }

	    int shortestSpan() const;
	    int longestSpan() const;
	};

#endif
