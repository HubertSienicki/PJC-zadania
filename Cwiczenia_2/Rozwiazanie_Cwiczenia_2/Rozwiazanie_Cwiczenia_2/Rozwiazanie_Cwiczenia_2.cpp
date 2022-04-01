#include <iostream>
#include <vector>
#include <algorithm>

void zadanie1(std::vector<int> vector);
void zadanie2(std::vector<int> vector, int n);
void erase_between_minmax(std::vector<int> vector);
void exchange_boundaries(std::vector<int> vector);
void zadanie5();

int main()
{
    std::vector<int> vector = {12,51,0,87,13,32,973,13,12,123,23,3,1};
    //zadanie1(vector);
    //zadanie2(vector, 4);
    //erase_between_minmax(vector);
}

void zadanie1(std::vector<int> vector) {
    std::sort(vector.begin(), vector.begin() + vector.size() / 2);
    std::sort(vector.begin() + vector.size() / 2, vector.end());
    int sum_split1 = 0;
    int sum_split2 = 0;


    for (int i = 0; i < vector.size(); i++)
    {
        if (i > 5) {
            sum_split2 += vector[i];
        }
        else {
            sum_split1 += vector[i];
        }
    }
    std::cout << sum_split1 << std::endl;
    std::cout << sum_split2 << std::endl;

    if (sum_split1 > sum_split2) {
        for (int i = 0; i < vector.size() / 2; i++)
        {
            std::cout << vector[i] << std::endl;
        }
    }
    else {
        for (int i = vector.size() / 2; i < vector.size(); i++)
        {
            std::cout << vector[i] << std::endl;
        }
    }
}
void zadanie2(std::vector<int> vector, int n) {
 
    for (int i = 0; i < n; i++)
    {
        int maxIndex = 0;
        int maxValue = vector.at(0);

        for (int j = 0; j < vector.size(); j++)
        {
            if (maxValue < vector.at(j)) {
                maxIndex = j;
                maxValue = vector.at(j);
            }
        }
        vector.erase(vector.begin() + maxIndex);
    }

    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector.at(i) << " ";
    }

}

void erase_between_minmax(std::vector<int> vector) {

    int minIndex = 0; 
    int maxIndex = 0;

    std::cout << "Here";

    for (int i = 0; i < vector.size(); i++)
    {
        if (vector.at(minIndex) > vector.at(i)) {
            minIndex = i;
        }
        else {
            if (vector.at(maxIndex) < vector.at(i)) {
                maxIndex = i;
            }
        }  
    }

    std::cout << "Min index: " << minIndex;
    std::cout << std::endl;
    std::cout << "Max index: " << maxIndex;
    std::cout << std::endl;

    if (minIndex > maxIndex) {
        for (int i = maxIndex; i < minIndex - 1; i++)
        {
            vector.erase(vector.begin() + maxIndex + 1);
        }
    }

    else {
        if (minIndex < maxIndex) {
            for (int i = minIndex; i < maxIndex - 1; i++)
            {
                vector.erase(vector.begin() + minIndex + 1);
            }
        }
    }

    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector.at(i) << " ";
    }
}

void exchange_boundaries(std::vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) // Biggest element
    {
        for (int j = 0; j < vector.size(); j++) 
        { //Smallest element

        }
    }
}
