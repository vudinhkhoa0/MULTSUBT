#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll x, k;
    cin >> x >> k;
    vector<int> nums;
    while (x > 1){
        if (x % k == 0)
            x /= k, nums.push_back(1);
        else
            x++, nums.push_back(2);
    }
    cout << nums.size() << '\n';
    for (int num: nums) cout << num << ' ';
}

