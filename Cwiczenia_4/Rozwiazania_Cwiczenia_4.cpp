#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>



void zadanie1(int pesel);
void zadanie2();
void zadanie3(int ilosc, std::string waluta);
void zadanie4(std::map<std::string, std::vector<std::string>> kontrybutorzy);

int main(){
    zadanie1(123456789);
    zadanie2();

    zadanie3(1234, "USD");

    std::map<std::string, std::vector<std::string>> contributors{{"Kowalski",{"A","B","C"}},{"Prus",{"A","B"}}};

    zadanie4(contributors);
}

void zadanie1(int pesel){
    std::map<int ,std::string> mapa{
        {100000000, "Sienicki"},
        {123456789, "Kowalski"},
        {987654321, "Lewandowski"}
    };

    std::cout << mapa.at(pesel) << std::endl;
};

void zadanie2(){
    std::set<std::string> secik;

    std::map<int ,std::string> mapa{
        {1, "Sienicki"},
        {1, "Sienicki"},
        {4, "Sienicki"},
        {6, "Sienicki"},
        {2, "Kowalski"},
        {3, "Lewandowski"}
    };

    secik.insert(mapa.at(1));
    secik.insert(mapa.at(1));
    secik.insert(mapa.at(4));
    secik.insert(mapa.at(6));
    secik.insert(mapa.at(2));
    secik.insert(mapa.at(3));

    std::cout << "Powtorzenia: " << mapa.size() - secik.size() << std::endl;
    
}

void zadanie3(int ilosc, std::string waluta){
    std::map<std::string, int> konwerter{
        {"PLN", 1},
        {"USD", 4.70},
        {"EUR", 4.9},
        {"POUND", 5.2}
    };

    std::cout << "Ilosc zlotowek po przeliczeniu na " << waluta << " wynosi: " << ilosc/konwerter.at(waluta) << " " << waluta << std::endl; 
}

void zadanie4(std::map<std::string, std::vector<std::string>> kontrybutorzy){
   int maxCon = 0;
   std::string nazwisko;
   for(auto person:kontrybutorzy){
       if(person.second.size() > maxCon){
           maxCon = person.second.size();
           nazwisko = person.first;
       }
   }
    std::cout << nazwisko << " Przekazal: ";

    for(auto item:kontrybutorzy.find(nazwisko) -> second){
        std::cout << item << std::endl;
    }
}