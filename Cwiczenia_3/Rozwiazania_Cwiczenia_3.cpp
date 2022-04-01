#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

enum ordering:bool {required, not_required};

void zadanie1();
void printVector(std::vector<std::string> tmp);
void zadanie2(std::vector<std::string> vector);
void zadanie3(std::vector<int> vector1, std::vector<int> vector2, enum ordering);
void zadanie4(std::string word);
void zadanie5(std::vector<int> vector);

bool policy(std::string s) {
unsigned char first = s[0];
return (first >= 'A' && first <= 'Z');
}

int main() {
    //zadanie1();
    std::string s1 = "Ala";
    std::string s2 = "ma"; //Should return Ala Kota ma
    std::string s3 = "Kota";

    std::vector<std::string> vector = { s1,s2,s3 };

    //zadanie2(vector);

    std::vector<int> vector1 = {2,3,51,32,12,56,64};
    std::vector<int> vector2 = {12,312,51,23,555,112,423,21};

    //zadanie3(vector1,vector2, ordering::not_required);

    std::string word("A   L   A");

    //zadanie4(word);

    zadanie5(vector1);

    return 0;
}

void printVector(std::vector<std::string> tmp) {
    for (int i = 0; i < tmp.size(); i++)
    {
        std::cout << tmp.at(i) << std::endl;
    }
}
void printVector(std::vector<int> tmp) {
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

    printVector(vector);

}

void zadanie2(std::vector<std::string> vector) { //65 -> 90 (A) 97 -> 122 (a)
    std::partition(vector.begin(), vector.end(), policy);

    printVector(vector);
}

void zadanie3(std::vector<int> vector1, std::vector<int> vector2, enum ordering){

    if(ordering::required) {

        std::sort(vector1.begin(), vector1.end());
        std::sort(vector2.begin(), vector2.end());

        int x = 0;

        for (int i = 0; i < vector1.size() - 1; i++)
        {
             int x = vector1.at(i);
             for (int i = 0; i < vector2.size(); i++)
             {
                 if(x == vector2.at(i)){
                     std::cout << std::string("True") << std::endl;
                 }else{
                     std::cout << std::string("False") << std::endl;
                 }
             }
             
        }
        

    }else{

        if(ordering::not_required){ 
            for (int i = 0; i < vector1.size() - 1; i++)
            {
             int x = vector1.at(i);
             for (int i = 0; i < vector2.size(); i++)
             {
                 if(x == vector2.at(i)){
                     std::cout << std::string("True") << std::endl;
                 }else{
                     std::cout << std::string("False") << std::endl;
                 }
             }
             
            }
        }
    }
}

void zadanie4(std::string word){
    
    char WHITESPACE = ' ';
    
}

void zadanie5(std::vector<int> vector){
    std::sort(vector.begin(), vector.end());

    if(vector.size() % 2 == 0){
        int sum = vector.at(vector.size()/2) + vector.at(vector.size()/2 + 1);
        sum = sum / 2;
        std::cout << sum << std::endl;
    }else{
        std::cout << vector.at(vector.size()/2) << std::endl;
    }
}