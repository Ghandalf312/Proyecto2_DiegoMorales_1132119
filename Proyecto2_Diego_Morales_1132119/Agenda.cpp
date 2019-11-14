#include "Agenda.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2DiegoMorales1132119::Agenda form;
	Application::Run(% form);
	return 0;
}