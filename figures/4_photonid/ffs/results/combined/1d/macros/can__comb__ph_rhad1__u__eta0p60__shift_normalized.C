#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad1__u__eta0p60__shift_normalized()
{
//=========Macro generated from canvas: c1_n21/
//=========  (Thu Apr  4 19:00:30 2024) by ROOT version 6.30/02
   TCanvas *c1_n21 = new TCanvas("c1_n21", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n21->SetHighLightColor(2);
   c1_n21->Range(0,0,1,1);
   c1_n21->SetFillColor(0);
   c1_n21->SetBorderMode(0);
   c1_n21->SetBorderSize(2);
   c1_n21->SetTickx(1);
   c1_n21->SetTicky(1);
   c1_n21->SetLeftMargin(0.16);
   c1_n21->SetRightMargin(0.05);
   c1_n21->SetTopMargin(0.05);
   c1_n21->SetBottomMargin(0.16);
   c1_n21->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__426 = new TPad("dw", "dw",0,0,1,0.5);
   dw__426->Draw();
   dw__426->cd();
   dw__426->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__426->SetFillColor(0);
   dw__426->SetFillStyle(4000);
   dw__426->SetBorderMode(0);
   dw__426->SetBorderSize(0);
   dw__426->SetLogx();
   dw__426->SetTickx(1);
   dw__426->SetTicky(1);
   dw__426->SetLeftMargin(0.120603);
   dw__426->SetRightMargin(0.08040201);
   dw__426->SetTopMargin(0);
   dw__426->SetBottomMargin(0.2072539);
   dw__426->SetFrameBorderMode(0);
   dw__426->SetFrameBorderMode(0);
   Double_t xAxis2572[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__2572 = new TH1D("chist_dw__2572","",11, xAxis2572);
   chist_dw__2572->SetMinimum(0.2);
   chist_dw__2572->SetMaximum(3.2);
   chist_dw__2572->SetDirectory(nullptr);
   chist_dw__2572->SetStats(0);
   chist_dw__2572->SetLineColor(0);
   chist_dw__2572->SetLineWidth(0);
   chist_dw__2572->SetMarkerColor(0);
   chist_dw__2572->SetMarkerStyle(20);
   chist_dw__2572->SetMarkerSize(0);
   chist_dw__2572->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__2572->GetXaxis()->SetRange(1,8);
   chist_dw__2572->GetXaxis()->SetMoreLogLabels();
   chist_dw__2572->GetXaxis()->SetLabelFont(42);
   chist_dw__2572->GetXaxis()->SetLabelSize(0.08);
   chist_dw__2572->GetXaxis()->SetTitleSize(0.08);
   chist_dw__2572->GetXaxis()->SetTickLength(0.04);
   chist_dw__2572->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__2572->GetXaxis()->SetTitleFont(42);
   chist_dw__2572->GetYaxis()->SetTitle("Stretch");
   chist_dw__2572->GetYaxis()->CenterTitle(true);
   chist_dw__2572->GetYaxis()->SetNdivisions(405);
   chist_dw__2572->GetYaxis()->SetLabelFont(42);
   chist_dw__2572->GetYaxis()->SetLabelSize(0.08);
   chist_dw__2572->GetYaxis()->SetTitleSize(0.08);
   chist_dw__2572->GetYaxis()->SetTickLength(0.04);
   chist_dw__2572->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__2572->GetYaxis()->SetTitleFont(42);
   chist_dw__2572->GetZaxis()->SetLabelFont(42);
   chist_dw__2572->GetZaxis()->SetLabelSize(0.05);
   chist_dw__2572->GetZaxis()->SetTitleSize(0.05);
   chist_dw__2572->GetZaxis()->SetTitleOffset(1);
   chist_dw__2572->GetZaxis()->SetTitleFont(42);
   chist_dw__2572->Draw("");
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
   Double_t xAxis2573[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_2__2573 = new TH1D("RZ_stretch_tot_2__2573","",11, xAxis2573);
   RZ_stretch_tot_2__2573->SetBinContent(1,1.123628);
   RZ_stretch_tot_2__2573->SetBinContent(2,1.157114);
   RZ_stretch_tot_2__2573->SetBinContent(3,1.148771);
   RZ_stretch_tot_2__2573->SetBinContent(4,1.132136);
   RZ_stretch_tot_2__2573->SetBinError(1,0.01664333);
   RZ_stretch_tot_2__2573->SetBinError(2,0.02513589);
   RZ_stretch_tot_2__2573->SetBinError(3,0.02212493);
   RZ_stretch_tot_2__2573->SetBinError(4,0.04270034);
   RZ_stretch_tot_2__2573->SetEntries(6459.012);
   RZ_stretch_tot_2__2573->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_2__2573->SetFillColor(ci);
   RZ_stretch_tot_2__2573->SetLineWidth(2);
   RZ_stretch_tot_2__2573->SetMarkerStyle(20);
   RZ_stretch_tot_2__2573->SetMarkerSize(0.8);
   RZ_stretch_tot_2__2573->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_2__2573->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__2573->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__2573->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__2573->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__2573->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__2573->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__2573->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__2573->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__2573->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__2573->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__2573->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__2573->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__2573->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__2573->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_2__2573->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__2573->Draw("SAME E2");
   Double_t xAxis2574[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_2__2574 = new TH1D("RZ_stretch_stat_2__2574","",11, xAxis2574);
   RZ_stretch_stat_2__2574->SetBinContent(1,1.123628);
   RZ_stretch_stat_2__2574->SetBinContent(2,1.157114);
   RZ_stretch_stat_2__2574->SetBinContent(3,1.148771);
   RZ_stretch_stat_2__2574->SetBinContent(4,1.132136);
   RZ_stretch_stat_2__2574->SetBinError(1,0.01525092);
   RZ_stretch_stat_2__2574->SetBinError(2,0.0219778);
   RZ_stretch_stat_2__2574->SetBinError(3,0.02183606);
   RZ_stretch_stat_2__2574->SetBinError(4,0.0369938);
   RZ_stretch_stat_2__2574->SetEntries(8125.3);
   RZ_stretch_stat_2__2574->SetStats(0);
   RZ_stretch_stat_2__2574->SetLineWidth(2);
   RZ_stretch_stat_2__2574->SetMarkerStyle(20);
   RZ_stretch_stat_2__2574->SetMarkerSize(0.8);
   RZ_stretch_stat_2__2574->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_2__2574->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__2574->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__2574->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__2574->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__2574->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__2574->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__2574->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__2574->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__2574->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__2574->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__2574->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__2574->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__2574->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__2574->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_2__2574->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__2574->Draw("SAME PZ");
   Double_t xAxis2575[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_2__2575 = new TH1D("SP_stretch_tot_2__2575","",11, xAxis2575);
   SP_stretch_tot_2__2575->SetBinContent(5,1.140242);
   SP_stretch_tot_2__2575->SetBinContent(6,1.13785);
   SP_stretch_tot_2__2575->SetBinContent(7,1.119034);
   SP_stretch_tot_2__2575->SetBinContent(8,1.029856);
   SP_stretch_tot_2__2575->SetBinContent(9,1.032445);
   SP_stretch_tot_2__2575->SetBinContent(10,1.021501);
   SP_stretch_tot_2__2575->SetBinContent(11,0.8720678);
   SP_stretch_tot_2__2575->SetBinError(5,0.0008214871);
   SP_stretch_tot_2__2575->SetBinError(6,0.0009358563);
   SP_stretch_tot_2__2575->SetBinError(7,0.001089904);
   SP_stretch_tot_2__2575->SetBinError(8,0.0006417427);
   SP_stretch_tot_2__2575->SetBinError(9,0.0004879528);
   SP_stretch_tot_2__2575->SetBinError(10,0.1598845);
   SP_stretch_tot_2__2575->SetBinError(11,0.1088598);
   SP_stretch_tot_2__2575->SetEntries(1444.977);
   SP_stretch_tot_2__2575->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_2__2575->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__2575->SetLineColor(ci);
   SP_stretch_tot_2__2575->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__2575->SetMarkerColor(ci);
   SP_stretch_tot_2__2575->SetMarkerStyle(20);
   SP_stretch_tot_2__2575->SetMarkerSize(0.8);
   SP_stretch_tot_2__2575->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_2__2575->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_2__2575->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__2575->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__2575->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__2575->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_2__2575->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_2__2575->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__2575->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__2575->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__2575->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_2__2575->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_2__2575->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__2575->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__2575->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_2__2575->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_2__2575->Draw("SAME E2");
   Double_t xAxis2576[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_2__2576 = new TH1D("SP_stretch_stat_2__2576","",11, xAxis2576);
   SP_stretch_stat_2__2576->SetBinContent(5,1.140242);
   SP_stretch_stat_2__2576->SetBinContent(6,1.13785);
   SP_stretch_stat_2__2576->SetBinContent(7,1.119034);
   SP_stretch_stat_2__2576->SetBinContent(8,1.029856);
   SP_stretch_stat_2__2576->SetBinContent(9,1.032445);
   SP_stretch_stat_2__2576->SetBinContent(10,1.021501);
   SP_stretch_stat_2__2576->SetBinContent(11,0.8720678);
   SP_stretch_stat_2__2576->SetBinError(5,0.0002643492);
   SP_stretch_stat_2__2576->SetBinError(6,0.0003514773);
   SP_stretch_stat_2__2576->SetBinError(7,0.0005637573);
   SP_stretch_stat_2__2576->SetBinError(8,0.0002607184);
   SP_stretch_stat_2__2576->SetBinError(9,0.0004780111);
   SP_stretch_stat_2__2576->SetBinError(10,0.001767218);
   SP_stretch_stat_2__2576->SetBinError(11,0.01548212);
   SP_stretch_stat_2__2576->SetEntries(221923.6);
   SP_stretch_stat_2__2576->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__2576->SetLineColor(ci);
   SP_stretch_stat_2__2576->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__2576->SetMarkerColor(ci);
   SP_stretch_stat_2__2576->SetMarkerStyle(20);
   SP_stretch_stat_2__2576->SetMarkerSize(0.8);
   SP_stretch_stat_2__2576->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_2__2576->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_2__2576->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__2576->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__2576->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__2576->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_2__2576->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_2__2576->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__2576->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__2576->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__2576->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_2__2576->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_2__2576->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__2576->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__2576->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_2__2576->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_2__2576->Draw("SAME PZ");
   dw__426->Modified();
   c1_n21->cd();
  
// ------------>Primitives in pad: up
   TPad *up__427 = new TPad("up", "up",0,0.5,1,1);
   up__427->Draw();
   up__427->cd();
   up__427->Range(0.4143249,-0.7253224,3.986152,1.31102);
   up__427->SetFillColor(0);
   up__427->SetFillStyle(4000);
   up__427->SetBorderMode(0);
   up__427->SetBorderSize(0);
   up__427->SetLogx();
   up__427->SetTickx(1);
   up__427->SetTicky(1);
   up__427->SetLeftMargin(0.120603);
   up__427->SetRightMargin(0.08040201);
   up__427->SetBottomMargin(0.01243523);
   up__427->SetFrameBorderMode(0);
   up__427->SetFrameBorderMode(0);
   Double_t xAxis2577[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__2577 = new TH1D("chist__2577","",11, xAxis2577);
   chist__2577->SetMinimum(-0.7);
   chist__2577->SetMaximum(1.1);
   chist__2577->SetDirectory(nullptr);
   chist__2577->SetStats(0);
   chist__2577->SetLineColor(0);
   chist__2577->SetLineWidth(0);
   chist__2577->SetMarkerColor(0);
   chist__2577->SetMarkerStyle(20);
   chist__2577->SetMarkerSize(0);
   chist__2577->GetXaxis()->SetRange(1,8);
   chist__2577->GetXaxis()->SetNdivisions(4000510);
   chist__2577->GetXaxis()->SetLabelFont(42);
   chist__2577->GetXaxis()->SetLabelSize(0);
   chist__2577->GetXaxis()->SetTitleSize(0.08);
   chist__2577->GetXaxis()->SetTickLength(0.04);
   chist__2577->GetXaxis()->SetTitleOffset(2.020933);
   chist__2577->GetXaxis()->SetTitleFont(42);
   chist__2577->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__2577->GetYaxis()->SetNdivisions(3000510);
   chist__2577->GetYaxis()->SetLabelFont(42);
   chist__2577->GetYaxis()->SetLabelSize(0.08);
   chist__2577->GetYaxis()->SetTitleSize(0.08);
   chist__2577->GetYaxis()->SetTickLength(0.04);
   chist__2577->GetYaxis()->SetTitleOffset(0.727387);
   chist__2577->GetYaxis()->SetTitleFont(42);
   chist__2577->GetZaxis()->SetLabelFont(42);
   chist__2577->GetZaxis()->SetLabelSize(0.05);
   chist__2577->GetZaxis()->SetTitleSize(0.05);
   chist__2577->GetZaxis()->SetTitleOffset(1);
   chist__2577->GetZaxis()->SetTitleFont(42);
   chist__2577->Draw("pe");
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
      tex = new TLatex(0.160804,0.5098,"0.60 #leq |#eta^{#gamma}| < 0.80");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2578[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_2__2578 = new TH1D("RZ_shift_tot_2__2578","",11, xAxis2578);
   RZ_shift_tot_2__2578->SetBinContent(1,-0.06543553);
   RZ_shift_tot_2__2578->SetBinContent(2,-0.07048404);
   RZ_shift_tot_2__2578->SetBinContent(3,-0.04218461);
   RZ_shift_tot_2__2578->SetBinContent(4,-0.05595053);
   RZ_shift_tot_2__2578->SetBinError(1,0.007659824);
   RZ_shift_tot_2__2578->SetBinError(2,0.01435359);
   RZ_shift_tot_2__2578->SetBinError(3,0.00999101);
   RZ_shift_tot_2__2578->SetBinError(4,0.01584627);
   RZ_shift_tot_2__2578->SetEntries(88.98563);
   RZ_shift_tot_2__2578->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_2__2578->SetFillColor(ci);
   RZ_shift_tot_2__2578->SetMarkerStyle(20);
   RZ_shift_tot_2__2578->SetMarkerSize(0.8);
   RZ_shift_tot_2__2578->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_2__2578->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_2__2578->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__2578->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__2578->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__2578->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_2__2578->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_2__2578->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__2578->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__2578->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__2578->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_2__2578->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_2__2578->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__2578->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__2578->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_2__2578->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_2__2578->Draw("SAME E2");
   Double_t xAxis2579[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_2__2579 = new TH1D("RZ_shift_stat_2__2579","",11, xAxis2579);
   RZ_shift_stat_2__2579->SetBinContent(1,-0.06543553);
   RZ_shift_stat_2__2579->SetBinContent(2,-0.07048404);
   RZ_shift_stat_2__2579->SetBinContent(3,-0.04218461);
   RZ_shift_stat_2__2579->SetBinContent(4,-0.05595053);
   RZ_shift_stat_2__2579->SetBinError(1,0.007130697);
   RZ_shift_stat_2__2579->SetBinError(2,0.009931921);
   RZ_shift_stat_2__2579->SetBinError(3,0.009577362);
   RZ_shift_stat_2__2579->SetBinError(4,0.01576805);
   RZ_shift_stat_2__2579->SetEntries(111.8341);
   RZ_shift_stat_2__2579->SetStats(0);
   RZ_shift_stat_2__2579->SetMarkerStyle(20);
   RZ_shift_stat_2__2579->SetMarkerSize(0.8);
   RZ_shift_stat_2__2579->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_2__2579->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_2__2579->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__2579->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__2579->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__2579->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_2__2579->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_2__2579->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__2579->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__2579->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__2579->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_2__2579->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_2__2579->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__2579->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__2579->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_2__2579->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_2__2579->Draw("SAME PZ");
   Double_t xAxis2580[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_2__2580 = new TH1D("SP_shift_tot_2__2580","",11, xAxis2580);
   SP_shift_tot_2__2580->SetBinContent(5,-0.04421438);
   SP_shift_tot_2__2580->SetBinContent(6,-0.04965506);
   SP_shift_tot_2__2580->SetBinContent(7,-0.04412704);
   SP_shift_tot_2__2580->SetBinContent(8,-0.04205236);
   SP_shift_tot_2__2580->SetBinContent(9,-0.03439201);
   SP_shift_tot_2__2580->SetBinContent(10,-0.02492906);
   SP_shift_tot_2__2580->SetBinContent(11,-0.01960311);
   SP_shift_tot_2__2580->SetBinError(5,0.00201379);
   SP_shift_tot_2__2580->SetBinError(6,0.001753201);
   SP_shift_tot_2__2580->SetBinError(7,0.0009528815);
   SP_shift_tot_2__2580->SetBinError(8,0.0004322262);
   SP_shift_tot_2__2580->SetBinError(9,0.004224294);
   SP_shift_tot_2__2580->SetBinError(10,0.00731955);
   SP_shift_tot_2__2580->SetBinError(11,0.01623532);
   SP_shift_tot_2__2580->SetEntries(195.3998);
   SP_shift_tot_2__2580->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_2__2580->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__2580->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__2580->SetMarkerColor(ci);
   SP_shift_tot_2__2580->SetMarkerStyle(20);
   SP_shift_tot_2__2580->SetMarkerSize(0.8);
   SP_shift_tot_2__2580->GetXaxis()->SetRange(1,8);
   SP_shift_tot_2__2580->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_2__2580->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__2580->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__2580->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__2580->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_2__2580->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_2__2580->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__2580->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__2580->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__2580->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_2__2580->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_2__2580->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__2580->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__2580->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_2__2580->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_2__2580->Draw("SAME E2");
   Double_t xAxis2581[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_2__2581 = new TH1D("SP_shift_stat_2__2581","",11, xAxis2581);
   SP_shift_stat_2__2581->SetBinContent(5,-0.04421438);
   SP_shift_stat_2__2581->SetBinContent(6,-0.04965506);
   SP_shift_stat_2__2581->SetBinContent(7,-0.04412704);
   SP_shift_stat_2__2581->SetBinContent(8,-0.04205236);
   SP_shift_stat_2__2581->SetBinContent(9,-0.03439201);
   SP_shift_stat_2__2581->SetBinContent(10,-0.02492906);
   SP_shift_stat_2__2581->SetBinContent(11,-0.01960311);
   SP_shift_stat_2__2581->SetBinError(5,0.0001307902);
   SP_shift_stat_2__2581->SetBinError(6,0.0001709178);
   SP_shift_stat_2__2581->SetBinError(7,0.0002936679);
   SP_shift_stat_2__2581->SetBinError(8,0.0003829298);
   SP_shift_stat_2__2581->SetBinError(9,0.000575013);
   SP_shift_stat_2__2581->SetBinError(10,0.001988471);
   SP_shift_stat_2__2581->SetBinError(11,0.008297967);
   SP_shift_stat_2__2581->SetEntries(913.4695);
   SP_shift_stat_2__2581->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__2581->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__2581->SetMarkerColor(ci);
   SP_shift_stat_2__2581->SetMarkerStyle(20);
   SP_shift_stat_2__2581->SetMarkerSize(0.8);
   SP_shift_stat_2__2581->GetXaxis()->SetRange(1,8);
   SP_shift_stat_2__2581->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_2__2581->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__2581->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__2581->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__2581->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_2__2581->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_2__2581->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__2581->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__2581->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__2581->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_2__2581->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_2__2581->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__2581->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__2581->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_2__2581->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_2__2581->Draw("SAME PZ");
   Double_t xAxis2582[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__2582 = new TH1D("chist_copy__2582","",11, xAxis2582);
   chist_copy__2582->SetMinimum(-0.7);
   chist_copy__2582->SetMaximum(1.1);
   chist_copy__2582->SetDirectory(nullptr);
   chist_copy__2582->SetStats(0);
   chist_copy__2582->SetLineColor(0);
   chist_copy__2582->SetLineWidth(0);
   chist_copy__2582->SetMarkerColor(0);
   chist_copy__2582->SetMarkerStyle(20);
   chist_copy__2582->SetMarkerSize(0);
   chist_copy__2582->GetXaxis()->SetRange(1,8);
   chist_copy__2582->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2582->GetXaxis()->SetLabelFont(42);
   chist_copy__2582->GetXaxis()->SetLabelSize(0);
   chist_copy__2582->GetXaxis()->SetTitleSize(0.08);
   chist_copy__2582->GetXaxis()->SetTickLength(0.04);
   chist_copy__2582->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__2582->GetXaxis()->SetTitleFont(42);
   chist_copy__2582->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__2582->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2582->GetYaxis()->SetLabelFont(42);
   chist_copy__2582->GetYaxis()->SetLabelSize(0.08);
   chist_copy__2582->GetYaxis()->SetTitleSize(0.08);
   chist_copy__2582->GetYaxis()->SetTickLength(0.04);
   chist_copy__2582->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__2582->GetYaxis()->SetTitleFont(42);
   chist_copy__2582->GetZaxis()->SetLabelFont(42);
   chist_copy__2582->GetZaxis()->SetLabelSize(0.05);
   chist_copy__2582->GetZaxis()->SetTitleSize(0.05);
   chist_copy__2582->GetZaxis()->SetTitleOffset(1);
   chist_copy__2582->GetZaxis()->SetTitleFont(42);
   chist_copy__2582->Draw("sameaxis");
   up__427->Modified();
   c1_n21->cd();
   c1_n21->Modified();
   c1_n21->SetSelected(c1_n21);
}
