#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
}

/*
void reverse(int arr[], int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }
    printArray(arr, size);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size);
    cout << endl;
    reverse(arr, size);
}
*/

int ksmallest(int arr[], int size, int k){
    for(int i=0; i<k; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArray(arr,size);
    cout << endl << arr[size-k];
}
int main(){
    int arr[]={1,5,3,6,7};
    int size = sizeof(arr)/sizeof(int);
    ksmallest(arr,size,2);
}