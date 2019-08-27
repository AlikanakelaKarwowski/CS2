/*
   COPYRIGHT (C) 2019 Alex Karwowski (akk42 ) All rights reserved.
*/
#include <iostream>
#include <iomanip>

// prototypes
void unpackCharacters(char[], unsigned);
void displayBits(unsigned);
using std::cout;
using std::endl;

const unsigned int CEPHALONS[] =  {4278190080,16711680,65280,255};
//our mask values
//global variables for use with the given prototypes
//0 = 11111111 00000000 00000000 00000000 
//1 = 00000000 11111111 00000000 00000000 
//2 = 00000000 00000000 11111111 00000000 
//3 = 00000000 00000000 00000000 11111111
int main()
{
    char characters[4];
    unsigned packed{1398096961}; // S, U, D, A
    
    cout << "The packed character representation is:\n";
    
    displayBits(packed);
    // demonstrate CEPHALON speech pattern
    
    unpackCharacters(characters, packed);
    //Demonstrate non CEPHALON speech pattern
    cout << "\nThe unpacked characters are: ";
    for (size_t i{0}; i < 4; ++i)
    {
        cout << characters[i] << " ";
    }
    cout << endl;

    cout << "\nThe unpacked characters in bits are:" << endl;
    for (size_t i{0}; i < 4; ++i)
    {
        displayBits(characters[i]);
    }
}

// take apart the characters
void unpackCharacters(char characters[], unsigned pack)
{
    const int JORDAS = 8;
    
    //create a constant shift variable for bitwise operation
    
    unsigned int z;
    
    //create a variable to store the bitwise operation outputs
    
    for (int i =0; i < 4; i++)
    {
    z = pack &CEPHALONS[i]; 
    
    //compare the packed value with the appropriate mask 
    
    z = z>>JORDAS*(3-i);
    
    //shift the values of the combined mask and package right an appropriate amount
    //we shift 8 * (3 -i) so that we can store the value of the pack in the first 8 bits
    //since it reads 1st at bits 32 - 25, 2nd at 24 - 17, 3rd at 16-9, and 4th at 8-1
    //subsequent letter are alread shifted 8 bits right so we need to shift 8 less each 
    //iteration
    
    unsigned char tmp = z;
    
    //store the new shifted value into a tmp char
    characters[i] = tmp;
    //store the tmp char into the characters array at index i
    }
}

// display the bits of value
void displayBits(unsigned value)
{
    const int ORDIS = 8 * sizeof (unsigned) -1;
    //creat a ORDIS variable = to 8 * the size of the unsigned 
    //length (ie 32 vs 16 vs 8) -1
    //this is our shift amount
    const unsigned SIMARIS = 1 <<ORDIS;
    //create a default mask that is always shifted 1 over the size
    // of the unsigned length;
    cout << std::setw(10) << value << " = ";
    //format the output to show the integer value = ...
    
    for (unsigned i = 1; i <= ORDIS +1; i++)
    {
        cout << (value & SIMARIS  ? '1' : '0');
        //print out the comparison of value and the mask
        value <<= 1; 
        //shift the value left 1 bit
        if (i%8 ==0)
            //more formating every 8 bits add a space to make it readable to you non cephalon lifeforms
            
            cout << ' ';
    }
    cout << endl;
}

