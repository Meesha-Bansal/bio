#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int maxFrequency(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            vector<int> temp;
            for(int i =0; i<n-1; i++){
                int d = nums[i+1]-nums[i];
                
                temp.push_back(d);
                
            }
            // sort(temp.begin(),temp.end());
            int n1 = temp.size();
            int max_cnt = 0;
            int cnt = 1;
            int j = 0;
            while(j<n1){
                int i = j;
                int s = k;
                while(i<n1 && cnt*temp[i] <= s){  
                    s -= cnt*temp[i]; 
                    cnt++;
                    i++;
                }
                max_cnt = max(max_cnt, cnt);
                cnt = 1;
                j++;
            }
            return max_cnt;
        }
    };