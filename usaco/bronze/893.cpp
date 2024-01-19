#include <bits/stdc++.h>
using namespace std;

vector<string> specs ;
vector<int> reps;

int main()
{
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    int n,m;
    cin >> n;
    bool key;
    string cow;
    for (int i=0;i<n;i++)
    {
        cin >> cow;
        cin >> m;
        specs.reserve(m);
        reps.reserve(m);
        for (int j=0;j<m;j++)
        {
            cin >> cow;
            key = false;
            for (int k=0; k<specs.size() && !key;k++)
            {
                
                if (cow==specs[k])
                {
                    reps[k]++;
                    key = true;
                }
            }
            if (!key)
            {
                specs.push_back(cow);
                reps.push_back(1);
            }
            
        }
    }
    int tmp;
    n= specs.size();
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n-i-1; j++ )
        {
            if (reps[j]>reps[j+1])
            {
                tmp = reps[j];
                reps[j] = reps[j+1];
                reps[j+1] = tmp;
            }
        }
    }
    int cnt = 1;
    for (int i=n-1;i>=0;i--)
    {
        if (reps[i]!=1)
        {
            cnt++;
            continue;
        }
        break;
        
    }
    cout << cnt;


    







    
    
    














    /*
    int n,m;
    string cow;
    cin >> n;
    animals.reserve(n);
    attribs.reserve(n);
    for (int i=0;i<n;i++)
    {
        cin >> cow;
        cin >> m;
        vector<string> features(m);
        attribs.push_back(m);
        for (int j=0;j<m;j++)
        {
            cin >> features[j];
        }
        animals.push_back(features);
    }
    int cnt = 0;
    int max = 1;
    
    while(1)
    {

    }

















    freopen("guess.in", "r", stdin);
    int t,n;
    string cow;
    cin >> t;
    animals.reserve(t);
    for (int i=0;i<t;i++){
        cin >> cow;
        cin >> n;
        animals[i].reserve(n);
        for (int j=0;j<n;j++)
        {
            cin >> cow;
            animals[i].push_back(cow);
        }
    }

    


    freopen("guess.out", "w", stdout);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<animals[i].size();j++)
        {
            cout << animals[i][j]<< "/";
        }       
        cout << endl;
    }
    */





}