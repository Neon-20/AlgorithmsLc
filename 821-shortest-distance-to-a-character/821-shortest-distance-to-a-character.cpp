class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
      // I thought to use 2 pointer initially but nope
     // it can be solved easily without 2 pointers
        //First we should know the position of 
        //each c in given s
        // So for that 
        // Create a vector named position which stores the index
        // of all occurence of c
        int n=s.length();
        vector<int> position;
        for(int i=0;i<s.size();i++){
            if(s[i] == c) position.push_back(i);
        }
      //Now after storing each position of the character c
     // We could just traverse through each character in s
     // and find out what is min distance of character s[i] to c
        // using 2 for loops for each char in s
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            int mn=INT_MAX;//declared inside above loop 
            //because we want to calculate the min distance of 
            //  each char of s[i] to c 
            //Now run another loop inside.
            for(int j=0;j<position.size();j++){
//Note:: Run loop here only till position size 
 // Because we are finding min distance from those value only
                mn=min(mn,abs(i-position[j]));
            }
            ans.push_back(mn);// value pushed back inside loop
            //because I want to calculate min distance from each              // occurence of c and then insert the best value.
        }
        return ans;
    }
};





