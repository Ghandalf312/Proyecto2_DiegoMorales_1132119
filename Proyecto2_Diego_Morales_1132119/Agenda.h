#pragma once
#include "Lista.h"
#include "Nodo.h"
#include <stdio.h> //Para remover y renombrar los archivos
#include <msclr/marshal.h>
namespace Proyecto2DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	//using namespace std;

	/// <summary>
	/// Resumen de Agenda
	/// </summary>
	public ref class Agenda : public System::Windows::Forms::Form
	{
	public:
		Agenda(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Agenda()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:



	private: System::Windows::Forms::Label^ Ano;
	private: System::Windows::Forms::Label^ Mes;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnRecordartorio;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Button^ btnFecha;
	private: System::Windows::Forms::MaskedTextBox^ mtbAnio;
	private: System::Windows::Forms::MaskedTextBox^ mtbMes;
	private: System::Windows::Forms::Button^ btnActividad;
	private: System::Windows::Forms::Button^ btnAlarma;
	private: System::Windows::Forms::TabControl^ tabControl;

	private: System::Windows::Forms::TabPage^ tabActividad;
	private: System::Windows::Forms::MaskedTextBox^ mtbHoraInicio;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ mtbFecha1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabRecordatorio;
	private: System::Windows::Forms::TabPage^ tabAlarma;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbDescripcion1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbMat;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbPersonas;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbLugar;

	private: System::Windows::Forms::MaskedTextBox^ mtbHoraFin;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnCrearE;



	private: System::Windows::Forms::MaskedTextBox^ mtbPrioridad1;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbID1;
	private: System::Windows::Forms::MaskedTextBox^ mtbPrioridad2;


	private: System::Windows::Forms::MaskedTextBox^ mtbLimite1;


	private: System::Windows::Forms::MaskedTextBox^ mtbFecha2;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tbID2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tbDescripcion2;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::MaskedTextBox^ mtbPrioridad3;

	private: System::Windows::Forms::MaskedTextBox^ mtbLimite2;

	private: System::Windows::Forms::MaskedTextBox^ mtbFecha3;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ tbID3;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ tbDescripcion3;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ btnCrearR;
private: System::Windows::Forms::Button^ btnCrearA;
private: System::Windows::Forms::Timer^ timer1;
private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Ano = (gcnew System::Windows::Forms::Label());
			this->Mes = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRecordartorio = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->btnFecha = (gcnew System::Windows::Forms::Button());
			this->mtbAnio = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtbMes = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnActividad = (gcnew System::Windows::Forms::Button());
			this->btnAlarma = (gcnew System::Windows::Forms::Button());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabActividad = (gcnew System::Windows::Forms::TabPage());
			this->btnCrearE = (gcnew System::Windows::Forms::Button());
			this->mtbPrioridad1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbID1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbDescripcion1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbMat = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbPersonas = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbLugar = (gcnew System::Windows::Forms::TextBox());
			this->mtbHoraFin = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->mtbHoraInicio = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->mtbFecha1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabRecordatorio = (gcnew System::Windows::Forms::TabPage());
			this->btnCrearR = (gcnew System::Windows::Forms::Button());
			this->mtbPrioridad2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtbLimite1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtbFecha2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbID2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbDescripcion2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabAlarma = (gcnew System::Windows::Forms::TabPage());
			this->btnCrearA = (gcnew System::Windows::Forms::Button());
			this->mtbPrioridad3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtbLimite2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtbFecha3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbID3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tbDescripcion3 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl->SuspendLayout();
			this->tabActividad->SuspendLayout();
			this->tabRecordatorio->SuspendLayout();
			this->tabAlarma->SuspendLayout();
			this->SuspendLayout();
			// 
			// Ano
			// 
			this->Ano->AutoSize = true;
			this->Ano->Location = System::Drawing::Point(14, 70);
			this->Ano->Name = L"Ano";
			this->Ano->Size = System::Drawing::Size(32, 13);
			this->Ano->TabIndex = 3;
			this->Ano->Text = L"A�o: ";
			// 
			// Mes
			// 
			this->Mes->AutoSize = true;
			this->Mes->Location = System::Drawing::Point(14, 97);
			this->Mes->Name = L"Mes";
			this->Mes->Size = System::Drawing::Size(33, 13);
			this->Mes->TabIndex = 4;
			this->Mes->Text = L"Mes: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Selecciona un d�a del calendario:";
			// 
			// btnRecordartorio
			// 
			this->btnRecordartorio->Location = System::Drawing::Point(562, 12);
			this->btnRecordartorio->Name = L"btnRecordartorio";
			this->btnRecordartorio->Size = System::Drawing::Size(105, 23);
			this->btnRecordartorio->TabIndex = 2;
			this->btnRecordartorio->Text = L"Crear Recordatorio";
			this->btnRecordartorio->UseVisualStyleBackColor = true;
			this->btnRecordartorio->Click += gcnew System::EventHandler(this, &Agenda::BtnTarea_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(284, 136);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(157, 226);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(305, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Tareas:";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(27, 177);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowToday = false;
			this->monthCalendar1->ShowTodayCircle = false;
			this->monthCalendar1->TabIndex = 10;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Agenda::MonthCalendar1_DateSelected);
			// 
			// btnFecha
			// 
			this->btnFecha->Location = System::Drawing::Point(193, 143);
			this->btnFecha->Name = L"btnFecha";
			this->btnFecha->Size = System::Drawing::Size(85, 23);
			this->btnFecha->TabIndex = 11;
			this->btnFecha->Text = L"Cambiar fecha";
			this->btnFecha->UseVisualStyleBackColor = true;
			this->btnFecha->Click += gcnew System::EventHandler(this, &Agenda::BtnFecha_Click);
			// 
			// mtbAnio
			// 
			this->mtbAnio->Location = System::Drawing::Point(53, 70);
			this->mtbAnio->Mask = L"####";
			this->mtbAnio->Name = L"mtbAnio";
			this->mtbAnio->Size = System::Drawing::Size(100, 20);
			this->mtbAnio->TabIndex = 12;
			// 
			// mtbMes
			// 
			this->mtbMes->Location = System::Drawing::Point(53, 94);
			this->mtbMes->Mask = L"##";
			this->mtbMes->Name = L"mtbMes";
			this->mtbMes->Size = System::Drawing::Size(100, 20);
			this->mtbMes->TabIndex = 13;
			// 
			// btnActividad
			// 
			this->btnActividad->Location = System::Drawing::Point(451, 12);
			this->btnActividad->Name = L"btnActividad";
			this->btnActividad->Size = System::Drawing::Size(105, 23);
			this->btnActividad->TabIndex = 14;
			this->btnActividad->Text = L"Crear Actividad";
			this->btnActividad->UseVisualStyleBackColor = true;
			this->btnActividad->Click += gcnew System::EventHandler(this, &Agenda::BtnActividad_Click);
			// 
			// btnAlarma
			// 
			this->btnAlarma->Location = System::Drawing::Point(451, 41);
			this->btnAlarma->Name = L"btnAlarma";
			this->btnAlarma->Size = System::Drawing::Size(105, 23);
			this->btnAlarma->TabIndex = 15;
			this->btnAlarma->Text = L"Crear Alarma";
			this->btnAlarma->UseVisualStyleBackColor = true;
			this->btnAlarma->Click += gcnew System::EventHandler(this, &Agenda::BtnAlarma_Click);
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabActividad);
			this->tabControl->Controls->Add(this->tabRecordatorio);
			this->tabControl->Controls->Add(this->tabAlarma);
			this->tabControl->Enabled = false;
			this->tabControl->Location = System::Drawing::Point(447, 70);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(251, 296);
			this->tabControl->TabIndex = 3;
			// 
			// tabActividad
			// 
			this->tabActividad->Controls->Add(this->btnCrearE);
			this->tabActividad->Controls->Add(this->mtbPrioridad1);
			this->tabActividad->Controls->Add(this->label11);
			this->tabActividad->Controls->Add(this->tbID1);
			this->tabActividad->Controls->Add(this->label10);
			this->tabActividad->Controls->Add(this->label9);
			this->tabActividad->Controls->Add(this->tbDescripcion1);
			this->tabActividad->Controls->Add(this->label8);
			this->tabActividad->Controls->Add(this->tbMat);
			this->tabActividad->Controls->Add(this->label7);
			this->tabActividad->Controls->Add(this->tbPersonas);
			this->tabActividad->Controls->Add(this->label6);
			this->tabActividad->Controls->Add(this->tbLugar);
			this->tabActividad->Controls->Add(this->mtbHoraFin);
			this->tabActividad->Controls->Add(this->label5);
			this->tabActividad->Controls->Add(this->mtbHoraInicio);
			this->tabActividad->Controls->Add(this->label4);
			this->tabActividad->Controls->Add(this->mtbFecha1);
			this->tabActividad->Controls->Add(this->label2);
			this->tabActividad->Location = System::Drawing::Point(4, 22);
			this->tabActividad->Name = L"tabActividad";
			this->tabActividad->Padding = System::Windows::Forms::Padding(3);
			this->tabActividad->Size = System::Drawing::Size(243, 270);
			this->tabActividad->TabIndex = 0;
			this->tabActividad->Text = L"Actividad";
			this->tabActividad->UseVisualStyleBackColor = true;
			// 
			// btnCrearE
			// 
			this->btnCrearE->Location = System::Drawing::Point(73, 233);
			this->btnCrearE->Name = L"btnCrearE";
			this->btnCrearE->Size = System::Drawing::Size(105, 23);
			this->btnCrearE->TabIndex = 16;
			this->btnCrearE->Text = L"Crear";
			this->btnCrearE->UseVisualStyleBackColor = true;
			this->btnCrearE->Click += gcnew System::EventHandler(this, &Agenda::BtnCrearE_Click);
			// 
			// mtbPrioridad1
			// 
			this->mtbPrioridad1->Location = System::Drawing::Point(59, 186);
			this->mtbPrioridad1->Mask = L"##";
			this->mtbPrioridad1->Name = L"mtbPrioridad1";
			this->mtbPrioridad1->Size = System::Drawing::Size(100, 20);
			this->mtbPrioridad1->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 210);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Identificador: ";
			// 
			// tbID1
			// 
			this->tbID1->Location = System::Drawing::Point(73, 207);
			this->tbID1->Name = L"tbID1";
			this->tbID1->Size = System::Drawing::Size(100, 20);
			this->tbID1->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 189);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Prioridad: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Descripci�n:  ";
			// 
			// tbDescripcion1
			// 
			this->tbDescripcion1->Location = System::Drawing::Point(70, 163);
			this->tbDescripcion1->Name = L"tbDescripcion1";
			this->tbDescripcion1->Size = System::Drawing::Size(100, 20);
			this->tbDescripcion1->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Materiales: ";
			// 
			// tbMat
			// 
			this->tbMat->Location = System::Drawing::Point(64, 137);
			this->tbMat->Name = L"tbMat";
			this->tbMat->Size = System::Drawing::Size(100, 20);
			this->tbMat->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Personas: ";
			// 
			// tbPersonas
			// 
			this->tbPersonas->Location = System::Drawing::Point(64, 111);
			this->tbPersonas->Name = L"tbPersonas";
			this->tbPersonas->Size = System::Drawing::Size(100, 20);
			this->tbPersonas->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Lugar: ";
			// 
			// tbLugar
			// 
			this->tbLugar->Location = System::Drawing::Point(52, 85);
			this->tbLugar->Name = L"tbLugar";
			this->tbLugar->Size = System::Drawing::Size(100, 20);
			this->tbLugar->TabIndex = 7;
			// 
			// mtbHoraFin
			// 
			this->mtbHoraFin->Location = System::Drawing::Point(70, 58);
			this->mtbHoraFin->Mask = L"90:00";
			this->mtbHoraFin->Name = L"mtbHoraFin";
			this->mtbHoraFin->Size = System::Drawing::Size(100, 20);
			this->mtbHoraFin->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Hora fin: ";
			// 
			// mtbHoraInicio
			// 
			this->mtbHoraInicio->Location = System::Drawing::Point(70, 32);
			this->mtbHoraInicio->Mask = L"90:00";
			this->mtbHoraInicio->Name = L"mtbHoraInicio";
			this->mtbHoraInicio->Size = System::Drawing::Size(100, 20);
			this->mtbHoraInicio->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hora inicio: ";
			// 
			// mtbFecha1
			// 
			this->mtbFecha1->Location = System::Drawing::Point(46, 7);
			this->mtbFecha1->Mask = L"00/00/0000";
			this->mtbFecha1->Name = L"mtbFecha1";
			this->mtbFecha1->Size = System::Drawing::Size(100, 20);
			this->mtbFecha1->TabIndex = 2;
			this->mtbFecha1->ValidatingType = System::DateTime::typeid;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Fecha: ";
			// 
			// tabRecordatorio
			// 
			this->tabRecordatorio->Controls->Add(this->btnCrearR);
			this->tabRecordatorio->Controls->Add(this->mtbPrioridad2);
			this->tabRecordatorio->Controls->Add(this->mtbLimite1);
			this->tabRecordatorio->Controls->Add(this->mtbFecha2);
			this->tabRecordatorio->Controls->Add(this->label12);
			this->tabRecordatorio->Controls->Add(this->tbID2);
			this->tabRecordatorio->Controls->Add(this->label13);
			this->tabRecordatorio->Controls->Add(this->label14);
			this->tabRecordatorio->Controls->Add(this->tbDescripcion2);
			this->tabRecordatorio->Controls->Add(this->label15);
			this->tabRecordatorio->Controls->Add(this->label16);
			this->tabRecordatorio->Location = System::Drawing::Point(4, 22);
			this->tabRecordatorio->Name = L"tabRecordatorio";
			this->tabRecordatorio->Padding = System::Windows::Forms::Padding(3);
			this->tabRecordatorio->Size = System::Drawing::Size(243, 270);
			this->tabRecordatorio->TabIndex = 1;
			this->tabRecordatorio->Text = L"Recordatorio";
			this->tabRecordatorio->UseVisualStyleBackColor = true;
			// 
			// btnCrearR
			// 
			this->btnCrearR->Location = System::Drawing::Point(69, 124);
			this->btnCrearR->Name = L"btnCrearR";
			this->btnCrearR->Size = System::Drawing::Size(105, 23);
			this->btnCrearR->TabIndex = 29;
			this->btnCrearR->Text = L"Crear";
			this->btnCrearR->UseVisualStyleBackColor = true;
			this->btnCrearR->Click += gcnew System::EventHandler(this, &Agenda::BtnCrearR_Click);
			// 
			// mtbPrioridad2
			// 
			this->mtbPrioridad2->Location = System::Drawing::Point(73, 76);
			this->mtbPrioridad2->Mask = L"##";
			this->mtbPrioridad2->Name = L"mtbPrioridad2";
			this->mtbPrioridad2->Size = System::Drawing::Size(100, 20);
			this->mtbPrioridad2->TabIndex = 28;
			this->mtbPrioridad2->ValidatingType = System::DateTime::typeid;
			// 
			// mtbLimite1
			// 
			this->mtbLimite1->Location = System::Drawing::Point(72, 30);
			this->mtbLimite1->Mask = L"90:00";
			this->mtbLimite1->Name = L"mtbLimite1";
			this->mtbLimite1->Size = System::Drawing::Size(100, 20);
			this->mtbLimite1->TabIndex = 27;
			this->mtbLimite1->ValidatingType = System::DateTime::typeid;
			// 
			// mtbFecha2
			// 
			this->mtbFecha2->Location = System::Drawing::Point(55, 9);
			this->mtbFecha2->Mask = L"00/00/0000";
			this->mtbFecha2->Name = L"mtbFecha2";
			this->mtbFecha2->Size = System::Drawing::Size(100, 20);
			this->mtbFecha2->TabIndex = 26;
			this->mtbFecha2->ValidatingType = System::DateTime::typeid;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 100);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Identificador: ";
			// 
			// tbID2
			// 
			this->tbID2->Location = System::Drawing::Point(75, 97);
			this->tbID2->Name = L"tbID2";
			this->tbID2->Size = System::Drawing::Size(100, 20);
			this->tbID2->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 79);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Prioridad: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Descripci�n:  ";
			// 
			// tbDescripcion2
			// 
			this->tbDescripcion2->Location = System::Drawing::Point(72, 53);
			this->tbDescripcion2->Name = L"tbDescripcion2";
			this->tbDescripcion2->Size = System::Drawing::Size(100, 20);
			this->tbDescripcion2->TabIndex = 21;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 33);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Hora l�mite: ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 9);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(43, 13);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Fecha: ";
			// 
			// tabAlarma
			// 
			this->tabAlarma->Controls->Add(this->btnCrearA);
			this->tabAlarma->Controls->Add(this->mtbPrioridad3);
			this->tabAlarma->Controls->Add(this->mtbLimite2);
			this->tabAlarma->Controls->Add(this->mtbFecha3);
			this->tabAlarma->Controls->Add(this->label17);
			this->tabAlarma->Controls->Add(this->tbID3);
			this->tabAlarma->Controls->Add(this->label18);
			this->tabAlarma->Controls->Add(this->label19);
			this->tabAlarma->Controls->Add(this->tbDescripcion3);
			this->tabAlarma->Controls->Add(this->label20);
			this->tabAlarma->Controls->Add(this->label21);
			this->tabAlarma->Location = System::Drawing::Point(4, 22);
			this->tabAlarma->Name = L"tabAlarma";
			this->tabAlarma->Padding = System::Windows::Forms::Padding(3);
			this->tabAlarma->Size = System::Drawing::Size(243, 270);
			this->tabAlarma->TabIndex = 2;
			this->tabAlarma->Text = L"Alarma";
			this->tabAlarma->UseVisualStyleBackColor = true;
			// 
			// btnCrearA
			// 
			this->btnCrearA->Location = System::Drawing::Point(69, 124);
			this->btnCrearA->Name = L"btnCrearA";
			this->btnCrearA->Size = System::Drawing::Size(105, 23);
			this->btnCrearA->TabIndex = 39;
			this->btnCrearA->Text = L"Crear";
			this->btnCrearA->UseVisualStyleBackColor = true;
			this->btnCrearA->Click += gcnew System::EventHandler(this, &Agenda::BtnCrearA_Click);
			// 
			// mtbPrioridad3
			// 
			this->mtbPrioridad3->Location = System::Drawing::Point(73, 78);
			this->mtbPrioridad3->Mask = L"##";
			this->mtbPrioridad3->Name = L"mtbPrioridad3";
			this->mtbPrioridad3->Size = System::Drawing::Size(100, 20);
			this->mtbPrioridad3->TabIndex = 38;
			this->mtbPrioridad3->ValidatingType = System::DateTime::typeid;
			// 
			// mtbLimite2
			// 
			this->mtbLimite2->Location = System::Drawing::Point(72, 32);
			this->mtbLimite2->Mask = L"90:00";
			this->mtbLimite2->Name = L"mtbLimite2";
			this->mtbLimite2->Size = System::Drawing::Size(100, 20);
			this->mtbLimite2->TabIndex = 37;
			this->mtbLimite2->ValidatingType = System::DateTime::typeid;
			// 
			// mtbFecha3
			// 
			this->mtbFecha3->Location = System::Drawing::Point(55, 11);
			this->mtbFecha3->Mask = L"00/00/0000";
			this->mtbFecha3->Name = L"mtbFecha3";
			this->mtbFecha3->Size = System::Drawing::Size(100, 20);
			this->mtbFecha3->TabIndex = 36;
			this->mtbFecha3->ValidatingType = System::DateTime::typeid;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 102);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Identificador: ";
			// 
			// tbID3
			// 
			this->tbID3->Location = System::Drawing::Point(75, 99);
			this->tbID3->Name = L"tbID3";
			this->tbID3->Size = System::Drawing::Size(100, 20);
			this->tbID3->TabIndex = 34;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(8, 81);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 13);
			this->label18->TabIndex = 33;
			this->label18->Text = L"Prioridad: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 58);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(72, 13);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Descripci�n:  ";
			// 
			// tbDescripcion3
			// 
			this->tbDescripcion3->Location = System::Drawing::Point(72, 55);
			this->tbDescripcion3->Name = L"tbDescripcion3";
			this->tbDescripcion3->Size = System::Drawing::Size(100, 20);
			this->tbDescripcion3->TabIndex = 31;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 35);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(64, 13);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Hora l�mite: ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 11);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(43, 13);
			this->label21->TabIndex = 29;
			this->label21->Text = L"Fecha: ";
			// 
			// timer1
			// 
			this->timer1->Interval = 60000;
			// 
			// Agenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 390);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->btnAlarma);
			this->Controls->Add(this->btnActividad);
			this->Controls->Add(this->mtbMes);
			this->Controls->Add(this->mtbAnio);
			this->Controls->Add(this->btnFecha);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->btnRecordartorio);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Mes);
			this->Controls->Add(this->Ano);
			this->Name = L"Agenda";
			this->Text = L"Agenda";
			this->Load += gcnew System::EventHandler(this, &Agenda::Agenda_Load);
			this->tabControl->ResumeLayout(false);
			this->tabActividad->ResumeLayout(false);
			this->tabActividad->PerformLayout();
			this->tabRecordatorio->ResumeLayout(false);
			this->tabRecordatorio->PerformLayout();
			this->tabAlarma->ResumeLayout(false);
			this->tabAlarma->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ texto;
		String^ usuario; //Covertirlo para removerlo y renombrarlo	
		Lista* MiLista;

	private: System::Void BtnFecha_Click(System::Object^ sender, System::EventArgs^ e) {
		MonthCalendar^ calendario = gcnew MonthCalendar();
		String^ mes = mtbMes->Text;
		String^ anio = mtbAnio->Text;
		int m = int::Parse(mes);
		if (m < 1 || m > 12)
		{
			MessageBox::Show("Por favor, ingrese un mes v�lido.");
		}
		else
		{
			DateTime fecha = System::Convert::ToDateTime(mes + "/01/" + anio);
			monthCalendar1->SetDate(fecha);
		}
	}
