#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;



int main()
{
    int t,x,k,n;
    cin >> t;
    for (int _=0; _<t; _++)
    {
        scanf("%d %d %d",&n,&k,&x);
        int l[n];
        for (int i=0; i<n ; i++)
        {
            cin >> l[i];
        }
        int max = -1
        int ll[n];
        for (int i=0; i<n; i++)
        {
            ll[i] = l[i]
        }
        while (1)
        {
            for (int i=0; i<n; i++)
            {
                if (l[i]>max)
                {
                    max=i;
                }
            }
            ll[max] = 0;
            int s_ll = 0;
            int s_l = 0;
            for (int j=0; j<k ; j++)
            {
                int temp_max = -1;
                for (int i=0; i<n ; i++)
                {
                    if (l[i]>temp_max)
                    {
                        temp_max=i;
                    }
                }
            }

            if (score(l)>score(ll) || max = 0)
            {
                break;
            }
            l[max] = 0;
        }
    }

}