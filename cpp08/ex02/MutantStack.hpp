#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack(void) {};
		MutantStack(const MutantStack & src) : std::stack<T>(src){};
		virtual ~MutantStack(void) {};
		MutantStack & operator=(const MutantStack & rhs){
			if (this != rhs){
				std::stack<T>::operator=(rhs);
			}
			return *this;
		}

		iterator begin() {return std::stack<T>::c.begin(); }
		iterator end() {return std::stack<T>::c.end(); }
		const_iterator begin() const { return std::stack<T>::c.begin(); }
		const_iterator end() const {return std::stack<T>::c.end(); }

		reverse_iterator rbegin() {return std::stack<T>::c.rbegin();}
		reverse_iterator rend() {return std::stack<T>::c.rend(); }
		const_reverse_iterator rbegin() const {return std::stack<T>::c.rbegin();}
		const_reverse_iterator rend() const {return std::stack<T>::c.rend(); }
};

#endif
