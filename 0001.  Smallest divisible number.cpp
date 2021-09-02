// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    long long gcd(long long a,long long b){
        if (a==0) return b;
        
        return gcd(b%a, a);
    }
    
    long long lcm(long long a,long long b){
        long long l = (a*b)/gcd(a,b);
        return l;
    }
    
    long long getSmallestDivNum(long long n){
        // code here
        long long i, gc=1,lc=1, temp;
        
        for(i = 2; i<=n; i++){
            lc = lcm(lc, i);
            
        }return lc;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<< ob.getSmallestDivNum(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
