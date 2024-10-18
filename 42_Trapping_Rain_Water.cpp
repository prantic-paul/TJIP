#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {  
        int n = height.size();
        int low = 0;
        int high = n - 1;
        
        int lf_max = height[low];
        int rt_max = height[high];
        
        int sum = 0;
        
        
        while(low < high){
            
            
            if(height[low]  <= height[high]){
                
                  low++;
                
                 lf_max = max(lf_max,height[low]);
                sum += lf_max - height[low];
                
            }
            else{
                
                high--;
                
                rt_max = max(rt_max,height[high]);
                
                sum += rt_max - height[high];
                
            
            }
            
            
        }
        
        return sum;
    }
};