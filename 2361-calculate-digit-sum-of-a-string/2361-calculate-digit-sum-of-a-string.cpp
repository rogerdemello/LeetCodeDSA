class Solution {
public:
    string digitSum(string s, int k) {
        if(s.length()<=k)   return s;

        while(s.length()>k){
            string add = "";
            for(int i=0; i<s.length(); i+=k){
                int count = 0;
                string str = s.substr(i, k);
                for(auto i:str) count += (i-'0');
                add += to_string(count);
            }
            s = add;
        }
        return s;
    }
};