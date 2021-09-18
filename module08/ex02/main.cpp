#include "mutantstack.hpp"
#include <iostream>
#include <random>
#include <ctime>

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	MutantStack<int> s(mstack);
// 	std::cout << s.size() << std::endl;
// 	return 0;
// }

int main (){
	MutantStack<int> mstack;
	std::cout << std::boolalpha << mstack.empty() << std::endl;
	std::srand(std::time(nullptr));
	for(size_t i = 0; i < 20; ++i) {
		int random_variable = std::rand();
		mstack.push(random_variable % 100);
	}
	std::cout << std::boolalpha << mstack.empty() << std::endl;
	std::cout << "Print stack!\n";
	for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
		std::cout << *begin << ' ';
	}
	std::cout << std::endl;
	std::cout << "Size: " <<mstack.size() << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	std::cout << "Print stack after 4 delete element!\n";
	for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
		std::cout << *begin << ' ';
	}
	std::cout << std::endl;
	std::cout << "Size: " <<mstack.size() << std::endl;
}