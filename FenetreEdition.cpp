//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FenetreEdition.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEdition *FEdition;
//---------------------------------------------------------------------------
__fastcall TFEdition::TFEdition(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
