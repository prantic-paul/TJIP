#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         
       int n = nums.size();
        
        
        
         vector<int>ans(n);
        int low = 0;
        int high = n - 1;
        
        
        for(int i = 0 ; i < n ; i++){
            
            if(nums[i] == 0){
                ans[high] = 0;
                high --;
            }
            else{
                ans[low] = nums[i];
                low++;
            }
            
        }
         
        for(int i = 0 ; i < n ; i++)nums[i] = ans[i];
        
        return;
        
    }
};