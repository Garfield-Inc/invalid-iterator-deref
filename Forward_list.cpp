#include <forward_list>

int forwardlist_fun1(std::forward_list<int>& cont)
{
	std::forward_list<int>::iterator i = cont.begin();
	*i = 900;
	if (*i < 100)
		return *i;

	return 100;
}

int forwardlist_fun2(std::forward_list<int>& cont)
{
	std::forward_list<int>::iterator i = cont.begin();
	if (i != cont.end() && *i < 100)
		return *i;

	return 100;
}