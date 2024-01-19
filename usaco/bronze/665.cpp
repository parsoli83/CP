#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int h,w,k;
    freopen("cowsignal.in", "r", stdin);
    scanf("%d %d %d",&h,&w,&k);
    string moo[h];
    for (int i=0;i<h;i++)
    {
        cin >> moo[i];
    }
    freopen("cowsignal.out", "w", stdout);
    for (int i=0;i<h;i++)
    {
        for (int h_k=0;h_k<k;h_k++)
        {
            for (int j=0;j<w;j++)
            {
                for (int w_k=0; w_k<k;w_k++)
                {
                    cout << moo[i][j];
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}