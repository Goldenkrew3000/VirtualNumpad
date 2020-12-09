#include "cApp.h"
//#include "cMain.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{
}

cApp::~cApp()
{
}

bool cApp::OnInit()
{
	// DEBUG CONSOLE REMOVE AFTER COMPLETION OR A DEBUG MODE
	//AllocConsole();
	//freopen("CONOUT$", "w", stdout);
	//std::cout << "Virtual Numpad Started." << std::endl;
	// END

	m_frame1 = new cMain();
	//m_frame1->SetWindowStyle(m_frame1->GetWindowStyle() | wxFULL_REPAINT_ON_RESIZE);
	m_frame1->Show();

	return true;
}
