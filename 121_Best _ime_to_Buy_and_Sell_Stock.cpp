#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector<int>max_v(n);
        vector<int>min_v(n);
        
        
        int mx = INT_MIN;
        int mn = INT_MAX;
        
        for(int i = 0 ; i < n ; i++){

               mn = min(prices[i],mn);
            
            min_v[i] = mn;
        
        }
        
        for(int i = n - 1 ; i >= 0 ; i--){
            mx = max(mx,prices[i]);
            
            max_v[i] = mx;
        }
        
        int ans = 0;
        
        for(int i = 0 ; i < n ; i ++){
            int dif = max_v[i] - min_v[i];
            ans = max(ans,dif);
        }
        
        return ans;
        
    }
};