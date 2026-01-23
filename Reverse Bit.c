/******************************************************************************
Reverse Bit
*******************************************************************************/
unsigned int reverseBits(unsigned int num) {
    unsigned int NO_OF_BITS = sizeof(num) * 8; // Usually 32 bits
    unsigned int reverse_num = 0;

    for (int i = 0; i < NO_OF_BITS; i++) 
    {
        reverse_num <<= 1;
        if (num & 1) 
        {
            reverse_num |= 1;
        }
        num >>= 1;
    }
    return reverse_num;
}

int main() {
    unsigned int x = 1;
    printf("Original: %u\n", x);
    printf("Reversed: %u\n", reverseBits(x));
    return 0;
}
