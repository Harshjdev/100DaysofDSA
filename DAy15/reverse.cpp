vector<int> reverseArray(int n, vector<int> &nums)

{

    

    vector<int>v;

    if(n==0){

        return v;

    }

 

    v=reverseArray(n-1, nums);

    v.insert(v.begin(), nums[n-1]);

 

}