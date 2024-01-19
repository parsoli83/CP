#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;

int alpha[26];
vector<vector<string>> words;

int alpha_update(string word)
{
    vector<int> new_alpha(26,0);
    for (char i : word)
    {
        new_alpha[int(i) - 56 - 41]++;
    }

    for (int i=0; i<26 ; i++)
    {
        
        alpha[i] = max(new_alpha[i],alpha[i]);
        
    }
}



int meow( int depth , string final = "")
{
    if (depth==0)
    {
        alpha_update(final + words[depth][0]);
        alpha_update(final + words[depth][1]);

        return 1;

    }
    meow(depth-1 , final + words[depth][0]);
    meow(depth-1 , final + words[depth][1]);
    return 1;
}







int main()
{
    freopen("blocks.in", "r", stdin);
    int n;
    cin >> n;
    words.reserve(n*100);
    vector<string> inp(2);
    for (int i=0;i<n;i++)
    {
        cin >> inp[0];
        cin >> inp[1];
        words.push_back(inp);
    }
    for (int i=0; i<26 ; i++)
    {
        alpha[i] = 0;
    }
    meow(n-1);
    freopen("blocks.out", "w", stdout);
    for (int i=0; i<26 ; i++)
    {
        cout << alpha[i] << endl;
    }
}