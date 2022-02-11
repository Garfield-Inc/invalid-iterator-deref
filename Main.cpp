#include "Vector.h"

int main()
{
	Xyz some_vec;
	std::vector<int>::iterator i = some_vec.m_cont1.begin();
	std::vector<int>::iterator j;

	if (*i < 100)
		return *i;

	for (j = some_vec.m_cont1.begin(); j != some_vec.m_cont1.end(); j++)
	{
		*j = 100;
	}
	return 0;
}