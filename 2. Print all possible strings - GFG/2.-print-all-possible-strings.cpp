// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/

void recur(char str[],string s,int index,int n,vector<string> &res){
    if(index==n){
        res.push_back(s);
        return;
    } 
    s.push_back(str[index]);
    recur(str,s,index+1,n,res);
    if(index+1<n)
     recur(str,s+" ",index+1,n,res);
    
}
vector<string>  spaceString(char str[])
{
 vector<string> res;
 int n=strlen(str);
 recur(str,"",0,n,res);
 return res;
}