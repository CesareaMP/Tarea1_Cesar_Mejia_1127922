#pragma once
#include <fstream>
#include <string>
#include <math.h>
#include <conio.h>
using std::string;
using System::String;
namespace Tarea1CesarMejia1127922 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using std::string;

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
	private: System::Windows::Forms::Label^ lblrecupalin;


	private: System::Windows::Forms::Label^ txtrecursiva;
	private: System::Windows::Forms::Label^ lbliterapali;

	private: System::Windows::Forms::Label^ lbliterativa;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ bttnrecurpalin;
	private: System::Windows::Forms::TextBox^ txtrecubdestino;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtrecuborigen;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtrecunum;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblrecufinal;


	private: System::Windows::Forms::Button^ bttnrecubases;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lbliteraresultbases;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtiteranumero;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtiteradestino;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtiteraorigen;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtiterapalin;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtrecupalin;
	private: System::Windows::Forms::Label^ label7;

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
			this->itersuma = (gcnew System::Windows::Forms::Label());
			this->bttniter = (gcnew System::Windows::Forms::Button());
			this->txtitecador = (gcnew System::Windows::Forms::TextBox());
			this->txtitecando = (gcnew System::Windows::Forms::TextBox());
			this->lblitecador = (gcnew System::Windows::Forms::Label());
			this->lblitecando = (gcnew System::Windows::Forms::Label());
			this->RECURSIVO = (gcnew System::Windows::Forms::Label());
			this->ITERATIVO = (gcnew System::Windows::Forms::Label());
			this->ressumas = (gcnew System::Windows::Forms::Label());
			this->bttsumas = (gcnew System::Windows::Forms::Button());
			this->txtmulticador = (gcnew System::Windows::Forms::TextBox());
			this->txtmulticando = (gcnew System::Windows::Forms::TextBox());
			this->lblmulticador = (gcnew System::Windows::Forms::Label());
			this->lblmulticando = (gcnew System::Windows::Forms::Label());
			this->PALABRAS = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbliterapali = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbliterativa = (gcnew System::Windows::Forms::Label());
			this->lblrecupalin = (gcnew System::Windows::Forms::Label());
			this->bttnrecurpalin = (gcnew System::Windows::Forms::Button());
			this->txtrecursiva = (gcnew System::Windows::Forms::Label());
			this->BASES = (gcnew System::Windows::Forms::TabPage());
			this->lbliteraresultbases = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtiteranumero = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtiteradestino = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtiteraorigen = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblrecufinal = (gcnew System::Windows::Forms::Label());
			this->bttnrecubases = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtrecunum = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtrecubdestino = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtrecuborigen = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtrecupalin = (gcnew System::Windows::Forms::TextBox());
			this->txtiterapalin = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->SUMAS->SuspendLayout();
			this->PALABRAS->SuspendLayout();
			this->BASES->SuspendLayout();
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
			// RECURSIVO
			// 
			this->RECURSIVO->AutoSize = true;
			this->RECURSIVO->Location = System::Drawing::Point(24, 22);
			this->RECURSIVO->Name = L"RECURSIVO";
			this->RECURSIVO->Size = System::Drawing::Size(86, 16);
			this->RECURSIVO->TabIndex = 7;
			this->RECURSIVO->Text = L"RECURSIVO";
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
			this->PALABRAS->Controls->Add(this->txtiterapalin);
			this->PALABRAS->Controls->Add(this->label11);
			this->PALABRAS->Controls->Add(this->txtrecupalin);
			this->PALABRAS->Controls->Add(this->label7);
			this->PALABRAS->Controls->Add(this->label1);
			this->PALABRAS->Controls->Add(this->lbliterapali);
			this->PALABRAS->Controls->Add(this->button1);
			this->PALABRAS->Controls->Add(this->lbliterativa);
			this->PALABRAS->Controls->Add(this->lblrecupalin);
			this->PALABRAS->Controls->Add(this->bttnrecurpalin);
			this->PALABRAS->Controls->Add(this->txtrecursiva);
			this->PALABRAS->Location = System::Drawing::Point(4, 25);
			this->PALABRAS->Name = L"PALABRAS";
			this->PALABRAS->Padding = System::Windows::Forms::Padding(3);
			this->PALABRAS->Size = System::Drawing::Size(511, 536);
			this->PALABRAS->TabIndex = 1;
			this->PALABRAS->Text = L"PALABRAS";
			this->PALABRAS->UseVisualStyleBackColor = true;
			this->PALABRAS->Click += gcnew System::EventHandler(this, &MyForm::PALABRAS_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(458, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Escriba sus palabras separadas por coma y dejando el respectivo espacio";
			// 
			// lbliterapali
			// 
			this->lbliterapali->AutoSize = true;
			this->lbliterapali->Location = System::Drawing::Point(181, 409);
			this->lbliterapali->Name = L"lbliterapali";
			this->lbliterapali->Size = System::Drawing::Size(0, 16);
			this->lbliterapali->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 65);
			this->button1->TabIndex = 4;
			this->button1->Text = L"DETERMINAR PALINDROMAS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lbliterativa
			// 
			this->lbliterativa->AutoSize = true;
			this->lbliterativa->Location = System::Drawing::Point(21, 261);
			this->lbliterativa->Name = L"lbliterativa";
			this->lbliterativa->Size = System::Drawing::Size(77, 16);
			this->lbliterativa->TabIndex = 3;
			this->lbliterativa->Text = L"ITERATIVA";
			// 
			// lblrecupalin
			// 
			this->lblrecupalin->AutoSize = true;
			this->lblrecupalin->Location = System::Drawing::Point(181, 179);
			this->lblrecupalin->Name = L"lblrecupalin";
			this->lblrecupalin->Size = System::Drawing::Size(0, 16);
			this->lblrecupalin->TabIndex = 2;
			// 
			// bttnrecurpalin
			// 
			this->bttnrecurpalin->Location = System::Drawing::Point(24, 154);
			this->bttnrecurpalin->Name = L"bttnrecurpalin";
			this->bttnrecurpalin->Size = System::Drawing::Size(132, 67);
			this->bttnrecurpalin->TabIndex = 1;
			this->bttnrecurpalin->Text = L"DETERMINAR PALINDROMAS";
			this->bttnrecurpalin->UseVisualStyleBackColor = true;
			this->bttnrecurpalin->Click += gcnew System::EventHandler(this, &MyForm::bttnrecurpalin_Click);
			// 
			// txtrecursiva
			// 
			this->txtrecursiva->AutoSize = true;
			this->txtrecursiva->Location = System::Drawing::Point(21, 40);
			this->txtrecursiva->Name = L"txtrecursiva";
			this->txtrecursiva->Size = System::Drawing::Size(85, 16);
			this->txtrecursiva->TabIndex = 0;
			this->txtrecursiva->Text = L"RECURSIVA";
			// 
			// BASES
			// 
			this->BASES->Controls->Add(this->lbliteraresultbases);
			this->BASES->Controls->Add(this->button2);
			this->BASES->Controls->Add(this->txtiteranumero);
			this->BASES->Controls->Add(this->label8);
			this->BASES->Controls->Add(this->txtiteradestino);
			this->BASES->Controls->Add(this->label9);
			this->BASES->Controls->Add(this->txtiteraorigen);
			this->BASES->Controls->Add(this->label10);
			this->BASES->Controls->Add(this->label6);
			this->BASES->Controls->Add(this->lblrecufinal);
			this->BASES->Controls->Add(this->bttnrecubases);
			this->BASES->Controls->Add(this->label5);
			this->BASES->Controls->Add(this->txtrecunum);
			this->BASES->Controls->Add(this->label4);
			this->BASES->Controls->Add(this->txtrecubdestino);
			this->BASES->Controls->Add(this->label3);
			this->BASES->Controls->Add(this->txtrecuborigen);
			this->BASES->Controls->Add(this->label2);
			this->BASES->Location = System::Drawing::Point(4, 25);
			this->BASES->Name = L"BASES";
			this->BASES->Size = System::Drawing::Size(511, 536);
			this->BASES->TabIndex = 2;
			this->BASES->Text = L"BASES";
			this->BASES->UseVisualStyleBackColor = true;
			// 
			// lbliteraresultbases
			// 
			this->lbliteraresultbases->AutoSize = true;
			this->lbliteraresultbases->Location = System::Drawing::Point(25, 403);
			this->lbliteraresultbases->Name = L"lbliteraresultbases";
			this->lbliteraresultbases->Size = System::Drawing::Size(0, 16);
			this->lbliteraresultbases->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(303, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 78);
			this->button2->TabIndex = 16;
			this->button2->Text = L"CALCULAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// txtiteranumero
			// 
			this->txtiteranumero->Location = System::Drawing::Point(240, 366);
			this->txtiteranumero->Name = L"txtiteranumero";
			this->txtiteranumero->Size = System::Drawing::Size(100, 22);
			this->txtiteranumero->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 366);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(207, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Ingrese el número en base origen";
			// 
			// txtiteradestino
			// 
			this->txtiteradestino->Location = System::Drawing::Point(172, 325);
			this->txtiteradestino->Name = L"txtiteradestino";
			this->txtiteradestino->Size = System::Drawing::Size(100, 22);
			this->txtiteradestino->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 328);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 16);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Ingrese la base destino";
			// 
			// txtiteraorigen
			// 
			this->txtiteraorigen->Location = System::Drawing::Point(172, 287);
			this->txtiteraorigen->Name = L"txtiteraorigen";
			this->txtiteraorigen->Size = System::Drawing::Size(100, 22);
			this->txtiteraorigen->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 290);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(141, 16);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Ingrese la base origen";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"ITERATIVO";
			// 
			// lblrecufinal
			// 
			this->lblrecufinal->AutoSize = true;
			this->lblrecufinal->Location = System::Drawing::Point(25, 164);
			this->lblrecufinal->Name = L"lblrecufinal";
			this->lblrecufinal->Size = System::Drawing::Size(0, 16);
			this->lblrecufinal->TabIndex = 8;
			this->lblrecufinal->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// bttnrecubases
			// 
			this->bttnrecubases->Location = System::Drawing::Point(303, 10);
			this->bttnrecubases->Name = L"bttnrecubases";
			this->bttnrecubases->Size = System::Drawing::Size(159, 78);
			this->bttnrecubases->TabIndex = 7;
			this->bttnrecubases->Text = L"CALCULAR";
			this->bttnrecubases->UseVisualStyleBackColor = true;
			this->bttnrecubases->Click += gcnew System::EventHandler(this, &MyForm::bttnrecubases_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"RECURSIVO";
			// 
			// txtrecunum
			// 
			this->txtrecunum->Location = System::Drawing::Point(240, 127);
			this->txtrecunum->Name = L"txtrecunum";
			this->txtrecunum->Size = System::Drawing::Size(100, 22);
			this->txtrecunum->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ingrese el número en base origen";
			// 
			// txtrecubdestino
			// 
			this->txtrecubdestino->Location = System::Drawing::Point(172, 86);
			this->txtrecubdestino->Name = L"txtrecubdestino";
			this->txtrecubdestino->Size = System::Drawing::Size(100, 22);
			this->txtrecubdestino->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingrese la base destino";
			// 
			// txtrecuborigen
			// 
			this->txtrecuborigen->Location = System::Drawing::Point(172, 48);
			this->txtrecuborigen->Name = L"txtrecuborigen";
			this->txtrecuborigen->Size = System::Drawing::Size(100, 22);
			this->txtrecuborigen->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ingrese la base origen";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(325, 32);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Escriba palabras separadas por comas sin espacios\r\npara verficar la cantidad de p"
				L"alindromas";
			// 
			// txtrecupalin
			// 
			this->txtrecupalin->Location = System::Drawing::Point(24, 110);
			this->txtrecupalin->Name = L"txtrecupalin";
			this->txtrecupalin->Size = System::Drawing::Size(322, 22);
			this->txtrecupalin->TabIndex = 8;
			// 
			// txtiterapalin
			// 
			this->txtiterapalin->Location = System::Drawing::Point(24, 333);
			this->txtiterapalin->Name = L"txtiterapalin";
			this->txtiterapalin->Size = System::Drawing::Size(322, 22);
			this->txtiterapalin->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 289);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(325, 32);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Escriba palabras separadas por comas sin espacios\r\npara verficar la cantidad de p"
				L"alindromas";
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
			this->PALABRAS->ResumeLayout(false);
			this->PALABRAS->PerformLayout();
			this->BASES->ResumeLayout(false);
			this->BASES->PerformLayout();
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
private: System::Void PALABRAS_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bttnrecurpalin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ palabras;
	palabras = txtrecupalin->Text;	
	lblrecupalin->Text = Convert::ToString(recuvectorizacion(palabras, 0));
}
	   static int recuvectorizacion(String^ p, int pos) {// usé este video y páginas de referencia https://www.youtube.com/watch?v=oIqDz50_qJk https://stackoverflow.com/questions/29063239/c-using-systemstringsplit
		   if (pos == p->Split(',')->Length)
		   {
			   return 0;
		   }
		   return recudetectarpalindromo(p->Split(',')[pos], 0, (p->Split(',')[pos]->Length - 1)) + recuvectorizacion(p, (pos + 1));
	   }
	   static int recudetectarpalindromo(String^ pal, int posini, int posfinal) {
		   if (pal[posini]==pal[posfinal])
		   {
			   if (posini==(pal->Length-1)/2)
			   {
				   return 1;
			   }			 
			   return recudetectarpalindromo(pal, posini+1, posfinal-1);
		   }
	   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ palabras;
		palabras = txtiterapalin->Text;
		lbliterapali->Text = Convert::ToString(palabras->Split(',')[0]);
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bttnrecubases_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int origen, destino, numero;
		origen = Convert::ToInt32(txtrecuborigen->Text);
		destino = Convert::ToInt32(txtrecubdestino->Text);
		numero = Convert::ToInt32(txtrecunum->Text);

		if (recucomprobacion(numero, origen, 0) == 1)
		{
			lblrecufinal->Text = "El número convertido es: " + Convert::ToString(recubasedecimal(origen, destino, numero, 0, 0));
		}
		else
		{
			lblrecufinal->Text = "Las cifras del número no pueden ser mayor a la base";
		}
	}
	catch (Exception^ e)
	{
		lblrecufinal->Text = "ERROR: Carácteres inválidos han sido ingresados";
	}
}
	   static int recubasedecimal(int o, int d, int n, int exp, int numconvertido) {
		   if (n>0)
		   {
			   numconvertido += (n % 10) * pow(o, exp);
			   n = n / 10;
			   exp++;
			   return recubasedecimal(o,d,n,exp,numconvertido);
		   }
		   else
		   {
			   return recubasen(d, numconvertido, 0, 0);
		   }
	   }
	   static int recubasen(int d, int decimal, int basen, int contador) {
		   if (decimal>0)
		   {
			   basen += decimal % d * pow(10, contador);
			   contador++;
			   decimal = decimal / d;
			   return recubasen(d, decimal, basen, contador);
		   }
		   else
		   {
			   return basen;
		   }
	   }
	   static int recucomprobacion(int n, int b, int result) {
		   if (n>0)
		   {
			   if (n%10<b)
			   {
				   result = 1;
				   n = n / 10;
				   return recucomprobacion(n, b, result);
			   }
			   else
			   {
				   result = 0;
			   }
		   }
		   else
		   {
			   return result;
		   }
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		int origen, destino, numero, contador=0, decimal=0, resultado=0;
		origen = Convert::ToInt32(txtiteraorigen->Text);
		destino = Convert::ToInt32(txtiteradestino->Text);
		numero = Convert::ToInt32(txtiteranumero->Text);
		if (origen != 0 && destino != 0)
		{
			while (numero>0)
			{
				decimal += numero % 10 * pow(origen, contador);
				numero = numero / 10;
				contador++;
			}
			contador = 0;
			while (decimal>0)
			{
				resultado += decimal % destino * pow(10, contador);
				decimal = decimal / destino;
				contador++;
			}
			lbliteraresultbases->Text = "El Numero convertido es: " + Convert::ToString(resultado);
		}
		else
		{
			lbliteraresultbases->Text = "0";
		}
	}
	catch (Exception^ e)
	{
		lbliteraresultbases->Text = "ERROR: Carácteres inválidos han sido ingresados";
	}
}
};
}
