#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main()
{
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "top = " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "size = " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(-12);
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack <int>	s(mstack);
	}
	{
		std::vector<int>	mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "top = " << *(mstack.end() - 1) << std::endl;

		mstack.pop_back();

		std::cout << "size = " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(-12);
		mstack.push_back(0);

		std::vector<int>::iterator	it = mstack.begin();
		std::vector<int>::iterator	ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

	}
	MutantStack<int> object;
	object.push(0);
	object.push(7);
	object.push(2);
	object.push(3);
	object.push(8);
	object.push(5);

	std::cout << "Result : ";
	for (MutantStack<int>::const_iterator it = object.begin(); it != object.end(); it++)
	{
		if (it != object.begin())
			std::cout << " · ";
		std::cout << *it;
	}
	std::cout << std::endl;
}
