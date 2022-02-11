#include <deque>

int deque_fun1(std::deque<int>& cont)
{
	std::deque<int>::iterator i = cont.begin();
	if (*i < 100)
		return *i;
	if (*i < 100 && i != cont.end())
	{
		while (*i < 50)
		{
			if (*i < 30)
				return *i;
		}
	}
	if (*i < 100)
	{
		if (i != cont.end())
		{
			return *i;
		}
	}
	return 100;
}

int deque_fun2(std::deque<int>& cont)
{
	std::deque<int>::iterator i = cont.begin();
	if (i != cont.end() && *i < 100)
		return *i;

	return *i;
}
