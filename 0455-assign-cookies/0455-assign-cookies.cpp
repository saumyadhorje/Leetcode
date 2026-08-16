class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();//no of cookies
        int m=g.size();
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i=0;//cookie
        int j=0;//greed
        int count=0;
        while(i<n&&j<m)
        {
            if(s[i]>=g[j])
            {
                count++;
                i++;
                j++;
            }
            else if(s[i]<g[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};