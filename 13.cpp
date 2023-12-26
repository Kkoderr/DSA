//Bubble sort
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1 ; i++){
        bool swapped=false;
        for(int j=0;j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
                printArray(arr,size);
                cout << endl;
            }
        }
        if(swapped==false){
            break;
        }
    }
    printArray(arr,size);
}

int main(){
    int arr[]= {10,1,7,6,14,9,3,2,14,18,35,49,24,9,7,564,485,54,28,64};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr,size);
    return 1;
}

