#include<iostream>
#include<vector>
using namespace std;

inline int linearSearch(int *arr, int key, int n){ 
    return n<0?-1:(*(arr+n)==key?n:linearSearch(arr,key,n+1));
}

inline int powerExp(int n, int p){
    return p==0?1:(p&1?powerExp(n,p/2)*powerExp(n,p/2)*n:powerExp(n,p/2)*powerExp(n,p/2));
}

int binarySearch(vector<int> a, int key, int low, int high){

    int mid = low + (high-low)/2;

    if(low>high)
        return -1;

    else if(a.at(mid)==key)
        return mid;
    else if(a.at(mid)<key)
        binarySearch(a,key,mid+1,high);
    else
        binarySearch(a,key,low,mid-1);
}

int main(){

    int a[] = {4,6,2,8,7,9};
    cout << linearSearch(a,7,0) << endl;

    cout << powerExp(2,5) << endl;

    vector<int> b ;
    b.push_back(3);
    b.push_back(5);
    b.push_back(8);
    b.push_back(9);
    cout << binarySearch(b,7,0,b.size());

}