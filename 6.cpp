#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
}

int max(int arr[] , int size){
    int max=0;
    for(int i=0; i<size ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << max ;
}

int main(){
    int number[] = {7,4,8};
    char name[]={'a','b','c'};
    cout << number[2] << name[2] ;
    name[1] = 'g';
    cout << name[1] ;
    cout << endl ;
    printArray(number,sizeof(number)/sizeof(int));
    cout << endl ;
    max(number,3);

}