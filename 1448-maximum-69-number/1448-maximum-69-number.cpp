class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num);
        int first6 = -1;
        for(int i=0; i<str.length(); i++){   
            if(str[i]=='6'){
                first6=i; 
                break;
            }
        }

        if(first6 == -1) return num;

        str[first6] = '9';
        num = stoi(str);

        return num;
    }
};