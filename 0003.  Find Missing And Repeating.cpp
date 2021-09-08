#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int* findTwoElement(int *arr, int n) {
        // code here
        int new_arr[n]={0};
        int v;
        
        for (int i =0 ; i<n; i++){
            //v=*(arr+i)-1;
            new_arr[arr[i]-1]++;
        }
        int sol[2];
        for (int i =0 ; i<n; i++){
            if(new_arr[i] ==0) sol[1]=i+1;
            if (new_arr[i] == 2) sol[0]=i+1;
        }
        int *pt = sol;
        return pt;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
