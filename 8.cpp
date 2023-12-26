#include<iostream>
#include<vector>
using namespace std;

/*
bool uniqueOccurence(int arr[],int size){
    int firstArr[100]={0};
    int secondArr[100]={0};
    for(int i=0; i<size; i++){
        firstArr[arr[i]]++;
    }
    cout << "Count of 0 1 2 3 4 ..." << endl ;
    for(int i=0; i<4 ; i++){
        cout << firstArr[i] << " ";
    }
    cout << endl;
    for(int i=0; i<100; i++){
        if(firstArr[i]){
            secondArr[firstArr[i]]++;
            if(secondArr[firstArr[i]]>1){
                return false;
            }
        }
    }
    return true;

}

int main(){
    int arr[]={1,2,2,1,1,3};
    int size = sizeof(arr)/sizeof(int) ;
    cout << uniqueOccurence(arr, size);
}
*/
/*
// duplicate find

int duplicate(int arr[],int size){
    int countArr[100] = {0};
    for(int i=0 ; i<size ; i++){
        countArr[arr[i]]++;
    }
    for(int i=0 ; i<100; i++){
        if(countArr[i] >1){
            return i ;
        }
    }
    return -1 ;
}

int main(){
    int arr[] = {1,2,3,4,5,8,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    cout << duplicate(arr,size);    
}


//duplicate (optimized)

int duplicate(int arr[] ,int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans =ans^arr[i];  
    }
    for(int i=1; i<size; i++){
        ans =ans^i;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,4,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    cout << duplicate(arr,size);
}
*/

/*
//Find all the doubles in the array
int main(){
    int arr[] = {1,2,3,7,4,5,6,7,5,8,9}
}
*/
/*
//intersection of array 

vector<int> intersection(int arr1[], int arr2[], int size1, int size2){

    vector<int> ans; 
    

    for(int i=0; i<size1 ; i++){
        int element = arr1[i];
        for(int j=0; j<size2; j++){
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j]=INT32_MIN;
                break;
            }
        }
    }
    return ans;
}

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5};
    int size1= sizeof(arr1)/sizeof(int);
    int size2= sizeof(arr2)/sizeof(int);
    cout << intersection(arr1,arr2,size1,size2);
}

vector<int> intersection(int arr1[], int arr2[], int size1, int size2){
    int i=0, j=0 ;
    vector<int> ans;
    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            i++;
        }
    }
    return ans;
}

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5};
    int size1= sizeof(arr1)/sizeof(int);
    int size2= sizeof(arr2)/sizeof(int);
    cout << intersection(arr1,arr2,size1,size2);
}
*/

/*
//pair sum

vector<int> pairSum(int arr[], int size){
    vector<int> ans;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j] == 5){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    cout << pairSum(arr,size);
}
*/
/*
//sort 0 1

void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

void sort01(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        printArray(arr,size);
        }
    }

    printArray(arr,size);
}

int main(){
    int arr[]={1,1,0,0,0,0,1,0};
    int size= sizeof(arr)/sizeof(int);
    printArray(arr,size);
    sort01(arr,size);
    return 0;
}
*/
/*
//sort 0,1,2

void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

void sort012 (int arr[],int size){
    int i=0, j=size-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]!=0){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        printArray(arr,size);
    }
    i=0, j=size-1;
    while(i<j){
        while(arr[i]==0 || arr[i]==1){
            i++;
        }
        while(arr[j]==2){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        printArray(arr,size);
    }
} 

int main(){
    int arr[]={0,2,1,2,1,0,1,1,0,1,2,1,0};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size);
    sort012(arr,size);
}
*/
#include<bits/stdc++.h>

void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

void sort012(int arr[],int size){
    int low=0,mid=0,high=size-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0: swap(arr[low],arr[mid]);
                    low++;
                    mid++;
                    break;
            case 1: mid++;
                    break;
            case 2: swap(arr[mid],arr[high]);
                    high--;
                    break;
        }
    }printArray(arr,size);
}

int main(){
    int arr[]={0,1,1,2,0,1,0,2,0,2,1,1};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size);
    sort012(arr,size);
}