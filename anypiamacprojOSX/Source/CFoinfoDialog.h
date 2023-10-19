// $Id: CFoinfoDialog.h,v 1.3 2007/11/07 13:06:57 djolson Exp $//  CFoinfoDialog.h#pragma once#include <LDialogBox.h>#include "CTextDocument.h"class CFoinfoDialog : public LDialogBox{   public:      enum { class_ID = 'FoiD' };            static CFoinfoDialog * CreateFoinfoDialogStream(         LStream * inStream );      CFoinfoDialog( LStream * inStream );      ~CFoinfoDialog();      virtual void FindCommandStatus( CommandT inCommand,         Boolean &outEnabled, Boolean &outUsesMark,         UInt16 &outMark, Str255 outName );      virtual void ListenToMessage( MessageT inMessage, void * ioParam );      void SaveResults();      virtual void SetupDialog();   private:      virtual void FinishCreateSelf();      std::string getTextBoxString( long textBoxID );   public:      CTextDocument * theDoc;      std::string mFoname;      std::string mFotitle;      std::string mFoaddr1;      std::string mFoaddr2;      std::string mFoaddr3;      std::string mFoaddr4;};