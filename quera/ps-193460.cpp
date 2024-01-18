#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mg,md,sg,sd,rate;
    cin >> mg;
    cin >> md;
    cin >> sg;
    cin >> sd;
    cin >> rate;
    if ((mg+md*rate)<(sg+sd*rate))
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    
}