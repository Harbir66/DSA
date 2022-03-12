//  Q https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/dynamic-programming/lpss-official/ojquestion

#include<bits/stdc++.h>

using namespace std;

int largestPalin(string s){
    int n=s.size();
    bool dp[n][n]={0};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int len;
    for(int gap=0;gap<n;gap++){
        for(int i=0;i+gap<n;i++){
            int j=i+gap;
            if(gap==0){
                dp[i][j]=true;
            }
            else if(gap==1){
                dp[i][j]=s[i]==s[j]?1:0;
            }
            else{
                dp[i][j]=(s[i]==s[j]&&dp[i+1][j-1]==1)?1:0;
            }
        if(dp[i][j]==1){
            len=gap+1;
        }
        }
    }
    return len;
}

int main(){
    string s;
    cin>>s;

    int len=largestPalin(s);
    cout<<len;
    return 0;
}