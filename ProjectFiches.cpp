//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("main.cpp", FPrincipale);
USEFORM("FenetreLieux.cpp", FLieux);
USEFORM("FenetreConversion.cpp", FConversion);
USEFORM("FenetrePreferences.cpp", FPreferences);
USEFORM("FenetreEdition.cpp", FEdition);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TFPrincipale), &FPrincipale);
                 Application->CreateForm(__classid(TFLieux), &FLieux);
                 Application->CreateForm(__classid(TFConversion), &FConversion);
                 Application->CreateForm(__classid(TFPreferences), &FPreferences);
                 Application->CreateForm(__classid(TFEdition), &FEdition);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
