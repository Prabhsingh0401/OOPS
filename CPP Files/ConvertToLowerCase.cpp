//Program to convert uppercase alphabet to lower case 

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    char c;
    cout<<"Enter the Uppercase Alphabet:  ";
    cin >>c;
    if (c >= 'A' && c<='Z')
    {
        c +=32;
        cout<<"Lowercase Alphabet:  "<<c;
    }
    else 
    {
        cout<<"Put a Uppercase Alphabet";
    }
    getch();
    return 0;
}