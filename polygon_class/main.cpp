#include <iostream>
using namespace std;

class Polygon {    // parent class
private:          
    float a{};          // triangle side
    float b{};          // triangle side
    float c{};          // triangle side
    float sq{};         // square side

public:
    Polygon(float a = 5.0, float b = 3.0, float c = 10.0, float sq = 5.0) :
        a{ a },
        b{ b },
        c{ c },
        sq{ sq }
    {}
 
    float getA() { return this->a; };
    float getB() { return this->b; };
    float getC() { return this->c; };
    float getSq() { return this->a; };
};

class Square : public Polygon {     // parent class inheritor
private:
    float SquarePerimetr{};
public:
    Square(float a = 5.0, float b = 3.0, float c = 10.0, float sq = 5.0) : Polygon (a, b, c, sq){}
    
    void perimetr() { this->SquarePerimetr = getA() + getB() + getC(); }
    float getSP() { return this->SquarePerimetr; }
};

class Triangle : public Polygon {   // parent class inheritor
private:
    float TrianglePerimetr{};
public:
    Triangle(float a = 5.0, float b = 3.0, float c = 10.0, float sq = 5.0) : Polygon(a, b, c, sq){}

    void perimetr() { this->TrianglePerimetr = getSq() * 4; }
    float getTP() { return this->TrianglePerimetr; }
};

int main() {

    float a{}, b{}, c{}, sq{};               // sides from keyboard to initialize classes objects
    cout << "Enter triangle sides" << endl;     
    cout << "Side A: ";
    cin >> a;
    cout << "Side B: ";
    cin >> b;
    cout << "Side C: ";
    cin >> c;
    cout << "Enter square side: ";
    cin >> sq;

    Square a1{ a, b, c, sq };
    Triangle b1{ a, b, c, sq };

    a1.perimetr();
    cout << a1.getSP();

    cout << endl;

    b1.perimetr();
    cout << b1.getTP();

    cout << endl;

    //

    Polygon c1{ 13.1, 23.3, 8.2, 7.3 };

    cout << c1.getA();                  // 13.1
                                    // initialization Polygon object with list of activators works

    return 0;
}