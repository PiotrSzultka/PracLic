#pragma once

#include<math.h>
#include<fstream>
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  PodaneH;
	private: System::Windows::Forms::TextBox^  PodaneMi;
	private: System::Windows::Forms::TextBox^  PodaneY0;
	private: System::Windows::Forms::TextBox^  PodaneX0;
	private: System::Windows::Forms::Label^  h;
	private: System::Windows::Forms::Label^  mi;
	private: System::Windows::Forms::Label^  y0;
	private: System::Windows::Forms::Label^  x0;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataGridView^  tabelaWartosci;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  y;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  programToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uruchomPonownieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem1;
	private: System::Windows::Forms::Button^  zapiszDane;
	private: System::Windows::Forms::ToolStripMenuItem^  równanieToolStripMenuItem;











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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PodaneH = (gcnew System::Windows::Forms::TextBox());
			this->PodaneMi = (gcnew System::Windows::Forms::TextBox());
			this->PodaneY0 = (gcnew System::Windows::Forms::TextBox());
			this->PodaneX0 = (gcnew System::Windows::Forms::TextBox());
			this->h = (gcnew System::Windows::Forms::Label());
			this->mi = (gcnew System::Windows::Forms::Label());
			this->y0 = (gcnew System::Windows::Forms::Label());
			this->x0 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabelaWartosci = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->programToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->równanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uruchomPonownieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszDane = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaWartosci))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 21.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Równanie Van der Pol\'a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(37, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 179);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 43);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Licz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// PodaneH
			// 
			this->PodaneH->Location = System::Drawing::Point(70, 236);
			this->PodaneH->Name = L"PodaneH";
			this->PodaneH->Size = System::Drawing::Size(59, 20);
			this->PodaneH->TabIndex = 20;
			// 
			// PodaneMi
			// 
			this->PodaneMi->Location = System::Drawing::Point(70, 202);
			this->PodaneMi->Name = L"PodaneMi";
			this->PodaneMi->Size = System::Drawing::Size(59, 20);
			this->PodaneMi->TabIndex = 19;
			// 
			// PodaneY0
			// 
			this->PodaneY0->Location = System::Drawing::Point(70, 168);
			this->PodaneY0->Name = L"PodaneY0";
			this->PodaneY0->Size = System::Drawing::Size(59, 20);
			this->PodaneY0->TabIndex = 18;
			// 
			// PodaneX0
			// 
			this->PodaneX0->Location = System::Drawing::Point(70, 136);
			this->PodaneX0->Name = L"PodaneX0";
			this->PodaneX0->Size = System::Drawing::Size(59, 20);
			this->PodaneX0->TabIndex = 17;
			// 
			// h
			// 
			this->h->AutoSize = true;
			this->h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->h->Location = System::Drawing::Point(28, 238);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(33, 18);
			this->h->TabIndex = 16;
			this->h->Text = L"h  =";
			// 
			// mi
			// 
			this->mi->AutoSize = true;
			this->mi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->mi->Location = System::Drawing::Point(28, 201);
			this->mi->Name = L"mi";
			this->mi->Size = System::Drawing::Size(33, 18);
			this->mi->TabIndex = 15;
			this->mi->Text = L"μ  =";
			// 
			// y0
			// 
			this->y0->AutoSize = true;
			this->y0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->y0->Location = System::Drawing::Point(28, 167);
			this->y0->Name = L"y0";
			this->y0->Size = System::Drawing::Size(36, 18);
			this->y0->TabIndex = 14;
			this->y0->Text = L"y0 =";
			// 
			// x0
			// 
			this->x0->AutoSize = true;
			this->x0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->x0->Location = System::Drawing::Point(28, 135);
			this->x0->Name = L"x0";
			this->x0->Size = System::Drawing::Size(36, 18);
			this->x0->TabIndex = 13;
			this->x0->Text = L"x0 =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(27, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Podaj warunki początkowe";
			// 
			// chart1
			// 
			chartArea1->BorderColor = System::Drawing::Color::DarkRed;
			chartArea1->Name = L"ChartArea1";
			chartArea1->ShadowColor = System::Drawing::Color::Red;
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(341, 60);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int64;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 245);
			this->chart1->TabIndex = 14;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			this->chart2->Location = System::Drawing::Point(341, 332);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(300, 245);
			this->chart2->TabIndex = 23;
			this->chart2->Text = L"chart2";
			// 
			// tabelaWartosci
			// 
			this->tabelaWartosci->AllowUserToAddRows = false;
			this->tabelaWartosci->AllowUserToDeleteRows = false;
			this->tabelaWartosci->AllowUserToOrderColumns = true;
			this->tabelaWartosci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaWartosci->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->n, this->x,
					this->y
			});
			this->tabelaWartosci->Location = System::Drawing::Point(31, 332);
			this->tabelaWartosci->Name = L"tabelaWartosci";
			this->tabelaWartosci->ReadOnly = true;
			this->tabelaWartosci->RowHeadersVisible = false;
			this->tabelaWartosci->Size = System::Drawing::Size(276, 196);
			this->tabelaWartosci->TabIndex = 24;
			// 
			// n
			// 
			this->n->HeaderText = L"n";
			this->n->Name = L"n";
			this->n->ReadOnly = true;
			this->n->Width = 35;
			// 
			// x
			// 
			this->x->HeaderText = L"x[n]";
			this->x->Name = L"x";
			this->x->ReadOnly = true;
			this->x->Width = 110;
			// 
			// y
			// 
			this->y->HeaderText = L"y[n]";
			this->y->Name = L"y";
			this->y->ReadOnly = true;
			this->y->Width = 110;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->programToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(669, 24);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// programToolStripMenuItem
			// 
			this->programToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->równanieToolStripMenuItem,
					this->autorToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->programToolStripMenuItem->Name = L"programToolStripMenuItem";
			this->programToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->programToolStripMenuItem->Text = L"Program";
			// 
			// równanieToolStripMenuItem
			// 
			this->równanieToolStripMenuItem->Name = L"równanieToolStripMenuItem";
			this->równanieToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->równanieToolStripMenuItem->Text = L"Równanie";
			this->równanieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::równanieToolStripMenuItem_Click);
			// 
			// autorToolStripMenuItem
			// 
			this->autorToolStripMenuItem->Name = L"autorToolStripMenuItem";
			this->autorToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->autorToolStripMenuItem->Text = L"Autor";
			this->autorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autorToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uruchomPonownieToolStripMenuItem,
					this->zamknijToolStripMenuItem1
			});
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->zamknijToolStripMenuItem->Text = L"Zasilanie";
			// 
			// uruchomPonownieToolStripMenuItem
			// 
			this->uruchomPonownieToolStripMenuItem->Name = L"uruchomPonownieToolStripMenuItem";
			this->uruchomPonownieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->uruchomPonownieToolStripMenuItem->Text = L"Uruchom ponownie";
			this->uruchomPonownieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uruchomPonownieToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem1
			// 
			this->zamknijToolStripMenuItem1->Name = L"zamknijToolStripMenuItem1";
			this->zamknijToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->zamknijToolStripMenuItem1->Text = L"Zamknij";
			this->zamknijToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::zamknijToolStripMenuItem1_Click);
			// 
			// zapiszDane
			// 
			this->zapiszDane->Location = System::Drawing::Point(113, 534);
			this->zapiszDane->Name = L"zapiszDane";
			this->zapiszDane->Size = System::Drawing::Size(108, 43);
			this->zapiszDane->TabIndex = 26;
			this->zapiszDane->Text = L"Zapisz dane";
			this->zapiszDane->UseVisualStyleBackColor = true;
			this->zapiszDane->Click += gcnew System::EventHandler(this, &Form1::zapiszDane_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 606);
			this->Controls->Add(this->zapiszDane);
			this->Controls->Add(this->tabelaWartosci);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PodaneH);
			this->Controls->Add(this->PodaneMi);
			this->Controls->Add(this->PodaneY0);
			this->Controls->Add(this->PodaneX0);
			this->Controls->Add(this->h);
			this->Controls->Add(this->mi);
			this->Controls->Add(this->y0);
			this->Controls->Add(this->x0);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"VanDerPol";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaWartosci))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->chart1->Series->Clear();
		this->chart2->Series->Clear();
		this->tabelaWartosci->Rows->Clear();
		this->chart1->Series->Add("cykl");
		chart1->Series["cykl"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		this->chart2->Series->Add("zwykly");
		chart2->Series["zwykly"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		this->label3->Text = "";

		double k1, k2, k3, k4;
		double m1, m2, m3, m4;
		double x[1501], y[1501];
		double mi, h;


		if (PodaneX0->Text->IsNullOrWhiteSpace(PodaneX0->Text) ||
			PodaneY0->Text->IsNullOrWhiteSpace(PodaneY0->Text) ||
			PodaneMi->Text->IsNullOrWhiteSpace(PodaneMi->Text) ||
			PodaneH->Text->IsNullOrWhiteSpace(PodaneH->Text)) {
			this->label3->Text = "Brak parametrów";
		}
		else {
			try {
				x[0] = Double::Parse(PodaneX0->Text);
				y[0] = Double::Parse(PodaneY0->Text);
				mi = Double::Parse(PodaneMi->Text);
				h = Double::Parse(PodaneH->Text);
				for (int n = 0; n < 1500; n++) {
					k1 = y[n];
					m1 = (-x[n]) + mi*(1 - pow(x[n], 2))*y[n];
					k2 = y[n] + h*m1 / 2;
					m2 = -(x[n] + h*k1 / 2) + mi*(1 - pow(x[n] + h*k1 / 2, 2))*(y[n] + h*m1 / 2);
					k3 = y[n] + h*m2 / 2;
					m3 = -(x[n] + h*k2 / 2) + mi*(1 - pow(x[n] + h*k2 / 2, 2))*(y[n] + h*m2 / 2);
					k4 = y[n] + h*m3;
					m4 = -(x[n] + h*k3) + mi*(1 - pow(x[n] + h*k3, 2))*(y[n] + h*m3);

					x[n + 1] = x[n] + h*(k1 + 2 * k2 + 2 * k3 + k4) / 6;
					y[n + 1] = y[n] + h*(m1 + 2 * m2 + 2 * m3 + m4) / 6;

					this->tabelaWartosci->Rows->Add();
					this->tabelaWartosci->Rows[n]->Cells[0]->Value = n;
					this->tabelaWartosci->Rows[n]->Cells[1]->Value = x[n];
					this->tabelaWartosci->Rows[n]->Cells[2]->Value = y[n];

					this->chart1->Series["cykl"]->Points->AddXY(x[n], y[n]);
					this->chart2->Series["zwykly"]->Points->AddY(y[n]);
				}

			}
			catch (Exception ^wyjatek) {
				MessageBox::Show(wyjatek->ToString(), "Błąd. Złe wartości parametrów.");
			}

		}


	}




	private: System::Void autorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Autor: Piotr Szultka \nMatematyka sem. 6 \nnr indeksu: 150 557");
	}
	private: System::Void uruchomPonownieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Restart();
	}
	private: System::Void zamknijToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void zapiszDane_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace std;
		
		fstream dane;
		try {
			dane.open("zapisaneDane.txt", ios::out);
			for (int i = 0; i < 1500; i++) {
				dane << Convert::ToDouble(tabelaWartosci->Rows[i]->Cells[0]->Value) << ", ";
				dane << Convert::ToDouble(tabelaWartosci->Rows[i]->Cells[1]->Value) << ", ";
				dane << Convert::ToDouble(tabelaWartosci->Rows[i]->Cells[2]->Value) << endl;
			}
			dane.close();

			MessageBox::Show("Zapisano dane");
		}
		catch (Exception ^ex) {
			MessageBox::Show(ex->ToString(), "Brak wartości.");
		}
	}
private: System::Void równanieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Równanie Van der Pol'a ma postać \nx'' - a*(1-x^2)*x' + x = 0 \ngdzie: \na - współczynnik tłumienia.");
}
};
}

