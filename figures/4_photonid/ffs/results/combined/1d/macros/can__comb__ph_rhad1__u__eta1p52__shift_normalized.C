#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad1__u__eta1p52__shift_normalized()
{
//=========Macro generated from canvas: c1_n22/
//=========  (Thu Apr  4 19:00:30 2024) by ROOT version 6.30/02
   TCanvas *c1_n22 = new TCanvas("c1_n22", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n22->SetHighLightColor(2);
   c1_n22->Range(0,0,1,1);
   c1_n22->SetFillColor(0);
   c1_n22->SetBorderMode(0);
   c1_n22->SetBorderSize(2);
   c1_n22->SetTickx(1);
   c1_n22->SetTicky(1);
   c1_n22->SetLeftMargin(0.16);
   c1_n22->SetRightMargin(0.05);
   c1_n22->SetTopMargin(0.05);
   c1_n22->SetBottomMargin(0.16);
   c1_n22->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__428 = new TPad("dw", "dw",0,0,1,0.5);
   dw__428->Draw();
   dw__428->cd();
   dw__428->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__428->SetFillColor(0);
   dw__428->SetFillStyle(4000);
   dw__428->SetBorderMode(0);
   dw__428->SetBorderSize(0);
   dw__428->SetLogx();
   dw__428->SetTickx(1);
   dw__428->SetTicky(1);
   dw__428->SetLeftMargin(0.120603);
   dw__428->SetRightMargin(0.08040201);
   dw__428->SetTopMargin(0);
   dw__428->SetBottomMargin(0.2072539);
   dw__428->SetFrameBorderMode(0);
   dw__428->SetFrameBorderMode(0);
   Double_t xAxis2583[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__2583 = new TH1D("chist_dw__2583","",11, xAxis2583);
   chist_dw__2583->SetMinimum(0.2);
   chist_dw__2583->SetMaximum(3.2);
   chist_dw__2583->SetDirectory(nullptr);
   chist_dw__2583->SetStats(0);
   chist_dw__2583->SetLineColor(0);
   chist_dw__2583->SetLineWidth(0);
   chist_dw__2583->SetMarkerColor(0);
   chist_dw__2583->SetMarkerStyle(20);
   chist_dw__2583->SetMarkerSize(0);
   chist_dw__2583->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__2583->GetXaxis()->SetRange(1,8);
   chist_dw__2583->GetXaxis()->SetMoreLogLabels();
   chist_dw__2583->GetXaxis()->SetLabelFont(42);
   chist_dw__2583->GetXaxis()->SetLabelSize(0.08);
   chist_dw__2583->GetXaxis()->SetTitleSize(0.08);
   chist_dw__2583->GetXaxis()->SetTickLength(0.04);
   chist_dw__2583->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__2583->GetXaxis()->SetTitleFont(42);
   chist_dw__2583->GetYaxis()->SetTitle("Stretch");
   chist_dw__2583->GetYaxis()->CenterTitle(true);
   chist_dw__2583->GetYaxis()->SetNdivisions(405);
   chist_dw__2583->GetYaxis()->SetLabelFont(42);
   chist_dw__2583->GetYaxis()->SetLabelSize(0.08);
   chist_dw__2583->GetYaxis()->SetTitleSize(0.08);
   chist_dw__2583->GetYaxis()->SetTickLength(0.04);
   chist_dw__2583->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__2583->GetYaxis()->SetTitleFont(42);
   chist_dw__2583->GetZaxis()->SetLabelFont(42);
   chist_dw__2583->GetZaxis()->SetLabelSize(0.05);
   chist_dw__2583->GetZaxis()->SetTitleSize(0.05);
   chist_dw__2583->GetZaxis()->SetTitleOffset(1);
   chist_dw__2583->GetZaxis()->SetTitleFont(42);
   chist_dw__2583->Draw("");
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
   Double_t xAxis2584[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_6__2584 = new TH1D("RZ_stretch_tot_6__2584","",11, xAxis2584);
   RZ_stretch_tot_6__2584->SetBinContent(1,1.000987);
   RZ_stretch_tot_6__2584->SetBinContent(2,1.00693);
   RZ_stretch_tot_6__2584->SetBinContent(3,0.991244);
   RZ_stretch_tot_6__2584->SetBinContent(4,1.001342);
   RZ_stretch_tot_6__2584->SetBinError(1,0.002346762);
   RZ_stretch_tot_6__2584->SetBinError(2,0.01457001);
   RZ_stretch_tot_6__2584->SetBinError(3,0.02022874);
   RZ_stretch_tot_6__2584->SetBinError(4,0.03542007);
   RZ_stretch_tot_6__2584->SetEntries(8505.649);
   RZ_stretch_tot_6__2584->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_6__2584->SetFillColor(ci);
   RZ_stretch_tot_6__2584->SetLineWidth(2);
   RZ_stretch_tot_6__2584->SetMarkerStyle(20);
   RZ_stretch_tot_6__2584->SetMarkerSize(0.8);
   RZ_stretch_tot_6__2584->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_6__2584->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2584->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2584->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2584->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__2584->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2584->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2584->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2584->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2584->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__2584->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2584->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2584->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2584->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2584->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_6__2584->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2584->Draw("SAME E2");
   Double_t xAxis2585[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_6__2585 = new TH1D("RZ_stretch_stat_6__2585","",11, xAxis2585);
   RZ_stretch_stat_6__2585->SetBinContent(1,1.000987);
   RZ_stretch_stat_6__2585->SetBinContent(2,1.00693);
   RZ_stretch_stat_6__2585->SetBinContent(3,0.991244);
   RZ_stretch_stat_6__2585->SetBinContent(4,1.001342);
   RZ_stretch_stat_6__2585->SetBinError(1,0.002084339);
   RZ_stretch_stat_6__2585->SetBinError(2,0.01414207);
   RZ_stretch_stat_6__2585->SetBinError(3,0.01631393);
   RZ_stretch_stat_6__2585->SetBinError(4,0.02980889);
   RZ_stretch_stat_6__2585->SetEntries(11775.83);
   RZ_stretch_stat_6__2585->SetStats(0);
   RZ_stretch_stat_6__2585->SetLineWidth(2);
   RZ_stretch_stat_6__2585->SetMarkerStyle(20);
   RZ_stretch_stat_6__2585->SetMarkerSize(0.8);
   RZ_stretch_stat_6__2585->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_6__2585->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2585->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2585->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2585->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__2585->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2585->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2585->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2585->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2585->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__2585->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2585->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2585->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2585->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2585->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_6__2585->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2585->Draw("SAME PZ");
   Double_t xAxis2586[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_6__2586 = new TH1D("SP_stretch_tot_6__2586","",11, xAxis2586);
   SP_stretch_tot_6__2586->SetBinContent(5,1.006199);
   SP_stretch_tot_6__2586->SetBinContent(6,1.012592);
   SP_stretch_tot_6__2586->SetBinContent(7,1.008316);
   SP_stretch_tot_6__2586->SetBinContent(8,0.9795901);
   SP_stretch_tot_6__2586->SetBinContent(9,0.9765621);
   SP_stretch_tot_6__2586->SetBinContent(10,0.9294073);
   SP_stretch_tot_6__2586->SetBinContent(11,0.9512767);
   SP_stretch_tot_6__2586->SetBinError(5,0.002202878);
   SP_stretch_tot_6__2586->SetBinError(6,0.01050617);
   SP_stretch_tot_6__2586->SetBinError(7,0.006323625);
   SP_stretch_tot_6__2586->SetBinError(8,0.01542371);
   SP_stretch_tot_6__2586->SetBinError(9,0.01739987);
   SP_stretch_tot_6__2586->SetBinError(10,0.02248206);
   SP_stretch_tot_6__2586->SetBinError(11,0.04445176);
   SP_stretch_tot_6__2586->SetEntries(14828.37);
   SP_stretch_tot_6__2586->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_6__2586->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__2586->SetLineColor(ci);
   SP_stretch_tot_6__2586->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__2586->SetMarkerColor(ci);
   SP_stretch_tot_6__2586->SetMarkerStyle(20);
   SP_stretch_tot_6__2586->SetMarkerSize(0.8);
   SP_stretch_tot_6__2586->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_6__2586->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2586->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2586->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2586->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__2586->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2586->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2586->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2586->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2586->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__2586->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2586->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2586->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2586->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2586->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_6__2586->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2586->Draw("SAME E2");
   Double_t xAxis2587[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_6__2587 = new TH1D("SP_stretch_stat_6__2587","",11, xAxis2587);
   SP_stretch_stat_6__2587->SetBinContent(5,1.006199);
   SP_stretch_stat_6__2587->SetBinContent(6,1.012592);
   SP_stretch_stat_6__2587->SetBinContent(7,1.008316);
   SP_stretch_stat_6__2587->SetBinContent(8,0.9795901);
   SP_stretch_stat_6__2587->SetBinContent(9,0.9765621);
   SP_stretch_stat_6__2587->SetBinContent(10,0.9294073);
   SP_stretch_stat_6__2587->SetBinContent(11,0.9512767);
   SP_stretch_stat_6__2587->SetBinError(5,0.0002763783);
   SP_stretch_stat_6__2587->SetBinError(6,0.0002995649);
   SP_stretch_stat_6__2587->SetBinError(7,0.0004899805);
   SP_stretch_stat_6__2587->SetBinError(8,0.0008426993);
   SP_stretch_stat_6__2587->SetBinError(9,0.001459252);
   SP_stretch_stat_6__2587->SetBinError(10,0.006664186);
   SP_stretch_stat_6__2587->SetBinError(11,0.04150735);
   SP_stretch_stat_6__2587->SetEntries(26610.14);
   SP_stretch_stat_6__2587->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__2587->SetLineColor(ci);
   SP_stretch_stat_6__2587->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__2587->SetMarkerColor(ci);
   SP_stretch_stat_6__2587->SetMarkerStyle(20);
   SP_stretch_stat_6__2587->SetMarkerSize(0.8);
   SP_stretch_stat_6__2587->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_6__2587->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2587->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2587->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2587->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__2587->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2587->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2587->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2587->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2587->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__2587->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2587->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2587->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2587->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2587->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_6__2587->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2587->Draw("SAME PZ");
   dw__428->Modified();
   c1_n22->cd();
  
// ------------>Primitives in pad: up
   TPad *up__429 = new TPad("up", "up",0,0.5,1,1);
   up__429->Draw();
   up__429->cd();
   up__429->Range(0.4143249,-0.7253224,3.986152,1.31102);
   up__429->SetFillColor(0);
   up__429->SetFillStyle(4000);
   up__429->SetBorderMode(0);
   up__429->SetBorderSize(0);
   up__429->SetLogx();
   up__429->SetTickx(1);
   up__429->SetTicky(1);
   up__429->SetLeftMargin(0.120603);
   up__429->SetRightMargin(0.08040201);
   up__429->SetBottomMargin(0.01243523);
   up__429->SetFrameBorderMode(0);
   up__429->SetFrameBorderMode(0);
   Double_t xAxis2588[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__2588 = new TH1D("chist__2588","",11, xAxis2588);
   chist__2588->SetMinimum(-0.7);
   chist__2588->SetMaximum(1.1);
   chist__2588->SetDirectory(nullptr);
   chist__2588->SetStats(0);
   chist__2588->SetLineColor(0);
   chist__2588->SetLineWidth(0);
   chist__2588->SetMarkerColor(0);
   chist__2588->SetMarkerStyle(20);
   chist__2588->SetMarkerSize(0);
   chist__2588->GetXaxis()->SetRange(1,8);
   chist__2588->GetXaxis()->SetNdivisions(4000510);
   chist__2588->GetXaxis()->SetLabelFont(42);
   chist__2588->GetXaxis()->SetLabelSize(0);
   chist__2588->GetXaxis()->SetTitleSize(0.08);
   chist__2588->GetXaxis()->SetTickLength(0.04);
   chist__2588->GetXaxis()->SetTitleOffset(2.020933);
   chist__2588->GetXaxis()->SetTitleFont(42);
   chist__2588->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__2588->GetYaxis()->SetNdivisions(3000510);
   chist__2588->GetYaxis()->SetLabelFont(42);
   chist__2588->GetYaxis()->SetLabelSize(0.08);
   chist__2588->GetYaxis()->SetTitleSize(0.08);
   chist__2588->GetYaxis()->SetTickLength(0.04);
   chist__2588->GetYaxis()->SetTitleOffset(0.727387);
   chist__2588->GetYaxis()->SetTitleFont(42);
   chist__2588->GetZaxis()->SetLabelFont(42);
   chist__2588->GetZaxis()->SetLabelSize(0.05);
   chist__2588->GetZaxis()->SetTitleSize(0.05);
   chist__2588->GetZaxis()->SetTitleOffset(1);
   chist__2588->GetZaxis()->SetTitleFont(42);
   chist__2588->Draw("pe");
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
      tex = new TLatex(0.160804,0.5714,"Unconverted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"1.52 #leq |#eta^{#gamma}| < 1.81");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2589[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_6__2589 = new TH1D("RZ_shift_tot_6__2589","",11, xAxis2589);
   RZ_shift_tot_6__2589->SetBinContent(1,0.03852594);
   RZ_shift_tot_6__2589->SetBinContent(2,0.02617343);
   RZ_shift_tot_6__2589->SetBinContent(3,0.03194437);
   RZ_shift_tot_6__2589->SetBinContent(4,0.03536621);
   RZ_shift_tot_6__2589->SetBinError(1,0.0206948);
   RZ_shift_tot_6__2589->SetBinError(2,0.02339841);
   RZ_shift_tot_6__2589->SetBinError(3,0.02139543);
   RZ_shift_tot_6__2589->SetBinError(4,0.02804425);
   RZ_shift_tot_6__2589->SetEntries(7.849814);
   RZ_shift_tot_6__2589->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_6__2589->SetFillColor(ci);
   RZ_shift_tot_6__2589->SetMarkerStyle(20);
   RZ_shift_tot_6__2589->SetMarkerSize(0.8);
   RZ_shift_tot_6__2589->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_6__2589->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2589->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2589->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2589->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__2589->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2589->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2589->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2589->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2589->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__2589->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2589->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2589->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2589->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2589->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_6__2589->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2589->Draw("SAME E2");
   Double_t xAxis2590[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_6__2590 = new TH1D("RZ_shift_stat_6__2590","",11, xAxis2590);
   RZ_shift_stat_6__2590->SetBinContent(1,0.03852594);
   RZ_shift_stat_6__2590->SetBinContent(2,0.02617343);
   RZ_shift_stat_6__2590->SetBinContent(3,0.03194437);
   RZ_shift_stat_6__2590->SetBinContent(4,0.03536621);
   RZ_shift_stat_6__2590->SetBinError(1,0.01480006);
   RZ_shift_stat_6__2590->SetBinError(2,0.01937943);
   RZ_shift_stat_6__2590->SetBinError(3,0.01752998);
   RZ_shift_stat_6__2590->SetBinError(4,0.02782533);
   RZ_shift_stat_6__2590->SetEntries(10.39679);
   RZ_shift_stat_6__2590->SetStats(0);
   RZ_shift_stat_6__2590->SetMarkerStyle(20);
   RZ_shift_stat_6__2590->SetMarkerSize(0.8);
   RZ_shift_stat_6__2590->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_6__2590->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2590->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2590->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2590->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__2590->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2590->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2590->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2590->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2590->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__2590->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2590->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2590->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2590->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2590->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_6__2590->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2590->Draw("SAME PZ");
   Double_t xAxis2591[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_6__2591 = new TH1D("SP_shift_tot_6__2591","",11, xAxis2591);
   SP_shift_tot_6__2591->SetBinContent(5,0.01177937);
   SP_shift_tot_6__2591->SetBinContent(6,0.01196309);
   SP_shift_tot_6__2591->SetBinContent(7,0.0004663492);
   SP_shift_tot_6__2591->SetBinContent(8,0.007586301);
   SP_shift_tot_6__2591->SetBinContent(9,-0.02434199);
   SP_shift_tot_6__2591->SetBinContent(10,-0.03600644);
   SP_shift_tot_6__2591->SetBinContent(11,-0.06269348);
   SP_shift_tot_6__2591->SetBinError(5,0.005414829);
   SP_shift_tot_6__2591->SetBinError(6,0.008069769);
   SP_shift_tot_6__2591->SetBinError(7,0.00446079);
   SP_shift_tot_6__2591->SetBinError(8,0.00691048);
   SP_shift_tot_6__2591->SetBinError(9,0.005517943);
   SP_shift_tot_6__2591->SetBinError(10,0.005271341);
   SP_shift_tot_6__2591->SetBinError(11,0.02120742);
   SP_shift_tot_6__2591->SetEntries(12.42527);
   SP_shift_tot_6__2591->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_6__2591->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__2591->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__2591->SetMarkerColor(ci);
   SP_shift_tot_6__2591->SetMarkerStyle(20);
   SP_shift_tot_6__2591->SetMarkerSize(0.8);
   SP_shift_tot_6__2591->GetXaxis()->SetRange(1,8);
   SP_shift_tot_6__2591->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_6__2591->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2591->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2591->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__2591->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_6__2591->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_6__2591->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2591->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2591->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__2591->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_6__2591->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_6__2591->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2591->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2591->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_6__2591->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_6__2591->Draw("SAME E2");
   Double_t xAxis2592[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_6__2592 = new TH1D("SP_shift_stat_6__2592","",11, xAxis2592);
   SP_shift_stat_6__2592->SetBinContent(5,0.01177937);
   SP_shift_stat_6__2592->SetBinContent(6,0.01196309);
   SP_shift_stat_6__2592->SetBinContent(7,0.0004663492);
   SP_shift_stat_6__2592->SetBinContent(8,0.007586301);
   SP_shift_stat_6__2592->SetBinContent(9,-0.02434199);
   SP_shift_stat_6__2592->SetBinContent(10,-0.03600644);
   SP_shift_stat_6__2592->SetBinContent(11,-0.06269348);
   SP_shift_stat_6__2592->SetBinError(5,0.0002884605);
   SP_shift_stat_6__2592->SetBinError(6,0.0003229073);
   SP_shift_stat_6__2592->SetBinError(7,0.0005419617);
   SP_shift_stat_6__2592->SetBinError(8,0.0006970764);
   SP_shift_stat_6__2592->SetBinError(9,0.001022458);
   SP_shift_stat_6__2592->SetBinError(10,0.003519783);
   SP_shift_stat_6__2592->SetBinError(11,0.02069625);
   SP_shift_stat_6__2592->SetEntries(18.80572);
   SP_shift_stat_6__2592->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__2592->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__2592->SetMarkerColor(ci);
   SP_shift_stat_6__2592->SetMarkerStyle(20);
   SP_shift_stat_6__2592->SetMarkerSize(0.8);
   SP_shift_stat_6__2592->GetXaxis()->SetRange(1,8);
   SP_shift_stat_6__2592->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_6__2592->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2592->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2592->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__2592->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_6__2592->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_6__2592->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2592->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2592->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__2592->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_6__2592->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_6__2592->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2592->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2592->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_6__2592->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_6__2592->Draw("SAME PZ");
   Double_t xAxis2593[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__2593 = new TH1D("chist_copy__2593","",11, xAxis2593);
   chist_copy__2593->SetMinimum(-0.7);
   chist_copy__2593->SetMaximum(1.1);
   chist_copy__2593->SetDirectory(nullptr);
   chist_copy__2593->SetStats(0);
   chist_copy__2593->SetLineColor(0);
   chist_copy__2593->SetLineWidth(0);
   chist_copy__2593->SetMarkerColor(0);
   chist_copy__2593->SetMarkerStyle(20);
   chist_copy__2593->SetMarkerSize(0);
   chist_copy__2593->GetXaxis()->SetRange(1,8);
   chist_copy__2593->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2593->GetXaxis()->SetLabelFont(42);
   chist_copy__2593->GetXaxis()->SetLabelSize(0);
   chist_copy__2593->GetXaxis()->SetTitleSize(0.08);
   chist_copy__2593->GetXaxis()->SetTickLength(0.04);
   chist_copy__2593->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__2593->GetXaxis()->SetTitleFont(42);
   chist_copy__2593->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__2593->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2593->GetYaxis()->SetLabelFont(42);
   chist_copy__2593->GetYaxis()->SetLabelSize(0.08);
   chist_copy__2593->GetYaxis()->SetTitleSize(0.08);
   chist_copy__2593->GetYaxis()->SetTickLength(0.04);
   chist_copy__2593->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__2593->GetYaxis()->SetTitleFont(42);
   chist_copy__2593->GetZaxis()->SetLabelFont(42);
   chist_copy__2593->GetZaxis()->SetLabelSize(0.05);
   chist_copy__2593->GetZaxis()->SetTitleSize(0.05);
   chist_copy__2593->GetZaxis()->SetTitleOffset(1);
   chist_copy__2593->GetZaxis()->SetTitleFont(42);
   chist_copy__2593->Draw("sameaxis");
   up__429->Modified();
   c1_n22->cd();
   c1_n22->Modified();
   c1_n22->SetSelected(c1_n22);
}
