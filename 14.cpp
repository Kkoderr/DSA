#include<iostream>
using namespace std;

//Insertion sort 

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    printArray(arr,size);
}

int main(){
    int arr[]={6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
}