class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> countmaj;
        int ans=0;
      int n= nums.size();
    for(int i=0;i<n;i++){

        countmaj[nums[i]]++;
    }
     
     for(auto& pair: countmaj){
        if(pair.second>n/2)
        return pair.first;
     }
     
    }
};