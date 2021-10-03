// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays
//Got TLE

int firstRepeated(int *arr, int n) {
    // code here
    int i, j, ans = -1;
    for(i = 0; i<n; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            if(arr[i]==arr[j])
            { 
                ans = i+1;
                return ans;
                break;
            }
        }
        
    }
    return ans;
}
