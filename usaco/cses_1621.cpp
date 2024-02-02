#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int n,cnt;
int main()
{
    cin >> n;
    cnt = 0;
    vector<int> nums(n,0);
    bool is_cnt;
    for (int _=0;_<n;_++)
    {
        cin >> nums[_];
    }
    sort(all(nums));
    cnt+=1;
    for (int _=0;_<n-1;_++)
    {
        if (nums[_]!=nums[_+1])
        {
            cnt++;
        }
    }
    cout << cnt;

}