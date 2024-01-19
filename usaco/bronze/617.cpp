#include <bits/stdc++.h>
using namespace std;

vector<int> x;
vector<int> y;
int b;

int x_comp(int ind)
{
    int l,r;
    l=0 ; r=0 ;
    for (int i=1;i<=b; i+=2)
    {
        if (x[i]>ind)
        {
            r++;
            continue;
        }
        l++;
    }
    return abs(l-r);
}


int y_comp(int ind)
{
    int l,r;
    l=0 ; r=0 ;
    for (int i=1;i<=b; i+=2)
    {
        if (y[i]>ind)
        {
            r++;
            continue;
        }
        l++;
    }
    return abs(l-r);
}

int ter_search_x(int l, int r)
{
    if (r >= l) {
 
        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        // Check if key is present at any mid
        if (x_comp(mid1) <= x_comp(mid1-1) && x_comp(mid1) <= x_comp(mid1+1)) {
            return mid1;
        }
        if (x_comp(mid2) <= x_comp(mid2-1) && x_comp(mid2) <= x_comp(mid2+1)) {
            return mid2;
        }
 
        // Since kex is not present at mid,
        // check in which region it is present
        // then repeat the Sexch operation
        // in that region
        if (x_comp(mid1) >= x_comp(mid1-1)) {
 
            // The kex lies in between l and mid1
            return ter_search_x(l, mid1 - 1 );
        }
        else if (x_comp(mid2) >= x_comp(mid2+1)) {
 
            // The kex lies in between mid2 and r
            return ter_search_x(mid2 + 1, r );
        }
        else {
 
            // The kex lies in between mid1 and mid2
            return ter_search_x(mid1 + 1, mid2 - 1 );
        }
    }
 
    // Key not found
    return -1;
}
int ter_search_y(int l, int r)
{
    if (r >= l) {
 
        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        // Check if key is present at any mid
        if (y_comp(mid1) <= y_comp(mid1-1) && y_comp(mid1) <= y_comp(mid1+1)) {
            return mid1;
        }
        if (y_comp(mid2) <= y_comp(mid2-1) && y_comp(mid2) <= y_comp(mid2+1)) {
            return mid2;
        }
 
        // Since key is not present at mid,
        // check in which region it is present
        // then repeat the Sexch operation
        // in that region
        if (y_comp(mid1) >= y_comp(mid1-1)) {
 
            // The key lies in between l and mid1
            return ter_search_y(l, mid1 - 1 );
        }
        else if (y_comp(mid2) >= y_comp(mid2+1)) {
 
            // The key lies in between mid2 and r
            return ter_search_y(mid2 + 1, r );
        }
        else {
 
            // The key lies in between mid1 and mid2
            return ter_search_y(mid1 + 1, mid2 - 1 );
        }
    }
 
    // Key not found
    return -1;
}



int main()
{
    freopen("balancing.in", "r", stdin);
    int n,tmp;
    cin >> n;
    cin >> b;
    x.reserve(n);
    y.reserve(n);
    for (int i=0; i<n; i++)
    {
        cin >> tmp;
        x.push_back(tmp);
        cin >> tmp;
        y.push_back(tmp);
    }

    int last = 2147483646;
    int horiz,vert;
    horiz = x_comp(ter_search_x(0,b));
    vert = y_comp(ter_search_y(0,b));

    freopen("balancing.out", "w", stdout);
    cout <<  horiz+vert <<endl;
}