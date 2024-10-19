
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        
        
        set<vector<int>>ans;
        
        int j = 0 ;
        for(int i = 0 ; i < n ; i++){
            
            int low = i + 1;
            int high = n - 1;
            
            int x = 0 - nums[i];
            
            while(low < high){
                
                
                int p = nums[low] + nums[high];
                
                    if(p == x){
                        
                           vector<int>temp(3);
                        temp[0] = nums[i];
                        temp[1] = nums[low];
                        temp[2] = nums[high];
                        
                        ans.insert(temp);
                        low++;
                        high--;
                    }
                else if(p > x)high--;
                else if(p < x)low++;
                
            }
            
        }
        
        vector<vector<int>>vp;
        for(auto &it : ans){
            vp.push_back(it);
        }
        
        return vp;
        
    }
};