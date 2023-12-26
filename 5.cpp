#include<iostream>
using namespace std ;

/*int fact(int n){
    int fact = 1;
    while(n){
        fact = fact *n ;
        n--;
    } 
}
int nCr(int n , int r){
    int num = fact(n) ;
    int den = fact(r) * fact(n-r) ;
    return num/den ;
}

int main(){
    cout << nCr(5,2) ;
}*/

/*
void printCounting(int n){
    while(n){
        cout << n << " ";
        n-- ;
    }
}
int main(){
    printCounting(20);
    return 0 ;
}
*/

/*
int is_prime(int n){
    for(int i =2 ; i <= n/2 ; i++){
        if (n%i == 0){
            return 1 ;       
        }
    }
    return 0;
}

int main(){
    int n ;
    cin >> n ;
    if(is_prime(n)){
        cout << "Prime" ;
    }else{
        cout << "Not Prime" ;
    }
}
*/

/*int no_bit_true(int n){
    int count = 0 ;
    while(n){
        if(n&1){
            count ++ ;
        }
        n = n>>1; 
    }
    return count ;
}

int set_bit(int n , int m){
    int tot_bit = 0;
    for(int i =n ; i<=m ; i++){
        tot_bit += no_bit_true(i) ;
    }
    return tot_bit ;
}
int main(){
    cout << "Set bit between 2 & 3 is " << set_bit(2,3) ;
}*/

/*void fibonacci(int n){
    int f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++){
        f[i] = f[i-1]+f[i-2];
    }
    for(int i=0;i<n;i++){
        cout << f[i] << " " ;
    }
    
}

int main(){
    fibonacci(10);
}*/

