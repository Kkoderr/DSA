#include<iostream>
using namespace std;
/*
int binarySearch(int arr[],int size,int key){
    int start=0,end=size-1,mid=start/2 +end/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }else if(mid[arr]>key){
            end=mid-1;
            mid=(end+start)/2;

        }else{
            start=mid+1;
            mid=(end+start)/2;

        }
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,5,8,9};
    int size = sizeof(arr)/sizeof(int);
    int key=5;
    cout << "Index value of " << key << " is " << binarySearch(arr,size,key);
}
*/

/*
//First occurence and last occurence
pair<int,int> floccur(int arr[],int size,int key){
    int foccur, loccur;
    int start=0,end=size-1,mid=(start/2)+(end/2);
    while(start<=end){
        if(arr[mid]==key){
            foccur=loccur=mid;
            while(arr[--foccur]==key){
                continue;
            }
            foccur++;
            while(arr[++loccur]==key){
                continue;
            }
            loccur--;
            pair<int,int> p ;
            p.first=foccur;
            p.second=loccur;
            return p;
        }
        else if(arr[mid]>key){
            end=mid ;
        }else{
            start=mid; 
        }
        mid=(start/2)+(end/2);
    }
}

int  main(){
    int arr[]={1,2,2,3,4,5,5,5,6,6,6,7,7};
    int size = sizeof(arr)/sizeof(int);
    pair<int,int> p = floccur(arr,size,6);
    cout << p.first << " " << p.second ;
}
*/
/*
//find peak of mountain
int peakMount(int arr[],int size){
    int mid=size/2;
    int start=0,end=size-1;
    while(start<end){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            break;
        }else if(arr[mid-1]>arr[mid]){
            end=mid;
        }else if(arr[mid+1]>arr[mid]){
            start=mid+1;
        }
        mid=start/2+end/2;
    }
    return mid;
}

int main(){
    int arr[]={1,3,4,5,8,9,1};
    int size=sizeof(arr)/sizeof(int);
    cout << peakMount(arr,size);
}
*/
/*
//find pivot in array

int pivot(int arr[], int size){
    int start=0, end=size-1;
    int mid = start/2+end/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid = start/2+end/2;
    }
    return mid-1;
}


int main(){
    int arr2[]={1,2,3,7,9};
    int arr1[]={5,6,7,8,9,1};
    int size = sizeof(arr1)/sizeof(int);
    cout << pivot(arr1,size);
}
*/
/*
//Square root using binary search

int root(int n){
    int start=1,end=n-1;
    int mid = start + (end-start)/2 ;
    int ans =-1;
    while(start<end){
        if(n/mid == mid){
            return mid;
        }else if(mid*mid > n){
            end=mid-1;
        }else{
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;

}

int main(){
    int number = 25;
    cout << root(8);
}
*/
/*
// sqrt completely

int root(int n){
    int start=1,end=n-1;
    int mid = start + (end-start)/2 ;
    int ans =-1;
    while(start<end){
        if(n/mid == mid){
            return mid;
        }else if(mid*mid > n){
            end=mid-1;
        }else{
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

double preciseSqrt(int n, int sqrt,int precision){
    double factor = 1;
    double ans = sqrt;
    for(int i=0; i<precision;i++){
        factor=factor/10;
        for(double j=sqrt; j*j<n; j+=factor){
            ans =j;
        }
    }
    return ans;
}

int main(){
    int number = 5;
    int approxSqrt = root(number);
    cout << preciseSqrt(number, approxSqrt,5);
}
*/
