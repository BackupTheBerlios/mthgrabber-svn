#include <wx/html/htmlwin.h>
#include "switchboard.h"

switchBoard::switchBoard(const wxString& title, const wxPoint& pos,
			 const wxSize& size) :
  wxFrame((wxFrame *)NULL, -1, title, pos, size)
{
  wxHtmlWindow *html = new wxHtmlWindow(this);


  html->LoadPage("sendeplan.htm");
}
