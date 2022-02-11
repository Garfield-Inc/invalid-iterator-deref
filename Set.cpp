#include "Set.h"

int set_fun1(set<int>& cont)
{
	set<int>::iterator i = cont.begin();
	if (*i < 100)
	  return *i;
	return 100;
}

int set_fun2(set<int>& cont)
{
	set<int>::iterator i = cont.begin();
	if ((i != cont.end()) && (*i < 100))
		return *i;
	return 100;
}

int set_fun3(set<int>& cont1, set<int>& cont2)
{
	set<int>::iterator i = cont1.begin();
	if ((i != cont2.end()) && (*i < 100))
		return *i;
	return 100;
}

int set_fun4(unordered_set<int>& cont1, unordered_set<int>& cont2)
{
	unordered_set<int>::iterator i;
	unordered_set<int>::iterator j;

	i = cont1.begin();
	j = cont2.begin();

	if ((i != cont1.end()) && (*i < 100))
	{
		if (*j < 50)
			return *j;
		else
			return *i;
	}
	return 100;
}

int set_fun5(multiset<int>& cont1, multiset<int>& cont2)
{
	multiset<int>::iterator i;
	multiset<int>::iterator j;

	i = cont1.begin();
	j = cont2.begin();

	if ((i != cont1.end()) && (j != cont2.end()))
	{
		if (*j < 50)
			return *j;
		else
			return *i;
	}
	return 100;
}

int set_fun6(unordered_multiset<int>& cont1, unordered_multiset<int>& cont2)
{
	auto i = cont1.begin();
	auto j = cont2.begin();

	if ((i != cont2.end()) && (j != cont1.end()))
	{
		if (*j < 50)
			return *j;
		else
			return *i;
	}
	return 100;
}

int set_fun7(set<int>& cont)
{
	set<int>::iterator i = cont.begin();
	int num = 0;

	if ((i != cont.end()) && (*i < 100))
		return *i;

	if (i != cont.end())
	{
		if (*i < 100)
		{
			return *i;
		}

		while (*i < 100)
			return *i;
	}

	for (i = cont.begin(); i != cont.end(); i++)
		num = *i;

	for (i = cont.begin(); i != cont.begin(); i++)
		num = *i;

	return *i;
}


