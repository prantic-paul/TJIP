#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            
            if(nums[i] < 0  || nums[i] > n)nums[i] = 0;
            
        }
        
        int i = 0;
        
        
        while(i < n){
            
           
            if(nums[i] == 0){
                i++;
            }
            else if(nums[i] != i +1){
               if(nums[i] == nums[nums[i] - 1])nums[nums[i] - 1] = 0; 
               swap(nums[nums[i] - 1],nums[i]); 
               
            }
            else if(nums[i] == i+1)i++;
            
            
        }
        
        int ans;
        for(int i = 1 ; i <= n ; i++){
            if(nums[i - 1] != i){ans = i; break;}
        }
        
        return ans;
    }
};