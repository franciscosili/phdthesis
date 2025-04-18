#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_w1__c__pt0600p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n36/
//=========  (Thu Apr  4 19:00:57 2024) by ROOT version 6.30/02
   TCanvas *c1_n36 = new TCanvas("c1_n36", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n36->SetHighLightColor(2);
   c1_n36->Range(0,0,1,1);
   c1_n36->SetFillColor(0);
   c1_n36->SetBorderMode(0);
   c1_n36->SetBorderSize(2);
   c1_n36->SetTickx(1);
   c1_n36->SetTicky(1);
   c1_n36->SetLeftMargin(0.16);
   c1_n36->SetRightMargin(0.05);
   c1_n36->SetTopMargin(0.05);
   c1_n36->SetBottomMargin(0.16);
   c1_n36->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__806 = new TPad("dw", "dw",0,0,1,0.5);
   dw__806->Draw();
   dw__806->cd();
   dw__806->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__806->SetFillColor(0);
   dw__806->SetFillStyle(4000);
   dw__806->SetBorderMode(0);
   dw__806->SetBorderSize(0);
   dw__806->SetTickx(1);
   dw__806->SetTicky(1);
   dw__806->SetLeftMargin(0.120603);
   dw__806->SetRightMargin(0.08040201);
   dw__806->SetTopMargin(0);
   dw__806->SetBottomMargin(0.2072539);
   dw__806->SetFrameBorderMode(0);
   dw__806->SetFrameBorderMode(0);
   Double_t xAxis4838[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__4838 = new TH1D("chist_dw__4838","",8, xAxis4838);
   chist_dw__4838->SetMinimum(0.2);
   chist_dw__4838->SetMaximum(3.2);
   chist_dw__4838->SetDirectory(nullptr);
   chist_dw__4838->SetStats(0);
   chist_dw__4838->SetLineColor(0);
   chist_dw__4838->SetLineWidth(0);
   chist_dw__4838->SetMarkerColor(0);
   chist_dw__4838->SetMarkerStyle(20);
   chist_dw__4838->SetMarkerSize(0);
   chist_dw__4838->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__4838->GetXaxis()->SetRange(1,8);
   chist_dw__4838->GetXaxis()->SetLabelFont(42);
   chist_dw__4838->GetXaxis()->SetLabelSize(0.08);
   chist_dw__4838->GetXaxis()->SetTitleSize(0.08);
   chist_dw__4838->GetXaxis()->SetTickLength(0.04);
   chist_dw__4838->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__4838->GetXaxis()->SetTitleFont(42);
   chist_dw__4838->GetYaxis()->SetTitle("Stretch");
   chist_dw__4838->GetYaxis()->CenterTitle(true);
   chist_dw__4838->GetYaxis()->SetNdivisions(405);
   chist_dw__4838->GetYaxis()->SetLabelFont(42);
   chist_dw__4838->GetYaxis()->SetLabelSize(0.08);
   chist_dw__4838->GetYaxis()->SetTitleSize(0.08);
   chist_dw__4838->GetYaxis()->SetTickLength(0.04);
   chist_dw__4838->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__4838->GetYaxis()->SetTitleFont(42);
   chist_dw__4838->GetZaxis()->SetLabelFont(42);
   chist_dw__4838->GetZaxis()->SetLabelSize(0.05);
   chist_dw__4838->GetZaxis()->SetTitleSize(0.05);
   chist_dw__4838->GetZaxis()->SetTitleOffset(1);
   chist_dw__4838->GetZaxis()->SetTitleFont(42);
   chist_dw__4838->Draw("");
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
   Double_t xAxis4839[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_11__4839 = new TH1D("RZ_stretch_tot_11__4839","",8, xAxis4839);
   RZ_stretch_tot_11__4839->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_11__4839->SetFillColor(ci);
   RZ_stretch_tot_11__4839->SetLineWidth(2);
   RZ_stretch_tot_11__4839->SetMarkerStyle(20);
   RZ_stretch_tot_11__4839->SetMarkerSize(0.8);
   RZ_stretch_tot_11__4839->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_11__4839->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_11__4839->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_11__4839->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_11__4839->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_11__4839->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_11__4839->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_11__4839->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_11__4839->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_11__4839->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_11__4839->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_11__4839->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_11__4839->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_11__4839->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_11__4839->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_11__4839->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_11__4839->Draw("SAME E2");
   Double_t xAxis4840[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_11__4840 = new TH1D("RZ_stretch_stat_11__4840","",8, xAxis4840);
   RZ_stretch_stat_11__4840->SetStats(0);
   RZ_stretch_stat_11__4840->SetLineWidth(2);
   RZ_stretch_stat_11__4840->SetMarkerStyle(20);
   RZ_stretch_stat_11__4840->SetMarkerSize(0.8);
   RZ_stretch_stat_11__4840->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_11__4840->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_11__4840->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_11__4840->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_11__4840->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_11__4840->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_11__4840->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_11__4840->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_11__4840->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_11__4840->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_11__4840->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_11__4840->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_11__4840->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_11__4840->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_11__4840->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_11__4840->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_11__4840->Draw("SAME PZ");
   Double_t xAxis4841[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_11__4841 = new TH1D("SP_stretch_tot_11__4841","",8, xAxis4841);
   SP_stretch_tot_11__4841->SetBinContent(1,1.365692);
   SP_stretch_tot_11__4841->SetBinContent(2,1.608071);
   SP_stretch_tot_11__4841->SetBinContent(3,1.510501);
   SP_stretch_tot_11__4841->SetBinContent(4,1.625156);
   SP_stretch_tot_11__4841->SetBinContent(6,1.302479);
   SP_stretch_tot_11__4841->SetBinContent(7,1.442692);
   SP_stretch_tot_11__4841->SetBinContent(8,1.681622);
   SP_stretch_tot_11__4841->SetBinError(1,0.209592);
   SP_stretch_tot_11__4841->SetBinError(2,0.4103286);
   SP_stretch_tot_11__4841->SetBinError(3,0.3349952);
   SP_stretch_tot_11__4841->SetBinError(4,0.5131012);
   SP_stretch_tot_11__4841->SetBinError(6,0.261785);
   SP_stretch_tot_11__4841->SetBinError(7,0.2129298);
   SP_stretch_tot_11__4841->SetBinError(8,0.2985119);
   SP_stretch_tot_11__4841->SetEntries(140.3839);
   SP_stretch_tot_11__4841->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_11__4841->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_11__4841->SetLineColor(ci);
   SP_stretch_tot_11__4841->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_11__4841->SetMarkerColor(ci);
   SP_stretch_tot_11__4841->SetMarkerStyle(20);
   SP_stretch_tot_11__4841->SetMarkerSize(0.8);
   SP_stretch_tot_11__4841->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_11__4841->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_11__4841->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_11__4841->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_11__4841->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_11__4841->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_11__4841->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_11__4841->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_11__4841->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_11__4841->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_11__4841->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_11__4841->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_11__4841->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_11__4841->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_11__4841->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_11__4841->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_11__4841->Draw("SAME E2");
   Double_t xAxis4842[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_11__4842 = new TH1D("SP_stretch_stat_11__4842","",8, xAxis4842);
   SP_stretch_stat_11__4842->SetBinContent(1,1.365692);
   SP_stretch_stat_11__4842->SetBinContent(2,1.608071);
   SP_stretch_stat_11__4842->SetBinContent(3,1.510501);
   SP_stretch_stat_11__4842->SetBinContent(4,1.625156);
   SP_stretch_stat_11__4842->SetBinContent(6,1.302479);
   SP_stretch_stat_11__4842->SetBinContent(7,1.442692);
   SP_stretch_stat_11__4842->SetBinContent(8,1.681622);
   SP_stretch_stat_11__4842->SetBinError(1,0.03147946);
   SP_stretch_stat_11__4842->SetBinError(2,0.05711526);
   SP_stretch_stat_11__4842->SetBinError(3,0.03250243);
   SP_stretch_stat_11__4842->SetBinError(4,0.044548);
   SP_stretch_stat_11__4842->SetBinError(6,0.03998022);
   SP_stretch_stat_11__4842->SetBinError(7,0.08050015);
   SP_stretch_stat_11__4842->SetBinError(8,0.1357269);
   SP_stretch_stat_11__4842->SetEntries(3284.905);
   SP_stretch_stat_11__4842->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_11__4842->SetLineColor(ci);
   SP_stretch_stat_11__4842->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_11__4842->SetMarkerColor(ci);
   SP_stretch_stat_11__4842->SetMarkerStyle(20);
   SP_stretch_stat_11__4842->SetMarkerSize(0.8);
   SP_stretch_stat_11__4842->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_11__4842->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_11__4842->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_11__4842->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_11__4842->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_11__4842->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_11__4842->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_11__4842->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_11__4842->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_11__4842->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_11__4842->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_11__4842->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_11__4842->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_11__4842->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_11__4842->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_11__4842->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_11__4842->Draw("SAME PZ");
   dw__806->Modified();
   c1_n36->cd();
  
// ------------>Primitives in pad: up
   TPad *up__807 = new TPad("up", "up",0,0.5,1,1);
   up__807->Draw();
   up__807->cd();
   up__807->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__807->SetFillColor(0);
   up__807->SetFillStyle(4000);
   up__807->SetBorderMode(0);
   up__807->SetBorderSize(0);
   up__807->SetTickx(1);
   up__807->SetTicky(1);
   up__807->SetLeftMargin(0.120603);
   up__807->SetRightMargin(0.08040201);
   up__807->SetBottomMargin(0.01243523);
   up__807->SetFrameBorderMode(0);
   up__807->SetFrameBorderMode(0);
   Double_t xAxis4843[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__4843 = new TH1D("chist__4843","",8, xAxis4843);
   chist__4843->SetMinimum(-0.9);
   chist__4843->SetMaximum(2);
   chist__4843->SetDirectory(nullptr);
   chist__4843->SetStats(0);
   chist__4843->SetLineColor(0);
   chist__4843->SetLineWidth(0);
   chist__4843->SetMarkerColor(0);
   chist__4843->SetMarkerStyle(20);
   chist__4843->SetMarkerSize(0);
   chist__4843->GetXaxis()->SetRange(1,8);
   chist__4843->GetXaxis()->SetNdivisions(4000510);
   chist__4843->GetXaxis()->SetLabelFont(42);
   chist__4843->GetXaxis()->SetLabelSize(0);
   chist__4843->GetXaxis()->SetTitleSize(0.08);
   chist__4843->GetXaxis()->SetTickLength(0.04);
   chist__4843->GetXaxis()->SetTitleOffset(2.020933);
   chist__4843->GetXaxis()->SetTitleFont(42);
   chist__4843->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__4843->GetYaxis()->SetNdivisions(3000510);
   chist__4843->GetYaxis()->SetLabelFont(42);
   chist__4843->GetYaxis()->SetLabelSize(0.08);
   chist__4843->GetYaxis()->SetTitleSize(0.08);
   chist__4843->GetYaxis()->SetTickLength(0.04);
   chist__4843->GetYaxis()->SetTitleOffset(0.727387);
   chist__4843->GetYaxis()->SetTitleFont(42);
   chist__4843->GetZaxis()->SetLabelFont(42);
   chist__4843->GetZaxis()->SetLabelSize(0.05);
   chist__4843->GetZaxis()->SetTitleSize(0.05);
   chist__4843->GetZaxis()->SetTitleOffset(1);
   chist__4843->GetZaxis()->SetTitleFont(42);
   chist__4843->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_11","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_11","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_11","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_11","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"w_{1}");
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
      tex = new TLatex(0.160804,0.5098,"600.00 #leq p_{T}^{#gamma} [GeV] < 5000.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis4844[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_11__4844 = new TH1D("RZ_shift_tot_11__4844","",8, xAxis4844);
   RZ_shift_tot_11__4844->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_11__4844->SetFillColor(ci);
   RZ_shift_tot_11__4844->SetMarkerStyle(20);
   RZ_shift_tot_11__4844->SetMarkerSize(0.8);
   RZ_shift_tot_11__4844->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_11__4844->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_11__4844->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_11__4844->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_11__4844->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_11__4844->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_11__4844->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_11__4844->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_11__4844->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_11__4844->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_11__4844->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_11__4844->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_11__4844->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_11__4844->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_11__4844->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_11__4844->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_11__4844->Draw("SAME E2");
   Double_t xAxis4845[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_11__4845 = new TH1D("RZ_shift_stat_11__4845","",8, xAxis4845);
   RZ_shift_stat_11__4845->SetStats(0);
   RZ_shift_stat_11__4845->SetMarkerStyle(20);
   RZ_shift_stat_11__4845->SetMarkerSize(0.8);
   RZ_shift_stat_11__4845->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_11__4845->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_11__4845->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_11__4845->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_11__4845->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_11__4845->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_11__4845->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_11__4845->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_11__4845->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_11__4845->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_11__4845->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_11__4845->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_11__4845->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_11__4845->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_11__4845->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_11__4845->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_11__4845->Draw("SAME PZ");
   Double_t xAxis4846[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_11__4846 = new TH1D("SP_shift_tot_11__4846","",8, xAxis4846);
   SP_shift_tot_11__4846->SetBinContent(1,0.5384049);
   SP_shift_tot_11__4846->SetBinContent(2,0.5496464);
   SP_shift_tot_11__4846->SetBinContent(3,0.8355365);
   SP_shift_tot_11__4846->SetBinContent(4,0.9697467);
   SP_shift_tot_11__4846->SetBinContent(6,0.9713313);
   SP_shift_tot_11__4846->SetBinContent(7,0.9066909);
   SP_shift_tot_11__4846->SetBinContent(8,1.29823);
   SP_shift_tot_11__4846->SetBinError(1,0.2111163);
   SP_shift_tot_11__4846->SetBinError(2,0.2525348);
   SP_shift_tot_11__4846->SetBinError(3,0.3994287);
   SP_shift_tot_11__4846->SetBinError(4,0.4382336);
   SP_shift_tot_11__4846->SetBinError(6,0.2836344);
   SP_shift_tot_11__4846->SetBinError(7,0.1853898);
   SP_shift_tot_11__4846->SetBinError(8,0.2938957);
   SP_shift_tot_11__4846->SetEntries(55.72275);
   SP_shift_tot_11__4846->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_11__4846->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_11__4846->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_11__4846->SetMarkerColor(ci);
   SP_shift_tot_11__4846->SetMarkerStyle(20);
   SP_shift_tot_11__4846->SetMarkerSize(0.8);
   SP_shift_tot_11__4846->GetXaxis()->SetRange(1,8);
   SP_shift_tot_11__4846->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_11__4846->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_11__4846->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_11__4846->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_11__4846->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_11__4846->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_11__4846->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_11__4846->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_11__4846->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_11__4846->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_11__4846->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_11__4846->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_11__4846->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_11__4846->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_11__4846->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_11__4846->Draw("SAME E2");
   Double_t xAxis4847[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_11__4847 = new TH1D("SP_shift_stat_11__4847","",8, xAxis4847);
   SP_shift_stat_11__4847->SetBinContent(1,0.5384049);
   SP_shift_stat_11__4847->SetBinContent(2,0.5496464);
   SP_shift_stat_11__4847->SetBinContent(3,0.8355365);
   SP_shift_stat_11__4847->SetBinContent(4,0.9697467);
   SP_shift_stat_11__4847->SetBinContent(6,0.9713313);
   SP_shift_stat_11__4847->SetBinContent(7,0.9066909);
   SP_shift_stat_11__4847->SetBinContent(8,1.29823);
   SP_shift_stat_11__4847->SetBinError(1,0.02743698);
   SP_shift_stat_11__4847->SetBinError(2,0.04109652);
   SP_shift_stat_11__4847->SetBinError(3,0.02815997);
   SP_shift_stat_11__4847->SetBinError(4,0.03176888);
   SP_shift_stat_11__4847->SetBinError(6,0.03680587);
   SP_shift_stat_11__4847->SetBinError(7,0.06618219);
   SP_shift_stat_11__4847->SetBinError(8,0.07827723);
   SP_shift_stat_11__4847->SetEntries(2287.334);
   SP_shift_stat_11__4847->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_11__4847->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_11__4847->SetMarkerColor(ci);
   SP_shift_stat_11__4847->SetMarkerStyle(20);
   SP_shift_stat_11__4847->SetMarkerSize(0.8);
   SP_shift_stat_11__4847->GetXaxis()->SetRange(1,8);
   SP_shift_stat_11__4847->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_11__4847->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_11__4847->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_11__4847->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_11__4847->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_11__4847->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_11__4847->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_11__4847->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_11__4847->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_11__4847->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_11__4847->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_11__4847->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_11__4847->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_11__4847->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_11__4847->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_11__4847->Draw("SAME PZ");
   Double_t xAxis4848[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__4848 = new TH1D("chist_copy__4848","",8, xAxis4848);
   chist_copy__4848->SetMinimum(-0.9);
   chist_copy__4848->SetMaximum(2);
   chist_copy__4848->SetDirectory(nullptr);
   chist_copy__4848->SetStats(0);
   chist_copy__4848->SetLineColor(0);
   chist_copy__4848->SetLineWidth(0);
   chist_copy__4848->SetMarkerColor(0);
   chist_copy__4848->SetMarkerStyle(20);
   chist_copy__4848->SetMarkerSize(0);
   chist_copy__4848->GetXaxis()->SetRange(1,8);
   chist_copy__4848->GetXaxis()->SetNdivisions(4000510);
   chist_copy__4848->GetXaxis()->SetLabelFont(42);
   chist_copy__4848->GetXaxis()->SetLabelSize(0);
   chist_copy__4848->GetXaxis()->SetTitleSize(0.08);
   chist_copy__4848->GetXaxis()->SetTickLength(0.04);
   chist_copy__4848->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__4848->GetXaxis()->SetTitleFont(42);
   chist_copy__4848->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__4848->GetYaxis()->SetNdivisions(3000510);
   chist_copy__4848->GetYaxis()->SetLabelFont(42);
   chist_copy__4848->GetYaxis()->SetLabelSize(0.08);
   chist_copy__4848->GetYaxis()->SetTitleSize(0.08);
   chist_copy__4848->GetYaxis()->SetTickLength(0.04);
   chist_copy__4848->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__4848->GetYaxis()->SetTitleFont(42);
   chist_copy__4848->GetZaxis()->SetLabelFont(42);
   chist_copy__4848->GetZaxis()->SetLabelSize(0.05);
   chist_copy__4848->GetZaxis()->SetTitleSize(0.05);
   chist_copy__4848->GetZaxis()->SetTitleOffset(1);
   chist_copy__4848->GetZaxis()->SetTitleFont(42);
   chist_copy__4848->Draw("sameaxis");
   up__807->Modified();
   c1_n36->cd();
   c1_n36->Modified();
   c1_n36->SetSelected(c1_n36);
}
