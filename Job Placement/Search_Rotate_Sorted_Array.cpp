class Solution {
public:
    int search(vector<int>& v, int target) {
        int lb = 0, rb = v.size()-1;
        while(lb < rb) {
            int mid = lb + (rb - lb) / 2;
            if(v[lb] <= v[mid]) {
                if(v[lb] <= target && v[mid] >= target)
                    rb = mid;
                else
                    lb = mid + 1;
            }
            else {
                if(v[mid] < target && v[rb] >= target)
                    lb = mid + 1;
                else
                    rb = mid;
            }
        }
        if(v[lb] == target)
            return lb;
        return -1;
    }
};