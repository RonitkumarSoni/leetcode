class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bitCount = 0;

        while (n != 0) {
            if ((n & 1) == 1) {
                bitCount++;
            }
            n = n >> 1;
        }

        return bitCount;
    }
};
