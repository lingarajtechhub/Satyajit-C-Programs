//Bitwise Operators
//=================
/*

  data => binary(encode) => apply bitwise operators => Decode(binary to decimal) 
  => the converted data(decimal) will be final result.

    1. Bitwise AND(&)
    2. Bitwise Or(|)
    3. Bitwise XOR(^)
    4. Bitwise NOT(~)
    5. Right Shift(>>)
    6. Left Shift(<<)

    A=4 => (0100) 0 means false
    B=5 => (0101) 1 means true
    =============
     &  => (0100) => 4
     |  => (0101) => 5
     ^  => (0001) => 1 //similar bits are false and dissimilar bits are true
     ~  => -(5)   =>-5 // ~4 = -(4+1) => ~a => -(a+1)
     ~  => -(6)   =>-6 // ~5 = -(5+1)        
    
    >>2 => 4>>2   =>(0100)>>2 => 0001 => 1
    >>2 => 5>>2   =>(0101)>>2 => 0001 => 1
    <<2 => 4<<2   =>(0100)<<2 => 010000 => 16
    <<2 => 5<<2   =>(0101)<<2 => 010100 => 20 

*/

#include<stdio.h>

int main()
{
    int a = 4, b = 5;

    printf("Bitwise AND(&): %d\n", (a & b));
    printf("Bitwise OR(|): %d\n", (a | b));
    printf("Bitwise XOR(^): %d\n", (a ^ b));
    printf("Bitwise NOT(~a): %d\n", (~a));
    printf("Bitwise NOT(~b): %d\n", (~b));
    printf("Bitwise Right Shift of a(a>>2): %d\n", (a>>2));
    printf("Bitwise Right Shift of b(b>>2): %d\n", (b >> 2));
    printf("Bitwise Left Shift of a(a<<2): %d\n", (a << 2));
    printf("Bitwise Left Shift of b(b<<2): %d\n", (b << 2));
    return 0;
}

/*

Findout Using Bitwise Operators
===============================
A = 65
B = 66

A=34
B=56

A=67
b=78

*/