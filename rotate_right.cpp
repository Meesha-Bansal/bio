#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            vector<int>temp;
            k = k%n;
            if(k==0){
                return;
            }
           
            for(int i = n-1; i>= min(k,n-k); i--){
                temp.push_back(nums[i]);
                if(i-k >-1){
                    nums[i] = nums[i-k]; 
    
                }
            }
            int n1 = 0;
            for(int i =k-1; i>=0; i--){
                nums[i] = temp[n1++];     
            }
            
        }
    };