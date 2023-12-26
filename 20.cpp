#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void printVector(vector<int> v){
    for(int i : v){
        cout << i << " ";
    }
}

void printVectorBool(vector<bool> v){
    for(bool i : v){
        cout << i << " ";
    }
}

// Sieve of Eratosthenes
//complexity -> O(n.log(log n))
int countPrime(int n){
    int cnt = 0;
    vector<bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for(int i=2; i<n; i++){
        if(prime[i]){
            cnt++;
            for(int j=i*2; j<n; j+=i){
                prime[j]=false;
            }
        }
    }
    return cnt;
}

//GCD
int gcd(int n1 , int n2){
    if(n1==0){
        return n2;
    }
    if(n2==0){
        return n1;
    }

    while(n1!=n2){
        if(n1>n2){
            n1-=n2;
        }else{
            n2-=n1;
        }
    }
    return n1;
}

// lcm(a,b) * gcd(a,b) = a*b

int modularExponentiation(int x, int n, int m){
    int result=1;
    while(n>0){
        if(n&1){
            //odd
            result=(result*(x)%m)%m;
        }
        x=((x)%m*(x)%m)%m;
        n=n>>1;
        // right shift by 1 is equal to divide by 2.
    }
    return result;
}

int fastExponentiation(int x, int n){
    if(n==0){
        return 1;
    }
    int u = fastExponentiation(x, n/2);
    u = u*u;
    if(n&1){
        u = u*x;
    }
    return u;
}

vector<int> segmentedSieve(int l, int h){
    vector<bool> s_sieve(sqrt(h)+1,true);
    s_sieve[0]=false;
    s_sieve[1]=false;
    for(int i=2; i<s_sieve.size();i++){
        if(s_sieve[i]){
            for(int j=i*i; j<s_sieve.size(); j+=i){
                s_sieve[j]=false;
            }
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for(int i=3; i<s_sieve.size(); i++){
        if(s_sieve[i])
            primes.push_back(i);
    }
    return primes;
}

int main(){
    vector<int> prime_sieve = segmentedSieve(110,130);
    cout << "Prime Sieve : ";
    printVector(prime_sieve);
    cout << endl;
    vector<bool> dummy(130-110+1,true);
    for(int i: prime_sieve){
        int first_multiple = (110/i)*i ;
        if(first_multiple<110) first_multiple+=i;
        for(int j=max(first_multiple,i*i); j<=130; j+=i){
            dummy[j-110] = 0;
        } 
    }

    vector<int> prime;
    for(int i=0; i<dummy.size(); i++){
        if(dummy[i]){
            prime.push_back(i+110);
        }
    }
    cout << "Prime Numbers : ";
    printVector(prime);
}