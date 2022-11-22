#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;

    for(int i = 0; i < 8; i++){
       reversed |= ((octet >> i) & 1) << (8 - i - 1);
 
    }
    return(reversed);
}
