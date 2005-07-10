#include <wx/html/htmlwin.h>
#include <wx/html/htmlcell.h>
#include "switchboard.h"

switchBoard::switchBoard(const wxString& title, const wxPoint& pos,
			 const wxSize& size) :
  wxFrame((wxFrame *)NULL, -1, title, pos, size)
{
  wxHtmlWindow		*html = new wxHtmlWindow(this);
  wxHtmlContainerCell	*cells;

  html->LoadPage("sendeplan.htm");
  cells = html->GetInternalRepresentation();

  int		i;
  int		n;
  wxHtmlCell	*cell;

  cell = cells->GetFirstCell();
  while (cell)
    {
      
      cell = cell->GetNext();
    }
}
