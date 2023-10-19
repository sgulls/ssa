// $Id: DebugCase.h 1.1 2014/08/15 13:18:01EDT 277133 Development  $
//
// Functions for identifying individuals for writing out debugging data in
// the piadata library.

// Details of various calculation steps can be printed out to standard error
// output or a specified output file.  Uncomment the following line
// (which #define's DEBUGCASE) to execute conditional code for one ID.
//
// You must supply a value for DEBUGPID in DebugCase.cpp if DEBUGCASE is
// defined.  The value 999999 is reserved; it means print out calculation
// details for every case.
//#define DEBUGCASE

// Prototypes.

bool isDebugPid( unsigned long pid );
