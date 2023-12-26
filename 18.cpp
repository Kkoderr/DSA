#include<iostream>
#include<cstring>
using namespace std;
/*
int main(){
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    //name[2]='\0';  //stop execution at index position at 2.
    //cout <<"Your name is "<< name;

    int len=0;
    int i=0;
    while(name[i]!='\0'){
        len++;
        i++;
    }
    cout << len;


}*/

/*
void toLower(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] -= 'A';
            str[i]+= 'a';
        }
    }
}

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

bool checkPalindrome(char str[],int n){
    int s=0, e =n-1;
    toLower(str);
    while(s<e){
        while(!valid(str[s])){
            s++;
        }
        while(!valid(str[e])){
            e--;
        }
        cout << s << " "<< e << endl;
        if(str[s++]!=str[e--]){
            return 0;
        }
    }
    return 1;
}

int reverse(char str[] , int n){
    int s=0, e=n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}

int getLength(char str[]){
    int len=0;
    int i=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

int main(){
    //char name[20] = "Ra c eCa r" ;
    //cout << "Is the string a palindrome -> " << checkPalindrome(name,getLength(name));
    string str = "ab\0c";
    char a[20] ="ab\0c";
    cout << str <<endl;
    cout << a <<endl;
    char name[100] ="A man, a plan, a canal: Panama";
    cout << "Is the string a palindrome -> " << checkPalindrome(name,getLength(name));
    
}*/
/*
void reverse(string &str){
    int s=0 ;
    for(int i=0; i<=str.length();i++){
        if(str[i] ==' ' && str[i-1]!=' ' && i!=0 || str[i] == '\0'){
            int e = i-1;
            while(s<e){
                swap(str[s++],str[e--]);
            }
            s=i+1;
        }
        
    }
}

int main(){
    string str = "My name is bhavook";
    reverse(str);
    cout << (str);
}*/

/*
//max occurence
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout << i <<"->"<<arr[i] << " " ;
    }cout << endl;
}
char maxOccuringChar(string str){
    int arr[26] ={0};
    int index = 0;
    int temp=0 ;
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' '){
            arr[int(str[i]-'a')] ++;
            if(arr[int(str[i]-'a')] > temp){
                temp = arr[int(str[i]-'a')];
                index = int(str[i]-'a') ;}
        }
    }
    return char(int('a')+index);
}

int main(){
    char arr[50];
    string str ;
    getline(cin,str);
    cout << maxOccuringChar(str);
}
*/
/*
// basic string function
int main(){
    string str1 , str2;
    getline(cin,str1,'#');
    getline(cin,str2);    
}*/
/*
void removeSpace(string &str){
    int s =0;
    while(s<str.length()){
        int i = str.find(' ', s);
        str = str.substr(0,i) + "@40" + str.substr(i+1);
        s = i+4;
    }
}
 
int main(){
    string str = "my name is bhavook ";
    removeSpace(str);
    cout << str;
}
*/

// remove all occurence of substring
/*
int removeMultipleOccurence(string &str , string substr){
    for(int i=0; i<str.length();i++){
        bool rem = false;
        for(int j=0; j<substr.length(); j++){
            if(str[i+j] != substr[j]){
                break;
            }
            if(j==substr.length()-1)  
                rem = true;
        }
        if(rem){
            str = str.substr(0,i) + str.substr(i+substr.length());
            rem = false;
            i=0;
        }
    }

}*/
/*
void removeMultipleOccurence(string &s , string part){

    while(s.length()!=0 && s.find(part)<s.length()){
        cout << s.find(part) << "  "; 
        s.erase(s.find(part), part.length());
        cout << s.length() << "  " << s.find(part) << endl;
    }
}

int main(){
    string str = "daabcbaabcbc";
    string substr = "abc";
    removeMultipleOccurence(str,substr);
    cout << str;
}*/