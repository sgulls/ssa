// Functions for the <see cref=Pib52Mfb"/> class to handle 1952 pib-mfb
// conversion table.
//
// $Id: pib52mfb.cpp 1.10 2011/08/08 08:45:12EDT 044579 Development  $

#include "pibtable.h"
#include "Resource.h"
#include "PiaException.h"

// <summary>The 1952 mfb's.</summary>
const double Pib52Mfb::mfb52[] = {
  45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00,
  45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00,
  45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00,
  45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00,
  45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00,
  45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00, 45.00,
  45.00, 45.60, 45.60, 45.60, 45.60, 45.60, 45.60, 46.40, 46.40, 46.40,
  46.40, 46.40, 47.20, 47.20, 47.20, 47.20, 47.20, 47.20, 48.00, 48.00,
  48.00, 48.00, 48.00, 48.80, 48.80, 48.80, 48.80, 48.80, 48.80, 49.60,
  49.60, 49.60, 49.60, 49.60, 50.40, 50.40, 50.40, 50.40, 50.40, 50.40,
  51.20, 51.20, 51.20, 51.20, 51.20, 52.00, 52.00, 52.00, 52.00, 52.00,
  52.00, 52.80, 52.80, 52.80, 52.80, 52.80, 53.60, 53.60, 53.60, 53.60,
  53.60, 53.60, 54.40, 54.40, 54.40, 54.40, 54.40, 55.20, 55.20, 55.20,
  55.20, 55.20, 55.20, 56.00, 56.00, 56.00, 56.00, 56.00, 56.80, 56.80,
  56.80, 56.80, 56.80, 56.80, 57.60, 57.60, 57.60, 57.60, 57.60, 58.40,
  58.40, 58.40, 58.40, 58.40, 58.40, 59.20, 59.20, 59.20, 59.20, 59.20,
  60.00, 60.00, 60.00, 60.00, 60.00, 60.00, 60.80, 60.80, 60.80, 60.80,
  60.80, 60.80, 61.60, 61.60, 61.60, 61.60, 61.60, 61.60, 62.40, 62.40,
  62.40, 62.40, 62.40, 63.20, 63.20, 63.20, 63.20, 63.20, 63.20, 64.00,
  64.00, 64.00, 64.00, 64.00, 64.80, 64.80, 64.80, 64.80, 64.80, 64.80,
  65.60, 65.60, 65.60, 65.60, 66.40, 66.40, 66.40, 66.40, 66.40, 66.40,
  67.20, 67.20, 67.20, 67.20, 68.00, 68.00, 68.00, 68.00, 68.00, 68.80,
  68.80, 68.80, 68.80, 68.80, 69.60, 69.60, 69.60, 69.60, 69.60, 70.40,
  70.40, 70.40, 70.40, 70.40, 71.20, 71.20, 71.20, 71.20, 71.20, 72.00,
  72.00, 72.00, 72.00, 72.80, 72.80, 72.80, 72.80, 72.80, 72.80, 73.60,
  73.60, 73.60, 73.60, 74.40, 74.40, 74.40, 74.40, 74.40, 75.20, 75.20,
  75.20, 75.20, 75.20, 76.00, 76.00, 76.00, 76.00, 76.00, 76.80, 76.80,
  76.80, 76.80, 76.80, 77.60, 77.60, 77.60, 77.60, 77.60, 78.40, 78.40,
  78.40, 78.40, 79.20, 79.20, 79.20, 79.20, 79.20, 79.20, 80.00, 80.00,
  80.80, 80.80, 81.60, 82.40, 82.40, 83.20, 84.00, 84.00, 85.60, 85.60,
  86.40, 87.20, 87.20, 88.00, 88.80, 88.80, 90.40, 90.40, 91.20, 92.00,
  92.00, 92.80, 93.60, 93.60, 95.20, 95.20, 96.00, 96.80, 96.80, 97.60,
  98.40, 98.40, 100.00, 100.00, 100.80, 101.60, 102.40, 103.20, 103.20,
  104.80, 104.80, 105.60, 106.40, 106.40, 107.20, 108.00, 108.00,
  109.60, 109.60, 110.40, 111.20, 111.20, 112.00, 112.80, 112.80,
 114.40, 114.40, 115.20, 116.00, 116.00, 116.80, 117.60, 117.60,
  119.20, 119.20, 120.00, 120.80, 120.80, 121.60, 122.40, 122.40,
  124.00, 124.00, 124.80, 125.60, 125.60, 126.40, 127.20, 127.20,
  128.80, 128.80, 129.60, 130.40, 130.40, 131.20, 132.00, 132.00,
  133.60, 133.60, 134.40, 135.20, 135.20, 136.00, 136.80, 136.80,
  138.40, 138.40, 139.20, 140.00, 140.00, 140.80, 141.60, 141.60,
  143.20, 143.20, 144.00, 144.80, 144.80, 145.60, 146.40, 146.40,
  148.00, 148.00, 148.80, 149.60, 149.60, 150.40, 151.20, 151.20,
  152.80, 152.80, 153.60, 154.40, 154.40, 155.20, 156.00, 156.00,
  157.60, 157.60, 158.40, 159.20, 159.20, 160.00, 160.80, 160.80,
  162.40, 162.40, 163.20, 164.00, 164.00, 164.80, 165.60, 165.60,
  167.20, 167.20, 168.00, 168.75, 168.75, 168.75, 168.75, 168.75,
  168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75,
  168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75,
  168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75,
  168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75,
  168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75, 168.75,
  168.75, 168.75, 168.75, 168.75, 168.75
};

/// <summary>Returns 1952 conversion table mfb.</summary>
///
/// <returns>1952 conversion table mfb.</returns>
///
/// <exception cref="PiaException"><see cref="PiaException"/> of type
/// <see cref="PIA_IDS_PIB52MFB"/> if index is out of range
/// (only in debug mode).</exception>
///
/// <param name="index">Number of mfb desired.</param>
double Pib52Mfb::getAt( int index )
{
#ifndef NDEBUG
  if (index < 0 || index > 485)
    throw PiaException(PIA_IDS_PIB52MFB);
#endif
  return(mfb52[index]);
}