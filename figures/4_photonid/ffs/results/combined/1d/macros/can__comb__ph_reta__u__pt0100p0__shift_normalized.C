#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_reta__u__pt0100p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n15/
//=========  (Thu Apr  4 19:00:11 2024) by ROOT version 6.30/02
   TCanvas *c1_n15 = new TCanvas("c1_n15", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n15->SetHighLightColor(2);
   c1_n15->Range(0,0,1,1);
   c1_n15->SetFillColor(0);
   c1_n15->SetBorderMode(0);
   c1_n15->SetBorderSize(2);
   c1_n15->SetTickx(1);
   c1_n15->SetTicky(1);
   c1_n15->SetLeftMargin(0.16);
   c1_n15->SetRightMargin(0.05);
   c1_n15->SetTopMargin(0.05);
   c1_n15->SetBottomMargin(0.16);
   c1_n15->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__64 = new TPad("dw", "dw",0,0,1,0.5);
   dw__64->Draw();
   dw__64->cd();
   dw__64->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__64->SetFillColor(0);
   dw__64->SetFillStyle(4000);
   dw__64->SetBorderMode(0);
   dw__64->SetBorderSize(0);
   dw__64->SetTickx(1);
   dw__64->SetTicky(1);
   dw__64->SetLeftMargin(0.120603);
   dw__64->SetRightMargin(0.08040201);
   dw__64->SetTopMargin(0);
   dw__64->SetBottomMargin(0.2072539);
   dw__64->SetFrameBorderMode(0);
   dw__64->SetFrameBorderMode(0);
   Double_t xAxis389[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__389 = new TH1D("chist_dw__389","",8, xAxis389);
   chist_dw__389->SetMinimum(0.2);
   chist_dw__389->SetMaximum(3.2);
   chist_dw__389->SetDirectory(nullptr);
   chist_dw__389->SetStats(0);
   chist_dw__389->SetLineColor(0);
   chist_dw__389->SetLineWidth(0);
   chist_dw__389->SetMarkerColor(0);
   chist_dw__389->SetMarkerStyle(20);
   chist_dw__389->SetMarkerSize(0);
   chist_dw__389->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__389->GetXaxis()->SetRange(1,11);
   chist_dw__389->GetXaxis()->SetLabelFont(42);
   chist_dw__389->GetXaxis()->SetLabelSize(0.08);
   chist_dw__389->GetXaxis()->SetTitleSize(0.08);
   chist_dw__389->GetXaxis()->SetTickLength(0.04);
   chist_dw__389->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__389->GetXaxis()->SetTitleFont(42);
   chist_dw__389->GetYaxis()->SetTitle("Stretch");
   chist_dw__389->GetYaxis()->CenterTitle(true);
   chist_dw__389->GetYaxis()->SetNdivisions(405);
   chist_dw__389->GetYaxis()->SetLabelFont(42);
   chist_dw__389->GetYaxis()->SetLabelSize(0.08);
   chist_dw__389->GetYaxis()->SetTitleSize(0.08);
   chist_dw__389->GetYaxis()->SetTickLength(0.04);
   chist_dw__389->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__389->GetYaxis()->SetTitleFont(42);
   chist_dw__389->GetZaxis()->SetLabelFont(42);
   chist_dw__389->GetZaxis()->SetLabelSize(0.05);
   chist_dw__389->GetZaxis()->SetTitleSize(0.05);
   chist_dw__389->GetZaxis()->SetTitleOffset(1);
   chist_dw__389->GetZaxis()->SetTitleFont(42);
   chist_dw__389->Draw("");
   TLine *line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,1,2.37,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,2,2.37,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,3,2.37,3);
   line->SetLineStyle(3);
   line->Draw();
   Double_t xAxis390[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_8__390 = new TH1D("RZ_stretch_tot_8__390","",8, xAxis390);
   RZ_stretch_tot_8__390->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_8__390->SetFillColor(ci);
   RZ_stretch_tot_8__390->SetLineWidth(2);
   RZ_stretch_tot_8__390->SetMarkerStyle(20);
   RZ_stretch_tot_8__390->SetMarkerSize(0.8);
   RZ_stretch_tot_8__390->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_8__390->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__390->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__390->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__390->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__390->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__390->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__390->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__390->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__390->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__390->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__390->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_8__390->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__390->Draw("SAME E2");
   Double_t xAxis391[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_8__391 = new TH1D("RZ_stretch_stat_8__391","",8, xAxis391);
   RZ_stretch_stat_8__391->SetStats(0);
   RZ_stretch_stat_8__391->SetLineWidth(2);
   RZ_stretch_stat_8__391->SetMarkerStyle(20);
   RZ_stretch_stat_8__391->SetMarkerSize(0.8);
   RZ_stretch_stat_8__391->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_8__391->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__391->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__391->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__391->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__391->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__391->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__391->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__391->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__391->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__391->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__391->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_8__391->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__391->Draw("SAME PZ");
   Double_t xAxis392[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_8__392 = new TH1D("SP_stretch_tot_8__392","",8, xAxis392);
   SP_stretch_tot_8__392->SetBinContent(1,1.003876);
   SP_stretch_tot_8__392->SetBinContent(2,1.036539);
   SP_stretch_tot_8__392->SetBinContent(3,1.014861);
   SP_stretch_tot_8__392->SetBinContent(4,1.014977);
   SP_stretch_tot_8__392->SetBinContent(6,1.121476);
   SP_stretch_tot_8__392->SetBinContent(7,1.147925);
   SP_stretch_tot_8__392->SetBinContent(8,1.172015);
   SP_stretch_tot_8__392->SetBinError(1,0.006244033);
   SP_stretch_tot_8__392->SetBinError(2,0.02097913);
   SP_stretch_tot_8__392->SetBinError(3,0.01995612);
   SP_stretch_tot_8__392->SetBinError(4,0.02773559);
   SP_stretch_tot_8__392->SetBinError(6,0.01155761);
   SP_stretch_tot_8__392->SetBinError(7,0.01419701);
   SP_stretch_tot_8__392->SetBinError(8,0.009974525);
   SP_stretch_tot_8__392->SetEntries(27111.24);
   SP_stretch_tot_8__392->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_8__392->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__392->SetLineColor(ci);
   SP_stretch_tot_8__392->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__392->SetMarkerColor(ci);
   SP_stretch_tot_8__392->SetMarkerStyle(20);
   SP_stretch_tot_8__392->SetMarkerSize(0.8);
   SP_stretch_tot_8__392->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_8__392->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_8__392->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_8__392->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_8__392->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__392->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__392->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__392->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_8__392->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_8__392->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__392->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__392->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_8__392->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_8__392->Draw("SAME E2");
   Double_t xAxis393[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_8__393 = new TH1D("SP_stretch_stat_8__393","",8, xAxis393);
   SP_stretch_stat_8__393->SetBinContent(1,1.003876);
   SP_stretch_stat_8__393->SetBinContent(2,1.036539);
   SP_stretch_stat_8__393->SetBinContent(3,1.014861);
   SP_stretch_stat_8__393->SetBinContent(4,1.014977);
   SP_stretch_stat_8__393->SetBinContent(6,1.121476);
   SP_stretch_stat_8__393->SetBinContent(7,1.147925);
   SP_stretch_stat_8__393->SetBinContent(8,1.172015);
   SP_stretch_stat_8__393->SetBinError(1,0.0002989889);
   SP_stretch_stat_8__393->SetBinError(2,0.0005825439);
   SP_stretch_stat_8__393->SetBinError(3,0.0001821344);
   SP_stretch_stat_8__393->SetBinError(4,0.0005563021);
   SP_stretch_stat_8__393->SetBinError(6,0.001037557);
   SP_stretch_stat_8__393->SetBinError(7,0.001420427);
   SP_stretch_stat_8__393->SetBinError(8,0.0006841655);
   SP_stretch_stat_8__393->SetEntries(1.302034e+07);
   SP_stretch_stat_8__393->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__393->SetLineColor(ci);
   SP_stretch_stat_8__393->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__393->SetMarkerColor(ci);
   SP_stretch_stat_8__393->SetMarkerStyle(20);
   SP_stretch_stat_8__393->SetMarkerSize(0.8);
   SP_stretch_stat_8__393->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_8__393->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_8__393->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_8__393->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_8__393->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__393->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__393->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__393->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_8__393->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_8__393->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__393->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__393->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_8__393->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_8__393->Draw("SAME PZ");
   dw__64->Modified();
   c1_n15->cd();
  
// ------------>Primitives in pad: up
   TPad *up__65 = new TPad("up", "up",0,0.5,1,1);
   up__65->Draw();
   up__65->cd();
   up__65->Range(-0.3577359,-1.646424,2.608491,2.08687);
   up__65->SetFillColor(0);
   up__65->SetFillStyle(4000);
   up__65->SetBorderMode(0);
   up__65->SetBorderSize(0);
   up__65->SetTickx(1);
   up__65->SetTicky(1);
   up__65->SetLeftMargin(0.120603);
   up__65->SetRightMargin(0.08040201);
   up__65->SetBottomMargin(0.01243523);
   up__65->SetFrameBorderMode(0);
   up__65->SetFrameBorderMode(0);
   Double_t xAxis394[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__394 = new TH1D("chist__394","",8, xAxis394);
   chist__394->SetMinimum(-1.6);
   chist__394->SetMaximum(1.7);
   chist__394->SetDirectory(nullptr);
   chist__394->SetStats(0);
   chist__394->SetLineColor(0);
   chist__394->SetLineWidth(0);
   chist__394->SetMarkerColor(0);
   chist__394->SetMarkerStyle(20);
   chist__394->SetMarkerSize(0);
   chist__394->GetXaxis()->SetRange(1,11);
   chist__394->GetXaxis()->SetNdivisions(4000510);
   chist__394->GetXaxis()->SetLabelFont(42);
   chist__394->GetXaxis()->SetLabelSize(0);
   chist__394->GetXaxis()->SetTitleSize(0.08);
   chist__394->GetXaxis()->SetTickLength(0.04);
   chist__394->GetXaxis()->SetTitleOffset(2.020933);
   chist__394->GetXaxis()->SetTitleFont(42);
   chist__394->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__394->GetYaxis()->SetNdivisions(3000510);
   chist__394->GetYaxis()->SetLabelFont(42);
   chist__394->GetYaxis()->SetLabelSize(0.08);
   chist__394->GetYaxis()->SetTitleSize(0.08);
   chist__394->GetYaxis()->SetTickLength(0.04);
   chist__394->GetYaxis()->SetTitleOffset(0.727387);
   chist__394->GetYaxis()->SetTitleFont(42);
   chist__394->GetZaxis()->SetLabelFont(42);
   chist__394->GetZaxis()->SetLabelSize(0.05);
   chist__394->GetZaxis()->SetTitleSize(0.05);
   chist__394->GetZaxis()->SetTitleOffset(1);
   chist__394->GetZaxis()->SetTitleFont(42);
   chist__394->Draw("pe");
   TLatex *   tex = new TLatex(0.160804,0.809,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.721,"#sqrt{s} = 13 TeV, 140.07 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.064);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.4861809,0.523,0.879397,0.875,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03000911);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_8","RZ, Total unc., TUNE26","F");

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RZ_shift_stat_8","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_8","SP, Total unc., TUNE26","F");

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_stat_8","SP, Stat unc., TUNE26","PE");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"R_{#eta}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5714,"Unconverted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"100.00 #leq p_{T}^{#gamma} [GeV] < 150.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis395[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_8__395 = new TH1D("RZ_shift_tot_8__395","",8, xAxis395);
   RZ_shift_tot_8__395->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_8__395->SetFillColor(ci);
   RZ_shift_tot_8__395->SetMarkerStyle(20);
   RZ_shift_tot_8__395->SetMarkerSize(0.8);
   RZ_shift_tot_8__395->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_8__395->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_8__395->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_8__395->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_8__395->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__395->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__395->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__395->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_8__395->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_8__395->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__395->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__395->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_8__395->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_8__395->Draw("SAME E2");
   Double_t xAxis396[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_8__396 = new TH1D("RZ_shift_stat_8__396","",8, xAxis396);
   RZ_shift_stat_8__396->SetStats(0);
   RZ_shift_stat_8__396->SetMarkerStyle(20);
   RZ_shift_stat_8__396->SetMarkerSize(0.8);
   RZ_shift_stat_8__396->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_8__396->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_8__396->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_8__396->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_8__396->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__396->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__396->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__396->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_8__396->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_8__396->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__396->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__396->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_8__396->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_8__396->Draw("SAME PZ");
   Double_t xAxis397[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_8__397 = new TH1D("SP_shift_tot_8__397","",8, xAxis397);
   SP_shift_tot_8__397->SetBinContent(1,-0.1016625);
   SP_shift_tot_8__397->SetBinContent(2,-0.1567683);
   SP_shift_tot_8__397->SetBinContent(3,-0.3326142);
   SP_shift_tot_8__397->SetBinContent(4,-0.4566265);
   SP_shift_tot_8__397->SetBinContent(6,-0.4033766);
   SP_shift_tot_8__397->SetBinContent(7,-0.6201486);
   SP_shift_tot_8__397->SetBinContent(8,-0.703265);
   SP_shift_tot_8__397->SetBinError(1,0.01310302);
   SP_shift_tot_8__397->SetBinError(2,0.02019132);
   SP_shift_tot_8__397->SetBinError(3,0.02371431);
   SP_shift_tot_8__397->SetBinError(4,0.02141192);
   SP_shift_tot_8__397->SetBinError(6,0.01724881);
   SP_shift_tot_8__397->SetBinError(7,0.01330117);
   SP_shift_tot_8__397->SetBinError(8,0.01472763);
   SP_shift_tot_8__397->SetEntries(3359.121);
   SP_shift_tot_8__397->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_8__397->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__397->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__397->SetMarkerColor(ci);
   SP_shift_tot_8__397->SetMarkerStyle(20);
   SP_shift_tot_8__397->SetMarkerSize(0.8);
   SP_shift_tot_8__397->GetXaxis()->SetRange(1,11);
   SP_shift_tot_8__397->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_8__397->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_8__397->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_8__397->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__397->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__397->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__397->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_8__397->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_8__397->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__397->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__397->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_8__397->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_8__397->Draw("SAME E2");
   Double_t xAxis398[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_8__398 = new TH1D("SP_shift_stat_8__398","",8, xAxis398);
   SP_shift_stat_8__398->SetBinContent(1,-0.1016625);
   SP_shift_stat_8__398->SetBinContent(2,-0.1567683);
   SP_shift_stat_8__398->SetBinContent(3,-0.3326142);
   SP_shift_stat_8__398->SetBinContent(4,-0.4566265);
   SP_shift_stat_8__398->SetBinContent(6,-0.4033766);
   SP_shift_stat_8__398->SetBinContent(7,-0.6201486);
   SP_shift_stat_8__398->SetBinContent(8,-0.703265);
   SP_shift_stat_8__398->SetBinError(1,0.0004056325);
   SP_shift_stat_8__398->SetBinError(2,0.0007178147);
   SP_shift_stat_8__398->SetBinError(3,0.0006317885);
   SP_shift_stat_8__398->SetBinError(4,0.0008468913);
   SP_shift_stat_8__398->SetBinError(6,0.000730062);
   SP_shift_stat_8__398->SetBinError(7,0.0009158065);
   SP_shift_stat_8__398->SetBinError(8,0.0006663894);
   SP_shift_stat_8__398->SetEntries(2131162);
   SP_shift_stat_8__398->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__398->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__398->SetMarkerColor(ci);
   SP_shift_stat_8__398->SetMarkerStyle(20);
   SP_shift_stat_8__398->SetMarkerSize(0.8);
   SP_shift_stat_8__398->GetXaxis()->SetRange(1,11);
   SP_shift_stat_8__398->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_8__398->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_8__398->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_8__398->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__398->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__398->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__398->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_8__398->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_8__398->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__398->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__398->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_8__398->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_8__398->Draw("SAME PZ");
   Double_t xAxis399[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__399 = new TH1D("chist_copy__399","",8, xAxis399);
   chist_copy__399->SetMinimum(-1.6);
   chist_copy__399->SetMaximum(1.7);
   chist_copy__399->SetDirectory(nullptr);
   chist_copy__399->SetStats(0);
   chist_copy__399->SetLineColor(0);
   chist_copy__399->SetLineWidth(0);
   chist_copy__399->SetMarkerColor(0);
   chist_copy__399->SetMarkerStyle(20);
   chist_copy__399->SetMarkerSize(0);
   chist_copy__399->GetXaxis()->SetRange(1,11);
   chist_copy__399->GetXaxis()->SetNdivisions(4000510);
   chist_copy__399->GetXaxis()->SetLabelFont(42);
   chist_copy__399->GetXaxis()->SetLabelSize(0);
   chist_copy__399->GetXaxis()->SetTitleSize(0.08);
   chist_copy__399->GetXaxis()->SetTickLength(0.04);
   chist_copy__399->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__399->GetXaxis()->SetTitleFont(42);
   chist_copy__399->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__399->GetYaxis()->SetNdivisions(3000510);
   chist_copy__399->GetYaxis()->SetLabelFont(42);
   chist_copy__399->GetYaxis()->SetLabelSize(0.08);
   chist_copy__399->GetYaxis()->SetTitleSize(0.08);
   chist_copy__399->GetYaxis()->SetTickLength(0.04);
   chist_copy__399->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__399->GetYaxis()->SetTitleFont(42);
   chist_copy__399->GetZaxis()->SetLabelFont(42);
   chist_copy__399->GetZaxis()->SetLabelSize(0.05);
   chist_copy__399->GetZaxis()->SetTitleSize(0.05);
   chist_copy__399->GetZaxis()->SetTitleOffset(1);
   chist_copy__399->GetZaxis()->SetTitleFont(42);
   chist_copy__399->Draw("sameaxis");
   up__65->Modified();
   c1_n15->cd();
   c1_n15->Modified();
   c1_n15->SetSelected(c1_n15);
}
