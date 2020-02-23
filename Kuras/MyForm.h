#pragma once

#include "newUser.h"
#include "redagavimas.h"
#include "Header.h"

namespace Kuras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    namespace {
        Kortele a[500];
        int kiekis_card = 0;
        int kiekis_pylimai[500] = { 0 };
        int kiekis_kuras[500] = { 0 };
        int maxKuras;
    }
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	//buvo private
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;



	private: System::Windows::Forms::Button^  button10;
    private: System::Windows::Forms::DataGridView^  dataGridView3;

















private: System::Windows::Forms::DataGridViewTextBoxColumn^  date;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  location;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  kaina;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  sum;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  liters;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  yearMonth;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  suma;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  Apmoketa;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  skola;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  limit;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  vidurkis;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  km;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  litrai;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  likPr;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  likPab;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  surname;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  card;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  surpass;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  city;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  number;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  model;
    private: System::Windows::Forms::Button^  button7;
    private: System::Windows::Forms::Button^  button8;
    protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->card = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->surpass = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->city = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->location = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->kaina = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->sum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->liters = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->yearMonth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->suma = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Apmoketa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->skola = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->limit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->vidurkis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->km = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->litrai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->likPr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->likPab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->name, this->surname,
                    this->card, this->surpass, this->city, this->number, this->model
            });
            this->dataGridView1->Location = System::Drawing::Point(13, 44);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(604, 720);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
            // 
            // name
            // 
            this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
            this->name->HeaderText = L"Vardas";
            this->name->Name = L"name";
            this->name->ReadOnly = true;
            this->name->Width = 5;
            // 
            // surname
            // 
            this->surname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
            this->surname->HeaderText = L"Pavardë";
            this->surname->Name = L"surname";
            this->surname->ReadOnly = true;
            this->surname->Width = 5;
            // 
            // card
            // 
            this->card->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
            this->card->HeaderText = L"Kortelë";
            this->card->MaxInputLength = 6;
            this->card->Name = L"card";
            this->card->ReadOnly = true;
            this->card->Width = 5;
            // 
            // surpass
            // 
            this->surpass->HeaderText = L"Virð. Limitas";
            this->surpass->Name = L"surpass";
            this->surpass->ReadOnly = true;
            this->surpass->Width = 70;
            // 
            // city
            // 
            this->city->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
            this->city->HeaderText = L"Miestas";
            this->city->Name = L"city";
            this->city->ReadOnly = true;
            this->city->Width = 5;
            // 
            // number
            // 
            this->number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
            this->number->HeaderText = L"Numeris";
            this->number->MaxInputLength = 6;
            this->number->Name = L"number";
            this->number->ReadOnly = true;
            this->number->Width = 5;
            // 
            // model
            // 
            this->model->HeaderText = L"Markë";
            this->model->Name = L"model";
            this->model->ReadOnly = true;
            this->model->Width = 120;
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToAddRows = false;
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->date, this->location,
                    this->kaina, this->sum, this->liters
            });
            this->dataGridView2->Location = System::Drawing::Point(1269, 44);
            this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView2->Size = System::Drawing::Size(524, 720);
            this->dataGridView2->TabIndex = 1;
            // 
            // date
            // 
            this->date->HeaderText = L"Data";
            this->date->Name = L"date";
            this->date->ReadOnly = true;
            this->date->Width = 150;
            // 
            // location
            // 
            this->location->HeaderText = L"Vieta";
            this->location->Name = L"location";
            this->location->ReadOnly = true;
            this->location->Width = 190;
            // 
            // kaina
            // 
            this->kaina->HeaderText = L"Kaina";
            this->kaina->Name = L"kaina";
            this->kaina->ReadOnly = true;
            this->kaina->Width = 50;
            // 
            // sum
            // 
            this->sum->HeaderText = L"Suma";
            this->sum->Name = L"sum";
            this->sum->ReadOnly = true;
            this->sum->Width = 50;
            // 
            // liters
            // 
            this->liters->HeaderText = L"Litrai";
            this->liters->Name = L"liters";
            this->liters->ReadOnly = true;
            this->liters->Width = 50;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button1->Location = System::Drawing::Point(13, 807);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(107, 34);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Naujas";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button2->Location = System::Drawing::Point(125, 807);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(107, 34);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Ðalinti";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button3->Location = System::Drawing::Point(237, 807);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(119, 34);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Redaguoti";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button4->Location = System::Drawing::Point(181, 7);
            this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(141, 33);
            this->button4->TabIndex = 2;
            this->button4->Text = L"Atnaujinti";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button5
            // 
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button5->Location = System::Drawing::Point(551, 807);
            this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(107, 34);
            this->button5->TabIndex = 2;
            this->button5->Text = L"Iðeiti";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button6
            // 
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button6->Location = System::Drawing::Point(661, 807);
            this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(107, 34);
            this->button6->TabIndex = 2;
            this->button6->Text = L"Ataskaita";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // button10
            // 
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button10->Location = System::Drawing::Point(13, 7);
            this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(151, 33);
            this->button10->TabIndex = 2;
            this->button10->Text = L"Rodyti visus";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // dataGridView3
            // 
            this->dataGridView3->AllowUserToAddRows = false;
            this->dataGridView3->AllowUserToDeleteRows = false;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
                this->yearMonth,
                    this->suma, this->Apmoketa, this->skola, this->limit, this->vidurkis, this->km, this->litrai, this->likPr, this->likPab
            });
            this->dataGridView3->Location = System::Drawing::Point(623, 44);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->ReadOnly = true;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView3->Size = System::Drawing::Size(640, 720);
            this->dataGridView3->TabIndex = 3;
            this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellClick);
            // 
            // yearMonth
            // 
            this->yearMonth->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->yearMonth->HeaderText = L"Data";
            this->yearMonth->Name = L"yearMonth";
            this->yearMonth->ReadOnly = true;
            this->yearMonth->Width = 67;
            // 
            // suma
            // 
            this->suma->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->suma->HeaderText = L"Suma";
            this->suma->Name = L"suma";
            this->suma->ReadOnly = true;
            this->suma->Width = 73;
            // 
            // Apmoketa
            // 
            this->Apmoketa->HeaderText = L"Apmokëta";
            this->Apmoketa->Name = L"Apmoketa";
            this->Apmoketa->ReadOnly = true;
            this->Apmoketa->Width = 75;
            // 
            // skola
            // 
            this->skola->HeaderText = L"Virð. Limitas";
            this->skola->Name = L"skola";
            this->skola->ReadOnly = true;
            this->skola->Width = 70;
            // 
            // limit
            // 
            this->limit->HeaderText = L"Limitas";
            this->limit->Name = L"limit";
            this->limit->ReadOnly = true;
            this->limit->Width = 60;
            // 
            // vidurkis
            // 
            this->vidurkis->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
            this->vidurkis->HeaderText = L"L/100km";
            this->vidurkis->Name = L"vidurkis";
            this->vidurkis->ReadOnly = true;
            this->vidurkis->Width = 5;
            // 
            // km
            // 
            this->km->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->km->HeaderText = L"km";
            this->km->Name = L"km";
            this->km->ReadOnly = true;
            this->km->Width = 55;
            // 
            // litrai
            // 
            this->litrai->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->litrai->HeaderText = L"Litrai";
            this->litrai->Name = L"litrai";
            this->litrai->ReadOnly = true;
            this->litrai->Width = 68;
            // 
            // likPr
            // 
            this->likPr->HeaderText = L"Lik. Pr.";
            this->likPr->Name = L"likPr";
            this->likPr->ReadOnly = true;
            this->likPr->Width = 50;
            // 
            // likPab
            // 
            this->likPab->HeaderText = L"Lik. Pab.";
            this->likPab->Name = L"likPab";
            this->likPab->ReadOnly = true;
            this->likPab->Width = 50;
            // 
            // button7
            // 
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button7->Location = System::Drawing::Point(876, 787);
            this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(155, 75);
            this->button7->TabIndex = 4;
            this->button7->Text = L"Iðsaugoti vartotojø sàraðo pakeitimus";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button8
            // 
            this->button8->Location = System::Drawing::Point(1766, 13);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(27, 23);
            this->button8->TabIndex = 5;
            this->button8->Text = L"\?";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
            this->ClientSize = System::Drawing::Size(1805, 893);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->dataGridView3);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->dataGridView2);
            this->Controls->Add(this->dataGridView1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"MyForm";
            this->Text = L"Kuras";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
        //void refreshGrid1();
//pakeicia tam tikros korteles duomenis
public: static void atnaujinti(Kortele b, int id)
{
    a[id].naujinti(b);
}
//prideda nauja kortele i masyva a
public: static void prideti(Kortele b)
{
    a[kiekis_card].prideti(b, kiekis_card);
}
//Uzpildo a masyvo duomenimis dataGridView1
private: void pildyti(int kiekis_card, Kortele a[])
{
        std::string viet;
        String ^ temp;
        dataGridView1->RowCount = kiekis_card;
        for (int i = 0; i < kiekis_card; i++)
        {
            //Vardas
            temp = gcnew String(a[i].getName().c_str());
            dataGridView1->Rows[i]->Cells[0]->Value = temp;
            //Pavarde
            temp = gcnew String(a[i].getSurname().c_str());
            dataGridView1->Rows[i]->Cells[1]->Value = temp;
            //Kortele
            dataGridView1->Rows[i]->Cells[2]->Value = a[i].getCardNumber();
            //Virsytas limitas
            double virsytas = 0;
            if (a[i].m.suma >= a[i].getLimit())
            {
                virsytas = a[i].m.suma - a[i].getLimit();
            } 
            dataGridView1->Rows[i]->Cells[3]->Value = virsytas;
            //Miestas
            temp = gcnew String(a[i].getCity().c_str());
            dataGridView1->Rows[i]->Cells[4]->Value = temp;
            //Valstybinis numeris
            temp = gcnew String(a[i].getNumberPlate().c_str());
            dataGridView1->Rows[i]->Cells[5]->Value = temp;
            //Masinos Modelis(Marke)
            temp = gcnew String(a[i].getModel().c_str());
            dataGridView1->Rows[i]->Cells[6]->Value = temp;
        }
}	
//Uzdaro programa
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
    MyForm::Close();
}
//**Rodyti Visus**, uzpildo korteliu, importo, pylimu masyvus	 
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
    //kad nesidaugintu duomenys
    if (kiekis_card == 0)
    {
        uzpildymas(a, kiekis_card);        
        pylimaiUzpildymas(a, kiekis_pylimai, kiekis_card);
        kurasUzpildymas(a, kiekis_kuras, kiekis_card, maxKuras);
        importuoti(a, kiekis_card);
        kurasFormuoti(a, kiekis_card, kiekis_kuras);
        pildyti(kiekis_card, a);
        //refreshGrid1();
    }
}
//Atidaro newUser forma, kur galima prideti nauja vartotoja
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
    newUser ^ form = gcnew newUser;
    form->ShowDialog();
}
//Istrina pasirinkta eilute is a masyvo
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
    String ^ name;
    String ^ confirmResult = Convert::ToString(MessageBox::Show("Ar tikrai norite paðalinti ðá vairuotojà?", "Patvirtinimas", MessageBoxButtons::YesNo, MessageBoxIcon::Question));
    if (confirmResult == "Yes")
    {
        int id;
        id = dataGridView1->SelectedRows[0]->Index;
        name = a[id].getCardNumber().ToString();
        pasalinti(kiekis_card, a, id);
        MessageBox::Show("\"" + name + "\" paðalinta sëkmingai", "Patvirtinimas", MessageBoxButtons::OK, MessageBoxIcon::None);
    }
}
//Paspaudus dataGridView2 eilute, jo desineje atsiranda sarasas su menesio eigoje atliktais kuro uzpylimais
private: System::Void dataGridView3_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
    
    int id;
    id = dataGridView1->SelectedRows[0]->Index;
    if (kiekis_pylimai[id] != 0)
    {
        std::string viet;
        String ^ temp;
        dataGridView2->RowCount = kiekis_pylimai[id];
        for (int i = 0; i < kiekis_pylimai[id]; i++)
        {
            //Data
            temp = gcnew String(a[id].p[i].date.c_str());
            dataGridView2->Rows[i]->Cells[0]->Value = temp;
            //Vieta
            temp = gcnew String(a[id].p[i].location.c_str());
            dataGridView2->Rows[i]->Cells[1]->Value = temp;
            //Kaina
            dataGridView2->Rows[i]->Cells[2]->Value = a[id].p[i].price;
            //Suma
            dataGridView2->Rows[i]->Cells[3]->Value = a[id].p[i].total;
            //Litrai
            dataGridView2->Rows[i]->Cells[4]->Value = a[id].p[i].amount;
        }
    }
    else {
        dataGridView2->Rows->Clear();
    }
}
//Paspaudus dataGridView1 eilute, jo desineje atsiranda sarasas su menesio ataskaitomis apie kuro sanaudas
private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
        int id;
        id = dataGridView1->CurrentRow->Index;
        if (kiekis_kuras[id] != 0)
        {
            String ^ temp;
            dataGridView3->RowCount = kiekis_kuras[id];
            for (int i = 0; i < kiekis_kuras[id]; i++)
            {
                //Data
                temp = gcnew String(a[id].k[i].data.c_str());
                dataGridView3->Rows[i]->Cells[0]->Value = temp;
                //suma   
                dataGridView3->Rows[i]->Cells[1]->Value = a[id].k[i].suma;
                //suma Apmoketa
                dataGridView3->Rows[i]->Cells[2]->Value = a[id].k[i].sumaApmoketa;
                //Virsytas limitas
                double virsytas = 0;
                if (a[id].k[i].suma >= a[id].k[i].limit)
                {
                    virsytas = a[id].k[i].suma - a[id].k[i].limit;
                }
                //double skola = a[id].k[i].suma - a[id].k[i].limit;
                dataGridView3->Rows[i]->Cells[3]->Value = virsytas;
                //Limitas
                dataGridView3->Rows[i]->Cells[4]->Value = a[id].k[i].limit;
                //l/100km
                double l100km = 0;
                if (a[id].k[i].km > 0)
                {
                    l100km = (a[id].k[i].litrai / a[id].k[i].km) * 100;
                    l100km = round((l100km * 100)) / 100;
                }
                dataGridView3->Rows[i]->Cells[5]->Value = l100km;
                //km
                dataGridView3->Rows[i]->Cells[6]->Value = a[id].k[i].km;
                //Litrai
                dataGridView3->Rows[i]->Cells[7]->Value = a[id].k[i].litrai;
                //Likutis pradzioje
                dataGridView3->Rows[i]->Cells[8]->Value = a[id].k[i].start;
                //Likutis pabaigoje
                dataGridView3->Rows[i]->Cells[9]->Value = a[id].k[i].end;
            }
        }
        else {
            dataGridView3->Rows->Clear();
        }
    }
