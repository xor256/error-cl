#include <wx/wx.h>
#include <wx/app.h>
#include <wx/cmdline.h>

wxLocale* locale;

int SpokoStart(void)
{

return 0;
}

int SpokoStop(void)
{

return 0;
}

int main(int argc, char **argv)
{
int wyn = -1;

 wxInitializer initializer;
 locale = new wxLocale( wxLANGUAGE_POLISH );
 if ( !initializer.IsOk() )
  { fprintf(stderr, "Nie udało się znaleźć bibliotek programu"); return -1; }

 wyn = SpokoStart(); wxPrintf("start [%d]\n", wyn);

 wxPrintf(wxT("OK\n"));

 wyn = SpokoStop(); wxPrintf("stop [%d]\n", wyn);
 if ( argc == 1 )
  {
  wxPrintf(wxT("ilość argumentów programu '%s': %d\n"), argv[0], argc);
  }

 delete(locale);

return 0;
}
