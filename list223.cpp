#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<list>
#include<map>
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
    map<string, string> favourites{
        {"stalin","c++"},
        {"bill","java"},
        {"james","haskell"}
    };
    auto it3 = favourites.begin();
    while (it3 != favourites.end())
    {
        cout<<it3->first<<" "<<it3->second<<endl;
        it3++;
    }
    
    
 
    return 0;

}
