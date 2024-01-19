#include <bits/stdc++.h>
using namespace std;



int main()
{
    //freopen("gymnastics.in", "r", stdin);
    int n ,leng;
    cin >> n;
    cin >> leng;
    vector <string> spoty (n , "");
    vector <string> notspoty (n , "");
    for (int i=0 ; i<n; i++)
    {
        cin >> spoty[i];
    }
    for (int i=0 ; i<n; i++)
    {
        cin >> notspoty[i];
    }
    vector<bool> good (leng , true );
    vector<vector <char>> good_char (leng , vector<char>);
    for (int i=0 ; i<leng; i++)
    {
        good_char[i].push_back(spoty[0][i]);
        for (int j=1 ; j<n; j++)
        {
            if (good_char[i]!=spoty[j][i])
            {
                good[i] = false;
                break;
            }
        }
    }
    for (int i=0 ; i<leng; i++)
    {
        if (good[i])
        {
            for (int j=0; j<n; j++)
            {
                if (good_char[i]==notspoty[j][i])
                {
                    good[i] = false;
                    break;
                }
            }
        }
    }
    for (int i=0 ; i<leng; i++)
    {
        cout << good[i] << endl;
    }



    //freopen("gymnastics.out", "w", stdout);
    
}