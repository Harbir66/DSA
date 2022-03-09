#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

void printDups(string a){
    unordered_map<char,int> m;
    for(auto i=a.begin();i!=a.end();i++){
        m[*i]++;
    }
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second >1){
            cout<<i->first<<" ";
        }
    }
}

int main(){
    string a;
    getline(cin,a);

    printDups(a);

}