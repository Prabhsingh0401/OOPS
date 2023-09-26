// c++ Program to calculate the sum using function

#include<iostream>
#include<conio.h>

using namespace std;

/*We have basically created a function here for doing the sum*/

void sum(int a =10, int b = 10, int c = 10)
{
    int d;
    d = a+b+c;
    cout<<"sum: "<<d;
}

int main(){
    cout<<"I am in main""\n\n";
    sum(10,20,30);
    getch();
}

