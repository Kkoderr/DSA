#include <iostream>
using namespace std;

// a function when calls itself it is called recursion.

// agar ek badi problem ka solution ussi ke choti problem 
// pe depend krta hai to woh recursion kehlata hai.

// we need a base case in recursion to avoid segmentation fault.

inline unsigned int factorial(unsigned int n){return n>0?n*factorial(n-1):1;}

inline int power(int n, int pow){
    return pow==0?1:(pow&1?power(n,pow/2)*power(n,pow/2)*n:power(n,pow/2)*power(n,pow/2));

    /*if(pow==0)
        return 1;
    int ans = power(n,pow/2) ;
    ans = ans*ans;
    if(pow&1)
        ans = ans*n;
    return ans;
    */ 
}

inline int fibonnacci(int n){ return n<2?(n==0?0:1):fibonnacci(n-1)+fibonnacci(n-2);

    /*
    if(n==0){
        return 0 ;
    }
    else if(n==1){
        return 1 ;
    }
    else{ 
        return fibonnacci(n-1)+fibonnacci(n-2);}
    */
}
int countDistintWaysToClimbStair(int stairs){
    if(stairs<0)
        return 0;
    else if(stairs==0)
        return 1;
    return countDistintWaysToClimbStair(stairs-1)+countDistintWaysToClimbStair(stairs-2);
}

#define num {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"}
string numbers[] = num ;
void sayDigit(int n, string map[] = numbers){
    if(n==0)
     return ;
    int digit = n%10;
    sayDigit(n/10);
    cout << map[digit] << " ";
}
bool isSorted(int* arr,int size){
    if(size==0 || size ==1)
        return 1;
    else if (*arr < *(arr+1))
        return isSorted((arr+1), size-1);
    else
        return 0;
}

inline int sumOfArray(int arr[],int size){
    return size==1?*arr:*arr+sumOfArray(arr+1,size-1);
    /*
    if(size==0||size==1)
        return *arr ;
    return *arr + sumOfArray((arr+1),size-1);
    */
}

void printArray(int arr[], int size){
    if(size==0){
        cout << endl;
        return;
    }
    cout << *arr << " ";
    printArray(arr+1, size-1); 
}

int linearSearch(int arr[], int n, int key){
    if(n==0)
        return -1;
    else if(*arr == key)
        return n-1;
    linearSearch(arr+1, n-1, key);
}

bool binarySearch(int arr[], int start, int end, int key){
    if(end<start){
        return 0;
    }
    int  mid = end + (start-end)/2;
    if(*(arr+mid) == key){
        return 1;
    }else if(*(arr+mid)<key){
        binarySearch(arr+mid+1, 0,end-mid, key);
    }else{
        binarySearch(arr, 0, mid-1, key);
    }
}

pair<int,int> firstAndLastOccur(int *arr, int start, int end, int key){
    if(start>end){
        pair<int,int> p;
        p.first = -1;
        p.second = -1;
        return p;
    }
    int mid = start+(end-start)/2;
    if(*(arr+mid) == key){
        int f_occur = mid;
        int l_occur =mid;
        while(arr[--f_occur] == key)
            continue;
        f_occur++;
        while(arr[++l_occur] == key)
            continue;
        l_occur--;
        pair<int,int> p;
        p.first=f_occur;
        p.second = l_occur;
        return p;
    }
    else if(arr[mid]<key)
        firstAndLastOccur(arr,mid+1,end,key);
    else
        firstAndLastOccur(arr,start,mid-1,key);
}

int peakOfMountain(int *arr, int start, int end){
    if(start>end)
        return -1;

    int mid = start + (end -start)/2;
    if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
        return mid;
    else if(arr[mid]>arr[mid-1])
        peakOfMountain(arr,mid+1,end);
    else   
        peakOfMountain(arr,start,mid-1);

}

int sqrt(int n, int start=0, int end, int ans=-1){
    if(start>end)
        return ans;

    int mid = start+(end-start)/2;
    if(n/mid==mid)
        return mid;
    else if(mid < n/mid )
        sqrt(n,start,mid-1,ans);
    else
        sqrt(n,mid+1,end,mid);
}

bool isPossible(int *arr,int size,int student, int mid){
    int temp=0;
    int stud_left=1;
    for(int i=0; i<size;i++){
        if(temp+*(arr+i)<mid)
            temp+=*(arr+i);
        else{
            stud_left++;
            if(stud_left>student || *(arr+i)>mid)
                return 0;
            temp=*(arr+i);
        }
    }
    return 1;
}

int bookAllocation(int *arr , int student, int start, int end, int ans){
    if(start>end)
        return ans;
    int mid = start+(end-start)/2;
    if(isPossible(arr,(end-start),student,mid)){
        bookAllocation(arr,student,0,mid-1,mid);
    }else
        bookAllocation(arr,student,mid+1,end,ans);
}

int main(){
    int books[]={10,20,30,40};
    int student =3;
    int size = sizeof(books)/sizeof(int);
    cout << bookAllocation(books,student,0,size,0) ; 

    //cout << sqrt(8,0,8) << " | " << sqrt(9,0,9);
    
    /*
    int arr[]={1,3,4,5,8,9,1};
    int size=sizeof(arr)/sizeof(int);
    cout << peakOfMountain(arr,0,size);
    */

    /*
    int arr[] = {1,1,2,2,2,3,3,3,3,4,4,4,5,6,6,6,};
    int size = sizeof(arr)/sizeof(int);
    pair<int,int> ans = firstAndLastOccur(arr,0,size-1,4);
    cout << ans.first << " | " << ans.second ;
    */

    /*
    int arr[] = {2,3,4,7,9};
    int size = sizeof(arr)/sizeof(int);
    cout << isSorted(arr,size)<<endl;
    cout << sumOfArray(arr,size)<<endl;
    cout << linearSearch(arr,size,1)<<endl;
    cout << binarySearch(arr,0,size-1,9) << endl;
    */

    //sayDigit(573);

    /*
    for(int i=0; i<7 ;i++)
        cout << fibonnacci(i) << " ";
    */
    /*
    unsigned int x = 5;
    cout << x << endl;
    cout << factorial(x) << endl;
    */

   /*
   int n=4;
   int pow = 3;
   cout << power(n,pow) << endl;
   */

// HOMEWORK LECTURE 9,10,11 by using recursion.

//HOMEWORK



}