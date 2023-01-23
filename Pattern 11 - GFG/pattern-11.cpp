//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int start = 1;
        // code here
        for(int row=0; row<n; row++){
            if(row%2 == 0){
                start = 1;
            }
            else start = 0;
            
            for(int col = 0; col <= row; col++){
                cout<<start<<" ";
                start = 1 - start;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends