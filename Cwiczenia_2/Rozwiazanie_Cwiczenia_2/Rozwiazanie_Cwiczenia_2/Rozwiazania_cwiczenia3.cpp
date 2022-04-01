#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void zadanie1();
void printVector(std::vector<std::string> tmp);
void zadanie2(std::vector<std::string> vector);

bool policy(std::string s) {
	unsigned char first = s[0];
	return (first >= 'A' && first <= 'Z');
}

int main() {
	
	
	zadanie1();
	
	std::string s1 = "Ala";
	std::string s2 = "ma"; //Should return Ala Kota ma
	std::string s3 = "Kota";

	std::vector<std::string> vector = { s1,s2,s3 };

	//zadanie2(vector);
	return 0;
}

void printVector(std::vector<std::string> tmp) {
	for (int i = 0; i < tmp.size(); i++)
	{
		std::cout << tmp.at(i) << std::endl;
	}
}

void zadanie1() {

	std::vector<int> vector;
	int temp = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Please, input a number: ";
		std::cin >> temp;
		vector.push_back(temp);
		std::cout << std::endl;
	}

	std::sort(vector.begin(), vector.end());

	auto iterator = std::unique(vector.begin(), vector.end());

	vector.resize(iterator - vector.begin());
}

void zadanie2(std::vector<std::string> vector) { //65 -> 90 (A) 97 -> 122 (a)
	std::partition(vector.begin(), vector.end(), policy);

	printVector(vector);
}
