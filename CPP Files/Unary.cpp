#include<iostream>
#include<conio.h>

// Prableen Singh - CSE 3

using namespace std;
class Distance {
    public:
        int feet, inch;
        Distance(int f, int i) {
            this->feet = f;
            this->inch = i;
        };
        void operator-() {
            feet--;
            inch--;
            cout << "Feet And Inches (Decrement): " << feet <<"'" << inch;
        };
};
int main() {
    Distance d1(9, 10);
    -d1;
    getch();
};