class Solution {
public:
    int numberOfSubstrings(string s) {
         int j=0;
        int i=0;
        int som=0;
        map<char,int>hashing;
        bool test=false;
        while(j<s.length()){
            if(j==i){
                hashing[s[j]]++;j++;
            }
            else if(not((hashing['a']>=1)and(hashing['b']>=1)and(hashing['c']>=1))){
                if(j<s.length()){
                hashing[s[j]]++;
                j++;}        
            }
        else {som+=(s.length()-j+1);hashing[s[i]]--;i++;}
        }
    while(((hashing['a']>=1)and(hashing['b']>=1)and(hashing['c']>=1))){
        som+=(s.length()-j+1);hashing[s[i]]--;i++;
    }
    
    return som;
    }
};