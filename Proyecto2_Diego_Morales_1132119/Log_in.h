#pragma once
#include <stdio.h> //Para remover y renombrar los archivos
#include "Agenda.h"
namespace Proyecto2DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	/// <summary>
	/// Resumen de Log_in
	/// </summary>
	public ref class Log_in : public System::Windows::Forms::Form
	{
	public:
		Log_in(void)
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
		~Log_in()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ Ano;
	private: System::Windows::Forms::TextBox^ tbUser;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Button^ btnRegistro;
	private: System::Windows::Forms::Button^ btnLog;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ano = (gcnew System::Windows::Forms::Label());
			this->tbUser = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Ano
			// 
			this->Ano->AutoSize = true;
			this->Ano->Location = System::Drawing::Point(91, 50);
			this->Ano->Name = L"Ano";
			this->Ano->Size = System::Drawing::Size(96, 13);
			this->Ano->TabIndex = 7;
			this->Ano->Text = L"Ingrese su usuario:";
			// 
			// tbUser
			// 
			this->tbUser->Location = System::Drawing::Point(62, 82);
			this->tbUser->Name = L"tbUser";
			this->tbUser->Size = System::Drawing::Size(161, 20);
			this->tbUser->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ingrese su contraseña:";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(62, 159);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(161, 20);
			this->tbPassword->TabIndex = 8;
			// 
			// btnRegistro
			// 
			this->btnRegistro->Location = System::Drawing::Point(62, 194);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(75, 23);
			this->btnRegistro->TabIndex = 10;
			this->btnRegistro->Text = L"Registrarse";
			this->btnRegistro->UseVisualStyleBackColor = true;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &Log_in::BtnRegistro_Click);
			// 
			// btnLog
			// 
			this->btnLog->Location = System::Drawing::Point(148, 194);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(75, 23);
			this->btnLog->TabIndex = 11;
			this->btnLog->Text = L"Log In";
			this->btnLog->UseVisualStyleBackColor = true;
			this->btnLog->Click += gcnew System::EventHandler(this, &Log_in::BtnLog_Click);
			// 
			// Log_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnRegistro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->Ano);
			this->Controls->Add(this->tbUser);
			this->Name = L"Log_in";
			this->Text = L"Log_in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Agenda^ agenda = gcnew Agenda(); //Se declara un elemento de tipo Agendapaar poder abrir el siguiente Form.
private: System::Void BtnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbUser->Text != "" && tbPassword->Text != "")
	{
		StreamReader^ archivo = gcnew StreamReader("users.txt");
		StreamWriter^ users = gcnew StreamWriter("usersaux.txt");
		String^ nombre = tbUser->Text;
		String^ password = tbPassword->Text;

		String^ texto = archivo->ReadLine();
		archivo->Close();

		StreamReader^ archivo2 = gcnew StreamReader("users.txt");
		String^ texto2 = archivo2->ReadToEnd();
		
		archivo2->Close();

		if (texto == "!")
		{
			users->WriteLine(nombre);
			users->WriteLine(password);
			MessageBox::Show("Usuario ingresado exitosamente.");
			StreamWriter^ nombreArchiv = gcnew StreamWriter(nombre + ".txt");
			nombreArchiv->WriteLine("!");
			nombreArchiv->Close();
		}
		else if (UsuarioExistente(nombre) == false)
		{
			users->WriteLine(nombre);
			users->WriteLine(password);
			MessageBox::Show("Usuario ingresado exitosamente.");
			StreamWriter^ nombreArchiv = gcnew StreamWriter(nombre + ".txt");
			nombreArchiv->WriteLine("!");
			nombreArchiv->Close();

		}
		else
		{
			MessageBox::Show("Usuario existente, por favor, utilice otro nombre.");
		}
		users->Write(texto2);
		users->Close();

		remove("users.txt");
		rename("usersaux.txt","users.txt");

	}
	else {
		System::Windows::Forms::MessageBox::Show("Ingrese un usuario y contraseña válido.");
	}
}
private: bool UsuarioExistente(String^ user) {
	StreamReader^ sr = gcnew StreamReader("users.txt");
	String^ cadena = sr->ReadLine();
		while (cadena != "!")
		{
			if (cadena == user)
			{
				sr->Close();
				return true;
			}
			cadena = sr->ReadLine();
			cadena = sr->ReadLine();

		}
		sr->Close();
		return false;
}
private: System::Void BtnLog_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ archivo = gcnew StreamReader("users.txt");
	String^ nombre = tbUser->Text;
	String^ password = tbPassword->Text;
	String^ texto1 = archivo->ReadLine();
	String^ texto2 = archivo->ReadLine();;
	bool LoEncontro = false;

	while (texto1 != "!" && LoEncontro == false)
	{
		if (texto1 == nombre && texto2 == password)
		{
			LoEncontro = true;
		}
		texto1 = archivo->ReadLine();
		texto2 = archivo->ReadLine();
	}
	archivo->Close();
	if (UsuarioExistente(nombre) == false)
	{
		MessageBox::Show("Usuario no existente, registre el nombre de usuario para continuar.");
	}
	else if (LoEncontro == true)
	{
		MessageBox::Show("¡Bienvenido, " + nombre + "!");
		this->Hide();
		StreamWriter^ usuarioA = gcnew StreamWriter("UsuarioActivo.txt");
		usuarioA->WriteLine(nombre);
		usuarioA->Close();
		agenda->ShowDialog();
		this->Close();
	}
	else
	{
		MessageBox::Show("Usuario: " + nombre + "\nContraseña incorrecta.");
	}
}
};
}
