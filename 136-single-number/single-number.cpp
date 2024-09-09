class Solution {
public:
    int singleNumber(vector<int>& a) {
        int unique = 0;
        for(int i=0;i<a.size();i++)
        {
            unique^=a[i];
        }
        return unique;
    }
};