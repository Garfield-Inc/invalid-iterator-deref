#include "Vector.h"

int Xyz::vector_fun1()
{
	std::vector<int>::iterator i = m_cont1.begin();
	*i = 100;
	if (*i < 100)
		return *i;
	return *i;
}

int Xyz::vector_fun2()
{
	std::vector<int>::iterator i = m_cont1.begin();
	if ((i != m_cont1.end()) && (*i < 100))
		return *i;
	return *i;
}

typedef std::vector<int>::iterator abc;

int Xyz::vector_fun3()
{
	abc i = m_cont1.begin();
	std::vector<int> cont2;
	if (*i < 100 && i != cont2.end())
	{
		return *i;
	}
	return 100;
}

using myvec = std::vector<int>;

int Xyz::vector_fun4()
{
	myvec cont1 = { 1, 2, 3 };
	myvec cont2 = { 4, 5, 6 };

	for (auto i = cont1.begin(); i != cont2.end(); i++)
	{
		if (*i < 100)
			return *i;
	}
	return 0;
}
