class Solution {
public:
    #define all(v)  v.begin(),v.end()
    const int mod=1e9+7;
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
        sort(begin(hor),end(hor));
        sort(begin(ver),end(ver));
        vector<int> heights={hor[0]};//first element
        //Horizontal process
        int n=hor.size();
        for(int i=1;i<n;i++){
            heights.push_back(hor[i]-hor[i-1]);
        }
        heights.push_back(h-hor[n-1]);
        vector<int> lengths={ver[0]};
        int x=ver.size();
        for(int i=1;i<x;i++){
            lengths.push_back(ver[i]-ver[i-1]);
        }
        lengths.push_back(w-ver[x-1]);
        
        long long a=*max_element(all(heights));
        long long b=*max_element(all(lengths));
        return (int)(a%mod*b%mod);
    }
};


