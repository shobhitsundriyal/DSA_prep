class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
    int count[] = {0,0,0};   
    for (int i=0; i<n; i++){
        if (a[i] == 0) count[0]++;
        else if (a[i] == 1) count[1]++;
        else count[2]++;
    }
    //int new[n];
    int counter=0 ;
    for(int j=0; j<3; j++){
        for (int i = 0; i<count[j]; i++){
        a[counter] = j;
        counter ++;
        }
    }
    }
    //Three way partition
    void sort012(int a[], int n){
        int low=0; int mid=0, high=n-1;
        while (mid<=high){
            switch(a[mid]){
                case 0:
                    swap(a[low++], a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid], a[high--]);
            
                    
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
