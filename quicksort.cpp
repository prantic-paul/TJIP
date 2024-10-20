#include<bits/stdc++.h>
using namespace std;
//#define int long long
  int  partition(vector<int> &v , int low , int high){

       int pivot = v[high];


       int i = low - 1;

       for(int j  =  low ; j <= high ; j++){

             if(v[j] <= pivot){

                i++;
                swap(v[i],v[j]);
             }
       }

    return i;

}
void mergeSort(vector<int> &v , int low , int high){

     if(low < high){

    int i = partition(v,low,high);

      mergeSort(v,low,i-1);
      mergeSort(v,i + 1 ,high);
     } 



}

int main(){
     int n ;
     cin>>n;
     vector<int>v(n);
     
     for(int i = 0 ; i < n ; i++){
        cin>>v[i];
     }

     mergeSort(v,0,n - 1);


     for(int i=0 ; i < n ; i++){
        cout<<v[i]<<" ";
     }
cout<<endl;
}