//spausdinama ataskaita apie kuro sanaudas
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
    //kurasFormuoti(a, kiekis_card, kiekis_kuras);
    rezultataiSpausdinti(a, kiekis_pylimai, kiekis_kuras, kiekis_card, maxKuras);
    MessageBox::Show("Ataskaita sëkmingai sukurta", "Ataskaita", MessageBoxButtons::OK, MessageBoxIcon::None);
}
//Atidaromas redagavimo langas
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
    
    int id;
    int row;
    id = dataGridView1->CurrentRow->Index;
    redagavimas ^ form = gcnew redagavimas;
    Kortele b = a[id];
    form->ID(id, b);
    form->ShowDialog();
}
//refresh dataGridView1
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
    
    refreshGrid1();
}
//saugoti korteles.txt pakeitimus
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
    saugoti(a, kiekis_card);
    MessageBox::Show("Korteles.txt sëkmingai atnaujinta", "Korteliu atnaujinimas", MessageBoxButtons::OK, MessageBoxIcon::None);
}
void refreshGrid1(){
    dataGridView1->RowCount = 0;
    pildyti(kiekis_card, a);
}
//help mygtukas
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
    MessageBox::Show("Ávedimas:\nFailai yra:\n  korteles.txt -> saugomi duomenys apie vartotojus\n  importas.txt -> praeito mënesio duomenys apie Kortelës vartotojà: kilometrai, pradinis ir galinis likutis, kiek litrø uþpilta, uþ kokià sumà.\n  ataskaitaLTU.txt -> Kuro tiekëjo atsiøstas failas su duomenimis apie pylimus.\nAtaskaita apie praeità mënesá:\n  sukuriamas failas: kurasAtaskaita*praeito mënesio data*.txt ", "Pagalba", MessageBoxButtons::OK, MessageBoxIcon::None);
}
};
}
