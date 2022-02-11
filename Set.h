#pragma once

#include <set>
#include <unordered_set>
using namespace std;

int set_fun1(set<int>& cont);
int set_fun2(set<int>& cont);
int set_fun3(set<int>& cont1, set<int>& cont2);
int set_fun4(unordered_set<int>& cont1, unordered_set<int>& cont2);
int set_fun5(multiset<int>& cont1, multiset<int>& cont2);
int set_fun6(unordered_multiset<int>& cont1, unordered_multiset<int>& cont2);