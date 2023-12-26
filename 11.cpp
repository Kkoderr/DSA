#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int cows,int size, int mid){
    int cowCount =1;
    int lastPos = arr[0];

    for(int i =0; i<size;i++){
        if(arr[i]-lastPos >= mid){
            cowCount ++;
            if(cowCount==cows){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int  position(int arr[], int cows, int size){
    sort(arr, arr+size);
    int s=0;
    int maxi = -1;
    for(int i=0; i<size; i++){
        maxi=max(maxi,arr[i]);
    }
    int e =maxi;
    int ans=-1;
    int mid=s + (e-s)/2;
    
    while(s<=e){
        if(isPossible(arr,cows,size,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[]={4,2,1,3,6};
    int cows =2;
    int size = sizeof(arr)/sizeof(int);
    cout << position(arr,cows,size);
}