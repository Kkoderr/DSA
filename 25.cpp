#include<iostream>
using namespace std;

/*
//macro -> a piece of code in a program that is replaced
//by the value of macro.
#define pi 3.14
// a macro doesn't take ny extra space in memory
#define circle area
#define area(a) pi*a*a
 
int main(){
    int r= 5;
    cout << area(r) << endl ;
    cout << circle(4);

}*/

// inline fucntion are used to reduce the function calls overhead.

// normal function experience performance loss when we call the function and 
// also when we pass the variable by value a copy of the variable also affects
// the performance.

/*
int function(int a, int b){
    int c = (a>b) ? a : b;
    return c;
}*/

/*
inline int function(int& a, int& b){
    return (a>b)?a:b;
}

int main(){
    int a =3 , b=4 ;
    cout << function(a,b) << endl;

    return 0;
}
*/

void print(int arr[], int size, int start =0){
    for(int i=start; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {9,8,7,6,5,4};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size,2);

    return 0;
}
