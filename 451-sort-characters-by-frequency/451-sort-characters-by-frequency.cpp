class Solution {
public:
    using P=pair<int,char>;
    string frequencySort(string s) {
      map<char,int> mp;
      for(auto &c:s)
      {
          mp[c]++; 
          // t->1,r-1,e->2;
      }
        // Time :: O(nlog(number of elements being put in pq))
        priority_queue<P> pq;
        for(auto [x,y]:mp)
        {
            pq.push({y,x});
        }
        string res="";
        while(!pq.empty())
        {
            pair<int,char> var=pq.top();
            pq.pop();
            res+=string(var.first,var.second);
                //string(count,character)
        }
        return res;
    }
};
// /e e r t
// according to freqeuncy
//  t r e e
//  e e t r
//  t->1, r->1, e->2
//   step 1::  map create kro
//     phir usme freq cnt krlo
//     har character ka
// Step 2:: Then ek priority queue pair create kro/ max heap
//          jisme tm on the basis of frequency usko sort kr sko
// step 3:  Then return krdo characters


   
   
