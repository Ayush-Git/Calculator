#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  lbl;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  lbl2;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl
			// 
			this->lbl->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl->ForeColor = System::Drawing::Color::Black;
			this->lbl->Location = System::Drawing::Point(0, 0);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(296, 93);
			this->lbl->TabIndex = 0;
			this->lbl->Text = L"0";
			this->lbl->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lbl->Click += gcnew System::EventHandler(this, &MyForm::lbl_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(0, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 71);
			this->button1->TabIndex = 1;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(0, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 71);
			this->button2->TabIndex = 2;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(0, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 71);
			this->button3->TabIndex = 3;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(0, 230);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 71);
			this->button4->TabIndex = 4;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(72, 299);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(74, 71);
			this->button5->TabIndex = 5;
			this->button5->Text = L"0";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(72, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 71);
			this->button7->TabIndex = 9;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(72, 161);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(74, 71);
			this->button8->TabIndex = 8;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(72, 92);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(74, 71);
			this->button9->TabIndex = 7;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DimGray;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(144, 299);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(74, 71);
			this->button11->TabIndex = 20;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkOrange;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(216, 92);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(74, 71);
			this->button12->TabIndex = 19;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkOrange;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(216, 161);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(74, 71);
			this->button13->TabIndex = 18;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkOrange;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(216, 230);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(74, 71);
			this->button14->TabIndex = 17;
			this->button14->Text = L"x";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkOrange;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(216, 299);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(74, 71);
			this->button15->TabIndex = 16;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Silver;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(144, 230);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(74, 71);
			this->button17->TabIndex = 14;
			this->button17->Text = L"3";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Silver;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(144, 161);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(74, 71);
			this->button18->TabIndex = 13;
			this->button18->Text = L"6";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Silver;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(144, 92);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(74, 71);
			this->button19->TabIndex = 12;
			this->button19->Text = L"9";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// lbl2
			// 
			this->lbl2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lbl2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::Color::Black;
			this->lbl2->Location = System::Drawing::Point(0, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(296, 34);
			this->lbl2->TabIndex = 21;
			this->lbl2->Text = L"Select Num";
			this->lbl2->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(290, 370);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator by Ayush";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
		double firstnum, secondnum, result = 0;
		bool isoperand = false;
		String^ operation = "a";
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	reset();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!isoperand) {
		isoperand = true;
		firstnum = Convert::ToDouble(lbl->Text);
		lbl->Text = "0";
		operation = "/";
	}
	else {
		operation = "/";
	}
	updatelbl2();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "3";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "3";
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "7";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "7";
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "1";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "1";
		}
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "2";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "2";
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "4";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "4";
		}
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "5";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "5";
		}
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "6";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "6";
		}
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "8";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "8";
		}
	}
		
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			lbl->Text = "9";
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "9";
		}
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!isoperand){
		isoperand = true;
		firstnum = Convert::ToDouble(lbl->Text);
		lbl->Text = "0";
		operation = "*";
	}
	else {
		operation = "*";
	}
	updatelbl2();

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (operation != "No Operation") {
		if (lbl->Text == "0") {
			return;
		}
		else {
			lbl->Text = Convert::ToDouble(lbl->Text) + "0";
		}
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!isoperand) {
		isoperand = true;
		firstnum = Convert::ToDouble(lbl->Text);
		lbl->Text = "0";
		operation = "+";
	}
	else {
		operation = "+";
	}
	updatelbl2();

}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!isoperand) {
		isoperand = true;
		firstnum = Convert::ToDouble(lbl->Text);
		lbl->Text = "0";
		operation = "-";
	}
	else { 
		operation = "-";
	}
	updatelbl2();
}

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		secondnum = Convert::ToDouble(lbl->Text);

		if (operation == "+"){
			result = firstnum + secondnum;
			lbl->Text = Convert::ToString(result);
		}
		else if (operation == "-"){
			result = firstnum - secondnum;
			lbl->Text = Convert::ToString(result);
		}
		else if (operation == "*"){
			result = firstnum * secondnum;
			lbl->Text = Convert::ToString(result);
		}
		else if (operation == "/"){
			if (secondnum != 0){
			result = firstnum / secondnum;
			lbl->Text = Convert::ToString(result);
			
			}
			else {
				lbl2->Text = "Reset since division by zero.";
				lbl->Text = "0";
				firstnum = 0;
				secondnum = 0;
				operation = "NULL";
				isoperand = false;
				return;
			}
			
		}
		firstnum = result;
		secondnum = 0;
		isoperand = false;
		operation = "No Operation";
		updatelbl2();

	}

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
void updatelbl2(){
	if (operation == "+") {
		lbl2->Text = "Add: ";
	}
	else if (operation == "-") {
		lbl2->Text = "Subtract: ";
	}
	else if (operation == "*") {
		lbl2->Text = "Multiply by: ";
	}
	else if (operation == "/") {
		lbl2->Text = "Divide by: ";
	}
	else if (operation == "NULL") {
		lbl2->Text = "Select Num";
	}
	else {
		lbl2->Text = "Select an operation";
	}

}
void reset() {
	lbl->Text = "0";
	firstnum = 0;
	secondnum = 0;
	operation = "NULL";
	isoperand = false;
	updatelbl2();
}
private: System::Void lbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
