#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<stack>
using namespace std;
template<typename T>

void display(stack<T> s){
     
   //vector<int> v {1,2,3,4,5,65,78};
   //  auto it = v.rbegin();
     //while (it!=v.rend())
     //{
       // cout<<*it<<" "<<endl;
        //it++;
     //}
    //auto loc = find(v.begin(),v.end(),78);
   // if(loc != v.end())
   // {
        //cout<<*loc<<endl;
    //}
    cout<<"[";
    while (!s.empty())
    {
    T elemen = s.top();
    s.pop();
    cout<<elemen<<" ";
            /* code */
    }
    cout<<"]"<<endl;
    

     
    
         

     
     
     
    
     
    
}

int main(){
 stack<int> s;
 for(int i:{1,2,3,4,5})
    s.push(i);
 display(s);    
 s.push(100);
 display(s); 
 s.pop();
 s.pop();
 display(s);
 while (!s.empty())
 {
    s.pop(); /* code */
 }
 display(s);
 cout<<"size:"<<s.size()<<endl;
 s.push(10);
 display(s);

 s.top() = 100;
 display(s);

 
 return 0;
  
}
