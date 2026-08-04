class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> freq;
    
    if(s.size()!=t.size())
     return false;

     for(auto c:s){
        freq[c]=freq[c]+1;
     }
     for(auto c:t){

      if(freq.find(c)!=freq.end())
       freq[c]=freq[c]-1;
       else
       return false;
     }
     for(auto &c:freq){
        if(c.second!=0)
        return false;

     }
      return true;

    }
};
