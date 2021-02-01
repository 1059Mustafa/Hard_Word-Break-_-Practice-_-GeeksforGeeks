int i,j,k,n=B.size();
    
    set<string> mp;
    for(i=0;i<n;i++){
        mp.insert(B[i]);
    }
    int len = (int)A.size();
    vector<bool> dp(len + 1, false);
    dp[0] = true;

    for(int i = 1; i <= len; i++) {
        for(int j = i - 1; j >= 0; j--) {
            if(dp[j] && mp.find(A.substr(j, i - j)) != mp.end()) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[len];  
