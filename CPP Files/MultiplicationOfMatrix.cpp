#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int matone[3][3], mattwo[3][3], matthree[3][3];
    int i, j, k, sum=0;
    cout << "Enter 9 elements for matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cin >> matone[i][j];
    }
    cout << "Enter 9 elements for Second Matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cin >> mattwo[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            sum = sum + (matone[i][k]*mattwo[k][j]);
            matthree[i][j] = sum;
        }
    }
    cout << "Multiplication Result :";
    cout << "\n";
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout << matthree[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    getch();
    return 0;
}

