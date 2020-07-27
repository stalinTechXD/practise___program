#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary(vector<int> &v,int low,int high,int key)
{

     
    while(low < high)
    {
        int mid = ((low+high)/2);
        if(v[mid]==key){
             return 1;
        }
        else if(v[mid]<key){
            low = mid+1;
            
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
 

int main(){
    vector<int> v;
    int n,x;
    int key;
    //int count;
    int low = 0;
    int high;
    
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>x;
        v.push_back(x);
    }
    cout<<"enter the key element to be searched"<<endl;
    cin>>key;
    int g = binary(v,0,v.size(),key);
    if(g == 1){
        cout<<"successsfull"<<endl;
    }
    else{
        cout<<"failed"<<endl;
    }
    return 0;
    
}