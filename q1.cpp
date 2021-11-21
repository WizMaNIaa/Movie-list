#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
int n1,x=1;
while(n/10!=0){
int rem = n/10;
n1 = n1+rem*(int)pow(10,x);
x++;
if(n1==n){
return true;
}
else{
return false;
}
}
}

int main(){
int n;
cin>>n;
if(isPalindrome(n)){
cout<<"The number is palindrome";
}
else{
cout<<"no";
}
return 0;
}
