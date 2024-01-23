vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> ans(n, 0);
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[nums[i]-1]++;
    }
    for(int i=0; i<n; i++){
        ans[i] = mp[i];
    }
    return ans;
}