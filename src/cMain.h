#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	// wx stuff goes here for like objects and stuff

	// Labels (top title and author)
	wxStaticText* lblTitle = nullptr;
	wxStaticText* lblAuthor = nullptr;
	wxStaticText* lblDummy = nullptr;

	wxButton* btnDivide = nullptr;
	wxButton* btnMultiply = nullptr;
	wxButton* btnMinus = nullptr;

	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;

	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;

	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;

	wxButton* btn0 = nullptr;
	wxStaticText* lblDummy2 = nullptr;
	wxButton* btnPlus = nullptr;

	void pressedDivideButton(wxCommandEvent& evt);
	void pressedMultiplyButton(wxCommandEvent& evt);
	void pressedMinusButton(wxCommandEvent& evt);

	void pressed7Button(wxCommandEvent& evt);
	void pressed8Button(wxCommandEvent& evt);
	void pressed9Button(wxCommandEvent& evt);

	void pressed4Button(wxCommandEvent& evt);
	void pressed5Button(wxCommandEvent& evt);
	void pressed6Button(wxCommandEvent& evt);

	void pressed1Button(wxCommandEvent& evt);
	void pressed2Button(wxCommandEvent& evt);
	void pressed3Button(wxCommandEvent& evt);

	void pressed0Button(wxCommandEvent& evt);
	void pressedPlusButton(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};
