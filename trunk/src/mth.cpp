#include "mth.h"
#include "switchboard.h"

IMPLEMENT_APP(MthApp)

bool MthApp::OnInit()
{
  switchBoard *sb = new switchBoard("Switch Board",
				    wxPoint(50,50),
				    wxSize(640, 300));

  sb->Show(true);
  SetTopWindow(sb);
  return (true);
}
