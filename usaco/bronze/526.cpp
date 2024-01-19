#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cmath>
using namespace std;



int main()
{
    freopen("censor.in", "r", stdin);
    string text,no;
    cin >> text;
    cin >> no;
    int n = no.size();
    int ind = 0;
    while (ind<=(text.size()-2))
    {
        if (text.substr(ind,n) == no)
        {
            
            text = text.substr(0,ind) + text.substr(ind+n);
            
            if (ind-n>0){
                ind-=n-1;
            }
            else{
                ind=0;
            }
            
        }
        
        
    }
    freopen("censor.out", "w", stdout);
    cout << text<<endl ;
    
    

}