// https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/1/

class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int smaller = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>smaller && arr[i]<x)
            smaller = arr[i];
        }
        return smaller;
    }
};