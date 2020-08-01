#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int main(){

int n;
int m;
int p;
int i ;
int a[100];
int b[100];
 
 
cout<<"enter the value"<<endl;
cin>>n;
cout<<"generatig the prime numbers \n"<<endl;
for(p=2;p<=n;p++){
    a[p] = p;
}
for(p=2;p<=sqrt(n);p++)
{
    if(a[p]!=0){
        i = p*p;
        while (i <= n)
        {
            a[i] = 0;
            i =i + p;
        }
        
    }
}
m =0;
for(p=2;p<=n;p++){
    if(a[p]!=0)
    {
    b[m] = a[p];
    m=m+1; 
    }
}
cout<<"the prime numbers between 2 and n"<<endl;
for(i=0;i<=m-1;i++){
    cout<<b[i]<<" ";
}
return 0;


}