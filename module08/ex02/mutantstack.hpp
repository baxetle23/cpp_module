#pragma once
#include <list>

template <typename value_type>
class MutantStack : public std::list<value_type> {
public:
	MutantStack();
	MutantStack(int count);
	MutantStack(const MutantStack& other);
	~MutantStack();
	bool empty() const;
	size_t size() const;
	value_type& top();
	const value_type& top() const;
	void push (const value_type& val);
	void pop();

	typename MutantStack<value_type>::iterator begin() {
		return std::list<value_type>::begin();
	}
	typename MutantStack<value_type>::iterator end() {
		return std::list<value_type>::end();
	}
};

template <typename value_type>
MutantStack<value_type>::MutantStack() {
}
template <typename value_type>
MutantStack<value_type>::MutantStack(const MutantStack& other) {
	*this = other;
}
template <typename value_type>
MutantStack<value_type>::~MutantStack() {
}
template <typename value_type>
bool MutantStack<value_type>::empty() const {
	return std::list<value_type>::empty();
}
template <typename value_type>
size_t MutantStack<value_type>::size() const {
	return std::list<value_type>::size();
}
template <typename value_type>
value_type& MutantStack<value_type>::top() {
	return std::list<value_type>::back();
}
template <typename value_type>
const value_type& MutantStack<value_type>::top() const {
	return std::list<value_type>::back();
}
template <typename value_type>
void MutantStack<value_type>::push (const value_type& val) {
	return std::list<value_type>::push_back(val);
}
template <typename value_type>
void MutantStack<value_type>::pop() {
	return std::list<value_type>::pop_back();
}