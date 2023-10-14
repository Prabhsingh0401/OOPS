#include<iostream>
#include<conio.h>

using namespace std;

class A {
    int a;
    public:
    void memberfn(int x)
    {
        a = x;
        cout << "Member Function Inside"
             << "Class Declared \n"; 
    }
    void memberfn2();
};

void nonmemberfn()
{
    cout << "Non Member Function \n";
}

int main(){
    A obj;

    obj.memberfn(5);
    obj.memberfn2();

    nonmemberfn();
    getch();
    return 0;
}