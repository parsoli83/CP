#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int police,cow;
    freopen("speeding.in", "r", stdin);
    scanf("%d %d",&police,&cow);
    int p_parts[police];
    int p_speed[police];
    int c_parts[cow];
    int c_speed[cow];
    for (int i=0;i<police;i++)
    {
        scanf("%d %d",&p_parts[i],&p_speed[i]);
    }
    for (int i=0;i<cow;i++)
    {
        scanf("%d %d",&c_parts[i],&c_speed[i]);
    }
    int p_place = 0;
    int c_place = 0;
    int c_index=-1;
    int p_index = -1;
    int max = -1;
    for (int i=1;i<=100;i++)
    {
        if (i>p_place)
        {
            p_index++;
            p_place+=p_parts[p_index];
            
        }
        if (i>c_place)
        {
            c_index++;
            c_place+=c_parts[c_index];
            
        }
        cout << i << " ";
        cout << c_speed[c_index]-p_speed[p_index] << endl;
        if (max<c_speed[c_index]-p_speed[p_index])
        {
            max=c_speed[c_index]-p_speed[p_index];
        }
    }

    freopen("speeding.out", "w", stdout);
    cout << max << endl;
    return 0;
}