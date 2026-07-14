class Solution {
public:
    int findComplement(int num) {
        // Handle edge case
        if (num == 0) return 1;
        
        // Start mask with all 1s (1111...)
        unsigned int mask = ~0;
        
        // Shift bits left until 0s cover 'num'
        while (num & mask) {
            mask <<= 1;
        }
        
        // Isolate and extract the flipped bits
        return ~mask & ~num;
    }
};