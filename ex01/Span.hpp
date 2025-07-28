#ifndef SPAN_HPP
#define SPAN_HPP

    #include <vector>
    #include <algorithm>
    #include <stdexcept>

    class Span
    {
        private:
            std::vector<int> numbers;
            unsigned int max_size;

        public:
            Span();
            Span(unsigned int n);
            Span(const Span& other);
            const Span& operator=(const Span& other);
            ~Span();
            
            void addNumber(int number);
            int shortestSpan() const;
            int longestSpan() const;
            template <typename Iterator>
            void addRange(Iterator begin, Iterator end);
    };

#endif