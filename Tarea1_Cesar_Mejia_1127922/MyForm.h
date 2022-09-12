#pragma once

namespace Tarea1CesarMejia1127922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->PALABRAS = (gcnew System::Windows::Forms::TabPage());
			this->BASES = (gcnew System::Windows::Forms::TabPage());
			this->lblmulticando = (gcnew System::Windows::Forms::Label());
			this->lblmulticador = (gcnew System::Windows::Forms::Label());
			this->txtmulticando = (gcnew System::Windows::Forms::TextBox());
			this->txtmulticador = (gcnew System::Windows::Forms::TextBox());
			this->bttsumas = (gcnew System::Windows::Forms::Button());
			this->ressumas = (gcnew System::Windows::Forms::Label());
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
			this->tabControl1->Size = System::Drawing::Size(519, 288);
			this->tabControl1->TabIndex = 0;
			// 
			// SUMAS
			// 
			this->SUMAS->Controls->Add(this->ressumas);
			this->SUMAS->Controls->Add(this->bttsumas);
			this->SUMAS->Controls->Add(this->txtmulticador);
			this->SUMAS->Controls->Add(this->txtmulticando);
			this->SUMAS->Controls->Add(this->lblmulticador);
			this->SUMAS->Controls->Add(this->lblmulticando);
			this->SUMAS->Location = System::Drawing::Point(4, 25);
			this->SUMAS->Name = L"SUMAS";
			this->SUMAS->Padding = System::Windows::Forms::Padding(3);
			this->SUMAS->Size = System::Drawing::Size(511, 259);
			this->SUMAS->TabIndex = 0;
			this->SUMAS->Text = L"SUMAS";
			this->SUMAS->UseVisualStyleBackColor = true;
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
			// lblmulticando
			// 
			this->lblmulticando->AutoSize = true;
			this->lblmulticando->Location = System::Drawing::Point(29, 31);
			this->lblmulticando->Name = L"lblmulticando";
			this->lblmulticando->Size = System::Drawing::Size(148, 16);
			this->lblmulticando->TabIndex = 0;
			this->lblmulticando->Text = L"Ingrese el multiplicando";
			// 
			// lblmulticador
			// 
			this->lblmulticador->AutoSize = true;
			this->lblmulticador->Location = System::Drawing::Point(29, 96);
			this->lblmulticador->Name = L"lblmulticador";
			this->lblmulticador->Size = System::Drawing::Size(145, 16);
			this->lblmulticador->TabIndex = 1;
			this->lblmulticador->Text = L"Ingrese el multiplicador";
			// 
			// txtmulticando
			// 
			this->txtmulticando->Location = System::Drawing::Point(199, 28);
			this->txtmulticando->Name = L"txtmulticando";
			this->txtmulticando->Size = System::Drawing::Size(100, 22);
			this->txtmulticando->TabIndex = 2;
			// 
			// txtmulticador
			// 
			this->txtmulticador->Location = System::Drawing::Point(199, 93);
			this->txtmulticador->Name = L"txtmulticador";
			this->txtmulticador->Size = System::Drawing::Size(100, 22);
			this->txtmulticador->TabIndex = 3;
			// 
			// bttsumas
			// 
			this->bttsumas->Location = System::Drawing::Point(335, 28);
			this->bttsumas->Name = L"bttsumas";
			this->bttsumas->Size = System::Drawing::Size(148, 78);
			this->bttsumas->TabIndex = 4;
			this->bttsumas->Text = L"Calcular";
			this->bttsumas->UseVisualStyleBackColor = true;
			// 
			// ressumas
			// 
			this->ressumas->AutoSize = true;
			this->ressumas->Location = System::Drawing::Point(29, 165);
			this->ressumas->Name = L"ressumas";
			this->ressumas->Size = System::Drawing::Size(0, 16);
			this->ressumas->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 313);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->SUMAS->ResumeLayout(false);
			this->SUMAS->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
