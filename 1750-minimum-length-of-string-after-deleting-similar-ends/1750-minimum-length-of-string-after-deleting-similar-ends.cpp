class Solution {
public:
    int minimumLength(string s) {
        //min length of string after deleting similar ends
        int n = s.length();
        deque<char> dq;
        
        for(char x:s){
            dq.push_back(x);
        }
        //push all values
        while(!dq.empty() and dq.front() == dq.back() and dq.size()!=1){
            char front = dq.front();
            while(!dq.empty() and dq.back() == front){
                dq.pop_back();
            }
            while(!dq.empty() and dq.front() == front){
                dq.pop_front();
            }
        }
        return dq.size();
        
    }
};