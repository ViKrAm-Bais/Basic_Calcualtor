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
	private: System::Windows::Forms::TextBox^ tb;
	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Button^ b0;


	private: System::Windows::Forms::Button^ bdot;

	private: System::Windows::Forms::Button^ bmul;

	private: System::Windows::Forms::Button^ b3;

	private: System::Windows::Forms::Button^ b2;

	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ bdiv;
	private: System::Windows::Forms::Button^ beq;



	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ bsub;


	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ b4;


	private: System::Windows::Forms::Button^ badd;
	private: System::Windows::Forms::Button^ b9;
	private: System::Windows::Forms::Button^ b8;
	private: System::Windows::Forms::Button^ b7;




	private: System::Windows::Forms::Button^ bac;

	private: System::Windows::Forms::Button^ bback;

	private: System::Windows::Forms::Button^ bbl;

	private: System::Windows::Forms::Button^ bbr;

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
			this->tb = (gcnew System::Windows::Forms::TextBox());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->bdot = (gcnew System::Windows::Forms::Button());
			this->bmul = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->bdiv = (gcnew System::Windows::Forms::Button());
			this->beq = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->bsub = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->badd = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->bac = (gcnew System::Windows::Forms::Button());
			this->bback = (gcnew System::Windows::Forms::Button());
			this->bbl = (gcnew System::Windows::Forms::Button());
			this->bbr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb
			// 
			this->tb->BackColor = System::Drawing::SystemColors::Menu;
			this->tb->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb->Location = System::Drawing::Point(12, 16);
			this->tb->Multiline = true;
			this->tb->Name = L"tb";
			this->tb->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tb->Size = System::Drawing::Size(266, 56);
			this->tb->TabIndex = 0;
			this->tb->Text = L"0";
			this->tb->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_TextChanged);
			this->tb->VisibleChanged += gcnew System::EventHandler(this, &MyForm::tb_VisibleChanged);
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbl->Location = System::Drawing::Point(21, 25);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(0, 20);
			this->lbl->TabIndex = 1;
			// 
			// b0
			// 
			this->b0->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b0->Location = System::Drawing::Point(12, 331);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(62, 57);
			this->b0->TabIndex = 2;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// bdot
			// 
			this->bdot->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdot->Location = System::Drawing::Point(80, 331);
			this->bdot->Name = L"bdot";
			this->bdot->Size = System::Drawing::Size(62, 57);
			this->bdot->TabIndex = 8;
			this->bdot->Text = L".";
			this->bdot->UseVisualStyleBackColor = true;
			// 
			// bmul
			// 
			this->bmul->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmul->Location = System::Drawing::Point(216, 268);
			this->bmul->Name = L"bmul";
			this->bmul->Size = System::Drawing::Size(62, 57);
			this->bmul->TabIndex = 9;
			this->bmul->Text = L"*";
			this->bmul->UseVisualStyleBackColor = true;
			this->bmul->Click += gcnew System::EventHandler(this, &MyForm::arthmclick);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(148, 268);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(62, 57);
			this->b3->TabIndex = 10;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(80, 268);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(62, 57);
			this->b2->TabIndex = 11;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(12, 268);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(62, 57);
			this->b1->TabIndex = 12;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// bdiv
			// 
			this->bdiv->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdiv->Location = System::Drawing::Point(216, 331);
			this->bdiv->Name = L"bdiv";
			this->bdiv->Size = System::Drawing::Size(62, 57);
			this->bdiv->TabIndex = 13;
			this->bdiv->Text = L"/";
			this->bdiv->UseVisualStyleBackColor = true;
			this->bdiv->Click += gcnew System::EventHandler(this, &MyForm::arthmclick);
			// 
			// beq
			// 
			this->beq->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->beq->Location = System::Drawing::Point(148, 331);
			this->beq->Name = L"beq";
			this->beq->Size = System::Drawing::Size(62, 57);
			this->beq->TabIndex = 14;
			this->beq->Text = L"=";
			this->beq->UseVisualStyleBackColor = true;
			this->beq->Click += gcnew System::EventHandler(this, &MyForm::beq_Click);
			this->beq->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::beq_KeyPress);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(80, 205);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(62, 57);
			this->b5->TabIndex = 15;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// bsub
			// 
			this->bsub->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsub->Location = System::Drawing::Point(216, 205);
			this->bsub->Name = L"bsub";
			this->bsub->Size = System::Drawing::Size(62, 57);
			this->bsub->TabIndex = 16;
			this->bsub->Text = L"-";
			this->bsub->UseVisualStyleBackColor = true;
			this->bsub->Click += gcnew System::EventHandler(this, &MyForm::arthmclick);
			// 
			// b6
			// 
			this->b6->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(148, 205);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(62, 57);
			this->b6->TabIndex = 17;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(12, 205);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(62, 57);
			this->b4->TabIndex = 18;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// badd
			// 
			this->badd->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->badd->Location = System::Drawing::Point(216, 141);
			this->badd->Name = L"badd";
			this->badd->Size = System::Drawing::Size(62, 57);
			this->badd->TabIndex = 19;
			this->badd->Text = L"+";
			this->badd->UseVisualStyleBackColor = true;
			this->badd->Click += gcnew System::EventHandler(this, &MyForm::arthmclick);
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(148, 142);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(62, 57);
			this->b9->TabIndex = 20;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// b8
			// 
			this->b8->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(80, 141);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(62, 57);
			this->b8->TabIndex = 21;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(12, 141);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(62, 57);
			this->b7->TabIndex = 22;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::btclk);
			// 
			// bac
			// 
			this->bac->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bac->Location = System::Drawing::Point(216, 79);
			this->bac->Name = L"bac";
			this->bac->Size = System::Drawing::Size(62, 57);
			this->bac->TabIndex = 23;
			this->bac->Text = L"AC";
			this->bac->UseVisualStyleBackColor = true;
			this->bac->Click += gcnew System::EventHandler(this, &MyForm::bac_Click);
			// 
			// bback
			// 
			this->bback->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bback->Location = System::Drawing::Point(148, 79);
			this->bback->Name = L"bback";
			this->bback->Size = System::Drawing::Size(62, 57);
			this->bback->TabIndex = 24;
			this->bback->Text = L"<-";
			this->bback->UseVisualStyleBackColor = true;
			this->bback->Click += gcnew System::EventHandler(this, &MyForm::bback_Click);
			// 
			// bbl
			// 
			this->bbl->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bbl->Location = System::Drawing::Point(80, 78);
			this->bbl->Name = L"bbl";
			this->bbl->Size = System::Drawing::Size(62, 57);
			this->bbl->TabIndex = 25;
			this->bbl->Text = L")";
			this->bbl->UseVisualStyleBackColor = true;
			// 
			// bbr
			// 
			this->bbr->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bbr->Location = System::Drawing::Point(12, 78);
			this->bbr->Name = L"bbr";
			this->bbr->Size = System::Drawing::Size(62, 57);
			this->bbr->TabIndex = 26;
			this->bbr->Tag = L"";
			this->bbr->Text = L"(";
			this->bbr->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(284, 404);
			this->Controls->Add(this->bbr);
			this->Controls->Add(this->bbl);
			this->Controls->Add(this->bback);
			this->Controls->Add(this->bac);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->badd);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->bsub);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->beq);
			this->Controls->Add(this->bdiv);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->bmul);
			this->Controls->Add(this->bdot);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->tb);
			this->Name = L"MyForm";
			this->Text = L"Calulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double a, b, r;
		String ^optr;

