int friendBasedUtility(int grpNo){

    //Initializing the variables that needs to be found
    int utility = 0;
    int friendNo = 0;
    int enemyNo = 0;

    //Checking the graph if they are friends or not
    for(auto x:g[grpNo]){
        if(frnds[1][x] == 1){
            friendNo++;
        }else{
            enemyNo++;
        }
    }

    //Using the Hedonic Game Theory Based Utility (Maximizing Friends)
    utility = (friendNo*n) - enemyNo;  

    // Returning the  final utility      
    return utility;
}

int enemyBasedUtility(int grpNo){

    //Initializing the variables that needs to be found
    int utility = 0;
    int friendNo = 0;
    int enemyNo = 0;

    //Checking the graph if they are friends or not
    for(auto x:g[grpNo]){
        if(frnds[1][x] == 1){
            friendNo++;
        }else{
            enemyNo++;
        }
    }

    //Using the Hedonic Game Theory Based Utility (Minimizing Enemies)
    utility = (friendNo) - (n*enemyNo);  

    // Returning the  final utility      
    return utility;
}

//Gives the most optimal friend utility
pair<int, int> getFriendUtil(){
    int Util = 0, grpNo = 0;
    for(int i = 1; i<=grp; i++){
        int checkUtil = friendBasedUtility(i);
        if(checkUtil > Util){
            grpNo = i;
            Util = checkUtil;
        }
    }

    return mp(Util, grpNo);
}

//Gives the most optimal enemy utility
pair<int, int> getEnemyUtil(){
    int Util = 0, grpNo = 0;
    for(int i = 1; i<=grp; i++){
        int checkUtil = enemyBasedUtility(i);
        if(checkUtil > Util){
            grpNo = i;
            Util = checkUtil;
        }
    }

    return mp(Util, grpNo);
}