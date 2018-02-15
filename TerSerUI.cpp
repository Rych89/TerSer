#include "terSerUI.h"

//(*InternalHeaders(TerSerUI)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(TerSerUI)
const long TerSerUI::ID_PANEL2 = wxNewId();
const long TerSerUI::ID_PANEL3 = wxNewId();
const long TerSerUI::ID_PANEL4 = wxNewId();
const long TerSerUI::ID_PANEL5 = wxNewId();
const long TerSerUI::ID_PANEL6 = wxNewId();
const long TerSerUI::ID_PANEL7 = wxNewId();
const long TerSerUI::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TerSerUI,wxFrame)
	//(*EventTable(TerSerUI)
	//*)
END_EVENT_TABLE()

TerSerUI::TerSerUI(wxWindow* parent)
{
	//(*Initialize(TerSerUI)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	BoxSizer7->Add(Panel2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	Panel3 = new wxPanel(Panel1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	BoxSizer8->Add(Panel3, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	Panel4 = new wxPanel(Panel1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	BoxSizer9->Add(Panel4, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 3, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	Panel5 = new wxPanel(Panel1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	BoxSizer5->Add(Panel5, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer5, 3, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	FlexGridSizer1 = new wxFlexGridSizer(0, 0, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(0);
	Panel6 = new wxPanel(Panel1, ID_PANEL6, wxDefaultPosition, wxSize(65,28), wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	FlexGridSizer1->Add(Panel6, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(FlexGridSizer1, 1, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	Panel7 = new wxPanel(Panel1, ID_PANEL7, wxDefaultPosition, wxSize(242,100), wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	BoxSizer10->Add(Panel7, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer6, 7, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 7, wxALL|wxEXPAND, 5);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Panel6->Connect(wxEVT_PAINT,(wxObjectEventFunction)&TerSerUI::OnPanel6Paint,0,this);
	//*)
}

TerSerUI::~TerSerUI()
{
	//(*Destroy(TerSerUI)
	//*)
}


void TerSerUI::OnPanel6Paint(wxPaintEvent& event)
{
}