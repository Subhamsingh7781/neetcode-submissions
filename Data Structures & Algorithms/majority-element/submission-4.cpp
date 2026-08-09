class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
      int count=0;
      int cand=nums[0];

    for(int i=0;i<nums.size();i++){

       if(cand==nums[i]){
        cand=nums[i];
       count++;
    } 

     if(cand!=nums[i]){
        count--;
     }

    if(cand!=nums[i] && count==0){

        cand=nums[i];
        count++;
    }

    }
    return cand;

    }
};