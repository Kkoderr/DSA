#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size){
    for(int i=0; i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[i],arr[min]);
    }

    printArray(arr,size);
}

int main(){
    int arr[] ={54,65,21,8,57,21};
    int size = sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
}