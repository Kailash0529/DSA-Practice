#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int finddiff(vector<int> nums, int n, int k) {
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int i = 0, j = 1;

    while (j < n) {
        int diff = nums[j] - nums[i];

        if (diff == k) {
            ans.insert({nums[i], nums[j]});
            ++i;
            ++j;
        } else if (diff < k) {
            ++j;
        } else {
            ++i;
            if (i == j) {
                ++j;
            }
        }
    }

    return ans.size();
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 5, 8, 1};
    int n = nums.size();
    int k;
    cin >> k;
    int ans = finddiff(nums, n, k);
    cout << "Number of pairs with difference " << k << ": " << ans << endl;
    return 0;
}
