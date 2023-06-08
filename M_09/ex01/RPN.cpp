#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const & src) {
    *this = src;
}

RPN & RPN::operator=(RPN const & rhs) {
    this->_stack = rhs._stack;
    return *this;
}

void    RPN::push(double const & value) {
    this->_stack.push(value);
}

double	RPN::topRPN() {
	if (this->_stack.empty())
		throw std::runtime_error("Error");
	return this->_stack.top();
}

void    RPN::add() {
    double  a = topRPN();
    this->_stack.pop();
    double  b = topRPN();
    this->_stack.pop();
    this->_stack.push(a + b);
}

void    RPN::sub() {
    double  a = topRPN();;
    this->_stack.pop();
    double  b = topRPN();;
    this->_stack.pop();
    this->_stack.push(b - a);
}

void    RPN::mul() {
    double  a = topRPN();;
    this->_stack.pop();
    double  b = topRPN();;
    this->_stack.pop();
    this->_stack.push(a * b);
}

void    RPN::div() {
    double  a = topRPN();;
    this->_stack.pop();
    double  b = topRPN();;
    this->_stack.pop();
    this->_stack.push(b / a);
}

void    RPN::run(std::string const & input) {
	if (input.empty()) {
		std::cerr << "Error" << std::endl;
        return ;
	}
    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == ' ')
            continue ;
        if (input[i] >= '0' && input[i] <= '9') {
            this->push(input[i] - '0');
        } else if (input[i] == '+') {
            this->add();
        } else if (input[i] == '-') {
            this->sub();
        } else if (input[i] == '*') {
            this->mul();
        } else if (input[i] == '/') {
            this->div();
        } else {
            std::cerr << "Error" << std::endl;
            return ;
        }
    }
	if (this->_stack.size() != 1) {
		std::cerr << "Error" << std::endl;
        return ;
	}
	if (this->_stack.top() > INT32_MAX || this->_stack.top() < INT32_MIN ){
		std::cerr << "Error" << std::endl;
        return ;
	}
    std::cout << static_cast<int>(this->_stack.top()) << std::endl;
}
