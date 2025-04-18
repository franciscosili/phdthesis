#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad__c__pt0080p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n52/
//=========  (Thu Apr  4 19:00:28 2024) by ROOT version 6.30/02
   TCanvas *c1_n52 = new TCanvas("c1_n52", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n52->SetHighLightColor(2);
   c1_n52->Range(0,0,1,1);
   c1_n52->SetFillColor(0);
   c1_n52->SetBorderMode(0);
   c1_n52->SetBorderSize(2);
   c1_n52->SetTickx(1);
   c1_n52->SetTicky(1);
   c1_n52->SetLeftMargin(0.16);
   c1_n52->SetRightMargin(0.05);
   c1_n52->SetTopMargin(0.05);
   c1_n52->SetBottomMargin(0.16);
   c1_n52->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__382 = new TPad("dw", "dw",0,0,1,0.5);
   dw__382->Draw();
   dw__382->cd();
   dw__382->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__382->SetFillColor(0);
   dw__382->SetFillStyle(4000);
   dw__382->SetBorderMode(0);
   dw__382->SetBorderSize(0);
   dw__382->SetTickx(1);
   dw__382->SetTicky(1);
   dw__382->SetLeftMargin(0.120603);
   dw__382->SetRightMargin(0.08040201);
   dw__382->SetTopMargin(0);
   dw__382->SetBottomMargin(0.2072539);
   dw__382->SetFrameBorderMode(0);
   dw__382->SetFrameBorderMode(0);
   Double_t xAxis2298[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__2298 = new TH1D("chist_dw__2298","",8, xAxis2298);
   chist_dw__2298->SetMinimum(0.2);
   chist_dw__2298->SetMaximum(3.2);
   chist_dw__2298->SetDirectory(nullptr);
   chist_dw__2298->SetStats(0);
   chist_dw__2298->SetLineColor(0);
   chist_dw__2298->SetLineWidth(0);
   chist_dw__2298->SetMarkerColor(0);
   chist_dw__2298->SetMarkerStyle(20);
   chist_dw__2298->SetMarkerSize(0);
   chist_dw__2298->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__2298->GetXaxis()->SetRange(1,8);
   chist_dw__2298->GetXaxis()->SetLabelFont(42);
   chist_dw__2298->GetXaxis()->SetLabelSize(0.08);
   chist_dw__2298->GetXaxis()->SetTitleSize(0.08);
   chist_dw__2298->GetXaxis()->SetTickLength(0.04);
   chist_dw__2298->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__2298->GetXaxis()->SetTitleFont(42);
   chist_dw__2298->GetYaxis()->SetTitle("Stretch");
   chist_dw__2298->GetYaxis()->CenterTitle(true);
   chist_dw__2298->GetYaxis()->SetNdivisions(405);
   chist_dw__2298->GetYaxis()->SetLabelFont(42);
   chist_dw__2298->GetYaxis()->SetLabelSize(0.08);
   chist_dw__2298->GetYaxis()->SetTitleSize(0.08);
   chist_dw__2298->GetYaxis()->SetTickLength(0.04);
   chist_dw__2298->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__2298->GetYaxis()->SetTitleFont(42);
   chist_dw__2298->GetZaxis()->SetLabelFont(42);
   chist_dw__2298->GetZaxis()->SetLabelSize(0.05);
   chist_dw__2298->GetZaxis()->SetTitleSize(0.05);
   chist_dw__2298->GetZaxis()->SetTitleOffset(1);
   chist_dw__2298->GetZaxis()->SetTitleFont(42);
   chist_dw__2298->Draw("");
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
   Double_t xAxis2299[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_7__2299 = new TH1D("RZ_stretch_tot_7__2299","",8, xAxis2299);
   RZ_stretch_tot_7__2299->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_7__2299->SetFillColor(ci);
   RZ_stretch_tot_7__2299->SetLineWidth(2);
   RZ_stretch_tot_7__2299->SetMarkerStyle(20);
   RZ_stretch_tot_7__2299->SetMarkerSize(0.8);
   RZ_stretch_tot_7__2299->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_7__2299->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__2299->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__2299->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__2299->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__2299->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__2299->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__2299->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__2299->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__2299->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__2299->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__2299->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__2299->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__2299->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__2299->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_7__2299->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__2299->Draw("SAME E2");
   Double_t xAxis2300[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_7__2300 = new TH1D("RZ_stretch_stat_7__2300","",8, xAxis2300);
   RZ_stretch_stat_7__2300->SetStats(0);
   RZ_stretch_stat_7__2300->SetLineWidth(2);
   RZ_stretch_stat_7__2300->SetMarkerStyle(20);
   RZ_stretch_stat_7__2300->SetMarkerSize(0.8);
   RZ_stretch_stat_7__2300->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_7__2300->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__2300->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__2300->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__2300->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__2300->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__2300->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__2300->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__2300->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__2300->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__2300->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__2300->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__2300->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__2300->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__2300->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_7__2300->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__2300->Draw("SAME PZ");
   Double_t xAxis2301[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_7__2301 = new TH1D("SP_stretch_tot_7__2301","",8, xAxis2301);
   SP_stretch_tot_7__2301->SetBinContent(3,1.15738);
   SP_stretch_tot_7__2301->SetBinContent(4,1.121437);
   SP_stretch_tot_7__2301->SetBinError(3,0.02750054);
   SP_stretch_tot_7__2301->SetBinError(4,0.0215312);
   SP_stretch_tot_7__2301->SetEntries(4257.008);
   SP_stretch_tot_7__2301->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_7__2301->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__2301->SetLineColor(ci);
   SP_stretch_tot_7__2301->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__2301->SetMarkerColor(ci);
   SP_stretch_tot_7__2301->SetMarkerStyle(20);
   SP_stretch_tot_7__2301->SetMarkerSize(0.8);
   SP_stretch_tot_7__2301->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_7__2301->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_7__2301->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__2301->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__2301->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__2301->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_7__2301->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_7__2301->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__2301->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__2301->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__2301->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_7__2301->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_7__2301->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__2301->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__2301->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_7__2301->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_7__2301->Draw("SAME E2");
   Double_t xAxis2302[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_7__2302 = new TH1D("SP_stretch_stat_7__2302","",8, xAxis2302);
   SP_stretch_stat_7__2302->SetBinContent(3,1.15738);
   SP_stretch_stat_7__2302->SetBinContent(4,1.121437);
   SP_stretch_stat_7__2302->SetBinError(3,0.0009299472);
   SP_stretch_stat_7__2302->SetBinError(4,0.0009679062);
   SP_stretch_stat_7__2302->SetEntries(2882370);
   SP_stretch_stat_7__2302->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__2302->SetLineColor(ci);
   SP_stretch_stat_7__2302->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__2302->SetMarkerColor(ci);
   SP_stretch_stat_7__2302->SetMarkerStyle(20);
   SP_stretch_stat_7__2302->SetMarkerSize(0.8);
   SP_stretch_stat_7__2302->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_7__2302->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_7__2302->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__2302->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__2302->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__2302->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_7__2302->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_7__2302->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__2302->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__2302->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__2302->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_7__2302->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_7__2302->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__2302->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__2302->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_7__2302->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_7__2302->Draw("SAME PZ");
   dw__382->Modified();
   c1_n52->cd();
  
// ------------>Primitives in pad: up
   TPad *up__383 = new TPad("up", "up",0,0.5,1,1);
   up__383->Draw();
   up__383->cd();
   up__383->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__383->SetFillColor(0);
   up__383->SetFillStyle(4000);
   up__383->SetBorderMode(0);
   up__383->SetBorderSize(0);
   up__383->SetTickx(1);
   up__383->SetTicky(1);
   up__383->SetLeftMargin(0.120603);
   up__383->SetRightMargin(0.08040201);
   up__383->SetBottomMargin(0.01243523);
   up__383->SetFrameBorderMode(0);
   up__383->SetFrameBorderMode(0);
   Double_t xAxis2303[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__2303 = new TH1D("chist__2303","",8, xAxis2303);
   chist__2303->SetMinimum(-0.7);
   chist__2303->SetMaximum(1.1);
   chist__2303->SetDirectory(nullptr);
   chist__2303->SetStats(0);
   chist__2303->SetLineColor(0);
   chist__2303->SetLineWidth(0);
   chist__2303->SetMarkerColor(0);
   chist__2303->SetMarkerStyle(20);
   chist__2303->SetMarkerSize(0);
   chist__2303->GetXaxis()->SetRange(1,8);
   chist__2303->GetXaxis()->SetNdivisions(4000510);
   chist__2303->GetXaxis()->SetLabelFont(42);
   chist__2303->GetXaxis()->SetLabelSize(0);
   chist__2303->GetXaxis()->SetTitleSize(0.08);
   chist__2303->GetXaxis()->SetTickLength(0.04);
   chist__2303->GetXaxis()->SetTitleOffset(2.020933);
   chist__2303->GetXaxis()->SetTitleFont(42);
   chist__2303->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__2303->GetYaxis()->SetNdivisions(3000510);
   chist__2303->GetYaxis()->SetLabelFont(42);
   chist__2303->GetYaxis()->SetLabelSize(0.08);
   chist__2303->GetYaxis()->SetTitleSize(0.08);
   chist__2303->GetYaxis()->SetTickLength(0.04);
   chist__2303->GetYaxis()->SetTitleOffset(0.727387);
   chist__2303->GetYaxis()->SetTitleFont(42);
   chist__2303->GetZaxis()->SetLabelFont(42);
   chist__2303->GetZaxis()->SetLabelSize(0.05);
   chist__2303->GetZaxis()->SetTitleSize(0.05);
   chist__2303->GetZaxis()->SetTitleOffset(1);
   chist__2303->GetZaxis()->SetTitleFont(42);
   chist__2303->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"R_{had}");
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
      tex = new TLatex(0.160804,0.5098,"80.00 #leq p_{T}^{#gamma} [GeV] < 100.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2304[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_7__2304 = new TH1D("RZ_shift_tot_7__2304","",8, xAxis2304);
   RZ_shift_tot_7__2304->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_7__2304->SetFillColor(ci);
   RZ_shift_tot_7__2304->SetMarkerStyle(20);
   RZ_shift_tot_7__2304->SetMarkerSize(0.8);
   RZ_shift_tot_7__2304->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_7__2304->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_7__2304->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__2304->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__2304->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__2304->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_7__2304->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_7__2304->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__2304->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__2304->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__2304->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_7__2304->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_7__2304->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__2304->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__2304->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_7__2304->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_7__2304->Draw("SAME E2");
   Double_t xAxis2305[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_7__2305 = new TH1D("RZ_shift_stat_7__2305","",8, xAxis2305);
   RZ_shift_stat_7__2305->SetStats(0);
   RZ_shift_stat_7__2305->SetMarkerStyle(20);
   RZ_shift_stat_7__2305->SetMarkerSize(0.8);
   RZ_shift_stat_7__2305->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_7__2305->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_7__2305->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__2305->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__2305->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__2305->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_7__2305->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_7__2305->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__2305->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__2305->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__2305->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_7__2305->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_7__2305->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__2305->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__2305->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_7__2305->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_7__2305->Draw("SAME PZ");
   Double_t xAxis2306[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_7__2306 = new TH1D("SP_shift_tot_7__2306","",8, xAxis2306);
   SP_shift_tot_7__2306->SetBinContent(3,-0.02825538);
   SP_shift_tot_7__2306->SetBinContent(4,0.006442156);
   SP_shift_tot_7__2306->SetBinError(3,0.006082227);
   SP_shift_tot_7__2306->SetBinError(4,0.01190064);
   SP_shift_tot_7__2306->SetEntries(2.663868);
   SP_shift_tot_7__2306->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_7__2306->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__2306->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__2306->SetMarkerColor(ci);
   SP_shift_tot_7__2306->SetMarkerStyle(20);
   SP_shift_tot_7__2306->SetMarkerSize(0.8);
   SP_shift_tot_7__2306->GetXaxis()->SetRange(1,8);
   SP_shift_tot_7__2306->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_7__2306->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__2306->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__2306->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__2306->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_7__2306->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_7__2306->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__2306->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__2306->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__2306->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_7__2306->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_7__2306->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__2306->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__2306->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_7__2306->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_7__2306->Draw("SAME E2");
   Double_t xAxis2307[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_7__2307 = new TH1D("SP_shift_stat_7__2307","",8, xAxis2307);
   SP_shift_stat_7__2307->SetBinContent(3,-0.02825538);
   SP_shift_stat_7__2307->SetBinContent(4,0.006442156);
   SP_shift_stat_7__2307->SetBinError(3,0.0003953509);
   SP_shift_stat_7__2307->SetBinError(4,0.000503027);
   SP_shift_stat_7__2307->SetEntries(1162.404);
   SP_shift_stat_7__2307->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__2307->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__2307->SetMarkerColor(ci);
   SP_shift_stat_7__2307->SetMarkerStyle(20);
   SP_shift_stat_7__2307->SetMarkerSize(0.8);
   SP_shift_stat_7__2307->GetXaxis()->SetRange(1,8);
   SP_shift_stat_7__2307->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_7__2307->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__2307->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__2307->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__2307->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_7__2307->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_7__2307->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__2307->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__2307->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__2307->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_7__2307->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_7__2307->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__2307->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__2307->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_7__2307->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_7__2307->Draw("SAME PZ");
   Double_t xAxis2308[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__2308 = new TH1D("chist_copy__2308","",8, xAxis2308);
   chist_copy__2308->SetMinimum(-0.7);
   chist_copy__2308->SetMaximum(1.1);
   chist_copy__2308->SetDirectory(nullptr);
   chist_copy__2308->SetStats(0);
   chist_copy__2308->SetLineColor(0);
   chist_copy__2308->SetLineWidth(0);
   chist_copy__2308->SetMarkerColor(0);
   chist_copy__2308->SetMarkerStyle(20);
   chist_copy__2308->SetMarkerSize(0);
   chist_copy__2308->GetXaxis()->SetRange(1,8);
   chist_copy__2308->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2308->GetXaxis()->SetLabelFont(42);
   chist_copy__2308->GetXaxis()->SetLabelSize(0);
   chist_copy__2308->GetXaxis()->SetTitleSize(0.08);
   chist_copy__2308->GetXaxis()->SetTickLength(0.04);
   chist_copy__2308->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__2308->GetXaxis()->SetTitleFont(42);
   chist_copy__2308->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__2308->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2308->GetYaxis()->SetLabelFont(42);
   chist_copy__2308->GetYaxis()->SetLabelSize(0.08);
   chist_copy__2308->GetYaxis()->SetTitleSize(0.08);
   chist_copy__2308->GetYaxis()->SetTickLength(0.04);
   chist_copy__2308->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__2308->GetYaxis()->SetTitleFont(42);
   chist_copy__2308->GetZaxis()->SetLabelFont(42);
   chist_copy__2308->GetZaxis()->SetLabelSize(0.05);
   chist_copy__2308->GetZaxis()->SetTitleSize(0.05);
   chist_copy__2308->GetZaxis()->SetTitleOffset(1);
   chist_copy__2308->GetZaxis()->SetTitleFont(42);
   chist_copy__2308->Draw("sameaxis");
   up__383->Modified();
   c1_n52->cd();
   c1_n52->Modified();
   c1_n52->SetSelected(c1_n52);
}
