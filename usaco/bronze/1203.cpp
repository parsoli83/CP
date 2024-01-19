#include <bits/stdc++.h>
using namespace std;

bool is_equal(vector<int> nums , int n)
{
    int val = 0;
    for (int i :nums)
    {
        if (i==0 || i==val)
        {
            continue;    
        }
        if (val!=0)
        {
            return false;
        }
        val = i;
    }
    return true;
}
int main()
{
    int t,n,moves;
    cin >> t;
    int results[t];
    for (int _=0 ; _<t; _++)
    {
        moves=0;
        cin >> n;
        vector<int> nums(n,0);
        for (int i=0 ; i<n ; i++)
        {
            cin >> nums[i];
        }
        while (!is_equal(nums,n))
        {
            int minim = 2147483647;
            int min_ind;
            for (int i=0 ; i<n-1 ; i++)
            {
                if (minim > nums[i]+nums[i+1])
                {
                    minim = nums[i]+nums[i+1];
                    min_ind = i;
                }
                
            }



            nums[min_ind] = nums[min_ind]+nums[min_ind+1];
            vector<int> new_nums (n-1,-1);


            int cnt = 0;
            bool key =false;
            while (cnt<n)
            {
                if (cnt==min_ind+1)
                {
                    key =true;
                    cnt++;
                }
                if (key)
                {
                    new_nums[cnt-1] = nums[cnt];
                }
                else
                {
                    new_nums[cnt] = nums[cnt];
                }
                cnt++;
                
            }
            nums = new_nums;


            n--;
            moves++;
        }
        cout << moves << endl;
    }
}