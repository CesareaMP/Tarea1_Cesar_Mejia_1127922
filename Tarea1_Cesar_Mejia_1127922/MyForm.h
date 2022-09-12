#pragma once

namespace Tarea1CesarMejia1127922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ SUMAS;
	private: System::Windows::Forms::Label^ ressumas;
	private: System::Windows::Forms::Button^ bttsumas;
	private: System::Windows::Forms::TextBox^ txtmulticador;
	private: System::Windows::Forms::TextBox^ txtmulticando;
	private: System::Windows::Forms::Label^ lblmulticador;
	private: System::Windows::Forms::Label^ lblmulticando;
	private: System::Windows::Forms::TabPage^ PALABRAS;
	private: System::Windows::Forms::TabPage^ BASES;
	private: System::Windows::Forms::Label^ ITERATIVO;
	private: System::Windows::Forms::Label^ itersuma;

	private: System::Windows::Forms::Button^ bttniter;

	private: System::Windows::Forms::TextBox^ txtitecador;

	private: System::Windows::Forms::TextBox^ txtitecando;

	private: System::Windows::Forms::Label^ lblitecador;

	private: System::Windows::Forms::Label^ lblitecando;
	private: System::Windows::Forms::Label^ RECURSIVO;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->SUMAS = (gcnew System::Windows::Forms::TabPage());
			this->ressumas = (gcnew System::Windows::Forms::Label());
			this->bttsumas = (gcnew System::Windows::Forms::Button());
			this->txtmulticador = (gcnew System::Windows::Forms::TextBox());
			this->txtmulticando = (gcnew System::Windows::Forms::TextBox());
			this->lblmulticador = (gcnew System::Windows::Forms::Label());
			this->lblmulticando = (gcnew System::Windows::Forms::Label());
			this->PALABRAS = (gcnew System::Windows::Forms::TabPage());
			this->BASES = (gcnew System::Windows::Forms::TabPage());
			this->ITERATIVO = (gcnew System::Windows::Forms::Label());
			this->RECURSIVO = (gcnew System::Windows::Forms::Label());
			this->itersuma = (gcnew System::Windows::Forms::Label());
			this->bttniter = (gcnew System::Windows::Forms::Button());
			this->txtitecador = (gcnew System::Windows::Forms::TextBox());
			this->txtitecando = (gcnew System::Windows::Forms::TextBox());
			this->lblitecador = (gcnew System::Windows::Forms::Label());
			this->lblitecando = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->SUMAS->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->SUMAS);
			this->tabControl1->Controls->Add(this->PALABRAS);
			this->tabControl1->Controls->Add(this->BASES);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(519, 565);
			this->tabControl1->TabIndex = 0;
			// 
			// SUMAS
			// 
			this->SUMAS->Controls->Add(this->itersuma);
			this->SUMAS->Controls->Add(this->bttniter);
			this->SUMAS->Controls->Add(this->txtitecador);
			this->SUMAS->Controls->Add(this->txtitecando);
			this->SUMAS->Controls->Add(this->lblitecador);
			this->SUMAS->Controls->Add(this->lblitecando);
			this->SUMAS->Controls->Add(this->RECURSIVO);
			this->SUMAS->Controls->Add(this->ITERATIVO);
			this->SUMAS->Controls->Add(this->ressumas);
			this->SUMAS->Controls->Add(this->bttsumas);
			this->SUMAS->Controls->Add(this->txtmulticador);
			this->SUMAS->Controls->Add(this->txtmulticando);
			this->SUMAS->Controls->Add(this->lblmulticador);
			this->SUMAS->Controls->Add(this->lblmulticando);
			this->SUMAS->Location = System::Drawing::Point(4, 25);
			this->SUMAS->Name = L"SUMAS";
			this->SUMAS->Padding = System::Windows::Forms::Padding(3);
			this->SUMAS->Size = System::Drawing::Size(511, 536);
			this->SUMAS->TabIndex = 0;
			this->SUMAS->Text = L"SUMAS";
			this->SUMAS->UseVisualStyleBackColor = true;
			this->SUMAS->Click += gcnew System::EventHandler(this, &MyForm::SUMAS_Click);
			// 
			// ressumas
			// 
			this->ressumas->AutoSize = true;
			this->ressumas->Location = System::Drawing::Point(24, 198);
			this->ressumas->Name = L"ressumas";
			this->ressumas->Size = System::Drawing::Size(0, 16);
			this->ressumas->TabIndex = 5;
			// 
			// bttsumas
			// 
			this->bttsumas->Location = System::Drawing::Point(330, 61);
			this->bttsumas->Name = L"bttsumas";
			this->bttsumas->Size = System::Drawing::Size(148, 78);
			this->bttsumas->TabIndex = 4;
			this->bttsumas->Text = L"Calcular";
			this->bttsumas->UseVisualStyleBackColor = true;
			this->bttsumas->Click += gcnew System::EventHandler(this, &MyForm::bttsumas_Click);
			// 
			// txtmulticador
			// 
			this->txtmulticador->Location = System::Drawing::Point(194, 126);
			this->txtmulticador->Name = L"txtmulticador";
			this->txtmulticador->Size = System::Drawing::Size(100, 22);
			this->txtmulticador->TabIndex = 3;
			// 
			// txtmulticando
			// 
			this->txtmulticando->Location = System::Drawing::Point(194, 61);
			this->txtmulticando->Name = L"txtmulticando";
			this->txtmulticando->Size = System::Drawing::Size(100, 22);
			this->txtmulticando->TabIndex = 2;
			// 
			// lblmulticador
			// 
			this->lblmulticador->AutoSize = true;
			this->lblmulticador->Location = System::Drawing::Point(24, 129);
			this->lblmulticador->Name = L"lblmulticador";
			this->lblmulticador->Size = System::Drawing::Size(145, 16);
			this->lblmulticador->TabIndex = 1;
			this->lblmulticador->Text = L"Ingrese el multiplicador";
			// 
			// lblmulticando
			// 
			this->lblmulticando->AutoSize = true;
			this->lblmulticando->Location = System::Drawing::Point(24, 64);
			this->lblmulticando->Name = L"lblmulticando";
			this->lblmulticando->Size = System::Drawing::Size(148, 16);
			this->lblmulticando->TabIndex = 0;
			this->lblmulticando->Text = L"Ingrese el multiplicando";
			// 
			// PALABRAS
			// 
			this->PALABRAS->Location = System::Drawing::Point(4, 25);
			this->PALABRAS->Name = L"PALABRAS";
			this->PALABRAS->Padding = System::Windows::Forms::Padding(3);
			this->PALABRAS->Size = System::Drawing::Size(511, 259);
			this->PALABRAS->TabIndex = 1;
			this->PALABRAS->Text = L"PALABRAS";
			this->PALABRAS->UseVisualStyleBackColor = true;
			// 
			// BASES
			// 
			this->BASES->Location = System::Drawing::Point(4, 25);
			this->BASES->Name = L"BASES";
			this->BASES->Size = System::Drawing::Size(511, 259);
			this->BASES->TabIndex = 2;
			this->BASES->Text = L"BASES";
			this->BASES->UseVisualStyleBackColor = true;
			// 
			// ITERATIVO
			// 
			this->ITERATIVO->AutoSize = true;
			this->ITERATIVO->Location = System::Drawing::Point(24, 259);
			this->ITERATIVO->Name = L"ITERATIVO";
			this->ITERATIVO->Size = System::Drawing::Size(78, 16);
			this->ITERATIVO->TabIndex = 6;
			this->ITERATIVO->Text = L"ITERATIVO";
			// 
			// RECURSIVO
			// 
			this->RECURSIVO->AutoSize = true;
			this->RECURSIVO->Location = System::Drawing::Point(24, 22);
			this->RECURSIVO->Name = L"RECURSIVO";
			this->RECURSIVO->Size = System::Drawing::Size(86, 16);
			this->RECURSIVO->TabIndex = 7;
			this->RECURSIVO->Text = L"RECURSIVO";
			// 
			// itersuma
			// 
			this->itersuma->AutoSize = true;
			this->itersuma->Location = System::Drawing::Point(24, 446);
			this->itersuma->Name = L"itersuma";
			this->itersuma->Size = System::Drawing::Size(0, 16);
			this->itersuma->TabIndex = 13;
			// 
			// bttniter
			// 
			this->bttniter->Location = System::Drawing::Point(330, 309);
			this->bttniter->Name = L"bttniter";
			this->bttniter->Size = System::Drawing::Size(148, 78);
			this->bttniter->TabIndex = 12;
			this->bttniter->Text = L"Calcular";
			this->bttniter->UseVisualStyleBackColor = true;
			this->bttniter->Click += gcnew System::EventHandler(this, &MyForm::bttniter_Click);
			// 
			// txtitecador
			// 
			this->txtitecador->Location = System::Drawing::Point(194, 374);
			this->txtitecador->Name = L"txtitecador";
			this->txtitecador->Size = System::Drawing::Size(100, 22);
			this->txtitecador->TabIndex = 11;
			// 
			// txtitecando
			// 
			this->txtitecando->Location = System::Drawing::Point(194, 309);
			this->txtitecando->Name = L"txtitecando";
			this->txtitecando->Size = System::Drawing::Size(100, 22);
			this->txtitecando->TabIndex = 10;
			// 
			// lblitecador
			// 
			this->lblitecador->AutoSize = true;
			this->lblitecador->Location = System::Drawing::Point(24, 377);
			this->lblitecador->Name = L"lblitecador";
			this->lblitecador->Size = System::Drawing::Size(145, 16);
			this->lblitecador->TabIndex = 9;
			this->lblitecador->Text = L"Ingrese el multiplicador";
			// 
			// lblitecando
			// 
			this->lblitecando->AutoSize = true;
			this->lblitecando->Location = System::Drawing::Point(24, 312);
			this->lblitecando->Name = L"lblitecando";
			this->lblitecando->Size = System::Drawing::Size(148, 16);
			this->lblitecando->TabIndex = 8;
			this->lblitecando->Text = L"Ingrese el multiplicando";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 589);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->SUMAS->ResumeLayout(false);
			this->SUMAS->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bttsumas_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			int multiplicando = Convert::ToInt32(txtmulticando->Text);
			int multiplicador = Convert::ToInt32(txtmulticador->Text);
			ressumas->Text = Convert::ToString(recursivosumasmultiplicando(multiplicando, multiplicador, 0));
		}
		catch (Exception^ e)
		{
			ressumas->Text="Debe ingresar enteros y llenar todos los campos";
		}
		
	}
		   static int recursivosumasmultiplicando(int a, int b, int contador) {
			   if (b==0)
			   {
				   return contador;
			   }
			   else
			   {
				   contador += a;
				   b--;
				   return(recursivosumasmultiplicando(a, b, contador));
			   }
	}
		   static int iterativosumasmultiplicando(int a, int b) {
			   int suma = 0;
			   for (int i = 0; i<b; i++)
			   {
				   suma+=a;
			   }
			   return suma;
		   }
private: System::Void SUMAS_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bttniter_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int multiplicando = Convert::ToInt32(txtitecando->Text);
		int multiplicador = Convert::ToInt32(txtitecador->Text);
		itersuma->Text = Convert::ToString(iterativosumasmultiplicando(multiplicando, multiplicador));
	}
	catch (Exception^ e)
	{
		itersuma->Text = "Debe ingresar enteros y llenar todos los campos";
	}
}
};
}
