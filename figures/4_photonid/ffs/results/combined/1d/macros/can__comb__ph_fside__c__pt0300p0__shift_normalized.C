#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_fside__c__pt0300p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n35/
//=========  (Thu Apr  4 19:00:48 2024) by ROOT version 6.30/02
   TCanvas *c1_n35 = new TCanvas("c1_n35", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n35->SetHighLightColor(2);
   c1_n35->Range(0,0,1,1);
   c1_n35->SetFillColor(0);
   c1_n35->SetBorderMode(0);
   c1_n35->SetBorderSize(2);
   c1_n35->SetTickx(1);
   c1_n35->SetTicky(1);
   c1_n35->SetLeftMargin(0.16);
   c1_n35->SetRightMargin(0.05);
   c1_n35->SetTopMargin(0.05);
   c1_n35->SetBottomMargin(0.16);
   c1_n35->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__660 = new TPad("dw", "dw",0,0,1,0.5);
   dw__660->Draw();
   dw__660->cd();
   dw__660->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__660->SetFillColor(0);
   dw__660->SetFillStyle(4000);
   dw__660->SetBorderMode(0);
   dw__660->SetBorderSize(0);
   dw__660->SetTickx(1);
   dw__660->SetTicky(1);
   dw__660->SetLeftMargin(0.120603);
   dw__660->SetRightMargin(0.08040201);
   dw__660->SetTopMargin(0);
   dw__660->SetBottomMargin(0.2072539);
   dw__660->SetFrameBorderMode(0);
   dw__660->SetFrameBorderMode(0);
   Double_t xAxis3963[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__3963 = new TH1D("chist_dw__3963","",8, xAxis3963);
   chist_dw__3963->SetMinimum(0.2);
   chist_dw__3963->SetMaximum(3.2);
   chist_dw__3963->SetDirectory(nullptr);
   chist_dw__3963->SetStats(0);
   chist_dw__3963->SetLineColor(0);
   chist_dw__3963->SetLineWidth(0);
   chist_dw__3963->SetMarkerColor(0);
   chist_dw__3963->SetMarkerStyle(20);
   chist_dw__3963->SetMarkerSize(0);
   chist_dw__3963->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__3963->GetXaxis()->SetRange(1,8);
   chist_dw__3963->GetXaxis()->SetLabelFont(42);
   chist_dw__3963->GetXaxis()->SetLabelSize(0.08);
   chist_dw__3963->GetXaxis()->SetTitleSize(0.08);
   chist_dw__3963->GetXaxis()->SetTickLength(0.04);
   chist_dw__3963->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__3963->GetXaxis()->SetTitleFont(42);
   chist_dw__3963->GetYaxis()->SetTitle("Stretch");
   chist_dw__3963->GetYaxis()->CenterTitle(true);
   chist_dw__3963->GetYaxis()->SetNdivisions(405);
   chist_dw__3963->GetYaxis()->SetLabelFont(42);
   chist_dw__3963->GetYaxis()->SetLabelSize(0.08);
   chist_dw__3963->GetYaxis()->SetTitleSize(0.08);
   chist_dw__3963->GetYaxis()->SetTickLength(0.04);
   chist_dw__3963->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__3963->GetYaxis()->SetTitleFont(42);
   chist_dw__3963->GetZaxis()->SetLabelFont(42);
   chist_dw__3963->GetZaxis()->SetLabelSize(0.05);
   chist_dw__3963->GetZaxis()->SetTitleSize(0.05);
   chist_dw__3963->GetZaxis()->SetTitleOffset(1);
   chist_dw__3963->GetZaxis()->SetTitleFont(42);
   chist_dw__3963->Draw("");
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
   Double_t xAxis3964[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_10__3964 = new TH1D("RZ_stretch_tot_10__3964","",8, xAxis3964);
   RZ_stretch_tot_10__3964->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_10__3964->SetFillColor(ci);
   RZ_stretch_tot_10__3964->SetLineWidth(2);
   RZ_stretch_tot_10__3964->SetMarkerStyle(20);
   RZ_stretch_tot_10__3964->SetMarkerSize(0.8);
   RZ_stretch_tot_10__3964->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_10__3964->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_10__3964->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_10__3964->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_10__3964->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_10__3964->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_10__3964->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_10__3964->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_10__3964->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_10__3964->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_10__3964->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_10__3964->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_10__3964->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_10__3964->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_10__3964->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_10__3964->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_10__3964->Draw("SAME E2");
   Double_t xAxis3965[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_10__3965 = new TH1D("RZ_stretch_stat_10__3965","",8, xAxis3965);
   RZ_stretch_stat_10__3965->SetStats(0);
   RZ_stretch_stat_10__3965->SetLineWidth(2);
   RZ_stretch_stat_10__3965->SetMarkerStyle(20);
   RZ_stretch_stat_10__3965->SetMarkerSize(0.8);
   RZ_stretch_stat_10__3965->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_10__3965->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_10__3965->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_10__3965->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_10__3965->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_10__3965->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_10__3965->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_10__3965->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_10__3965->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_10__3965->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_10__3965->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_10__3965->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_10__3965->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_10__3965->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_10__3965->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_10__3965->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_10__3965->Draw("SAME PZ");
   Double_t xAxis3966[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_10__3966 = new TH1D("SP_stretch_tot_10__3966","",8, xAxis3966);
   SP_stretch_tot_10__3966->SetBinContent(1,1.413258);
   SP_stretch_tot_10__3966->SetBinContent(2,1.562076);
   SP_stretch_tot_10__3966->SetBinContent(3,1.66704);
   SP_stretch_tot_10__3966->SetBinContent(4,1.736858);
   SP_stretch_tot_10__3966->SetBinContent(6,1.565589);
   SP_stretch_tot_10__3966->SetBinContent(7,1.589875);
   SP_stretch_tot_10__3966->SetBinContent(8,1.85131);
   SP_stretch_tot_10__3966->SetBinError(1,0.1892412);
   SP_stretch_tot_10__3966->SetBinError(2,0.316337);
   SP_stretch_tot_10__3966->SetBinError(3,0.4143395);
   SP_stretch_tot_10__3966->SetBinError(4,0.4864013);
   SP_stretch_tot_10__3966->SetBinError(6,0.3212555);
   SP_stretch_tot_10__3966->SetBinError(7,0.2548483);
   SP_stretch_tot_10__3966->SetBinError(8,0.399192);
   SP_stretch_tot_10__3966->SetEntries(148.7304);
   SP_stretch_tot_10__3966->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_10__3966->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_10__3966->SetLineColor(ci);
   SP_stretch_tot_10__3966->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_10__3966->SetMarkerColor(ci);
   SP_stretch_tot_10__3966->SetMarkerStyle(20);
   SP_stretch_tot_10__3966->SetMarkerSize(0.8);
   SP_stretch_tot_10__3966->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_10__3966->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_10__3966->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_10__3966->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_10__3966->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_10__3966->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_10__3966->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_10__3966->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_10__3966->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_10__3966->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_10__3966->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_10__3966->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_10__3966->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_10__3966->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_10__3966->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_10__3966->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_10__3966->Draw("SAME E2");
   Double_t xAxis3967[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_10__3967 = new TH1D("SP_stretch_stat_10__3967","",8, xAxis3967);
   SP_stretch_stat_10__3967->SetBinContent(1,1.413258);
   SP_stretch_stat_10__3967->SetBinContent(2,1.562076);
   SP_stretch_stat_10__3967->SetBinContent(3,1.66704);
   SP_stretch_stat_10__3967->SetBinContent(4,1.736858);
   SP_stretch_stat_10__3967->SetBinContent(6,1.565589);
   SP_stretch_stat_10__3967->SetBinContent(7,1.589875);
   SP_stretch_stat_10__3967->SetBinContent(8,1.85131);
   SP_stretch_stat_10__3967->SetBinError(1,0.005907751);
   SP_stretch_stat_10__3967->SetBinError(2,0.01624624);
   SP_stretch_stat_10__3967->SetBinError(3,0.002070423);
   SP_stretch_stat_10__3967->SetBinError(4,0.008723136);
   SP_stretch_stat_10__3967->SetBinError(6,0.005856582);
   SP_stretch_stat_10__3967->SetBinError(7,0.01122118);
   SP_stretch_stat_10__3967->SetBinError(8,0.01207063);
   SP_stretch_stat_10__3967->SetEntries(189219.6);
   SP_stretch_stat_10__3967->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_10__3967->SetLineColor(ci);
   SP_stretch_stat_10__3967->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_10__3967->SetMarkerColor(ci);
   SP_stretch_stat_10__3967->SetMarkerStyle(20);
   SP_stretch_stat_10__3967->SetMarkerSize(0.8);
   SP_stretch_stat_10__3967->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_10__3967->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_10__3967->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_10__3967->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_10__3967->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_10__3967->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_10__3967->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_10__3967->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_10__3967->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_10__3967->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_10__3967->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_10__3967->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_10__3967->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_10__3967->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_10__3967->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_10__3967->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_10__3967->Draw("SAME PZ");
   dw__660->Modified();
   c1_n35->cd();
  
// ------------>Primitives in pad: up
   TPad *up__661 = new TPad("up", "up",0,0.5,1,1);
   up__661->Draw();
   up__661->cd();
   up__661->Range(-0.3577359,-0.6365768,2.608491,2.304807);
   up__661->SetFillColor(0);
   up__661->SetFillStyle(4000);
   up__661->SetBorderMode(0);
   up__661->SetBorderSize(0);
   up__661->SetTickx(1);
   up__661->SetTicky(1);
   up__661->SetLeftMargin(0.120603);
   up__661->SetRightMargin(0.08040201);
   up__661->SetBottomMargin(0.01243523);
   up__661->SetFrameBorderMode(0);
   up__661->SetFrameBorderMode(0);
   Double_t xAxis3968[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__3968 = new TH1D("chist__3968","",8, xAxis3968);
   chist__3968->SetMinimum(-0.6);
   chist__3968->SetMaximum(2);
   chist__3968->SetDirectory(nullptr);
   chist__3968->SetStats(0);
   chist__3968->SetLineColor(0);
   chist__3968->SetLineWidth(0);
   chist__3968->SetMarkerColor(0);
   chist__3968->SetMarkerStyle(20);
   chist__3968->SetMarkerSize(0);
   chist__3968->GetXaxis()->SetRange(1,8);
   chist__3968->GetXaxis()->SetNdivisions(4000510);
   chist__3968->GetXaxis()->SetLabelFont(42);
   chist__3968->GetXaxis()->SetLabelSize(0);
   chist__3968->GetXaxis()->SetTitleSize(0.08);
   chist__3968->GetXaxis()->SetTickLength(0.04);
   chist__3968->GetXaxis()->SetTitleOffset(2.020933);
   chist__3968->GetXaxis()->SetTitleFont(42);
   chist__3968->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__3968->GetYaxis()->SetNdivisions(3000510);
   chist__3968->GetYaxis()->SetLabelFont(42);
   chist__3968->GetYaxis()->SetLabelSize(0.08);
   chist__3968->GetYaxis()->SetTitleSize(0.08);
   chist__3968->GetYaxis()->SetTickLength(0.04);
   chist__3968->GetYaxis()->SetTitleOffset(0.727387);
   chist__3968->GetYaxis()->SetTitleFont(42);
   chist__3968->GetZaxis()->SetLabelFont(42);
   chist__3968->GetZaxis()->SetLabelSize(0.05);
   chist__3968->GetZaxis()->SetTitleSize(0.05);
   chist__3968->GetZaxis()->SetTitleOffset(1);
   chist__3968->GetZaxis()->SetTitleFont(42);
   chist__3968->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_10","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_10","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_10","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_10","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5714,"Converted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"300.00 #leq p_{T}^{#gamma} [GeV] < 600.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis3969[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_10__3969 = new TH1D("RZ_shift_tot_10__3969","",8, xAxis3969);
   RZ_shift_tot_10__3969->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_10__3969->SetFillColor(ci);
   RZ_shift_tot_10__3969->SetMarkerStyle(20);
   RZ_shift_tot_10__3969->SetMarkerSize(0.8);
   RZ_shift_tot_10__3969->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_10__3969->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_10__3969->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_10__3969->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_10__3969->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_10__3969->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_10__3969->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_10__3969->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_10__3969->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_10__3969->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_10__3969->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_10__3969->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_10__3969->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_10__3969->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_10__3969->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_10__3969->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_10__3969->Draw("SAME E2");
   Double_t xAxis3970[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_10__3970 = new TH1D("RZ_shift_stat_10__3970","",8, xAxis3970);
   RZ_shift_stat_10__3970->SetStats(0);
   RZ_shift_stat_10__3970->SetMarkerStyle(20);
   RZ_shift_stat_10__3970->SetMarkerSize(0.8);
   RZ_shift_stat_10__3970->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_10__3970->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_10__3970->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_10__3970->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_10__3970->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_10__3970->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_10__3970->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_10__3970->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_10__3970->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_10__3970->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_10__3970->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_10__3970->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_10__3970->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_10__3970->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_10__3970->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_10__3970->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_10__3970->Draw("SAME PZ");
   Double_t xAxis3971[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_10__3971 = new TH1D("SP_shift_tot_10__3971","",8, xAxis3971);
   SP_shift_tot_10__3971->SetBinContent(1,0.3721743);
   SP_shift_tot_10__3971->SetBinContent(2,0.53378);
   SP_shift_tot_10__3971->SetBinContent(3,0.6059324);
   SP_shift_tot_10__3971->SetBinContent(4,0.6359923);
   SP_shift_tot_10__3971->SetBinContent(6,0.590036);
   SP_shift_tot_10__3971->SetBinContent(7,1.283446);
   SP_shift_tot_10__3971->SetBinContent(8,1.016231);
   SP_shift_tot_10__3971->SetBinError(1,0.09511075);
   SP_shift_tot_10__3971->SetBinError(2,0.1780035);
   SP_shift_tot_10__3971->SetBinError(3,0.2279072);
   SP_shift_tot_10__3971->SetBinError(4,0.2601962);
   SP_shift_tot_10__3971->SetBinError(6,0.1496707);
   SP_shift_tot_10__3971->SetBinError(7,0.1442892);
   SP_shift_tot_10__3971->SetBinError(8,0.1905729);
   SP_shift_tot_10__3971->SetEntries(105.7769);
   SP_shift_tot_10__3971->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_10__3971->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_10__3971->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_10__3971->SetMarkerColor(ci);
   SP_shift_tot_10__3971->SetMarkerStyle(20);
   SP_shift_tot_10__3971->SetMarkerSize(0.8);
   SP_shift_tot_10__3971->GetXaxis()->SetRange(1,8);
   SP_shift_tot_10__3971->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_10__3971->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_10__3971->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_10__3971->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_10__3971->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_10__3971->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_10__3971->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_10__3971->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_10__3971->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_10__3971->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_10__3971->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_10__3971->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_10__3971->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_10__3971->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_10__3971->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_10__3971->Draw("SAME E2");
   Double_t xAxis3972[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_10__3972 = new TH1D("SP_shift_stat_10__3972","",8, xAxis3972);
   SP_shift_stat_10__3972->SetBinContent(1,0.3721743);
   SP_shift_stat_10__3972->SetBinContent(2,0.53378);
   SP_shift_stat_10__3972->SetBinContent(3,0.6059324);
   SP_shift_stat_10__3972->SetBinContent(4,0.6359923);
   SP_shift_stat_10__3972->SetBinContent(6,0.590036);
   SP_shift_stat_10__3972->SetBinContent(7,1.283446);
   SP_shift_stat_10__3972->SetBinContent(8,1.016231);
   SP_shift_stat_10__3972->SetBinError(1,0.004743333);
   SP_shift_stat_10__3972->SetBinError(2,0.008632064);
   SP_shift_stat_10__3972->SetBinError(3,0.005022933);
   SP_shift_stat_10__3972->SetBinError(4,0.005404967);
   SP_shift_stat_10__3972->SetBinError(6,0.004243188);
   SP_shift_stat_10__3972->SetBinError(7,0.007374816);
   SP_shift_stat_10__3972->SetBinError(8,0.002600712);
   SP_shift_stat_10__3972->SetEntries(110043.7);
   SP_shift_stat_10__3972->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_10__3972->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_10__3972->SetMarkerColor(ci);
   SP_shift_stat_10__3972->SetMarkerStyle(20);
   SP_shift_stat_10__3972->SetMarkerSize(0.8);
   SP_shift_stat_10__3972->GetXaxis()->SetRange(1,8);
   SP_shift_stat_10__3972->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_10__3972->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_10__3972->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_10__3972->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_10__3972->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_10__3972->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_10__3972->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_10__3972->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_10__3972->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_10__3972->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_10__3972->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_10__3972->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_10__3972->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_10__3972->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_10__3972->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_10__3972->Draw("SAME PZ");
   Double_t xAxis3973[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__3973 = new TH1D("chist_copy__3973","",8, xAxis3973);
   chist_copy__3973->SetMinimum(-0.6);
   chist_copy__3973->SetMaximum(2);
   chist_copy__3973->SetDirectory(nullptr);
   chist_copy__3973->SetStats(0);
   chist_copy__3973->SetLineColor(0);
   chist_copy__3973->SetLineWidth(0);
   chist_copy__3973->SetMarkerColor(0);
   chist_copy__3973->SetMarkerStyle(20);
   chist_copy__3973->SetMarkerSize(0);
   chist_copy__3973->GetXaxis()->SetRange(1,8);
   chist_copy__3973->GetXaxis()->SetNdivisions(4000510);
   chist_copy__3973->GetXaxis()->SetLabelFont(42);
   chist_copy__3973->GetXaxis()->SetLabelSize(0);
   chist_copy__3973->GetXaxis()->SetTitleSize(0.08);
   chist_copy__3973->GetXaxis()->SetTickLength(0.04);
   chist_copy__3973->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__3973->GetXaxis()->SetTitleFont(42);
   chist_copy__3973->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__3973->GetYaxis()->SetNdivisions(3000510);
   chist_copy__3973->GetYaxis()->SetLabelFont(42);
   chist_copy__3973->GetYaxis()->SetLabelSize(0.08);
   chist_copy__3973->GetYaxis()->SetTitleSize(0.08);
   chist_copy__3973->GetYaxis()->SetTickLength(0.04);
   chist_copy__3973->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__3973->GetYaxis()->SetTitleFont(42);
   chist_copy__3973->GetZaxis()->SetLabelFont(42);
   chist_copy__3973->GetZaxis()->SetLabelSize(0.05);
   chist_copy__3973->GetZaxis()->SetTitleSize(0.05);
   chist_copy__3973->GetZaxis()->SetTitleOffset(1);
   chist_copy__3973->GetZaxis()->SetTitleFont(42);
   chist_copy__3973->Draw("sameaxis");
   up__661->Modified();
   c1_n35->cd();
   c1_n35->Modified();
   c1_n35->SetSelected(c1_n35);
}
