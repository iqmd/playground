#include<bits/stdc++.h>
#include<stdio.h>

    unsigned long i=0, j=0;
    while(i < first.size() && j < second.size()){
        if(first[i] <= second[j]){
            final.push_back(first[i++]);
        }
        if(first[i] > second[j]){
            final.push_back(second[j++]);
        }
    }

    while(i < first.size()){
        final.push_back(first[i++]);
    }
    while(j < second.size()){
        final.push_back(second[j++]);
    }

    return final;
}


vector<int> mergesort(vector<int> arr, int lo, int high){
    if (lo < high){
       int mid = lo + (high - lo)/2;
       vector<int> first;
       vector<int> second;

       for(int i=lo; i < mid-1; i++) first.push_back(arr[i]);
       for(int i=mid; i < high; i++) first.push_back(arr[i]);

       sort(first,second);
    }
}

int main(){
    vector<int> unsorted = {6,4,3,7,8,1,2,3};
    return 0;
}
