#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cmath>
using namespace std;



int main()
{
    freopen("cbarn.in", "r", stdin);
    int n;
    cin >> n;
    vector<int> dest(n,0);
    vector<int> total(n,0);
    for (int i=0;i<n;i++)
    {
        cin >> dest[i];
    }

    int ind = 0;
    int minim = 2147483647;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<n;j++)
        {
            ind = (ind+1)%n;
            total[i]+= j*dest[ind];
        }
        minim = min(total[i],minim);
    }
    freopen("cbarn.out", "w", stdout);
    cout << minim << endl;

}