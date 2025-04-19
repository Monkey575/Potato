#include <iostream>

class Solution {
public:
    long long goodTriplets(long long nums1[], long long nums2[], long long n) 
    {
        long long count = 0;

        for (long long i = 0; i < n; i++) {
            for (long long j = i + 1; j < n; j++) {
                for (long long k = j + 1; k < n; k++) {
                    if (nums2[nums1[i]] < nums2[nums1[j]] && nums2[nums1[j]] < nums2[nums1[k]]) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

int main() {
    Solution s;
    long long nums1[] = {4, 0, 1, 3, 2};
    long long nums2[] = {4, 1, 0, 2, 3};
    long long n = sizeof(nums1) / sizeof(nums1[0]);
    std::cout << s.goodTriplets(nums1, nums2, n);
    return 0;
}    