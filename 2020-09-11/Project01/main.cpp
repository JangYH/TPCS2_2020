//
// Created by esevre on 9/11/2020.
//

#include <iostream>
#include <complex>

template <class Type>
class Point {
public:
    Point(Type x, Type y) : x(x), y(y) {
//        Point::x = x;  // Class Resolution Operator
//        this->y = y;   // this pointer to access members
    }
public:
    Type x{};
    Type y{};
};

template <class Type>
void print(const Point<Type> &point)
{
    std::cout << "(" << point.x << ", " << point.y << ")\n";
}

template <class ComplexType>
void print(const Point<std::complex<ComplexType>> &point) {
    std::cout << "("
              << point.x.real() << " + " << point.x.imag() << "i, "
              << point.y.real() << " + " << point.y.imag() << "i)\n";

}

int main(){
    Point<int> p{1,2};
    print(p);
    Point<int> p_copy = p;
    print(p_copy);
    Point<std::complex<long double>> p2 {{1, 2}, {3, 4}};
    print(p2);

    return p.x;
}
