#include <iostream>
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();

int main()
{
    zadanie4();
}

void zadanie1() {
    double mass = 0;
    double height = 0;

    std::cout << "Podaj swoja mase:" << std::endl;
    std::cin >> mass;
    std::cout << "Podaj swoj wzrost: " << std::endl;
    std::cin >> height;

    double BMI = mass / (height * height);
    std::cout << "Twoj wskaznik BMI wynosi: " << BMI << std::endl;

}

void zadanie2() {
    int x1, x2, x3;

    std::cout << "Podaj pierwsza liczbe: " << std::endl;
    std::cin >> x1;
   
    std::cout << "Podaj druga liczbe: " << std::endl;
    std::cin >> x2;

    std::cout << "Podaj trzecia liczbe: " << std::endl;
    std::cin >> x3;

    int highest = 0;

    if ((x1 < x2) & (x2 > x3)) {
        highest = x2;
    }
    else {
        if ((x1 > x2) & (x1 > x3)) {
            highest = x1;
        }
        else {
            highest = x3;
        }
    }

    std::cout << std::endl;


    for (int i = highest; i > 0; i--)
    {
        if (x1 >= i) {
            std::cout << "*";
        }
        else {
            std::cout << " ";
        }
        if (x2 >= i) {
            std::cout << "*";
        }
        else {
            std::cout << " ";
        }
        if (x3 >= i) {
            std::cout << "*";
        }
        else {
            std::cout << " ";
        }
        std::cout << std::endl;
    }

}

void zadanie3() {
    bool flag = 1;
    int sumDigits = 0;
    int currentSum = 0, currentNumber;

    int sumHighest = 0, numberHighest = 0;

    while (flag) {
        std::cout << "enter a natural number (0 if done): ";
        std::cin >> currentNumber;
        int temp = currentNumber;

        if (currentNumber == 0) {
            flag = 0;
        }else{
            while (temp > 0) {
                currentSum += temp % 10;
                temp = temp / 10;
            }
            if (currentSum > sumHighest) {
                numberHighest = currentNumber;
                sumHighest = currentSum;
                temp = 0;
                currentSum = 0;
            }
            else
            {
                temp = 0;
                currentSum = 0;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Max sum of digits was " << sumHighest << " for " << numberHighest;
}

void zadanie4() {
    int chosenNumber = 0;
    bool flag = 1;
    int constraintA = 0;
    int constraintB = 1000000;

    char answer = ' ';

    while (flag)
    {
        chosenNumber = constraintA +  std::rand() % constraintB;
        std::cout << "Czy jest to " << chosenNumber << "?" << std::endl;
        std::cin >> answer;

        if(answer == 's'){
            constraintA = answer;
        }
        if(answer == 'b'){
                constraintB == answer;
        }
        if(answer == 'y'){
            std::cout << "Wygralem" << std::endl;
            flag = 0;
        }
               
    }

   
}