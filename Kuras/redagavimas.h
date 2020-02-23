#pragma once
#include "Header.h"
namespace Kuras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    namespace
    {
        int k; //, a;
        Kortele f;
        //prekes D[500];
    }

	/// <summary>
	/// Summary for redagavimas
	/// </summary>
	public ref class redagavimas : public System::Windows::Forms::Form
	{
	public:
		redagavimas(void)
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
		~redagavimas()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::TextBox^  textBox4;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::TextBox^  textBox5;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::TextBox^  textBox6;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::TextBox^  textBox7;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::TextBox^  textBox8;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::TextBox^  textBox9;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::TextBox^  textBox10;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::TextBox^  textBox11;
    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::TextBox^  textBox12;
    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::TextBox^  textBox13;
    private: System::Windows::Forms::Label^  label13;
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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(186)));
            this->button1->Location = System::Drawing::Point(64, 423);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(172, 57);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Redaguoti";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &redagavimas::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(13, 13);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(48, 17);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Grupë";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(16, 33);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(128, 22);
            this->textBox1->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(16, 85);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(128, 22);
            this->textBox2->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(13, 65);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(53, 17);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Vardas";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(16, 142);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(128, 22);
            this->textBox3->TabIndex = 6;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(13, 122);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(61, 17);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Pavardë";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(16, 199);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(128, 22);
            this->textBox4->TabIndex = 8;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(13, 179);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(56, 17);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Miestas";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(16, 257);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(128, 22);
            this->textBox5->TabIndex = 10;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(13, 237);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(47, 17);
            this->label5->TabIndex = 9;
            this->label5->Text = L"Markë";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(16, 313);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(128, 22);
            this->textBox6->TabIndex = 12;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(13, 293);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(60, 17);
            this->label6->TabIndex = 11;
            this->label6->Text = L"Numeris";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(163, 33);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(128, 22);
            this->textBox7->TabIndex = 14;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(160, 13);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(131, 17);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Kortelë(6 pask. sk.)";
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(163, 85);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(128, 22);
            this->textBox8->TabIndex = 16;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(160, 65);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(52, 17);
            this->label8->TabIndex = 15;
            this->label8->Text = L"Limitas";
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(163, 142);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(128, 22);
            this->textBox9->TabIndex = 18;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(160, 122);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(44, 17);
            this->label9->TabIndex = 17;
            this->label9->Text = L"Suma";
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(163, 199);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(128, 22);
            this->textBox10->TabIndex = 20;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(160, 179);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(111, 17);
            this->label10->TabIndex = 19;
            this->label10->Text = L"Apmokëta Suma";
            // 
            // textBox11
            // 
            this->textBox11->Location = System::Drawing::Point(163, 257);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(128, 22);
            this->textBox11->TabIndex = 22;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(160, 237);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(118, 17);
            this->label11->TabIndex = 21;
            this->label11->Text = L"Suma per mënesá";
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(163, 313);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(128, 22);
            this->textBox12->TabIndex = 24;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(160, 293);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(102, 17);
            this->label12->TabIndex = 23;
            this->label12->Text = L"Km per mënesá";
            // 
            // textBox13
            // 
            this->textBox13->Location = System::Drawing::Point(86, 375);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(128, 22);
            this->textBox13->TabIndex = 26;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(83, 355);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(157, 17);
            this->label13->TabIndex = 25;
            this->label13->Text = L"Uþpilta kuro per mënesá";
            // 
            // redagavimas
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(309, 524);
            this->Controls->Add(this->textBox13);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->textBox12);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->textBox11);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->textBox10);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->textBox9);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Name = L"redagavimas";
            this->Text = L"redagavimas";
            this->Load += gcnew System::EventHandler(this, &redagavimas::redagavimas_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
     public:
     void ID(int id, Kortele b)
     {
        k = id;
        f = b;
     }
    void redaguotiKortele(Kortele b, int id);

    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        String ^ numberPlate, ^ name, ^ surname, ^ model, ^ city, ^ group;
        std::string numberPlate1, name1, surname1, model1, city1, group1;
        if (
            !String::IsNullOrWhiteSpace(textBox1->Text) && !String::IsNullOrWhiteSpace(textBox2->Text) &&
            !String::IsNullOrWhiteSpace(textBox3->Text) && !String::IsNullOrWhiteSpace(textBox4->Text) &&
            !String::IsNullOrWhiteSpace(textBox5->Text) && !String::IsNullOrWhiteSpace(textBox6->Text) &&
            !String::IsNullOrWhiteSpace(textBox7->Text) && !String::IsNullOrWhiteSpace(textBox8->Text) &&
            !String::IsNullOrWhiteSpace(textBox9->Text) && !String::IsNullOrWhiteSpace(textBox10->Text) &&
            !String::IsNullOrWhiteSpace(textBox11->Text) && !String::IsNullOrWhiteSpace(textBox12->Text) &&
            !String::IsNullOrWhiteSpace(textBox13->Text)
            )
        {
            group = textBox1->Text;
            name = textBox2->Text;
            surname = textBox3->Text;
            city = textBox4->Text;
            model = textBox5->Text;
            numberPlate = textBox6->Text;
            int limit1;
            limit1 = int::Parse(textBox8->Text);
            int cardNumberInt;
            cardNumberInt = int::Parse(textBox7->Text);
            double suma, sumaApmoketa, sumaPerMen, kmPerMen, litraiPerMen;
            suma = double::Parse(textBox9->Text);
            sumaApmoketa = double::Parse(textBox10->Text);
            sumaPerMen = double::Parse(textBox11->Text);
            kmPerMen = double::Parse(textBox12->Text);
            litraiPerMen = double::Parse(textBox13->Text);
            name1 = convert(name);
            surname1 = convert(surname);
            city1 = convert(city);
            group1 = convert(group);
            model1 = convert(model);
            numberPlate1 = convert(numberPlate);
            Kortele b(cardNumberInt, name1, surname1, model1, numberPlate1, suma, sumaApmoketa, city1, limit1, sumaPerMen, kmPerMen, litraiPerMen, group1);
            redaguotiKortele(b, k);

            redagavimas::Close();
        }

    }
    private: System::Void redagavimas_Load(System::Object^  sender, System::EventArgs^  e) {
        String ^ temp;
        temp = gcnew String(f.getGroup().c_str());
        textBox1->Text = temp;
        temp = gcnew String(f.getName().c_str());
        textBox2->Text = temp;
        temp = gcnew String(f.getSurname().c_str());
        textBox3->Text = temp;
        temp = gcnew String(f.getCity().c_str());
        textBox4->Text = temp;
        temp = gcnew String(f.getModel().c_str());
        textBox5->Text = temp;
        temp = gcnew String(f.getNumberPlate().c_str());
        textBox6->Text = temp;
        temp = gcnew String(std::to_string(f.getCardNumber()).c_str());
        textBox7->Text = temp;
        temp = gcnew String(std::to_string(f.getLimit()).c_str());
        textBox8->Text = temp;
        temp = gcnew String(std::to_string(f.getSuma()).c_str());
        textBox9->Text = temp;
        temp = gcnew String(std::to_string(f.getSumaApmoketa()).c_str());
        textBox10->Text = temp;
        temp = gcnew String(std::to_string(f.getSumaMen()).c_str());
        textBox11->Text = temp;
        temp = gcnew String(std::to_string(f.getKm()).c_str());
        textBox12->Text = temp;
        temp = gcnew String(std::to_string(f.getLitrai()).c_str());
        textBox13->Text = temp;
    }
};
}
