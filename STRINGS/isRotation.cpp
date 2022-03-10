// 004 https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/   


#include<iostream>
#include<string>

using namespace std;

bool isRotation(string a,string b){
    if(a.size()!=b.size()) return false;

    for(int i=0;i<a.size();i++){
        if(a==b) return true;
        char temp= a[0];
        a.erase(a.begin());
        a+=temp;
    // cout<<a<<endl;;
    // cout<<b;
    }
    return false;
}


int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    bool ans=isRotation(a,b);
    // cout<<string::npos<<endl;
    cout<<ans;

    return 0;
}