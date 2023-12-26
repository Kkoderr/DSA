#include<iostream>
#include<vector>
#include<array>
using namespace std;
/*
//reverse array 
vector<int> reverse(vector<int> v){
    int s=0 , e= v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    vector<int> rev = reverse(v);
    print(rev);
}*/

/*
merge and sort
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void merge(vector<int> v1, vector<int> v2, vector<int>v3 ){
    int i,j=0;
    int n =v1.size(), m=v2.size();
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            v3.push_back(v1[i++]);
        }else{
            v3.push_back(v2[j++]);
        }
    }
    while(i<n){
        v3.push_back(v1[i++]);
    }
    while(j<m){
        v3.push_back(v2[j++]);
    }
    print(v3);
}

int main(){
    vector<int> v1 = {1,3,5,7,9};
    vector<int> v2 = {2,4,6,8};
    vector<int> v3;
    merge(v1, v2 ,v3);
    print(v3);
}*/

/*
//count zeroes
void print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int move_zeroes(int arr[] , int size){
    int nonZero =0;
    for(int j=0; j<size ; j++){
        if(arr[j] !=0 ){
            swap(arr[j],arr[nonZero]);
            nonZero++;
        }
    }
    print(arr,size);

}

int main(){
    int arr[] = {0,1,0,3,12};
    int size = sizeof(arr)/sizeof(int);
    move_zeroes(arr,size);

}*/

/*
//rotate array 

void print(vector<int>v){
    for(int i=0; i<v.size();i++){
        cout << v[i] << " ";
    }cout << endl;
}

void rotate (vector<int> &v, int key){
    int size = v.size();
    vector<int> temp(size);
    for(int i=0; i<v.size(); i++){
        temp[(i+key)%v.size()] = v[i];
    }
    v= temp;

}

int main(){
    vector<int> v= {4,1,2,8,6,7,9};
    rotate(v,3);
    print(v);
}*/

/*
//check if an array is sorted and rotated

bool check(int arr[], int size){
    int count = 0;
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
        if(count>1){
            return 0;
        }
    }
    if(arr[size-1]>arr[0])
        return 0;
    return 1;
}

int main(){
    int arr[]= {3,5,7,1,6};
    int size = sizeof(arr)/sizeof(int);
    cout << "Is the array sorted and rotated -> " << check(arr,size);
}*/

// sum of two arrays

void print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void sum(int arr1[],int arr2[],int size1, int size2){
    int i = size1-1;
    int j = size2 -1;
    int size = max(size1,size2)+1;
    int ans[size]={0};
    int f =1;
    int carry=0;
    while(i>=0 && j>=0){
        int val1 = arr1[i--];
        int val2 = arr2[j--];
        int sum = val1 + val2 +carry ;
        carry =sum/10;
        sum=sum%10;
        ans[size-f] = sum;
        f++;
    }
    while(i>=0){
        int sum = arr1[i--]+carry;
        carry =sum/10;
        sum=sum%10;
        ans[size-f] = sum;
        f++;
    }
    while(j>=0){
        int sum = arr2[j--]+carry;
        carry =sum/10;
        sum=sum%10;
        ans[size-f] = sum;
        f++;
    }
    ans[size-f] = carry;

    print(ans,size);
}

int main(){
    int arr1[]= {1,8,2,3,4,5};
    int arr2[]={5,9,8,7,6};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    sum(arr1,arr2,size1,size2);
}