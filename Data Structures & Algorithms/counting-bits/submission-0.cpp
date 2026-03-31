class Solution {
public:
    int hammingWeight(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); // Remove the rightmost 1 bit
        count++;       // Increment the count
    }
    return count;
}

    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<=n;i++){
            res.push_back(hammingWeight(i));
        }
        return res;
    }
};
