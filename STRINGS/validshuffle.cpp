// 005 https://www.programiz.com/java-programming/examples/check-valid-shuffle-of-strings

#include<bits/stdc++.h>

using namespace std;

bool validShuffle(string s1,string s2,string s3){
    s2=s2+s3;
    if(s2.size()!= s1.size()) return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) return false;
    }
    return true;
}

int main(){
    
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    bool ans=validShuffle(s1,s2,s3);
    cout<<(ans?"Valid Shuffle":"Not Valid Shuffle");
    return 0;
}