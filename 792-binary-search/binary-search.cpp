class Solution {
public:
    int search(vector<int>& a, int target) {
        int s = 0;
        int e = a.size()-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(a[mid]==target)
            {
                return mid;
            }
            else if(a[mid]<target)
            {
                s = mid +1;
            }
            else
            {
                e = mid -1;
            }
        }
        return -1;
    }
};