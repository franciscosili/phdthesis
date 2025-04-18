#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_eratio__c__eta0p60__shift_normalized()
{
//=========Macro generated from canvas: c1_n20/
//=========  (Thu Apr  4 19:01:23 2024) by ROOT version 6.30/02
   TCanvas *c1_n20 = new TCanvas("c1_n20", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n20->SetHighLightColor(2);
   c1_n20->Range(0,0,1,1);
   c1_n20->SetFillColor(0);
   c1_n20->SetBorderMode(0);
   c1_n20->SetBorderSize(2);
   c1_n20->SetTickx(1);
   c1_n20->SetTicky(1);
   c1_n20->SetLeftMargin(0.16);
   c1_n20->SetRightMargin(0.05);
   c1_n20->SetTopMargin(0.05);
   c1_n20->SetBottomMargin(0.16);
   c1_n20->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1206 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1206->Draw();
   dw__1206->cd();
   dw__1206->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__1206->SetFillColor(0);
   dw__1206->SetFillStyle(4000);
   dw__1206->SetBorderMode(0);
   dw__1206->SetBorderSize(0);
   dw__1206->SetLogx();
   dw__1206->SetTickx(1);
   dw__1206->SetTicky(1);
   dw__1206->SetLeftMargin(0.120603);
   dw__1206->SetRightMargin(0.08040201);
   dw__1206->SetTopMargin(0);
   dw__1206->SetBottomMargin(0.2072539);
   dw__1206->SetFrameBorderMode(0);
   dw__1206->SetFrameBorderMode(0);
   Double_t xAxis7254[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__7254 = new TH1D("chist_dw__7254","",11, xAxis7254);
   chist_dw__7254->SetMinimum(0.2);
   chist_dw__7254->SetMaximum(3.2);
   chist_dw__7254->SetDirectory(nullptr);
   chist_dw__7254->SetStats(0);
   chist_dw__7254->SetLineColor(0);
   chist_dw__7254->SetLineWidth(0);
   chist_dw__7254->SetMarkerColor(0);
   chist_dw__7254->SetMarkerStyle(20);
   chist_dw__7254->SetMarkerSize(0);
   chist_dw__7254->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__7254->GetXaxis()->SetRange(1,8);
   chist_dw__7254->GetXaxis()->SetMoreLogLabels();
   chist_dw__7254->GetXaxis()->SetLabelFont(42);
   chist_dw__7254->GetXaxis()->SetLabelSize(0.08);
   chist_dw__7254->GetXaxis()->SetTitleSize(0.08);
   chist_dw__7254->GetXaxis()->SetTickLength(0.04);
   chist_dw__7254->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__7254->GetXaxis()->SetTitleFont(42);
   chist_dw__7254->GetYaxis()->SetTitle("Stretch");
   chist_dw__7254->GetYaxis()->CenterTitle(true);
   chist_dw__7254->GetYaxis()->SetNdivisions(405);
   chist_dw__7254->GetYaxis()->SetLabelFont(42);
   chist_dw__7254->GetYaxis()->SetLabelSize(0.08);
   chist_dw__7254->GetYaxis()->SetTitleSize(0.08);
   chist_dw__7254->GetYaxis()->SetTickLength(0.04);
   chist_dw__7254->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__7254->GetYaxis()->SetTitleFont(42);
   chist_dw__7254->GetZaxis()->SetLabelFont(42);
   chist_dw__7254->GetZaxis()->SetLabelSize(0.05);
   chist_dw__7254->GetZaxis()->SetTitleSize(0.05);
   chist_dw__7254->GetZaxis()->SetTitleOffset(1);
   chist_dw__7254->GetZaxis()->SetTitleFont(42);
   chist_dw__7254->Draw("");
   TLine *line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,1,5000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,2,5000,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(7,3,5000,3);
   line->SetLineStyle(3);
   line->Draw();
   Double_t xAxis7255[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_2__7255 = new TH1D("RZ_stretch_tot_2__7255","",11, xAxis7255);
   RZ_stretch_tot_2__7255->SetBinContent(1,1.018455);
   RZ_stretch_tot_2__7255->SetBinContent(2,1.034381);
   RZ_stretch_tot_2__7255->SetBinContent(3,0.9868728);
   RZ_stretch_tot_2__7255->SetBinContent(4,0.9542187);
   RZ_stretch_tot_2__7255->SetBinError(1,0.03778759);
   RZ_stretch_tot_2__7255->SetBinError(2,0.07499713);
   RZ_stretch_tot_2__7255->SetBinError(3,0.04718254);
   RZ_stretch_tot_2__7255->SetBinError(4,0.07144337);
   RZ_stretch_tot_2__7255->SetEntries(1109.064);
   RZ_stretch_tot_2__7255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_2__7255->SetFillColor(ci);
   RZ_stretch_tot_2__7255->SetLineWidth(2);
   RZ_stretch_tot_2__7255->SetMarkerStyle(20);
   RZ_stretch_tot_2__7255->SetMarkerSize(0.8);
   RZ_stretch_tot_2__7255->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_2__7255->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__7255->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__7255->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__7255->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__7255->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__7255->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__7255->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__7255->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__7255->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__7255->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__7255->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__7255->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__7255->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__7255->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_2__7255->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__7255->Draw("SAME E2");
   Double_t xAxis7256[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_2__7256 = new TH1D("RZ_stretch_stat_2__7256","",11, xAxis7256);
   RZ_stretch_stat_2__7256->SetBinContent(1,1.018455);
   RZ_stretch_stat_2__7256->SetBinContent(2,1.034381);
   RZ_stretch_stat_2__7256->SetBinContent(3,0.9868728);
   RZ_stretch_stat_2__7256->SetBinContent(4,0.9542187);
   RZ_stretch_stat_2__7256->SetBinError(1,0.03138771);
   RZ_stretch_stat_2__7256->SetBinError(2,0.04796579);
   RZ_stretch_stat_2__7256->SetBinError(3,0.04056545);
   RZ_stretch_stat_2__7256->SetBinError(4,0.06992658);
   RZ_stretch_stat_2__7256->SetEntries(1624.189);
   RZ_stretch_stat_2__7256->SetStats(0);
   RZ_stretch_stat_2__7256->SetLineWidth(2);
   RZ_stretch_stat_2__7256->SetMarkerStyle(20);
   RZ_stretch_stat_2__7256->SetMarkerSize(0.8);
   RZ_stretch_stat_2__7256->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_2__7256->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__7256->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__7256->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__7256->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__7256->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__7256->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__7256->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__7256->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__7256->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__7256->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__7256->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__7256->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__7256->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__7256->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_2__7256->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__7256->Draw("SAME PZ");
   Double_t xAxis7257[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_2__7257 = new TH1D("SP_stretch_tot_2__7257","",11, xAxis7257);
   SP_stretch_tot_2__7257->SetBinContent(5,1.056467);
   SP_stretch_tot_2__7257->SetBinContent(6,1.071242);
   SP_stretch_tot_2__7257->SetBinContent(7,1.04804);
   SP_stretch_tot_2__7257->SetBinContent(8,1.046094);
   SP_stretch_tot_2__7257->SetBinContent(9,1.090137);
   SP_stretch_tot_2__7257->SetBinContent(10,1.053859);
   SP_stretch_tot_2__7257->SetBinContent(11,1.174261);
   SP_stretch_tot_2__7257->SetBinError(5,0.01717847);
   SP_stretch_tot_2__7257->SetBinError(6,0.02555225);
   SP_stretch_tot_2__7257->SetBinError(7,0.03002216);
   SP_stretch_tot_2__7257->SetBinError(8,0.0408791);
   SP_stretch_tot_2__7257->SetBinError(9,0.08495473);
   SP_stretch_tot_2__7257->SetBinError(10,0.1733893);
   SP_stretch_tot_2__7257->SetBinError(11,0.3747118);
   SP_stretch_tot_2__7257->SetEntries(313.7406);
   SP_stretch_tot_2__7257->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_2__7257->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__7257->SetLineColor(ci);
   SP_stretch_tot_2__7257->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__7257->SetMarkerColor(ci);
   SP_stretch_tot_2__7257->SetMarkerStyle(20);
   SP_stretch_tot_2__7257->SetMarkerSize(0.8);
   SP_stretch_tot_2__7257->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_2__7257->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_2__7257->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__7257->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__7257->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__7257->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_2__7257->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_2__7257->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__7257->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__7257->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__7257->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_2__7257->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_2__7257->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__7257->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__7257->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_2__7257->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_2__7257->Draw("SAME E2");
   Double_t xAxis7258[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_2__7258 = new TH1D("SP_stretch_stat_2__7258","",11, xAxis7258);
   SP_stretch_stat_2__7258->SetBinContent(5,1.056467);
   SP_stretch_stat_2__7258->SetBinContent(6,1.071242);
   SP_stretch_stat_2__7258->SetBinContent(7,1.04804);
   SP_stretch_stat_2__7258->SetBinContent(8,1.046094);
   SP_stretch_stat_2__7258->SetBinContent(9,1.090137);
   SP_stretch_stat_2__7258->SetBinContent(10,1.053859);
   SP_stretch_stat_2__7258->SetBinContent(11,1.174261);
   SP_stretch_stat_2__7258->SetBinError(5,0.0006130437);
   SP_stretch_stat_2__7258->SetBinError(6,0.000721094);
   SP_stretch_stat_2__7258->SetBinError(7,0.001381098);
   SP_stretch_stat_2__7258->SetBinError(8,0.001065203);
   SP_stretch_stat_2__7258->SetBinError(9,0.003496893);
   SP_stretch_stat_2__7258->SetBinError(10,0.01690471);
   SP_stretch_stat_2__7258->SetBinError(11,0.03897168);
   SP_stretch_stat_2__7258->SetEntries(31225.49);
   SP_stretch_stat_2__7258->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__7258->SetLineColor(ci);
   SP_stretch_stat_2__7258->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__7258->SetMarkerColor(ci);
   SP_stretch_stat_2__7258->SetMarkerStyle(20);
   SP_stretch_stat_2__7258->SetMarkerSize(0.8);
   SP_stretch_stat_2__7258->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_2__7258->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_2__7258->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__7258->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__7258->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__7258->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_2__7258->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_2__7258->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__7258->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__7258->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__7258->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_2__7258->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_2__7258->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__7258->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__7258->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_2__7258->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_2__7258->Draw("SAME PZ");
   dw__1206->Modified();
   c1_n20->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1207 = new TPad("up", "up",0,0.5,1,1);
   up__1207->Draw();
   up__1207->cd();
   up__1207->Range(0.4143249,-1.042204,3.986152,2.3517);
   up__1207->SetFillColor(0);
   up__1207->SetFillStyle(4000);
   up__1207->SetBorderMode(0);
   up__1207->SetBorderSize(0);
   up__1207->SetLogx();
   up__1207->SetTickx(1);
   up__1207->SetTicky(1);
   up__1207->SetLeftMargin(0.120603);
   up__1207->SetRightMargin(0.08040201);
   up__1207->SetBottomMargin(0.01243523);
   up__1207->SetFrameBorderMode(0);
   up__1207->SetFrameBorderMode(0);
   Double_t xAxis7259[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__7259 = new TH1D("chist__7259","",11, xAxis7259);
   chist__7259->SetMinimum(-1);
   chist__7259->SetMaximum(2);
   chist__7259->SetDirectory(nullptr);
   chist__7259->SetStats(0);
   chist__7259->SetLineColor(0);
   chist__7259->SetLineWidth(0);
   chist__7259->SetMarkerColor(0);
   chist__7259->SetMarkerStyle(20);
   chist__7259->SetMarkerSize(0);
   chist__7259->GetXaxis()->SetRange(1,8);
   chist__7259->GetXaxis()->SetNdivisions(4000510);
   chist__7259->GetXaxis()->SetLabelFont(42);
   chist__7259->GetXaxis()->SetLabelSize(0);
   chist__7259->GetXaxis()->SetTitleSize(0.08);
   chist__7259->GetXaxis()->SetTickLength(0.04);
   chist__7259->GetXaxis()->SetTitleOffset(2.020933);
   chist__7259->GetXaxis()->SetTitleFont(42);
   chist__7259->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__7259->GetYaxis()->SetNdivisions(3000510);
   chist__7259->GetYaxis()->SetLabelFont(42);
   chist__7259->GetYaxis()->SetLabelSize(0.08);
   chist__7259->GetYaxis()->SetTitleSize(0.08);
   chist__7259->GetYaxis()->SetTickLength(0.04);
   chist__7259->GetYaxis()->SetTitleOffset(0.727387);
   chist__7259->GetYaxis()->SetTitleFont(42);
   chist__7259->GetZaxis()->SetLabelFont(42);
   chist__7259->GetZaxis()->SetLabelSize(0.05);
   chist__7259->GetZaxis()->SetTitleSize(0.05);
   chist__7259->GetZaxis()->SetTitleOffset(1);
   chist__7259->GetZaxis()->SetTitleFont(42);
   chist__7259->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_2","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_2","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_2","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_2","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"E_{ratio}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5714,"Converted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"0.60 #leq |#eta^{#gamma}| < 0.80");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis7260[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_2__7260 = new TH1D("RZ_shift_tot_2__7260","",11, xAxis7260);
   RZ_shift_tot_2__7260->SetBinContent(1,0.004641889);
   RZ_shift_tot_2__7260->SetBinContent(2,-0.009684799);
   RZ_shift_tot_2__7260->SetBinContent(3,0.02163975);
   RZ_shift_tot_2__7260->SetBinContent(4,0.02783189);
   RZ_shift_tot_2__7260->SetBinError(1,0.03698123);
   RZ_shift_tot_2__7260->SetBinError(2,0.03371359);
   RZ_shift_tot_2__7260->SetBinError(3,0.02469162);
   RZ_shift_tot_2__7260->SetBinError(4,0.03999916);
   RZ_shift_tot_2__7260->SetEntries(0.4187494);
   RZ_shift_tot_2__7260->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_2__7260->SetFillColor(ci);
   RZ_shift_tot_2__7260->SetMarkerStyle(20);
   RZ_shift_tot_2__7260->SetMarkerSize(0.8);
   RZ_shift_tot_2__7260->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_2__7260->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_2__7260->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__7260->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__7260->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__7260->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_2__7260->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_2__7260->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__7260->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__7260->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__7260->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_2__7260->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_2__7260->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__7260->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__7260->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_2__7260->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_2__7260->Draw("SAME E2");
   Double_t xAxis7261[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_2__7261 = new TH1D("RZ_shift_stat_2__7261","",11, xAxis7261);
   RZ_shift_stat_2__7261->SetBinContent(1,0.004641889);
   RZ_shift_stat_2__7261->SetBinContent(2,-0.009684799);
   RZ_shift_stat_2__7261->SetBinContent(3,0.02163975);
   RZ_shift_stat_2__7261->SetBinContent(4,0.02783189);
   RZ_shift_stat_2__7261->SetBinError(1,0.0246058);
   RZ_shift_stat_2__7261->SetBinError(2,0.02845683);
   RZ_shift_stat_2__7261->SetBinError(3,0.02275278);
   RZ_shift_stat_2__7261->SetBinError(4,0.03969461);
   RZ_shift_stat_2__7261->SetEntries(0.5625945);
   RZ_shift_stat_2__7261->SetStats(0);
   RZ_shift_stat_2__7261->SetMarkerStyle(20);
   RZ_shift_stat_2__7261->SetMarkerSize(0.8);
   RZ_shift_stat_2__7261->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_2__7261->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_2__7261->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__7261->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__7261->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__7261->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_2__7261->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_2__7261->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__7261->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__7261->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__7261->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_2__7261->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_2__7261->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__7261->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__7261->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_2__7261->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_2__7261->Draw("SAME PZ");
   Double_t xAxis7262[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_2__7262 = new TH1D("SP_shift_tot_2__7262","",11, xAxis7262);
   SP_shift_tot_2__7262->SetBinContent(5,-0.03313383);
   SP_shift_tot_2__7262->SetBinContent(6,-0.02799721);
   SP_shift_tot_2__7262->SetBinContent(7,-0.03364559);
   SP_shift_tot_2__7262->SetBinContent(8,0.00143344);
   SP_shift_tot_2__7262->SetBinContent(9,-0.01379637);
   SP_shift_tot_2__7262->SetBinContent(10,-0.06346129);
   SP_shift_tot_2__7262->SetBinContent(11,-0.09661572);
   SP_shift_tot_2__7262->SetBinError(5,0.009521842);
   SP_shift_tot_2__7262->SetBinError(6,0.01445836);
   SP_shift_tot_2__7262->SetBinError(7,0.01435122);
   SP_shift_tot_2__7262->SetBinError(8,0.01394194);
   SP_shift_tot_2__7262->SetBinError(9,0.007791429);
   SP_shift_tot_2__7262->SetBinError(10,0.02365771);
   SP_shift_tot_2__7262->SetBinError(11,0.06157863);
   SP_shift_tot_2__7262->SetEntries(13.96706);
   SP_shift_tot_2__7262->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_2__7262->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__7262->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__7262->SetMarkerColor(ci);
   SP_shift_tot_2__7262->SetMarkerStyle(20);
   SP_shift_tot_2__7262->SetMarkerSize(0.8);
   SP_shift_tot_2__7262->GetXaxis()->SetRange(1,8);
   SP_shift_tot_2__7262->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_2__7262->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__7262->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__7262->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__7262->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_2__7262->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_2__7262->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__7262->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__7262->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__7262->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_2__7262->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_2__7262->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__7262->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__7262->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_2__7262->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_2__7262->Draw("SAME E2");
   Double_t xAxis7263[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_2__7263 = new TH1D("SP_shift_stat_2__7263","",11, xAxis7263);
   SP_shift_stat_2__7263->SetBinContent(5,-0.03313383);
   SP_shift_stat_2__7263->SetBinContent(6,-0.02799721);
   SP_shift_stat_2__7263->SetBinContent(7,-0.03364559);
   SP_shift_stat_2__7263->SetBinContent(8,0.00143344);
   SP_shift_stat_2__7263->SetBinContent(9,-0.01379637);
   SP_shift_stat_2__7263->SetBinContent(10,-0.06346129);
   SP_shift_stat_2__7263->SetBinContent(11,-0.09661572);
   SP_shift_stat_2__7263->SetBinError(5,0.0004432207);
   SP_shift_stat_2__7263->SetBinError(6,0.0005163415);
   SP_shift_stat_2__7263->SetBinError(7,0.0008946937);
   SP_shift_stat_2__7263->SetBinError(8,0.001165801);
   SP_shift_stat_2__7263->SetBinError(9,0.002107629);
   SP_shift_stat_2__7263->SetBinError(10,0.005940566);
   SP_shift_stat_2__7263->SetBinError(11,0.01843706);
   SP_shift_stat_2__7263->SetEntries(186.7863);
   SP_shift_stat_2__7263->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__7263->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__7263->SetMarkerColor(ci);
   SP_shift_stat_2__7263->SetMarkerStyle(20);
   SP_shift_stat_2__7263->SetMarkerSize(0.8);
   SP_shift_stat_2__7263->GetXaxis()->SetRange(1,8);
   SP_shift_stat_2__7263->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_2__7263->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__7263->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__7263->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__7263->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_2__7263->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_2__7263->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__7263->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__7263->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__7263->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_2__7263->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_2__7263->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__7263->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__7263->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_2__7263->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_2__7263->Draw("SAME PZ");
   Double_t xAxis7264[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__7264 = new TH1D("chist_copy__7264","",11, xAxis7264);
   chist_copy__7264->SetMinimum(-1);
   chist_copy__7264->SetMaximum(2);
   chist_copy__7264->SetDirectory(nullptr);
   chist_copy__7264->SetStats(0);
   chist_copy__7264->SetLineColor(0);
   chist_copy__7264->SetLineWidth(0);
   chist_copy__7264->SetMarkerColor(0);
   chist_copy__7264->SetMarkerStyle(20);
   chist_copy__7264->SetMarkerSize(0);
   chist_copy__7264->GetXaxis()->SetRange(1,8);
   chist_copy__7264->GetXaxis()->SetNdivisions(4000510);
   chist_copy__7264->GetXaxis()->SetLabelFont(42);
   chist_copy__7264->GetXaxis()->SetLabelSize(0);
   chist_copy__7264->GetXaxis()->SetTitleSize(0.08);
   chist_copy__7264->GetXaxis()->SetTickLength(0.04);
   chist_copy__7264->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__7264->GetXaxis()->SetTitleFont(42);
   chist_copy__7264->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__7264->GetYaxis()->SetNdivisions(3000510);
   chist_copy__7264->GetYaxis()->SetLabelFont(42);
   chist_copy__7264->GetYaxis()->SetLabelSize(0.08);
   chist_copy__7264->GetYaxis()->SetTitleSize(0.08);
   chist_copy__7264->GetYaxis()->SetTickLength(0.04);
   chist_copy__7264->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__7264->GetYaxis()->SetTitleFont(42);
   chist_copy__7264->GetZaxis()->SetLabelFont(42);
   chist_copy__7264->GetZaxis()->SetLabelSize(0.05);
   chist_copy__7264->GetZaxis()->SetTitleSize(0.05);
   chist_copy__7264->GetZaxis()->SetTitleOffset(1);
   chist_copy__7264->GetZaxis()->SetTitleFont(42);
   chist_copy__7264->Draw("sameaxis");
   up__1207->Modified();
   c1_n20->cd();
   c1_n20->Modified();
   c1_n20->SetSelected(c1_n20);
}
