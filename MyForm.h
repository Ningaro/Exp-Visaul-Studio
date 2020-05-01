#pragma once

#include <math.h>

namespace StringsTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//MY VARS
	int rType = 10;
	double myExp;
	double OneLapExp;
	double Exp;
	int n;
	//MY FUNC
	double fact(int N)
	{
		if (N < 0) // если пользователь ввел отрицательное число
			return 0; // возвращаем ноль
		if (N == 0) // если пользователь ввел ноль,
			return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
		else // Во всех остальных случаях
			return N * fact(N - 1); // делаем рекурсию.
	}

	double round(double x)
	{
		return floor(x + 0.5);
	}

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butCloseApp;
	private: System::Windows::Forms::Button^  butCount;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  NativeCount;
	private: System::Windows::Forms::Label^  rCount;
	private: System::Windows::Forms::Label^  expCount;
	private: System::Windows::Forms::Label^  SlagCount;
	private: System::Windows::Forms::Label^  CycleExp;
	private: System::Windows::Forms::RadioButton^  r10;
	private: System::Windows::Forms::RadioButton^  r100;
	private: System::Windows::Forms::RadioButton^  r1000;
	private: System::Windows::Forms::RadioButton^  r10000;
	private: System::Windows::Forms::RadioButton^  r100000;
	private: System::Windows::Forms::RadioButton^  r1000000;
	private: System::Windows::Forms::TextBox^  x;
	protected:

	protected:




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->butCloseApp = (gcnew System::Windows::Forms::Button());
			this->butCount = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->NativeCount = (gcnew System::Windows::Forms::Label());
			this->rCount = (gcnew System::Windows::Forms::Label());
			this->expCount = (gcnew System::Windows::Forms::Label());
			this->SlagCount = (gcnew System::Windows::Forms::Label());
			this->CycleExp = (gcnew System::Windows::Forms::Label());
			this->r10 = (gcnew System::Windows::Forms::RadioButton());
			this->r100 = (gcnew System::Windows::Forms::RadioButton());
			this->r1000 = (gcnew System::Windows::Forms::RadioButton());
			this->r10000 = (gcnew System::Windows::Forms::RadioButton());
			this->r100000 = (gcnew System::Windows::Forms::RadioButton());
			this->r1000000 = (gcnew System::Windows::Forms::RadioButton());
			this->x = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// butCloseApp
			// 
			this->butCloseApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->butCloseApp->Location = System::Drawing::Point(294, 468);
			this->butCloseApp->Name = L"butCloseApp";
			this->butCloseApp->Size = System::Drawing::Size(116, 35);
			this->butCloseApp->TabIndex = 0;
			this->butCloseApp->Text = L"Закрыть";
			this->butCloseApp->UseVisualStyleBackColor = true;
			this->butCloseApp->Click += gcnew System::EventHandler(this, &MyForm::butCloseApp_Click);
			// 
			// butCount
			// 
			this->butCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->butCount->Location = System::Drawing::Point(16, 218);
			this->butCount->Name = L"butCount";
			this->butCount->Size = System::Drawing::Size(394, 35);
			this->butCount->TabIndex = 1;
			this->butCount->Text = L"Расчёт exp(x)";
			this->butCount->UseVisualStyleBackColor = true;
			this->butCount->Click += gcnew System::EventHandler(this, &MyForm::butCount_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label1->Location = System::Drawing::Point(12, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"x =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(267, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ввод значения X(от -13 до 20)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(12, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Выбор точности";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(17, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(401, 27);
			this->label4->TabIndex = 5;
			this->label4->Text = L"exp(X) = 1 + x/1! + x^2/2! + x^3/3! + ...";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline))));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(93, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(250, 28);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Результаты расчетов:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(12, 305);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 23);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Исходное значение =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(12, 340);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 23);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Точность =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(12, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(215, 23);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Точное значение exp(x) =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(12, 410);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(163, 23);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Число слагаемых =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(12, 445);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(171, 23);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Сумма ряда exp(x) =";
			// 
			// NativeCount
			// 
			this->NativeCount->AutoSize = true;
			this->NativeCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->NativeCount->ForeColor = System::Drawing::SystemColors::ControlText;
			this->NativeCount->Location = System::Drawing::Point(269, 305);
			this->NativeCount->Name = L"NativeCount";
			this->NativeCount->Size = System::Drawing::Size(15, 23);
			this->NativeCount->TabIndex = 12;
			this->NativeCount->Text = L" ";
			// 
			// rCount
			// 
			this->rCount->AutoSize = true;
			this->rCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->rCount->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rCount->Location = System::Drawing::Point(269, 340);
			this->rCount->Name = L"rCount";
			this->rCount->Size = System::Drawing::Size(15, 23);
			this->rCount->TabIndex = 13;
			this->rCount->Text = L" ";
			// 
			// expCount
			// 
			this->expCount->AutoSize = true;
			this->expCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->expCount->ForeColor = System::Drawing::SystemColors::ControlText;
			this->expCount->Location = System::Drawing::Point(269, 375);
			this->expCount->Name = L"expCount";
			this->expCount->Size = System::Drawing::Size(15, 23);
			this->expCount->TabIndex = 14;
			this->expCount->Text = L" ";
			// 
			// SlagCount
			// 
			this->SlagCount->AutoSize = true;
			this->SlagCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->SlagCount->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SlagCount->Location = System::Drawing::Point(269, 410);
			this->SlagCount->Name = L"SlagCount";
			this->SlagCount->Size = System::Drawing::Size(15, 23);
			this->SlagCount->TabIndex = 15;
			this->SlagCount->Text = L" ";
			// 
			// CycleExp
			// 
			this->CycleExp->AutoSize = true;
			this->CycleExp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->CycleExp->ForeColor = System::Drawing::SystemColors::ControlText;
			this->CycleExp->Location = System::Drawing::Point(269, 445);
			this->CycleExp->Name = L"CycleExp";
			this->CycleExp->Size = System::Drawing::Size(15, 23);
			this->CycleExp->TabIndex = 16;
			this->CycleExp->Text = L" ";
			// 
			// r10
			// 
			this->r10->AutoSize = true;
			this->r10->Checked = true;
			this->r10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->r10->Location = System::Drawing::Point(16, 149);
			this->r10->Name = L"r10";
			this->r10->Size = System::Drawing::Size(53, 27);
			this->r10->TabIndex = 17;
			this->r10->TabStop = true;
			this->r10->Text = L"0.1";
			this->r10->UseVisualStyleBackColor = true;
			this->r10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r10_CheckedChanged);
			// 
			// r100
			// 
			this->r100->AutoSize = true;
			this->r100->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->r100->Location = System::Drawing::Point(16, 176);
			this->r100->Name = L"r100";
			this->r100->Size = System::Drawing::Size(62, 27);
			this->r100->TabIndex = 18;
			this->r100->Text = L"0.01";
			this->r100->UseVisualStyleBackColor = true;
			this->r100->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r100_CheckedChanged);
			// 
			// r1000
			// 
			this->r1000->AutoSize = true;
			this->r1000->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->r1000->Location = System::Drawing::Point(160, 149);
			this->r1000->Name = L"r1000";
			this->r1000->Size = System::Drawing::Size(71, 27);
			this->r1000->TabIndex = 19;
			this->r1000->Text = L"0.001";
			this->r1000->UseVisualStyleBackColor = true;
			this->r1000->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r1000_CheckedChanged);
			// 
			// r10000
			// 
			this->r10000->AutoSize = true;
			this->r10000->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->r10000->Location = System::Drawing::Point(160, 176);
			this->r10000->Name = L"r10000";
			this->r10000->Size = System::Drawing::Size(80, 27);
			this->r10000->TabIndex = 20;
			this->r10000->Text = L"0.0001";
			this->r10000->UseVisualStyleBackColor = true;
			this->r10000->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r10000_CheckedChanged);
			// 
			// r100000
			// 
			this->r100000->AutoSize = true;
			this->r100000->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->r100000->Location = System::Drawing::Point(304, 149);
			this->r100000->Name = L"r100000";
			this->r100000->Size = System::Drawing::Size(89, 27);
			this->r100000->TabIndex = 21;
			this->r100000->Text = L"0.00001";
			this->r100000->UseVisualStyleBackColor = true;
			this->r100000->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r100000_CheckedChanged);
			// 
			// r1000000
			// 
			this->r1000000->AutoSize = true;
			this->r1000000->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->r1000000->Location = System::Drawing::Point(304, 176);
			this->r1000000->Name = L"r1000000";
			this->r1000000->Size = System::Drawing::Size(98, 27);
			this->r1000000->TabIndex = 22;
			this->r1000000->Text = L"0.000001";
			this->r1000000->UseVisualStyleBackColor = true;
			this->r1000000->CheckedChanged += gcnew System::EventHandler(this, &MyForm::r1000000_CheckedChanged);
			// 
			// x
			// 
			this->x->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->x->Location = System::Drawing::Point(53, 75);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(357, 30);
			this->x->TabIndex = 23;
			this->x->Text = L"1";
			this->x->TextChanged += gcnew System::EventHandler(this, &MyForm::x_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(420, 515);
			this->Controls->Add(this->x);
			this->Controls->Add(this->r1000000);
			this->Controls->Add(this->r100000);
			this->Controls->Add(this->r10000);
			this->Controls->Add(this->r1000);
			this->Controls->Add(this->r100);
			this->Controls->Add(this->r10);
			this->Controls->Add(this->CycleExp);
			this->Controls->Add(this->SlagCount);
			this->Controls->Add(this->expCount);
			this->Controls->Add(this->rCount);
			this->Controls->Add(this->NativeCount);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->butCount);
			this->Controls->Add(this->butCloseApp);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Расчёт exp(x)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void x_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		butCount->Enabled = false;
		if ((x->Text->Length >= 1) && (x->Text != "-") && (x->Text->IndexOf("0") == x->Text->LastIndexOf("0"))) {
			try {
				if ((Convert::ToDouble(x->Text) < -13) || (Convert::ToDouble(x->Text) > 20)) {
					x->Text = "";
				}
				butCount->Enabled = true;
			}
			catch (...) {
				x->Text = x->Text->Remove(x->Text->Length - 1, 1);
				x->SelectionStart = x->Text->Length + 1;
				return;
			}
		}
	}
	private: System::Void butCloseApp_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void r10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		rType = 10;
	}
	private: System::Void r100_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		rType = 100;
	}
	private: System::Void r1000_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		rType = 1000;
	}
	private: System::Void r10000_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		rType = 10000;
	}
	private: System::Void r100000_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		rType = 100000;
	}
	private: System::Void r1000000_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		rType = 1000000;
	}
	private: System::Void butCount_Click(System::Object^  sender, System::EventArgs^  e) {
		//Очистка значений
		NativeCount->Text = "";
		rCount->Text = "";
		expCount->Text = "";
		SlagCount->Text = "";
		CycleExp->Text = "";
		//Расчет новых значений
		String ^format;
		NativeCount->Text = x->Text;
		switch (rType) {
		case 10:
			rCount->Text = L"0.1";
			format = "N2";
			break;
		case 100:
			rCount->Text = L"0.01";
			format = "N3";
			break;
		case 1000:
			rCount->Text = L"0.001";
			format = "N4";
			break;
		case 10000:
			rCount->Text = L"0.0001";
			format = "N5";
			break;
		case 100000:
			rCount->Text = L"0.00001";
			format = "N6";
			break;
		case 1000000:
			rCount->Text = L"0.000001";
			format = "N7";
			break;
		}
		Exp = Convert::ToDouble((round(exp(Convert::ToDouble(x->Text))*(rType * 10)) / (rType * 10)).ToString(format));
		if (Exp == 0) {
			MessageBox::Show("Слишком маленькая точность\nвыберите другую!", "Закрытие", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			expCount->Text = (round(exp(Convert::ToDouble(x->Text))*(rType * 10)) / (rType * 10)).ToString(format);
			myExp = 1; n = 1; OneLapExp = 0;
			do {
				OneLapExp = pow(Convert::ToDouble(x->Text), n) / fact(n);
				myExp = myExp + OneLapExp;
				n = n + 1;
			} while (OneLapExp > 1 / Convert::ToDouble(rType));
			SlagCount->Text = Convert::ToString(n - 1);
			CycleExp->Text = Convert::ToString(round((myExp - OneLapExp)*(rType * 10)) / (rType * 10));
		}
	}
	};
}