private: System::Void tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tb_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {

		}
private: System::Void bac_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb->Text = "0";
	lbl->Text = "";
}

private: System::Void btclk(System::Object^ sender, System::EventArgs^ e) 
{
	Button^ num = safe_cast<Button^>(sender);
	if (tb->Text == "0" || tb->Text=="")

	{
		tb->Text = num->Text;
	}
	else {
		tb->Text = tb->Text + num->Text;
	}
}
private: System::Void bback_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb->Text = "0";
}



private: System::Void arthmclick(System::Object^ sender, System::EventArgs^ e)
{
	Button^ op = safe_cast<Button^>(sender);
	a = Double::Parse(tb->Text);
	tb->Text = "";
	optr = op->Text;
	lbl->Text = System::Convert::ToString(a) + " " + optr;
}
private: System::Void beq_Click(System::Object^ sender, System::EventArgs^ e) 
{
	lbl->Text = "";
	b = Double::Parse(tb->Text);
	if (optr == "+")
	{
		r = a + b;
		tb->Text = System::Convert::ToString(r);
	}
	else if (optr == "-")
	{
		r = a - b;
		tb->Text = System::Convert::ToString(r);
	}
	else if (optr == "/")
	{
		r = a / b;
		tb->Text = System::Convert::ToString(r);
	}
	else if (optr == "*")
	{
		r = a *b;

		tb->Text = System::Convert::ToString(r);
	}
}
private: System::Void beq_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
};

}
