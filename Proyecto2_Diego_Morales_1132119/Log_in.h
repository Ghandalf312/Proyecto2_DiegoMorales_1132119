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
	if (tbUser->Text != "" && tbPassword->Text != "")//Si no están vacíos los Textboxes, se procede a relaizar el siguiente código
	{
		StreamReader^ archivo = gcnew StreamReader("users.txt");//Lee el archivo de usuarios y se prepara para escribir
		StreamWriter^ users = gcnew StreamWriter("usersaux.txt");
		String^ nombre = tbUser->Text;
		String^ password = tbPassword->Text;

		String^ texto = archivo->ReadLine();//Lee una línea y lo cierra.
		archivo->Close();

		StreamReader^ archivo2 = gcnew StreamReader("users.txt");//Lee otra vez el archivo y lo lee hasta el final
		String^ texto2 = archivo2->ReadToEnd();
		
		archivo2->Close();
		//NOTA: TODOS LOS "!" QUIERE DECIR QUE EL ARCHIVO DE TEXTO ESTÁ VACÍO. 
		if (texto == "!")//Si está vacío, quiere decir que no hay ningun usuario registrado.
		{
			users->WriteLine(nombre);
			users->WriteLine(password);
			MessageBox::Show("Usuario ingresado exitosamente.");
			StreamWriter^ nombreArchiv = gcnew StreamWriter(nombre + ".txt");//Crea un archivo .txt con el nombre del usuario.
			nombreArchiv->WriteLine("!");
			nombreArchiv->Close();

		}
		else if (UsuarioExistente(nombre) == false)//Dado el caso en que nomble que ingreso no sea un usuario existe, enotnces es un usuario nuevo.
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
private: bool UsuarioExistente(String^ user) {//Función booleana que verifica si el usuario que fue ingresado existe.
	StreamReader^ sr = gcnew StreamReader("users.txt");
	String^ cadena = sr->ReadLine();//Lee una línea del archivo de texto
		while (cadena != "!")//Mientras sea diferente de vacío mi archivo de texto.
		{
			if (cadena == user)//Si la línea de texto que contiene el nombre de usuario en ese momento, es igual al que ingreso, quiere decir que el usuario si existe.
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
	StreamReader^ archivo = gcnew StreamReader("users.txt");//Leerá el archivo de texto con lo usuarios y contraseñas.
	String^ nombre = tbUser->Text;//Guaradará el nombre ingresado por el usuario. 
	String^ password = tbPassword->Text;//Guaradará la contraseña ingresada por el usuario.
	String^ texto1 = archivo->ReadLine();//Guaradará la primera línea de texto de archivo "users.txt" que es a la vez el nombre del usuario.
	String^ texto2 = archivo->ReadLine();//Guaradará la segunda línea de texto de archivo "users.txt" que es a la vez la contraseña del usuario.
	bool LoEncontro = false;//Variable booleana que ayudará de puerta para verificar si lo que ingresó el usuario, concuerda con el archivo de texto.

	while (texto1 != "!" && LoEncontro == false)// "!" = vacío
	{
		if (texto1 == nombre && texto2 == password)// Si son igual, quiere decir que el usuario y contraseña están bine escritos
		{
			LoEncontro = true;
		}
		texto1 = archivo->ReadLine();//Seguirá yéndose líena por línea hasta que esté vacía.
		texto2 = archivo->ReadLine();
	}
	archivo->Close();

	if (UsuarioExistente(nombre) == false)//Usuario mal escrito
	{
		MessageBox::Show("Usuario no existente, registre el nombre de usuario para continuar.");
	}
	else if (LoEncontro == true)//Usuario y contraseña hacen match con lo que tiene el archivo de texto.
	{
		MessageBox::Show("¡Bienvenido, " + nombre + "!");
		this->Hide();//Esconde el form de Log_in
		StreamWriter^ usuarioA = gcnew StreamWriter("UsuarioActivo.txt");//Se crea un archivo de texto.
		usuarioA->WriteLine(nombre);//Escribe en ese archivo el nombre del usuario con el que entró.
		usuarioA->Close();//Cierra el archivo.

		agenda->ShowDialog();
		this->Close();
	}
	else//Dado caso haya ingresado una diferente contraseña con la que se registró.
	{
		MessageBox::Show("Usuario: " + nombre + "\nContraseña incorrecta.");
	}
}
};
}