private: System::Void Agenda_Load(System::Object^ sender, System::EventArgs^ e) {
	
	StreamReader^ sr = gcnew StreamReader("UsuarioActivo.txt");
	usuario = sr->ReadLine();
	sr->Close();

	remove("UsuarioActivo.txt");

	StreamReader^ sr1 = gcnew StreamReader(usuario+".txt");
	String^ cadena = sr1->ReadLine();
	/////
	sr1->Close();
}
private: System::Void BtnTarea_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl->Enabled = true;
	tabControl->SelectedTab = tabRecordatorio;
}
private: System::Void MonthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	String^ fecha = monthCalendar1->SelectionRange->Start.ToShortDateString();
}
private: System::Void BtnActividad_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl->Enabled = true;
	tabControl->SelectedTab = tabActividad;
}
private: System::Void BtnAlarma_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl->Enabled = true;
	tabControl->SelectedTab = tabAlarma;
}
private: System::Void BtnCrearE_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fecha = mtbFecha1->Text;
	String^ horaI = mtbHoraInicio->Text;
	String^ horaF = mtbHoraFin->Text;
	String^ lugar = tbLugar->Text;
	String^ Personas = tbPersonas->Text;
	String^ material = tbMat->Text;
	String^ descripcion = tbDescripcion1->Text;
	String^ prioridad = mtbPrioridad1->Text;
	String^ id = tbID1->Text;
	
	texto += "E," + fecha + ", " + horaI + ", " + horaF + ", " + lugar + ", " + Personas + ", " + material + ", " + descripcion + ", " + prioridad + ", " + id + ", ";
	StreamReader^ sr = gcnew StreamReader(usuario + ".txt");
	String^ texto1 = sr->ReadToEnd();
	sr->Close();
	StreamWriter^ sw = gcnew StreamWriter("1234.txt");
	sw->WriteLine(texto);
	sw->WriteLine(texto1);
	sw->Close();
   
	
	msclr::interop::marshal_context oMarshalContext;
	const char* pcUser = oMarshalContext.marshal_as < const char* > (usuario);//Convertido a const char*, hay que incluir la libreria de msclr/marshal.

	remove(pcUser + '.txt');
	rename("1234.txt", pcUser + '.txt');

}
private: System::Void BtnCrearR_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fecha = mtbFecha2->Text;
	String^ horaL = mtbLimite1->Text;
	String^ descripcion = tbDescripcion2->Text;
	String^ prioridad = mtbPrioridad2->Text;
	String^ id = tbID2->Text;

	texto += "R," + fecha + ", " + horaL + ", " + descripcion + ", " + prioridad + ", " + id + ", ";
	StreamReader^ sr = gcnew StreamReader(usuario + ".txt");
	String^ texto1 = sr->ReadToEnd();
	sr->Close();
	StreamWriter^ sw = gcnew StreamWriter("1234.txt");
	sw->WriteLine(texto);
	sw->WriteLine(texto1);
	sw->Close();


	msclr::interop::marshal_context oMarshalContext;
	const char* pcUser = oMarshalContext.marshal_as < const char* >(usuario);//Convertido a const char*, hay que incluir la libreria de msclr/marshal.

	remove(pcUser + '.txt');
	rename("1234.txt", pcUser + '.txt');
}
private: System::Void BtnCrearA_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fecha = mtbFecha3->Text;
	String^ horaL = mtbLimite2->Text;
	String^ descripcion = tbDescripcion3->Text;
	String^ prioridad = mtbPrioridad3->Text;
	String^ id = tbID3->Text;

	texto += "R," + fecha + ", " + horaL + ", " + descripcion + ", " + prioridad + ", " + id + ", ";
	StreamReader^ sr = gcnew StreamReader(usuario + ".txt");
	String^ texto1 = sr->ReadToEnd();
	sr->Close();
	StreamWriter^ sw = gcnew StreamWriter("1234.txt");
	sw->WriteLine(texto);
	sw->WriteLine(texto1);
	sw->Close();


	msclr::interop::marshal_context oMarshalContext;
	const char* pcUser = oMarshalContext.marshal_as < const char* >(usuario);//Convertido a const char*, hay que incluir la libreria de msclr/marshal.

	remove(pcUser + '.txt');
	rename("1234.txt", pcUser + '.txt');
}
};
}
