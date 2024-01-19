#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> lg;

int main()
{
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    int n;
    cin >> n;
    lg.resize(n);
    for (int i=0;i<n;i++)
    {
        lg[i].resize(2);
        cin >> lg[i][0];
        cin >> lg[i][1];
    }
    int maxim = 0;
    for (int i=0;i<n;i++)
    {
        int all = 0;
        for (int j=0;j<=1000;j++)
        {
            for (int k=0;k<n;k++)
            {
                if (k!=i)
                {
                    if (lg[k][0]<j && lg[k][1]>=j)
                    {
                        all++;
                        break;
                    }
                }
            }
        }
        maxim = max(all,maxim);
    }
    cout << maxim << endl;


    

    
}