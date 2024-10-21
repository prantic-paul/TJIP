#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    
int partition(vector<int> & nums , int k , int n , int low , int high){
    
    bool flag = 0;
    for(int k = low ; k < high ; k++){
        if(nums[k] != nums[k + 1]){flag = 1; break;}
    }
    
    if(flag == 0)return n - k;
    
     int i = low - 1;
    
    int pivot = nums[high];
    
    for(int j = low ; j <= high ; j++){
        
        if(nums[j] <= pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    
    return i;
}
    
    
    void kthNumber(vector<int>&nums , int k , int n , int low , int high){
        
        int i = partition(nums , k , n ,low ,  high);
        
        
        if(low < high){
            
            if(i < n -k){
                kthNumber(nums,k,n,i + 1 , high);
            }
            else if(i > n - k){
                  kthNumber(nums,k,n,low,i-1);
            }
            else{
                
                return;
            }
            
        }
        
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        
        
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        
        kthNumber(nums,k,n,low,high);
        
        return nums[n - k];
        
        
    }
};