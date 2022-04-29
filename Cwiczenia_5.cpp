/ ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <vector>


template <typename T> int findBiggest(T a) {
int biggest = 0;
for (int i = 0; i < a.size(); i++)
{
if (biggest < a.at(i)) {
biggest = a.at(i);
}
}
return biggest;
}

template <typename T, typename FunType>std::vector<T> filter(const std::vector<T>& v, FunType p) {
std::vector<int> tmp;
for (int i = 0; i < v.size(); i++)
{
if (p(v.at(i)) == 1) {
tmp.push_back(v.at(i));
}
}
return tmp;
}

template <typename T, typename FunType1, typename FunType2>std::vector<T> transfilt(std::vector<T>& v, FunType1 t, FunType2 p) {
std::vector<int> tmp;
int temp = 0;

for (int i = 0; i < v.size(); i++)
{
temp = t(v.at(i));
if (p(temp) == true) {
tmp.push_back(temp);
}
}
return tmp;
}

int t(int tmp) {
return (tmp * 12) / 2;
}

int main() {


std::vector<int>tmp{ 1, 2, 2, 5561, 136, 71, 23 };

/*
std::vector<int> last = filter(tmp, [](int i) -> bool {
return i > 23;
});

for (int i = 0; i < last.size(); i++)
{
std::cout << last.at(i) << " ";
}
*/

std::vector<int> zadanie2_2 = transfilt(tmp, t, [](int i) -> bool {
return i > 120;
});

for (int i = 0; i < zadanie2_2.size(); i++)
{
std::cout << zadanie2_2.at(i) << " ";
}
}
