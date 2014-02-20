//---------------------------------------------------------------------------

#ifndef FenetrePreferencesH
#define FenetrePreferencesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFPreferences : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
        __fastcall TFPreferences(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFPreferences *FPreferences;
//---------------------------------------------------------------------------
#endif
