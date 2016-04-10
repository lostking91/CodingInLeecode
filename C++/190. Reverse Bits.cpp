/*
Reverse bits of a given 32 bits unsigned integer.
For example, given input 43261596 (represented in binary as 0000 0010 1001 0100 0001 1110 1001 1100), return 
964176192 (represented in binary as 00111001011110000010100101000000).
*/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        int i=32;
        while(i-- > 0)
        {
            res <<= 1;
            if(n&1)
            {
                res |= 1;
            }
            n >>= 1;
        }
        return res;
    }
};