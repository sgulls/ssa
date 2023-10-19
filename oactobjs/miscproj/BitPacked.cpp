// $Id: BitPacked.cpp,v 1.2 2005/10/26 20:24:10 djolson Exp $//// Functions for BitPacked class.#include "BitPacked.h"#if defined(_WIN32)#pragma warning(disable:4800)#endif// Description: Initialize all values to 0.BitPacked::BitPacked() : bits(0u){ }// Description: Returns true if any bit is set, false otherwise.//// Returns: True if any bit is set, false otherwise.bool BitPacked::any() const{   return (bits != 0u);}// Description: Sets all bits to zero.void BitPacked::deleteContents(){   bits = 0u;}// Description: Return a bool.//// Returns: One bool from the bitfield.//// Arguments://   index: Index of bool (zero to U_NUMBITS-1).bool BitPacked::get( int index ) const{   unsigned mask = 1u << (U_NUMBITS - 1 - index);   return static_cast<bool>(bits & mask);}// Description: Sets a bit.//// Arguments://   index: Index of year.//   value: New value to use (0 = false, otherwise = true).void BitPacked::set( int index, int value ){   unsigned mask = 1u << (U_NUMBITS - 1 - index);   if (value == 0)      bits &= ~mask;   else      bits |= mask;}#if defined(_WIN32)#pragma warning(default:4800)#endif