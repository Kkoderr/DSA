#include<iostream>
#include<math.h>
using namespace std;

/*

int main ()
{
    int a;
    cin>>a;
    cout<<a;
    int check = 1 ;
    int n = 0 ;
    for (int i =0 ; i <= 30 ; i++){
        if(check == n){
            cout << "n is value of 2 power" ;
        }
        if(check < pow(2,30)){
            check = check *2 ;
        }
    }
}
*/

int main(){
    int n = 32 ;
    int set_bit = 0;
    while(n){
        set_bit += n&1 ;
        n = n>>1 ;
    }
    if(set_bit==1){
        cout << "It is a number that can be represented by taking power of 2"; 
    }else{
        cout << "It cannot be represented as power of 2" ;
    }
}
