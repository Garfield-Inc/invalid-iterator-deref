#include <map>
#include <unordered_map>

int map_fun1(std::map<int, char>& cont)
{
	std::map<int, char>::iterator i = cont.begin();

	if ((*i).first < 100)
		return (*i).second;

	if (i->first < 100)
		return i->second;

	return 100;
}

int map_fun2(std::map<int, char>& cont)
{
	std::map<int, char>::iterator i = cont.begin();
	if ((i != cont.end()) && ((*i).first < 100))
		return (*i).second;
	return 100;
}

int map_fun3(std::unordered_map<int, char>& cont1, std::unordered_map<int, char>& cont2)
{
	std::unordered_map<int, char>::iterator i = cont1.begin();
	if ((i != cont2.end()) && ((*i).first < 100))
		return (*i).second;
	return 100;
}

int map_fun4(std::multimap<int, char>& cont1, std::multimap<int, char>& cont2)
{
	std::multimap<int, char>::iterator i = cont2.begin();
	if ((i != cont2.end()) && ((*i).first < 100))
		return (*i).second;
	return 100;
}

int map_fun5(std::unordered_multimap<int, char>& cont1, std::unordered_multimap<int, char>& cont2)
{
	std::unordered_multimap<int, char>::iterator i = cont2.begin();
	i = cont1.begin();
	if ((i != cont2.end()) && ((*i).first < 100))
		return (*i).second;
	return 100;
}