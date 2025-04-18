#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_fside__u__pt0080p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n32/
//=========  (Thu Apr  4 19:00:41 2024) by ROOT version 6.30/02
   TCanvas *c1_n32 = new TCanvas("c1_n32", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n32->SetHighLightColor(2);
   c1_n32->Range(0,0,1,1);
   c1_n32->SetFillColor(0);
   c1_n32->SetBorderMode(0);
   c1_n32->SetBorderSize(2);
   c1_n32->SetTickx(1);
   c1_n32->SetTicky(1);
   c1_n32->SetLeftMargin(0.16);
   c1_n32->SetRightMargin(0.05);
   c1_n32->SetTopMargin(0.05);
   c1_n32->SetBottomMargin(0.16);
   c1_n32->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__582 = new TPad("dw", "dw",0,0,1,0.5);
   dw__582->Draw();
   dw__582->cd();
   dw__582->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__582->SetFillColor(0);
   dw__582->SetFillStyle(4000);
   dw__582->SetBorderMode(0);
   dw__582->SetBorderSize(0);
   dw__582->SetTickx(1);
   dw__582->SetTicky(1);
   dw__582->SetLeftMargin(0.120603);
   dw__582->SetRightMargin(0.08040201);
   dw__582->SetTopMargin(0);
   dw__582->SetBottomMargin(0.2072539);
   dw__582->SetFrameBorderMode(0);
   dw__582->SetFrameBorderMode(0);
   Double_t xAxis3498[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__3498 = new TH1D("chist_dw__3498","",8, xAxis3498);
   chist_dw__3498->SetMinimum(0.2);
   chist_dw__3498->SetMaximum(3.2);
   chist_dw__3498->SetDirectory(nullptr);
   chist_dw__3498->SetStats(0);
   chist_dw__3498->SetLineColor(0);
   chist_dw__3498->SetLineWidth(0);
   chist_dw__3498->SetMarkerColor(0);
   chist_dw__3498->SetMarkerStyle(20);
   chist_dw__3498->SetMarkerSize(0);
   chist_dw__3498->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__3498->GetXaxis()->SetRange(1,11);
   chist_dw__3498->GetXaxis()->SetLabelFont(42);
   chist_dw__3498->GetXaxis()->SetLabelSize(0.08);
   chist_dw__3498->GetXaxis()->SetTitleSize(0.08);
   chist_dw__3498->GetXaxis()->SetTickLength(0.04);
   chist_dw__3498->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__3498->GetXaxis()->SetTitleFont(42);
   chist_dw__3498->GetYaxis()->SetTitle("Stretch");
   chist_dw__3498->GetYaxis()->CenterTitle(true);
   chist_dw__3498->GetYaxis()->SetNdivisions(405);
   chist_dw__3498->GetYaxis()->SetLabelFont(42);
   chist_dw__3498->GetYaxis()->SetLabelSize(0.08);
   chist_dw__3498->GetYaxis()->SetTitleSize(0.08);
   chist_dw__3498->GetYaxis()->SetTickLength(0.04);
   chist_dw__3498->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__3498->GetYaxis()->SetTitleFont(42);
   chist_dw__3498->GetZaxis()->SetLabelFont(42);
   chist_dw__3498->GetZaxis()->SetLabelSize(0.05);
   chist_dw__3498->GetZaxis()->SetTitleSize(0.05);
   chist_dw__3498->GetZaxis()->SetTitleOffset(1);
   chist_dw__3498->GetZaxis()->SetTitleFont(42);
   chist_dw__3498->Draw("");
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
   Double_t xAxis3499[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_7__3499 = new TH1D("RZ_stretch_tot_7__3499","",8, xAxis3499);
   RZ_stretch_tot_7__3499->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_7__3499->SetFillColor(ci);
   RZ_stretch_tot_7__3499->SetLineWidth(2);
   RZ_stretch_tot_7__3499->SetMarkerStyle(20);
   RZ_stretch_tot_7__3499->SetMarkerSize(0.8);
   RZ_stretch_tot_7__3499->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_7__3499->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__3499->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__3499->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__3499->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__3499->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__3499->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__3499->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__3499->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__3499->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__3499->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__3499->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__3499->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__3499->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__3499->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_7__3499->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__3499->Draw("SAME E2");
   Double_t xAxis3500[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_7__3500 = new TH1D("RZ_stretch_stat_7__3500","",8, xAxis3500);
   RZ_stretch_stat_7__3500->SetStats(0);
   RZ_stretch_stat_7__3500->SetLineWidth(2);
   RZ_stretch_stat_7__3500->SetMarkerStyle(20);
   RZ_stretch_stat_7__3500->SetMarkerSize(0.8);
   RZ_stretch_stat_7__3500->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_7__3500->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__3500->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__3500->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__3500->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__3500->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__3500->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__3500->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__3500->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__3500->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__3500->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__3500->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__3500->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__3500->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__3500->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_7__3500->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__3500->Draw("SAME PZ");
   Double_t xAxis3501[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_7__3501 = new TH1D("SP_stretch_tot_7__3501","",8, xAxis3501);
   SP_stretch_tot_7__3501->SetBinContent(1,1.110318);
   SP_stretch_tot_7__3501->SetBinContent(2,1.153261);
   SP_stretch_tot_7__3501->SetBinContent(3,1.119268);
   SP_stretch_tot_7__3501->SetBinContent(4,1.153152);
   SP_stretch_tot_7__3501->SetBinContent(6,1.064902);
   SP_stretch_tot_7__3501->SetBinContent(7,1.212458);
   SP_stretch_tot_7__3501->SetBinContent(8,1.150217);
   SP_stretch_tot_7__3501->SetBinError(1,0.01164797);
   SP_stretch_tot_7__3501->SetBinError(2,0.01981404);
   SP_stretch_tot_7__3501->SetBinError(3,0.01362515);
   SP_stretch_tot_7__3501->SetBinError(4,0.01869684);
   SP_stretch_tot_7__3501->SetBinError(6,0.008892439);
   SP_stretch_tot_7__3501->SetBinError(7,0.01022189);
   SP_stretch_tot_7__3501->SetBinError(8,0.003940357);
   SP_stretch_tot_7__3501->SetEntries(50229.45);
   SP_stretch_tot_7__3501->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_7__3501->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__3501->SetLineColor(ci);
   SP_stretch_tot_7__3501->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__3501->SetMarkerColor(ci);
   SP_stretch_tot_7__3501->SetMarkerStyle(20);
   SP_stretch_tot_7__3501->SetMarkerSize(0.8);
   SP_stretch_tot_7__3501->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_7__3501->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_7__3501->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__3501->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__3501->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__3501->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_7__3501->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_7__3501->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__3501->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__3501->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__3501->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_7__3501->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_7__3501->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__3501->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__3501->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_7__3501->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_7__3501->Draw("SAME E2");
   Double_t xAxis3502[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_7__3502 = new TH1D("SP_stretch_stat_7__3502","",8, xAxis3502);
   SP_stretch_stat_7__3502->SetBinContent(1,1.110318);
   SP_stretch_stat_7__3502->SetBinContent(2,1.153261);
   SP_stretch_stat_7__3502->SetBinContent(3,1.119268);
   SP_stretch_stat_7__3502->SetBinContent(4,1.153152);
   SP_stretch_stat_7__3502->SetBinContent(6,1.064902);
   SP_stretch_stat_7__3502->SetBinContent(7,1.212458);
   SP_stretch_stat_7__3502->SetBinContent(8,1.150217);
   SP_stretch_stat_7__3502->SetBinError(1,0.0003443258);
   SP_stretch_stat_7__3502->SetBinError(2,0.0005399653);
   SP_stretch_stat_7__3502->SetBinError(3,0.0004379767);
   SP_stretch_stat_7__3502->SetBinError(4,0.0006359694);
   SP_stretch_stat_7__3502->SetBinError(6,0.0006172902);
   SP_stretch_stat_7__3502->SetBinError(7,0.0007112305);
   SP_stretch_stat_7__3502->SetBinError(8,0.0005802908);
   SP_stretch_stat_7__3502->SetEntries(2.843834e+07);
   SP_stretch_stat_7__3502->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__3502->SetLineColor(ci);
   SP_stretch_stat_7__3502->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__3502->SetMarkerColor(ci);
   SP_stretch_stat_7__3502->SetMarkerStyle(20);
   SP_stretch_stat_7__3502->SetMarkerSize(0.8);
   SP_stretch_stat_7__3502->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_7__3502->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_7__3502->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__3502->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__3502->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__3502->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_7__3502->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_7__3502->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__3502->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__3502->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__3502->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_7__3502->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_7__3502->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__3502->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__3502->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_7__3502->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_7__3502->Draw("SAME PZ");
   dw__582->Modified();
   c1_n32->cd();
  
// ------------>Primitives in pad: up
   TPad *up__583 = new TPad("up", "up",0,0.5,1,1);
   up__583->Draw();
   up__583->cd();
   up__583->Range(-0.3577359,-0.6365768,2.608491,2.304807);
   up__583->SetFillColor(0);
   up__583->SetFillStyle(4000);
   up__583->SetBorderMode(0);
   up__583->SetBorderSize(0);
   up__583->SetTickx(1);
   up__583->SetTicky(1);
   up__583->SetLeftMargin(0.120603);
   up__583->SetRightMargin(0.08040201);
   up__583->SetBottomMargin(0.01243523);
   up__583->SetFrameBorderMode(0);
   up__583->SetFrameBorderMode(0);
   Double_t xAxis3503[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__3503 = new TH1D("chist__3503","",8, xAxis3503);
   chist__3503->SetMinimum(-0.6);
   chist__3503->SetMaximum(2);
   chist__3503->SetDirectory(nullptr);
   chist__3503->SetStats(0);
   chist__3503->SetLineColor(0);
   chist__3503->SetLineWidth(0);
   chist__3503->SetMarkerColor(0);
   chist__3503->SetMarkerStyle(20);
   chist__3503->SetMarkerSize(0);
   chist__3503->GetXaxis()->SetRange(1,11);
   chist__3503->GetXaxis()->SetNdivisions(4000510);
   chist__3503->GetXaxis()->SetLabelFont(42);
   chist__3503->GetXaxis()->SetLabelSize(0);
   chist__3503->GetXaxis()->SetTitleSize(0.08);
   chist__3503->GetXaxis()->SetTickLength(0.04);
   chist__3503->GetXaxis()->SetTitleOffset(2.020933);
   chist__3503->GetXaxis()->SetTitleFont(42);
   chist__3503->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__3503->GetYaxis()->SetNdivisions(3000510);
   chist__3503->GetYaxis()->SetLabelFont(42);
   chist__3503->GetYaxis()->SetLabelSize(0.08);
   chist__3503->GetYaxis()->SetTitleSize(0.08);
   chist__3503->GetYaxis()->SetTickLength(0.04);
   chist__3503->GetYaxis()->SetTitleOffset(0.727387);
   chist__3503->GetYaxis()->SetTitleFont(42);
   chist__3503->GetZaxis()->SetLabelFont(42);
   chist__3503->GetZaxis()->SetLabelSize(0.05);
   chist__3503->GetZaxis()->SetTitleSize(0.05);
   chist__3503->GetZaxis()->SetTitleOffset(1);
   chist__3503->GetZaxis()->SetTitleFont(42);
   chist__3503->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_7","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_7","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_7","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_7","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"f_{side}");
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
      tex = new TLatex(0.160804,0.5098,"80.00 #leq p_{T}^{#gamma} [GeV] < 100.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis3504[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_7__3504 = new TH1D("RZ_shift_tot_7__3504","",8, xAxis3504);
   RZ_shift_tot_7__3504->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_7__3504->SetFillColor(ci);
   RZ_shift_tot_7__3504->SetMarkerStyle(20);
   RZ_shift_tot_7__3504->SetMarkerSize(0.8);
   RZ_shift_tot_7__3504->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_7__3504->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_7__3504->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__3504->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__3504->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__3504->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_7__3504->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_7__3504->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__3504->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__3504->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__3504->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_7__3504->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_7__3504->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__3504->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__3504->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_7__3504->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_7__3504->Draw("SAME E2");
   Double_t xAxis3505[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_7__3505 = new TH1D("RZ_shift_stat_7__3505","",8, xAxis3505);
   RZ_shift_stat_7__3505->SetStats(0);
   RZ_shift_stat_7__3505->SetMarkerStyle(20);
   RZ_shift_stat_7__3505->SetMarkerSize(0.8);
   RZ_shift_stat_7__3505->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_7__3505->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_7__3505->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__3505->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__3505->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__3505->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_7__3505->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_7__3505->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__3505->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__3505->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__3505->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_7__3505->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_7__3505->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__3505->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__3505->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_7__3505->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_7__3505->Draw("SAME PZ");
   Double_t xAxis3506[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_7__3506 = new TH1D("SP_shift_tot_7__3506","",8, xAxis3506);
   SP_shift_tot_7__3506->SetBinContent(1,0.2592397);
   SP_shift_tot_7__3506->SetBinContent(2,0.3311398);
   SP_shift_tot_7__3506->SetBinContent(3,0.3565089);
   SP_shift_tot_7__3506->SetBinContent(4,0.4070924);
   SP_shift_tot_7__3506->SetBinContent(6,0.4598859);
   SP_shift_tot_7__3506->SetBinContent(7,1.2101);
   SP_shift_tot_7__3506->SetBinContent(8,1.108336);
   SP_shift_tot_7__3506->SetBinError(1,0.02403328);
   SP_shift_tot_7__3506->SetBinError(2,0.0270233);
   SP_shift_tot_7__3506->SetBinError(3,0.02311582);
   SP_shift_tot_7__3506->SetBinError(4,0.02537956);
   SP_shift_tot_7__3506->SetBinError(6,0.01868857);
   SP_shift_tot_7__3506->SetBinError(7,0.01888648);
   SP_shift_tot_7__3506->SetBinError(8,0.01884039);
   SP_shift_tot_7__3506->SetEntries(4813.859);
   SP_shift_tot_7__3506->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_7__3506->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__3506->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__3506->SetMarkerColor(ci);
   SP_shift_tot_7__3506->SetMarkerStyle(20);
   SP_shift_tot_7__3506->SetMarkerSize(0.8);
   SP_shift_tot_7__3506->GetXaxis()->SetRange(1,11);
   SP_shift_tot_7__3506->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_7__3506->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__3506->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__3506->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__3506->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_7__3506->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_7__3506->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__3506->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__3506->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__3506->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_7__3506->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_7__3506->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__3506->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__3506->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_7__3506->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_7__3506->Draw("SAME E2");
   Double_t xAxis3507[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_7__3507 = new TH1D("SP_shift_stat_7__3507","",8, xAxis3507);
   SP_shift_stat_7__3507->SetBinContent(1,0.2592397);
   SP_shift_stat_7__3507->SetBinContent(2,0.3311398);
   SP_shift_stat_7__3507->SetBinContent(3,0.3565089);
   SP_shift_stat_7__3507->SetBinContent(4,0.4070924);
   SP_shift_stat_7__3507->SetBinContent(6,0.4598859);
   SP_shift_stat_7__3507->SetBinContent(7,1.2101);
   SP_shift_stat_7__3507->SetBinContent(8,1.108336);
   SP_shift_stat_7__3507->SetBinError(1,0.0003468227);
   SP_shift_stat_7__3507->SetBinError(2,0.0005739235);
   SP_shift_stat_7__3507->SetBinError(3,0.0004782649);
   SP_shift_stat_7__3507->SetBinError(4,0.0006265854);
   SP_shift_stat_7__3507->SetBinError(6,0.000545022);
   SP_shift_stat_7__3507->SetBinError(7,0.0006937236);
   SP_shift_stat_7__3507->SetBinError(8,0.0004726599);
   SP_shift_stat_7__3507->SetEntries(8238376);
   SP_shift_stat_7__3507->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__3507->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__3507->SetMarkerColor(ci);
   SP_shift_stat_7__3507->SetMarkerStyle(20);
   SP_shift_stat_7__3507->SetMarkerSize(0.8);
   SP_shift_stat_7__3507->GetXaxis()->SetRange(1,11);
   SP_shift_stat_7__3507->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_7__3507->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__3507->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__3507->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__3507->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_7__3507->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_7__3507->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__3507->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__3507->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__3507->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_7__3507->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_7__3507->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__3507->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__3507->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_7__3507->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_7__3507->Draw("SAME PZ");
   Double_t xAxis3508[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__3508 = new TH1D("chist_copy__3508","",8, xAxis3508);
   chist_copy__3508->SetMinimum(-0.6);
   chist_copy__3508->SetMaximum(2);
   chist_copy__3508->SetDirectory(nullptr);
   chist_copy__3508->SetStats(0);
   chist_copy__3508->SetLineColor(0);
   chist_copy__3508->SetLineWidth(0);
   chist_copy__3508->SetMarkerColor(0);
   chist_copy__3508->SetMarkerStyle(20);
   chist_copy__3508->SetMarkerSize(0);
   chist_copy__3508->GetXaxis()->SetRange(1,11);
   chist_copy__3508->GetXaxis()->SetNdivisions(4000510);
   chist_copy__3508->GetXaxis()->SetLabelFont(42);
   chist_copy__3508->GetXaxis()->SetLabelSize(0);
   chist_copy__3508->GetXaxis()->SetTitleSize(0.08);
   chist_copy__3508->GetXaxis()->SetTickLength(0.04);
   chist_copy__3508->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__3508->GetXaxis()->SetTitleFont(42);
   chist_copy__3508->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__3508->GetYaxis()->SetNdivisions(3000510);
   chist_copy__3508->GetYaxis()->SetLabelFont(42);
   chist_copy__3508->GetYaxis()->SetLabelSize(0.08);
   chist_copy__3508->GetYaxis()->SetTitleSize(0.08);
   chist_copy__3508->GetYaxis()->SetTickLength(0.04);
   chist_copy__3508->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__3508->GetYaxis()->SetTitleFont(42);
   chist_copy__3508->GetZaxis()->SetLabelFont(42);
   chist_copy__3508->GetZaxis()->SetLabelSize(0.05);
   chist_copy__3508->GetZaxis()->SetTitleSize(0.05);
   chist_copy__3508->GetZaxis()->SetTitleOffset(1);
   chist_copy__3508->GetZaxis()->SetTitleFont(42);
   chist_copy__3508->Draw("sameaxis");
   up__583->Modified();
   c1_n32->cd();
   c1_n32->Modified();
   c1_n32->SetSelected(c1_n32);
}
