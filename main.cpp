#include<bits/stdc++.h>
using namespace std;

#include "variables.cpp"
#include "input.cpp"
#include "utilities.cpp"

void solve(){
    //Number of Players
    cout<<"Enter the total number of players: ";
    cin>>n; 

    //Friends
    input_friends();

    //Number of groups
    cout<<"Enter the number of groups to form: ";
    cin>>grp;

    //Taking groups
    input_group();

    pair<int, int> friendUtil = getFriendUtil(), enemyUtil = getEnemyUtil();
    cout<<"Friend Based Strategy: "; 
    if(friendUtil.first > 0) {
        cout<<pname<<" should join Group #"<<friendUtil.second<<"\n";
        cout<<"{ ";
        for(auto findName:g[friendUtil.second]){
            cout<<playerNames[findName]<<" ";
        }
        cout<<"}\n";
    }
    else{
        cout<<pname<<" should not join any group\n";
    }

    cout<<"Enemy Based Strategy: "; 
    if(enemyUtil.first > 0) {
        cout<<pname<<" should join Group #"<<enemyUtil.second<<"\n";
        cout<<"{ ";
        for(auto findName:g[enemyUtil.second]){
            cout<<playerNames[findName]<<" ";
        }
        cout<<"}\n";
    }
    else{
        cout<<pname<<" should not join any group.\n";
    }
}

signed main(){
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Fast IO
    solve();
}