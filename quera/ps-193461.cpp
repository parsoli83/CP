#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    string test = "";
    string meow;
    cin >> text;
    for (char letter : text)
    {
        if (letter=='x')
        {
            string meow = "";
            for (int i=test.size();i>-1;i--)
            {
                meow += test[i];
            }
            test = meow + 'x';
            
        }
        else
        {
            test += letter;
        }
        
    }

    cout << test << endl;
}