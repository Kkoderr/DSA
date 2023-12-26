#include<iostream>
using namespace std;

void update(int & n){
    n=n+2;
}

int& fun(int a){
    int num = a;
    int& ans = num;
    return ans;
}
//error dega
int* fun2(int n){
    int* ptr = &n;
    return ptr;
}
//error dega

int main(){
/*
// reference varibale -> same memory but differnet name of variable
    int i= 5;
    int& j =i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    */
   /*
   int n= 5;
   cout << n << endl;
   update(n);
   cout << n << endl;
    */

   /*
   int n;
   cin >> n ;
   int arr[n];

    // arr[n] will assign the memory at run time and not at compile time.
    // what does this means at run time heap memory is used and at complie time 
    //stack memory is used , this gives arise to the problem of stack memory being 
    //less than the memory requirement by heap at run time thus rresulting in crash.
   
   */
    //char* ptr = new char; // 4(32 bit) : 8(64bit) byte for pointer and 1 byte for char.
    //int* arr = new int[5]; // total 4+20 bytes 
    
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << endl;
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete []arr;

}