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

void recur(string input,string output,vector<string> &res){
    if(input.length()==0){
        res.push_back(output);
        return;
    }
    string op1=output;
    string op=output;
    op1.push_back(input[0]);
    op.push_back(' ');
    op.push_back(input[0]);
    input.erase(input.begin()+0);
    recur(input,op1,res);
    recur(input,op,res);
    return;
}
vector<string>  spaceString(char str[])
{
    vector<string> res;
 string input="";
 string output="";
 input=str;
 output.push_back(str[0]);
 input.erase(input.begin()+0);
 recur(input,output,res);
 return res;
 
}