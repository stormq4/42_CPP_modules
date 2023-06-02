#include <string>
#include <iostream>
#include <stack>

class RPN {
    public:
        RPN();
        ~RPN();
        RPN(RPN const & src);
        RPN & operator=(RPN const & rhs);

        void    push(double const & value);
        void    pop();
        void    add();
        void    sub();
        void    mul();
        void    div();

        void    run(std::string const & input);


    private:
        std::stack<double>   _stack;
};
