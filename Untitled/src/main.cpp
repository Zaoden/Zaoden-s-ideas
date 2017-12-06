#include <iostream>
#include "../include/Grid.h"

using namespace std;

int main()
{
    int x=0;
    int y=0;

    cout<< "Xvalue:";
    cin>> x;
    cout<< "Yvalue:";
    cin>> y;
    Grid Map(x,y);
    return 0;
}
