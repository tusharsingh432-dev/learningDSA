#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

int maxSubarrayXOR(int N, int arr[]){    
        int max = (arr[0]^arr[1]);
        for(int i = 1; i<N; i++){
            if((arr[i-i]^arr[i])>max){
                max = (arr[i-i]^arr[i]);
            }
        }
        return max;
    }

class Solution{   
public:
    
};

// { Driver Code Starts.
int main() 
{ 
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Max subarray XOR is " << maxSubarrayXOR(n, arr);
    return 0;
    return 0; 
} 