#include <iostream>
#include <math.h>
#include <vector>

struct complexNumber{
    private:
        int number;

    public:

    complexNumber(int number) : number(number) {this->number = number;}

    void first(int x);
    void second(int &x);
    void third(int *x);

    int getNumber(){
        return this->number;
    }
};

void complexNumber::first(int x) {
    this->number = this->number + x;
}

void complexNumber::second(int &x) {
    this->number = this->number + x;
}

void complexNumber::third(int *x) {
    this->number = this->number + *x;
}

struct Point{
private:
    double x;
    double y;


public:

    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    void getCoordinates();
    double calculateDistance();
    void setX(double a);
    void setY(double b);
};

double Point::calculateDistance() {
    return std::sqrt((std::pow(this->x, 2) + (std::pow(this->y,2))));
}

void Point::getCoordinates() {
    std::cout << "|" << this->x << ", " << this->y << "|" << std::endl;
}

void Point::setX(double a) {
    this->x = a;
}

void Point::setY(double b) {
    this->y = b;
}

struct Rectangle{
    private:
        Point *a;
        Point *b;

    public:

        Rectangle(Point &a, Point &b){
            this->a = &a;
            this->b = &b;
        };

        void getRect();
        void getArea();
        void getRadius();
};

void Rectangle::getRect() {
    std::cout << "P1 = "; a->getCoordinates(); std::cout << ", P2 = "; b->getCoordinates(); std::cout << std::endl;
}

void Rectangle::getArea() {
    std::cout << "Area = " << a->calculateDistance() * b->calculateDistance() << std::endl;
}

void Rectangle::getRadius(){
    std::cout << "Radius = " << 2*(a->calculateDistance()) + 2*(b->calculateDistance()) << std::endl; 
}

int main() {
//    complexNumber number = complexNumber(2);
//    number.first(3);
//    std::cout << number.getNumber() << std::endl; // 5
//
//    int x = 1;
//    number.second(x);
//    std::cout << number.getNumber() << std::endl; // 6
//
//    int y = 1;
//    number.third(&y);
//    std::cout << number.getNumber() << std::endl; // 7
//    return 0;

    Point p = Point(4.1,4.2);
    Point p2 = Point(5.6, 7.54);
    Rectangle r = Rectangle(p, p2);
//
//    std::cout << p.calculateDistance() << std::endl;
//
//    p.getCoordinates();
//
//    p.setX(7.45);
//    p.setY(8.12);
//    p.getCoordinates();

    r.getRect();
    r.getArea();
    r.getRadius();

    std::vector<Point> tab;

    for (int i = 0; i < 20; i++)
    {
        int x = rand()%20;
        int y = rand()%20;

        tab.push_back(Point(x,y));
    }
     
    
}

