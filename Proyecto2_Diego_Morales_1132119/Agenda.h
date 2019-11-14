#pragma once

namespace Proyecto2DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Agenda()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ Ano;
	private: System::Windows::Forms::Label^ Mes;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTarea;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;







	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Ano = (gcnew System::Windows::Forms::Label());
			this->Mes = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTarea = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(50, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// Ano
			// 
			this->Ano->AutoSize = true;
			this->Ano->Location = System::Drawing::Point(12, 36);
			this->Ano->Name = L"Ano";
			this->Ano->Size = System::Drawing::Size(32, 13);
			this->Ano->TabIndex = 3;
			this->Ano->Text = L"Año: ";
			// 
			// Mes
			// 
			this->Mes->AutoSize = true;
			this->Mes->Location = System::Drawing::Point(12, 63);
			this->Mes->Name = L"Mes";
			this->Mes->Size = System::Drawing::Size(33, 13);
			this->Mes->TabIndex = 4;
			this->Mes->Text = L"Mes: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Selecciona un día del calendario:";
			// 
			// btnTarea
			// 
			this->btnTarea->Location = System::Drawing::Point(184, 102);
			this->btnTarea->Name = L"btnTarea";
			this->btnTarea->Size = System::Drawing::Size(105, 23);
			this->btnTarea->TabIndex = 6;
			this->btnTarea->Text = L"Agregar Tarea";
			this->btnTarea->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(248, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Agenda";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(308, 136);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(133, 162);
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
			this->monthCalendar1->Location = System::Drawing::Point(50, 136);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 10;
			// 
			// Agenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 312);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnTarea);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Mes);
			this->Controls->Add(this->Ano);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Agenda";
			this->Text = L"Agenda";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
