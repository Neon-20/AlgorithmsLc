// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int number=0;
    int res=1;
    while(n>0){
        int var=n%10;
        if(var == 0){
            var=5;//1554
        }
        //
        //Create a number 
        number=number+var*res;//number=4
        res=res*10;// res=10
        n/=10;
    }
    return number;
}