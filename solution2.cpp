class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string line;
        while(getline(ss,line,'/')){
            if(line=="" || line==".") continue;
            else if(line ==".."){
                if(!st.empty()) st.pop();
            }else 
                st.push(line);
        
        }
        string res;
        while(!st.empty()){
            res= '/'+st.top()+res;
            st.pop();
        }
        return res.empty()?"/":res;
    }
};
