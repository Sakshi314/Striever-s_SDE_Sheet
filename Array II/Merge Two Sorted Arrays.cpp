#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m){
	// Write your code here.
    int i=m+n-1;
    int first=n-1;
    int second=m-1;
    while(first>=0 && second>=0){
        if(arr1[first]>arr2[second]){
            arr1[i]=arr1[first];
            first--,i--;
        }
        else{
            arr1[i]=arr2[second];
            i--;
            second--;
        }
    }
    while(i>=0 && second>=0){
        arr1[i]=arr2[second];
        i--;
        second--;
    }
    return arr1;
}
