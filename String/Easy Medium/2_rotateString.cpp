//https://leetcode.com/submissions/detail/1330599371/
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string s3=s+s;
        int index=s3.find(goal);
        if(index!= string::npos){
            return true;
        }else{
            return false;
        }
    }
};