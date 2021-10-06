// https://practice.geeksforgeeks.org/problems/reverse-an-array/0

#include <iostream>
using namespace std;

void reversearr(int arrr[], int start, int end)
{
    if (start>=end)
    return;
    
    int temp = arrr[start];
    arrr[start] = arrr[end];
    arrr[end] = temp;
    
    reversearr(arrr, start+1, end-1);
}
void printArray(int a[], int len){
    for(int i=0; i<len; i++)
    cout<<a[i]<<" ";
}
int main(){
    int length;
    cin>>length;
    int arr[length];
    for(int i=0; i<length; i++)
    cin>>arr[i];
    reversearr(arr, 0, length-1);
    printArray(arr, length);
}
