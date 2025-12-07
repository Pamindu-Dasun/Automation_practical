#include <iostream>
#include <stdlib.h>
using namespace std;

void starPatternOne(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void starPatternTwo(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    starPatternOne(5);

    return EXIT_SUCCESS;
}