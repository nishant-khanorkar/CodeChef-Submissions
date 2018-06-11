#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int yy,pp,kk;
    cin>>yy;
    while(yy--)
    {
        cin>>pp;
        kk=ceil((float)pp/3);
        cout<<kk<<" "<<pp-kk<<endl;
    }
    return 0;
}