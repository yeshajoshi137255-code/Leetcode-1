class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        for(char &c:p) {
            if(!isalpha(c)) c=' ';
            else c=tolower(c);
        }
        set<string> b(banned.begin(),banned.end());
        map<string,int> m;
        stringstream ss(p);
        string x,ans;
        int mx=0;
        while(ss>>x) {
            if(!b.count(x)) {
                m[x]++;
                if(m[x]>mx) {
                    mx=m[x];
                    ans=x;
                }
            }
        }
        return ans;
    }
};
