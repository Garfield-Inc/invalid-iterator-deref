#include <list>

int list_fun1(std::list<int>& cont)
{
	std::list<int>::iterator i = cont.begin();
	if (*i < 100)
		return *i;

	return 100;
}

int list_fun2(std::list<int>& cont)
{
	std::list<int>::iterator i = cont.begin();
	if (i != cont.end() && *i < 100)
		return *i;

	return 100;
}