#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
int n = intervals.size();

          int minMeetingRooms = 0;

          vector<pair<int,int>>main_v;
          vector<pair<int,int>>temp;


          for(int i = 0 ; i < n ; i ++){

               main_v.push_back({intervals[i].end,intervals[i].start});
               
          }


          sort(main_v.begin(),main_v.end());
       int last_end = 0;
    int room = 0;

   while(main_v.size()){
         last_end = 0;
        for(int i = 0 ; i < main_v.size() ; i++){

            if(main_v[i].second  >= last_end){

                 last_end = main_v[i].first;
            }
            else{

                temp.push_back({main_v[i].first,main_v[i].second});

            }

       }


            room++;

            sort(temp.begin(),temp.end());


            main_v.clear();

            main_v = temp;

            cout<<main_v.size()<<" ";

            temp.clear();


   }

      minMeetingRooms = room;
       


          return minMeetingRooms;
    }
};
