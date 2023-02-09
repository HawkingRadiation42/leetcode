class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bits(n);
        for (int i = 0; i < 16; i++) {
            bool temp = bits[i];
            bits[i] = bits[31 - i];
            bits[31 - i] = temp;
        }
        return bits.to_ulong();
    }
};