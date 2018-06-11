#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double gg,hh,ii;
    int yy;
    cin>>yy;
    while(yy--)
    {
        cin>>gg>>hh>>ii;
        gg+=hh;
        hh=ii/gg;
        printf("%.10lf\n",hh);
    }
    return 0;
}