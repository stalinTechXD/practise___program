#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<list>
using namespace std;

void display( vector<int> &vec){
    auto it = vec.rbegin();
    while (it != vec.rend())
    {
        
        cout << *it<<"  "<<endl;
        it++;
    }
    
}

int main(){
   list<string> name{"larry","moe","curly"};
   auto it2 =  name.crbegin();
   cout<<*it2<<endl;
   it2 ++;
   cout<<*it2<<endl;

    
 
    return 0;

}
