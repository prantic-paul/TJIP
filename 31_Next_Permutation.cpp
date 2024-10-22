#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        bool flg = 0;
        int start = INT_MIN ,end = INT_MIN;
        for(int i = n - 1 ; i >= 1 ; i--){
            
            for(int j = i - 1 ; j >= 0 ; j --){
                 
                if(nums[j] < nums[i]){
                    
                    
                    if(j > start ){
                        
                        start = j;
                        end = i;
                    }
                    
                    flg = 1;
                }
            }
            
        }
        
        cout<<start<<" "<<end<<endl;
        
        if(flg == 0){
            sort(nums.begin(),nums.end());
            return;
        }
        
        else{
            
            swap(nums[end],nums[start]);
            
            for(int i = n - 1 ; i >= start + 2 ; i--){
                
                for(int j = start + 1 ; j < i ; j++){
                    
                    if(nums[j] > nums[j + 1])swap(nums[j],nums[j + 1]);
                    
                }
                
            }
            return;
        }
        
    }
};