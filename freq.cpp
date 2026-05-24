#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        int maxFrequency(vector<int>& nums, int k) {
            // Sort array to make elements consecutive
            sort(nums.begin(), nums.end());
            
            // Initialize sliding window parameters
            int left = 0;
            long long windowSum = 0;
            int maxFreq = 1;
            
            // Iterate through array using right pointer
            for (int right = 0; right < nums.size(); right++) {
                windowSum += nums[right];
                
                // Shrink window if operations needed exceed k
                while ((long long)nums[right] * (right - left + 1) - windowSum > k) {
                    windowSum -= nums[left];
                    left++;
                }
                
                // Update maximum frequency
                maxFreq = max(maxFreq, right - left + 1);
            }
            
            return maxFreq;
        }
    };
    // test 