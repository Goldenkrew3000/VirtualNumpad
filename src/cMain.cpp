#include "cMain.h"

#define WINVER 0x0500
#include <windows.h>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10014, pressedDivideButton)
	EVT_BUTTON(10013, pressedMultiplyButton)
	EVT_BUTTON(10012, pressedMinusButton)

	EVT_BUTTON(10008, pressed7Button)
	EVT_BUTTON(10009, pressed8Button)
	EVT_BUTTON(10010, pressed9Button)

	EVT_BUTTON(10005, pressed4Button)
	EVT_BUTTON(10006, pressed5Button)
	EVT_BUTTON(10007, pressed6Button)

	EVT_BUTTON(10002, pressed1Button)
	EVT_BUTTON(10003, pressed2Button)
	EVT_BUTTON(10004, pressed3Button)

	EVT_BUTTON(10001, pressed0Button)
	EVT_BUTTON(10011, pressedPlusButton)

wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "VNumpad - Virtual Numpad (Malexty 2020)", wxPoint(30, 30), wxSize(230, 500)) // 250 working
{
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer(6, 3, 0, 0); // Number of rows, Number of columns, Vertical Gap, Horizontal Gap (Last 2 untested*)
	


	lblTitle = new wxStaticText(this, wxID_ANY, wxT("Virtual Numpad"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(lblTitle, 0, wxALL, 5);

	// Dummy StaticText due to WX Grid
	lblDummy = new wxStaticText(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(lblDummy, 0, wxALL, 5);
	// End Dummy StaticText

	lblAuthor = new wxStaticText(this, wxID_ANY, wxT("Malexty *20"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(lblAuthor, 0, wxALL, 5);



	btnDivide = new wxButton(this, 10014, wxT("/"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btnDivide, 0, wxALL, 5);

	btnMultiply = new wxButton(this, 10013, wxT("*"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btnMultiply, 0, wxALL, 5);

	btnMinus = new wxButton(this, 10012, wxT("-"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btnMinus, 0, wxALL, 5);



	btn7 = new wxButton(this, 10008, wxT("7"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn7, 0, wxALL, 5);

	btn8 = new wxButton(this, 10009, wxT("8"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn8, 0, wxALL, 5);

	btn9 = new wxButton(this, 10010, wxT("9"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn9, 0, wxALL, 5);



	btn4 = new wxButton(this, 10005, wxT("4"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn4, 0, wxALL, 5);

	btn5 = new wxButton(this, 10006, wxT("5"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn5, 0, wxALL, 5);

	btn6 = new wxButton(this, 10007, wxT("6"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn6, 0, wxALL, 5);



	btn1 = new wxButton(this, 10002, wxT("1"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn1, 0, wxALL, 5);

	btn2 = new wxButton(this, 10003, wxT("2"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn2, 0, wxALL, 5);

	btn3 = new wxButton(this, 10004, wxT("3"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btn3, 0, wxALL, 5);



	btn0 = new wxButton(this, 10001, wxT("0"), wxDefaultPosition, wxSize(131, 60), 0);
	gSizer1->Add(btn0, 0, wxALL, 5);

	// Dummy StaticText due to WX Grid
	lblDummy2 = new wxStaticText(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(lblDummy2, 0, wxALL, 5);
	// End Dummy StaticText

	btnPlus = new wxButton(this, 10011, wxT("+"), wxDefaultPosition, wxSize(60, 60), 0);
	gSizer1->Add(btnPlus, 0, wxALL, 5);

	this->SetSizer(gSizer1);
	this->Layout();
}

cMain::~cMain()
{
}

void cMain::pressedDivideButton(wxCommandEvent& evt)
{
	// Divide Button
	//std::cout << "Divide Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x6F;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressedMultiplyButton(wxCommandEvent& evt)
{
	// Multiply Button
	//std::cout << "Multiply Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x6A;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressedMinusButton(wxCommandEvent& evt)
{
	// Minus Button
	//std::cout << "Minus Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x6D;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}



void cMain::pressed7Button(wxCommandEvent& evt)
{
	// 7 Button
	//std::cout << "7 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x67;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressed8Button(wxCommandEvent& evt)
{
	// 8 Button
	//std::cout << "8 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x68;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressed9Button(wxCommandEvent& evt)
{
	// 9 Button
	//std::cout << "9 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x69;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}



void cMain::pressed4Button(wxCommandEvent& evt)
{
	// 4 Button
	//std::cout << "4 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x64;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressed5Button(wxCommandEvent& evt)
{
	// 5 Button
	//std::cout << "5 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x65;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressed6Button(wxCommandEvent& evt)
{
	// 6 Button
	//std::cout << "6 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x66;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}



void cMain::pressed1Button(wxCommandEvent& evt)
{
	// 1 Button
	//std::cout << "1 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x61;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressed2Button(wxCommandEvent& evt)
{
	// 2 Button
	//std::cout << "2 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x62;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressed3Button(wxCommandEvent& evt)
{
	// 3 Button
	//std::cout << "3 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x63;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}



void cMain::pressed0Button(wxCommandEvent& evt)
{
	// 0 Button
	//std::cout << "0 Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x60;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void cMain::pressedPlusButton(wxCommandEvent& evt)
{
	// Plus Button
	//std::cout << "Plus Button pressed." << std::endl;

	INPUT ip;
	Sleep(3000);
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0;
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	ip.ki.wVk = 0x6B;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}
