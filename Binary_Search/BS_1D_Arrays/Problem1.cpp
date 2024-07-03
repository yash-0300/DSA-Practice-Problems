#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        while (lo <= hi) {
            int mid = (lo + hi) >> 1;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        return -1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++) cin >> nums[i];
    int target;
    cin >> target;

    Solution s1;
    cout << s1.search(nums, target) << endl;

    return 0;
}