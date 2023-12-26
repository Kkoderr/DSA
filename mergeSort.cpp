#include<iostream>
using  namespace std;

void merge(int arr[], int begin, int mid, int end){
    int* left_arr = new int[mid-begin+1];
    int* right_arr = new int[end-mid];
    int left_index, right_index=0;
    int arr_index = begin ;

    for(int i=0; i<(mid-begin); i++){
        left_arr[i] = arr[begin+i];
    }
    for(int j=0; j<(end-mid); j++){
        right_arr[j] = arr[mid+j+1];
    }
    
    while(left_index<(mid-begin+1) && right_index<(end-mid)){
        if(left_arr[left_index] < right_arr[right_index]){
            arr[arr_index++] = left_arr[left_index++];
        }else{
            arr[arr_index++] = right_arr[right_index++];
        }
    }

    while(right_index<(end-mid)){
        arr[arr_index++] = right_arr[right_index++];
    }
    while(left_index<(mid-begin+1)){
        arr[arr_index++] = left_arr[left_index++];
    }

    delete []left_arr;
    delete []right_arr;
}

void mergeSort(int arr[], int begin, int end){
    if(begin>=end){
        return;
    }
    int mid = end + (begin-end)/2;
    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);
}

int printArray(int arr[] , int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {5,7,2,3,8,1,9};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size);
    mergeSort(arr,0,size-1);
    printArray(arr,size);
}


 