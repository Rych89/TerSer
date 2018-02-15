#include "connectionStatusPanel.h"

//(*InternalHeaders(ConnectionStatusPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ConnectionStatusPanel)
const long ConnectionStatusPanel::ID_STATICTEXT2 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT3 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT5 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT1 = wxNewId();
const long ConnectionStatusPanel::ID_STATICTEXT4 = wxNewId();
const long ConnectionStatusPanel::ID_PANEL2 = wxNewId();
const long ConnectionStatusPanel::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ConnectionStatusPanel,wxPanel)
	//(*EventTable(ConnectionStatusPanel)
	//*)
END_EVENT_TABLE()

ConnectionStatusPanel::ConnectionStatusPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,long style, const wxString& name)
{
	//(*Initialize(ConnectionStatusPanel)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer2;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Connection status"));
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer6->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer6->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxVERTICAL);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer7->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel2, _("Label"));
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticBoxSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxSize(166,20), wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	BoxSizer4->Add(StaticText4, 1, wxALL|wxEXPAND, 0);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	Panel2->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel2);
	BoxSizer2->SetSizeHints(Panel2);
	StaticBoxSizer1->Add(Panel2, 1, wxALL|wxEXPAND, 0);
	Panel1->SetSizer(StaticBoxSizer1);
	StaticBoxSizer1->Fit(Panel1);
	StaticBoxSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

ConnectionStatusPanel::~ConnectionStatusPanel()
{
	//(*Destroy(ConnectionStatusPanel)
	//*)
}
