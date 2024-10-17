#include<bits/stdc++.h>
using namespace std;





class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;

        int n =  nums.size();

        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        int start,need_find;
        for(int i = 0 ; i < n ; i++){
            int x = target - nums[i];

            if(x == nums[i]){
               
                if(mp[nums[i]] > 1){
                    
                    ans.push_back(i);
                    
                    start = i+ 1;
                    need_find = x;
                    break;
                    
                    
                }
                
            }
            
            else{
                
                if(mp[x] > 0){
                    
                    ans.push_back(i);
                    
                    start = i+ 1;
                    need_find = x;
                    break;
                }
                
            }

                
            }
for(int  i = start ; i < n ; i++ ){

    if(nums[i] == need_find){
        ans.push_back(i);
        break;
    }
}

return ans;

    }
};