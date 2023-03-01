void input_friends(){
    playerNames.resize(n + 1);
    //Storing friends in graph
    cout<<"Enter your name: ";
    // string pname;
    cin>>pname;
    names[pname] = 1;
    playerNames[1] = pname;

    cout<<"Enter other players name(first name only): ";
    for(int i = 2; i<=n; i++){
        string gname;
        cin>>gname;
        names[gname] = i;
        playerNames[i] = gname;
    }

    // int z = 1;
    for(auto i:names){
        cout<<"Enter the no. of friends of "<<i.first<<": ";
        int x;
        cin>>x;
        if(x>0) cout<<"Enter the friends' name of "<<i.first<<": ";
        for(int j = 1; j<=x; j++){
            string fname;
            cin>>fname;
            while(fname == i.first){
                cout<<"The player cannot be it's own friend, kindly continue with a different name:\n";
                cin>>fname;
            }
            while(names.find(fname) == names.end()){
                cout<<"The given name doesn't exist, kindly continue with a different name:\n";
                // cout<<"Enter the friends' name of "<<i.first<<": ";
                cin>>fname;
            }
            frnds[i.second][names[fname]] = 1;
        }
        // ++z;
    }
}

void input_group(){
    //Storing groups in 2-D array
    g.resize(grp + 1);
    for(int i = 1; i<=grp; i++){
        cout<<"Number of people in Group #"<<i<<": ";
        int x;
        cin>>x;
        cout<<"Enter the names of Group #"<<i<<" members: ";
        for(int j = 1; j<=x; j++){
            string fname;
            cin>>fname;
            while(fname == pname){
                cout<<"You cannot assign group to yourself, kindly continue with a different name:\n";
                cin>>fname;
            }
            while(names.find(fname) == names.end()){
                cout<<"The given name doesn't exist, kindly continue with a different name:\n";
                // cout<<"Enter the friends' name of "<<i.first<<": ";
                cin>>fname;
            }
            g[i].push_back(names[fname]);
        }
    }
}