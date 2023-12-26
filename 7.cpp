#include<iostream>
using namespace std;
/*
void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

int update(int arr[], int upd,int size){
    arr[0] = upd ;
    //printing the modified array in the update function
    printArray(arr,size) ;
}

int main(){
    int arr[] = {4,5,67,78,2} ;
    int size = sizeof(arr)/sizeof(int) ;
    //printing initial array
    printArray(arr,size);
    //updating the array by a function
    update(arr,32,size);
    //reprinting the array from main function
    printArray(arr,size);
}*/

/*
int sum_of_array(int arr[],int size){
    int sum =0 ;
    for(--size; size>=0 ; size--){
        sum += arr[size];
    }
    return sum ;
}

int main(){
    int arr[] = {1,2,3,4,5,6} ;
    cout << sum_of_array(arr,6) ;

}
*/

/*
// Linear Search

bool linear_search(int arr[],int key, int size){
    for(--size; size>0 ; size--){
        if(arr[size] == key){
            return 1 ;
        }
    }
    return 0 ;
}

int main(){
    int arr[] = {5,7,2,3,4,1};
    int key  = 45;
    if(linear_search(arr,key,6)){
        cout << "The key is present in the array" ;
    }else{
        cout << "The key is not present " ;
    }
}
*/

/*
//reverse an array
int reverse(int arr[],int size){
    for(int i=0; i<=size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp; 
        swap(arr[i],arr[size-i-1]);
    }
}

void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

int main(){
    int arr[]={2,4,1,5,6,3,7};
    printArray(arr,7);
    reverse(arr,7);
    printArray(arr,7);
}
*/
/*
void printArray(int arr[],int size){
    for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

int swap_alternate(int arr[],int size){
    if (size%2 != 0){
        size--;
    }
    for(int i=0 ; i<size; i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int arr[] = {2,5,1,6,7,4,0,1};
    printArray(arr,8);
    swap_alternate(arr,8);
    printArray(arr,8);
}*/

/*
//Finding unique number among array of pairs of number
int unique(int arr[],int size){
    int unique =0;
    for(--size;size>=0 ;size--){
        unique = unique^arr[size];
    }
    return unique ;
}

int main(){
    int arr[] = {2,2,4,3,4,6,3};
    int size = sizeof(arr)/sizeof(int) ;
    cout << unique(arr,size);
}
*/

