#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad1__c__pt0060p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n27/
//=========  (Thu Apr  4 19:00:36 2024) by ROOT version 6.30/02
   TCanvas *c1_n27 = new TCanvas("c1_n27", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n27->SetHighLightColor(2);
   c1_n27->Range(0,0,1,1);
   c1_n27->SetFillColor(0);
   c1_n27->SetBorderMode(0);
   c1_n27->SetBorderSize(2);
   c1_n27->SetTickx(1);
   c1_n27->SetTicky(1);
   c1_n27->SetLeftMargin(0.16);
   c1_n27->SetRightMargin(0.05);
   c1_n27->SetTopMargin(0.05);
   c1_n27->SetBottomMargin(0.16);
   c1_n27->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__508 = new TPad("dw", "dw",0,0,1,0.5);
   dw__508->Draw();
   dw__508->cd();
   dw__508->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__508->SetFillColor(0);
   dw__508->SetFillStyle(4000);
   dw__508->SetBorderMode(0);
   dw__508->SetBorderSize(0);
   dw__508->SetTickx(1);
   dw__508->SetTicky(1);
   dw__508->SetLeftMargin(0.120603);
   dw__508->SetRightMargin(0.08040201);
   dw__508->SetTopMargin(0);
   dw__508->SetBottomMargin(0.2072539);
   dw__508->SetFrameBorderMode(0);
   dw__508->SetFrameBorderMode(0);
   Double_t xAxis3055[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__3055 = new TH1D("chist_dw__3055","",8, xAxis3055);
   chist_dw__3055->SetMinimum(0.2);
   chist_dw__3055->SetMaximum(3.2);
   chist_dw__3055->SetDirectory(nullptr);
   chist_dw__3055->SetStats(0);
   chist_dw__3055->SetLineColor(0);
   chist_dw__3055->SetLineWidth(0);
   chist_dw__3055->SetMarkerColor(0);
   chist_dw__3055->SetMarkerStyle(20);
   chist_dw__3055->SetMarkerSize(0);
   chist_dw__3055->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__3055->GetXaxis()->SetRange(1,11);
   chist_dw__3055->GetXaxis()->SetLabelFont(42);
   chist_dw__3055->GetXaxis()->SetLabelSize(0.08);
   chist_dw__3055->GetXaxis()->SetTitleSize(0.08);
   chist_dw__3055->GetXaxis()->SetTickLength(0.04);
   chist_dw__3055->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__3055->GetXaxis()->SetTitleFont(42);
   chist_dw__3055->GetYaxis()->SetTitle("Stretch");
   chist_dw__3055->GetYaxis()->CenterTitle(true);
   chist_dw__3055->GetYaxis()->SetNdivisions(405);
   chist_dw__3055->GetYaxis()->SetLabelFont(42);
   chist_dw__3055->GetYaxis()->SetLabelSize(0.08);
   chist_dw__3055->GetYaxis()->SetTitleSize(0.08);
   chist_dw__3055->GetYaxis()->SetTickLength(0.04);
   chist_dw__3055->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__3055->GetYaxis()->SetTitleFont(42);
   chist_dw__3055->GetZaxis()->SetLabelFont(42);
   chist_dw__3055->GetZaxis()->SetLabelSize(0.05);
   chist_dw__3055->GetZaxis()->SetTitleSize(0.05);
   chist_dw__3055->GetZaxis()->SetTitleOffset(1);
   chist_dw__3055->GetZaxis()->SetTitleFont(42);
   chist_dw__3055->Draw("");
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
   Double_t xAxis3056[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_6__3056 = new TH1D("RZ_stretch_tot_6__3056","",8, xAxis3056);
   RZ_stretch_tot_6__3056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_6__3056->SetFillColor(ci);
   RZ_stretch_tot_6__3056->SetLineWidth(2);
   RZ_stretch_tot_6__3056->SetMarkerStyle(20);
   RZ_stretch_tot_6__3056->SetMarkerSize(0.8);
   RZ_stretch_tot_6__3056->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_6__3056->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__3056->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__3056->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__3056->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__3056->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__3056->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__3056->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__3056->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__3056->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__3056->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__3056->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__3056->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__3056->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__3056->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_6__3056->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__3056->Draw("SAME E2");
   Double_t xAxis3057[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_6__3057 = new TH1D("RZ_stretch_stat_6__3057","",8, xAxis3057);
   RZ_stretch_stat_6__3057->SetStats(0);
   RZ_stretch_stat_6__3057->SetLineWidth(2);
   RZ_stretch_stat_6__3057->SetMarkerStyle(20);
   RZ_stretch_stat_6__3057->SetMarkerSize(0.8);
   RZ_stretch_stat_6__3057->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_6__3057->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__3057->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__3057->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__3057->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__3057->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__3057->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__3057->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__3057->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__3057->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__3057->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__3057->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__3057->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__3057->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__3057->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_6__3057->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__3057->Draw("SAME PZ");
   Double_t xAxis3058[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_6__3058 = new TH1D("SP_stretch_tot_6__3058","",8, xAxis3058);
   SP_stretch_tot_6__3058->SetBinContent(1,1.13151);
   SP_stretch_tot_6__3058->SetBinContent(2,1.149264);
   SP_stretch_tot_6__3058->SetBinContent(6,1.05314);
   SP_stretch_tot_6__3058->SetBinContent(7,1.061898);
   SP_stretch_tot_6__3058->SetBinContent(8,1.087337);
   SP_stretch_tot_6__3058->SetBinError(1,0.01088616);
   SP_stretch_tot_6__3058->SetBinError(2,0.009873433);
   SP_stretch_tot_6__3058->SetBinError(6,0.01247561);
   SP_stretch_tot_6__3058->SetBinError(7,0.02280041);
   SP_stretch_tot_6__3058->SetBinError(8,0.01848067);
   SP_stretch_tot_6__3058->SetEntries(24383);
   SP_stretch_tot_6__3058->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_6__3058->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__3058->SetLineColor(ci);
   SP_stretch_tot_6__3058->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__3058->SetMarkerColor(ci);
   SP_stretch_tot_6__3058->SetMarkerStyle(20);
   SP_stretch_tot_6__3058->SetMarkerSize(0.8);
   SP_stretch_tot_6__3058->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_6__3058->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_6__3058->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__3058->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__3058->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__3058->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_6__3058->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_6__3058->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__3058->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__3058->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__3058->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_6__3058->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_6__3058->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__3058->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__3058->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_6__3058->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_6__3058->Draw("SAME E2");
   Double_t xAxis3059[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_6__3059 = new TH1D("SP_stretch_stat_6__3059","",8, xAxis3059);
   SP_stretch_stat_6__3059->SetBinContent(1,1.13151);
   SP_stretch_stat_6__3059->SetBinContent(2,1.149264);
   SP_stretch_stat_6__3059->SetBinContent(6,1.05314);
   SP_stretch_stat_6__3059->SetBinContent(7,1.061898);
   SP_stretch_stat_6__3059->SetBinContent(8,1.087337);
   SP_stretch_stat_6__3059->SetBinError(1,0.0005168966);
   SP_stretch_stat_6__3059->SetBinError(2,0.0008818879);
   SP_stretch_stat_6__3059->SetBinError(6,0.0003518233);
   SP_stretch_stat_6__3059->SetBinError(7,0.0004757631);
   SP_stretch_stat_6__3059->SetBinError(8,0.0003706067);
   SP_stretch_stat_6__3059->SetEntries(1.961966e+07);
   SP_stretch_stat_6__3059->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__3059->SetLineColor(ci);
   SP_stretch_stat_6__3059->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__3059->SetMarkerColor(ci);
   SP_stretch_stat_6__3059->SetMarkerStyle(20);
   SP_stretch_stat_6__3059->SetMarkerSize(0.8);
   SP_stretch_stat_6__3059->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_6__3059->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_6__3059->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__3059->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__3059->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__3059->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_6__3059->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_6__3059->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__3059->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__3059->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__3059->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_6__3059->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_6__3059->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__3059->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__3059->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_6__3059->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_6__3059->Draw("SAME PZ");
   dw__508->Modified();
   c1_n27->cd();
  
// ------------>Primitives in pad: up
   TPad *up__509 = new TPad("up", "up",0,0.5,1,1);
   up__509->Draw();
   up__509->cd();
   up__509->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__509->SetFillColor(0);
   up__509->SetFillStyle(4000);
   up__509->SetBorderMode(0);
   up__509->SetBorderSize(0);
   up__509->SetTickx(1);
   up__509->SetTicky(1);
   up__509->SetLeftMargin(0.120603);
   up__509->SetRightMargin(0.08040201);
   up__509->SetBottomMargin(0.01243523);
   up__509->SetFrameBorderMode(0);
   up__509->SetFrameBorderMode(0);
   Double_t xAxis3060[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__3060 = new TH1D("chist__3060","",8, xAxis3060);
   chist__3060->SetMinimum(-0.7);
   chist__3060->SetMaximum(1.1);
   chist__3060->SetDirectory(nullptr);
   chist__3060->SetStats(0);
   chist__3060->SetLineColor(0);
   chist__3060->SetLineWidth(0);
   chist__3060->SetMarkerColor(0);
   chist__3060->SetMarkerStyle(20);
   chist__3060->SetMarkerSize(0);
   chist__3060->GetXaxis()->SetRange(1,11);
   chist__3060->GetXaxis()->SetNdivisions(4000510);
   chist__3060->GetXaxis()->SetLabelFont(42);
   chist__3060->GetXaxis()->SetLabelSize(0);
   chist__3060->GetXaxis()->SetTitleSize(0.08);
   chist__3060->GetXaxis()->SetTickLength(0.04);
   chist__3060->GetXaxis()->SetTitleOffset(2.020933);
   chist__3060->GetXaxis()->SetTitleFont(42);
   chist__3060->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__3060->GetYaxis()->SetNdivisions(3000510);
   chist__3060->GetYaxis()->SetLabelFont(42);
   chist__3060->GetYaxis()->SetLabelSize(0.08);
   chist__3060->GetYaxis()->SetTitleSize(0.08);
   chist__3060->GetYaxis()->SetTickLength(0.04);
   chist__3060->GetYaxis()->SetTitleOffset(0.727387);
   chist__3060->GetYaxis()->SetTitleFont(42);
   chist__3060->GetZaxis()->SetLabelFont(42);
   chist__3060->GetZaxis()->SetLabelSize(0.05);
   chist__3060->GetZaxis()->SetTitleSize(0.05);
   chist__3060->GetZaxis()->SetTitleOffset(1);
   chist__3060->GetZaxis()->SetTitleFont(42);
   chist__3060->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_6","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_6","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_6","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_6","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"R_{had1}");
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
      tex = new TLatex(0.160804,0.5098,"60.00 #leq p_{T}^{#gamma} [GeV] < 80.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis3061[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_6__3061 = new TH1D("RZ_shift_tot_6__3061","",8, xAxis3061);
   RZ_shift_tot_6__3061->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_6__3061->SetFillColor(ci);
   RZ_shift_tot_6__3061->SetMarkerStyle(20);
   RZ_shift_tot_6__3061->SetMarkerSize(0.8);
   RZ_shift_tot_6__3061->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_6__3061->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_6__3061->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__3061->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__3061->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__3061->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_6__3061->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_6__3061->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__3061->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__3061->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__3061->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_6__3061->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_6__3061->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__3061->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__3061->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_6__3061->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_6__3061->Draw("SAME E2");
   Double_t xAxis3062[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_6__3062 = new TH1D("RZ_shift_stat_6__3062","",8, xAxis3062);
   RZ_shift_stat_6__3062->SetStats(0);
   RZ_shift_stat_6__3062->SetMarkerStyle(20);
   RZ_shift_stat_6__3062->SetMarkerSize(0.8);
   RZ_shift_stat_6__3062->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_6__3062->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_6__3062->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__3062->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__3062->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__3062->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_6__3062->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_6__3062->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__3062->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__3062->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__3062->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_6__3062->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_6__3062->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__3062->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__3062->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_6__3062->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_6__3062->Draw("SAME PZ");
   Double_t xAxis3063[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_6__3063 = new TH1D("SP_shift_tot_6__3063","",8, xAxis3063);
   SP_shift_tot_6__3063->SetBinContent(1,-0.06032817);
   SP_shift_tot_6__3063->SetBinContent(2,-0.04618334);
   SP_shift_tot_6__3063->SetBinContent(6,0.05761248);
   SP_shift_tot_6__3063->SetBinContent(7,0.06484848);
   SP_shift_tot_6__3063->SetBinContent(8,0.06865156);
   SP_shift_tot_6__3063->SetBinError(1,0.001966172);
   SP_shift_tot_6__3063->SetBinError(2,0.006562703);
   SP_shift_tot_6__3063->SetBinError(6,0.01797914);
   SP_shift_tot_6__3063->SetBinError(7,0.01994809);
   SP_shift_tot_6__3063->SetBinError(8,0.02175544);
   SP_shift_tot_6__3063->SetEntries(5.765486);
   SP_shift_tot_6__3063->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_6__3063->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__3063->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__3063->SetMarkerColor(ci);
   SP_shift_tot_6__3063->SetMarkerStyle(20);
   SP_shift_tot_6__3063->SetMarkerSize(0.8);
   SP_shift_tot_6__3063->GetXaxis()->SetRange(1,11);
   SP_shift_tot_6__3063->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_6__3063->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__3063->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__3063->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__3063->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_6__3063->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_6__3063->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__3063->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__3063->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__3063->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_6__3063->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_6__3063->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__3063->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__3063->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_6__3063->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_6__3063->Draw("SAME E2");
   Double_t xAxis3064[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_6__3064 = new TH1D("SP_shift_stat_6__3064","",8, xAxis3064);
   SP_shift_stat_6__3064->SetBinContent(1,-0.06032817);
   SP_shift_stat_6__3064->SetBinContent(2,-0.04618334);
   SP_shift_stat_6__3064->SetBinContent(6,0.05761248);
   SP_shift_stat_6__3064->SetBinContent(7,0.06484848);
   SP_shift_stat_6__3064->SetBinContent(8,0.06865156);
   SP_shift_stat_6__3064->SetBinError(1,0.0001719953);
   SP_shift_stat_6__3064->SetBinError(2,0.0003460918);
   SP_shift_stat_6__3064->SetBinError(6,0.0003307092);
   SP_shift_stat_6__3064->SetBinError(7,0.0004348577);
   SP_shift_stat_6__3064->SetBinError(8,0.0003171254);
   SP_shift_stat_6__3064->SetEntries(13051.29);
   SP_shift_stat_6__3064->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__3064->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__3064->SetMarkerColor(ci);
   SP_shift_stat_6__3064->SetMarkerStyle(20);
   SP_shift_stat_6__3064->SetMarkerSize(0.8);
   SP_shift_stat_6__3064->GetXaxis()->SetRange(1,11);
   SP_shift_stat_6__3064->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_6__3064->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__3064->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__3064->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__3064->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_6__3064->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_6__3064->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__3064->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__3064->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__3064->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_6__3064->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_6__3064->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__3064->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__3064->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_6__3064->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_6__3064->Draw("SAME PZ");
   Double_t xAxis3065[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__3065 = new TH1D("chist_copy__3065","",8, xAxis3065);
   chist_copy__3065->SetMinimum(-0.7);
   chist_copy__3065->SetMaximum(1.1);
   chist_copy__3065->SetDirectory(nullptr);
   chist_copy__3065->SetStats(0);
   chist_copy__3065->SetLineColor(0);
   chist_copy__3065->SetLineWidth(0);
   chist_copy__3065->SetMarkerColor(0);
   chist_copy__3065->SetMarkerStyle(20);
   chist_copy__3065->SetMarkerSize(0);
   chist_copy__3065->GetXaxis()->SetRange(1,11);
   chist_copy__3065->GetXaxis()->SetNdivisions(4000510);
   chist_copy__3065->GetXaxis()->SetLabelFont(42);
   chist_copy__3065->GetXaxis()->SetLabelSize(0);
   chist_copy__3065->GetXaxis()->SetTitleSize(0.08);
   chist_copy__3065->GetXaxis()->SetTickLength(0.04);
   chist_copy__3065->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__3065->GetXaxis()->SetTitleFont(42);
   chist_copy__3065->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__3065->GetYaxis()->SetNdivisions(3000510);
   chist_copy__3065->GetYaxis()->SetLabelFont(42);
   chist_copy__3065->GetYaxis()->SetLabelSize(0.08);
   chist_copy__3065->GetYaxis()->SetTitleSize(0.08);
   chist_copy__3065->GetYaxis()->SetTickLength(0.04);
   chist_copy__3065->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__3065->GetYaxis()->SetTitleFont(42);
   chist_copy__3065->GetZaxis()->SetLabelFont(42);
   chist_copy__3065->GetZaxis()->SetLabelSize(0.05);
   chist_copy__3065->GetZaxis()->SetTitleSize(0.05);
   chist_copy__3065->GetZaxis()->SetTitleOffset(1);
   chist_copy__3065->GetZaxis()->SetTitleFont(42);
   chist_copy__3065->Draw("sameaxis");
   up__509->Modified();
   c1_n27->cd();
   c1_n27->Modified();
   c1_n27->SetSelected(c1_n27);
}
