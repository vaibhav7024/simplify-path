class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string curr;
        for(int i=0;i<=path.size();i++){
            if(i==path.size() || path[i]=='/'){
                if(curr=="..") {
                    if(not st.empty()) st.pop_back();
                }else if(!curr.empty() && curr!="."){
                    st.push_back(curr);
                }
                curr.clear();
            }else{
                curr+=path[i];
            }
        }
        string res="/";
        for(int i=0;i<st.size();i++){
            res+=st[i];
            if(i!=st.size()-1) res+="/";
        }
        return res;

    }
};
