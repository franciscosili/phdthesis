#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_w1__u__eta0p60__shift_normalized()
{
//=========Macro generated from canvas: c1_n20/
//=========  (Thu Apr  4 19:00:51 2024) by ROOT version 6.30/02
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
   TPad *dw__702 = new TPad("dw", "dw",0,0,1,0.5);
   dw__702->Draw();
   dw__702->cd();
   dw__702->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__702->SetFillColor(0);
   dw__702->SetFillStyle(4000);
   dw__702->SetBorderMode(0);
   dw__702->SetBorderSize(0);
   dw__702->SetLogx();
   dw__702->SetTickx(1);
   dw__702->SetTicky(1);
   dw__702->SetLeftMargin(0.120603);
   dw__702->SetRightMargin(0.08040201);
   dw__702->SetTopMargin(0);
   dw__702->SetBottomMargin(0.2072539);
   dw__702->SetFrameBorderMode(0);
   dw__702->SetFrameBorderMode(0);
   Double_t xAxis4230[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__4230 = new TH1D("chist_dw__4230","",11, xAxis4230);
   chist_dw__4230->SetMinimum(0.2);
   chist_dw__4230->SetMaximum(3.2);
   chist_dw__4230->SetDirectory(nullptr);
   chist_dw__4230->SetStats(0);
   chist_dw__4230->SetLineColor(0);
   chist_dw__4230->SetLineWidth(0);
   chist_dw__4230->SetMarkerColor(0);
   chist_dw__4230->SetMarkerStyle(20);
   chist_dw__4230->SetMarkerSize(0);
   chist_dw__4230->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__4230->GetXaxis()->SetRange(1,8);
   chist_dw__4230->GetXaxis()->SetMoreLogLabels();
   chist_dw__4230->GetXaxis()->SetLabelFont(42);
   chist_dw__4230->GetXaxis()->SetLabelSize(0.08);
   chist_dw__4230->GetXaxis()->SetTitleSize(0.08);
   chist_dw__4230->GetXaxis()->SetTickLength(0.04);
   chist_dw__4230->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__4230->GetXaxis()->SetTitleFont(42);
   chist_dw__4230->GetYaxis()->SetTitle("Stretch");
   chist_dw__4230->GetYaxis()->CenterTitle(true);
   chist_dw__4230->GetYaxis()->SetNdivisions(405);
   chist_dw__4230->GetYaxis()->SetLabelFont(42);
   chist_dw__4230->GetYaxis()->SetLabelSize(0.08);
   chist_dw__4230->GetYaxis()->SetTitleSize(0.08);
   chist_dw__4230->GetYaxis()->SetTickLength(0.04);
   chist_dw__4230->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__4230->GetYaxis()->SetTitleFont(42);
   chist_dw__4230->GetZaxis()->SetLabelFont(42);
   chist_dw__4230->GetZaxis()->SetLabelSize(0.05);
   chist_dw__4230->GetZaxis()->SetTitleSize(0.05);
   chist_dw__4230->GetZaxis()->SetTitleOffset(1);
   chist_dw__4230->GetZaxis()->SetTitleFont(42);
   chist_dw__4230->Draw("");
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
   Double_t xAxis4231[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_2__4231 = new TH1D("RZ_stretch_tot_2__4231","",11, xAxis4231);
   RZ_stretch_tot_2__4231->SetBinContent(1,0.9740816);
   RZ_stretch_tot_2__4231->SetBinContent(2,1.010984);
   RZ_stretch_tot_2__4231->SetBinContent(3,1.004648);
   RZ_stretch_tot_2__4231->SetBinContent(4,1.021196);
   RZ_stretch_tot_2__4231->SetBinError(1,0.01098455);
   RZ_stretch_tot_2__4231->SetBinError(2,0.01496286);
   RZ_stretch_tot_2__4231->SetBinError(3,0.01409351);
   RZ_stretch_tot_2__4231->SetBinError(4,0.02471354);
   RZ_stretch_tot_2__4231->SetEntries(13941.35);
   RZ_stretch_tot_2__4231->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_2__4231->SetFillColor(ci);
   RZ_stretch_tot_2__4231->SetLineWidth(2);
   RZ_stretch_tot_2__4231->SetMarkerStyle(20);
   RZ_stretch_tot_2__4231->SetMarkerSize(0.8);
   RZ_stretch_tot_2__4231->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_2__4231->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__4231->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__4231->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__4231->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__4231->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__4231->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__4231->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__4231->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__4231->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__4231->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__4231->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__4231->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__4231->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__4231->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_2__4231->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__4231->Draw("SAME E2");
   Double_t xAxis4232[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_2__4232 = new TH1D("RZ_stretch_stat_2__4232","",11, xAxis4232);
   RZ_stretch_stat_2__4232->SetBinContent(1,0.9740816);
   RZ_stretch_stat_2__4232->SetBinContent(2,1.010984);
   RZ_stretch_stat_2__4232->SetBinContent(3,1.004648);
   RZ_stretch_stat_2__4232->SetBinContent(4,1.021196);
   RZ_stretch_stat_2__4232->SetBinError(1,0.007227128);
   RZ_stretch_stat_2__4232->SetBinError(2,0.01292587);
   RZ_stretch_stat_2__4232->SetBinError(3,0.01330602);
   RZ_stretch_stat_2__4232->SetBinError(4,0.02435655);
   RZ_stretch_stat_2__4232->SetEntries(16256.44);
   RZ_stretch_stat_2__4232->SetStats(0);
   RZ_stretch_stat_2__4232->SetLineWidth(2);
   RZ_stretch_stat_2__4232->SetMarkerStyle(20);
   RZ_stretch_stat_2__4232->SetMarkerSize(0.8);
   RZ_stretch_stat_2__4232->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_2__4232->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__4232->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__4232->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__4232->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__4232->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__4232->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__4232->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__4232->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__4232->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__4232->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__4232->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__4232->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__4232->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__4232->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_2__4232->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__4232->Draw("SAME PZ");
   Double_t xAxis4233[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_2__4233 = new TH1D("SP_stretch_tot_2__4233","",11, xAxis4233);
   SP_stretch_tot_2__4233->SetBinContent(5,1.058879);
   SP_stretch_tot_2__4233->SetBinContent(6,1.064177);
   SP_stretch_tot_2__4233->SetBinContent(7,1.084779);
   SP_stretch_tot_2__4233->SetBinContent(8,1.073773);
   SP_stretch_tot_2__4233->SetBinContent(9,1.084504);
   SP_stretch_tot_2__4233->SetBinContent(10,1.115472);
   SP_stretch_tot_2__4233->SetBinContent(11,1.118653);
   SP_stretch_tot_2__4233->SetBinError(5,0.003643395);
   SP_stretch_tot_2__4233->SetBinError(6,0.01091451);
   SP_stretch_tot_2__4233->SetBinError(7,0.01256812);
   SP_stretch_tot_2__4233->SetBinError(8,0.01451481);
   SP_stretch_tot_2__4233->SetBinError(9,0.01737094);
   SP_stretch_tot_2__4233->SetBinError(10,0.0234701);
   SP_stretch_tot_2__4233->SetBinError(11,0.03534165);
   SP_stretch_tot_2__4233->SetEntries(22194.02);
   SP_stretch_tot_2__4233->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_2__4233->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__4233->SetLineColor(ci);
   SP_stretch_tot_2__4233->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__4233->SetMarkerColor(ci);
   SP_stretch_tot_2__4233->SetMarkerStyle(20);
   SP_stretch_tot_2__4233->SetMarkerSize(0.8);
   SP_stretch_tot_2__4233->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_2__4233->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_2__4233->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__4233->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__4233->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__4233->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_2__4233->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_2__4233->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__4233->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__4233->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__4233->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_2__4233->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_2__4233->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__4233->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__4233->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_2__4233->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_2__4233->Draw("SAME E2");
   Double_t xAxis4234[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_2__4234 = new TH1D("SP_stretch_stat_2__4234","",11, xAxis4234);
   SP_stretch_stat_2__4234->SetBinContent(5,1.058879);
   SP_stretch_stat_2__4234->SetBinContent(6,1.064177);
   SP_stretch_stat_2__4234->SetBinContent(7,1.084779);
   SP_stretch_stat_2__4234->SetBinContent(8,1.073773);
   SP_stretch_stat_2__4234->SetBinContent(9,1.084504);
   SP_stretch_stat_2__4234->SetBinContent(10,1.115472);
   SP_stretch_stat_2__4234->SetBinContent(11,1.118653);
   SP_stretch_stat_2__4234->SetBinError(5,0.0002276681);
   SP_stretch_stat_2__4234->SetBinError(6,0.0002725954);
   SP_stretch_stat_2__4234->SetBinError(7,0.0005123644);
   SP_stretch_stat_2__4234->SetBinError(8,0.0006856272);
   SP_stretch_stat_2__4234->SetBinError(9,0.001215793);
   SP_stretch_stat_2__4234->SetBinError(10,0.005175678);
   SP_stretch_stat_2__4234->SetBinError(11,0.02307193);
   SP_stretch_stat_2__4234->SetEntries(102885);
   SP_stretch_stat_2__4234->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__4234->SetLineColor(ci);
   SP_stretch_stat_2__4234->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__4234->SetMarkerColor(ci);
   SP_stretch_stat_2__4234->SetMarkerStyle(20);
   SP_stretch_stat_2__4234->SetMarkerSize(0.8);
   SP_stretch_stat_2__4234->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_2__4234->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_2__4234->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__4234->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__4234->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__4234->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_2__4234->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_2__4234->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__4234->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__4234->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__4234->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_2__4234->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_2__4234->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__4234->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__4234->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_2__4234->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_2__4234->Draw("SAME PZ");
   dw__702->Modified();
   c1_n20->cd();
  
// ------------>Primitives in pad: up
   TPad *up__703 = new TPad("up", "up",0,0.5,1,1);
   up__703->Draw();
   up__703->cd();
   up__703->Range(0.4143249,-0.9407972,3.986152,2.339977);
   up__703->SetFillColor(0);
   up__703->SetFillStyle(4000);
   up__703->SetBorderMode(0);
   up__703->SetBorderSize(0);
   up__703->SetLogx();
   up__703->SetTickx(1);
   up__703->SetTicky(1);
   up__703->SetLeftMargin(0.120603);
   up__703->SetRightMargin(0.08040201);
   up__703->SetBottomMargin(0.01243523);
   up__703->SetFrameBorderMode(0);
   up__703->SetFrameBorderMode(0);
   Double_t xAxis4235[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__4235 = new TH1D("chist__4235","",11, xAxis4235);
   chist__4235->SetMinimum(-0.9);
   chist__4235->SetMaximum(2);
   chist__4235->SetDirectory(nullptr);
   chist__4235->SetStats(0);
   chist__4235->SetLineColor(0);
   chist__4235->SetLineWidth(0);
   chist__4235->SetMarkerColor(0);
   chist__4235->SetMarkerStyle(20);
   chist__4235->SetMarkerSize(0);
   chist__4235->GetXaxis()->SetRange(1,8);
   chist__4235->GetXaxis()->SetNdivisions(4000510);
   chist__4235->GetXaxis()->SetLabelFont(42);
   chist__4235->GetXaxis()->SetLabelSize(0);
   chist__4235->GetXaxis()->SetTitleSize(0.08);
   chist__4235->GetXaxis()->SetTickLength(0.04);
   chist__4235->GetXaxis()->SetTitleOffset(2.020933);
   chist__4235->GetXaxis()->SetTitleFont(42);
   chist__4235->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__4235->GetYaxis()->SetNdivisions(3000510);
   chist__4235->GetYaxis()->SetLabelFont(42);
   chist__4235->GetYaxis()->SetLabelSize(0.08);
   chist__4235->GetYaxis()->SetTitleSize(0.08);
   chist__4235->GetYaxis()->SetTickLength(0.04);
   chist__4235->GetYaxis()->SetTitleOffset(0.727387);
   chist__4235->GetYaxis()->SetTitleFont(42);
   chist__4235->GetZaxis()->SetLabelFont(42);
   chist__4235->GetZaxis()->SetLabelSize(0.05);
   chist__4235->GetZaxis()->SetTitleSize(0.05);
   chist__4235->GetZaxis()->SetTitleOffset(1);
   chist__4235->GetZaxis()->SetTitleFont(42);
   chist__4235->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"w_{1}");
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
   Double_t xAxis4236[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_2__4236 = new TH1D("RZ_shift_tot_2__4236","",11, xAxis4236);
   RZ_shift_tot_2__4236->SetBinContent(1,0.2609667);
   RZ_shift_tot_2__4236->SetBinContent(2,0.2573509);
   RZ_shift_tot_2__4236->SetBinContent(3,0.2692524);
   RZ_shift_tot_2__4236->SetBinContent(4,0.2503636);
   RZ_shift_tot_2__4236->SetBinError(1,0.01733443);
   RZ_shift_tot_2__4236->SetBinError(2,0.01534275);
   RZ_shift_tot_2__4236->SetBinError(3,0.01784626);
   RZ_shift_tot_2__4236->SetBinError(4,0.02871941);
   RZ_shift_tot_2__4236->SetEntries(641.5682);
   RZ_shift_tot_2__4236->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_2__4236->SetFillColor(ci);
   RZ_shift_tot_2__4236->SetMarkerStyle(20);
   RZ_shift_tot_2__4236->SetMarkerSize(0.8);
   RZ_shift_tot_2__4236->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_2__4236->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_2__4236->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__4236->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__4236->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__4236->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_2__4236->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_2__4236->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__4236->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__4236->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__4236->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_2__4236->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_2__4236->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__4236->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__4236->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_2__4236->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_2__4236->Draw("SAME E2");
   Double_t xAxis4237[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_2__4237 = new TH1D("RZ_shift_stat_2__4237","",11, xAxis4237);
   RZ_shift_stat_2__4237->SetBinContent(1,0.2609667);
   RZ_shift_stat_2__4237->SetBinContent(2,0.2573509);
   RZ_shift_stat_2__4237->SetBinContent(3,0.2692524);
   RZ_shift_stat_2__4237->SetBinContent(4,0.2503636);
   RZ_shift_stat_2__4237->SetBinError(1,0.00959958);
   RZ_shift_stat_2__4237->SetBinError(2,0.01487629);
   RZ_shift_stat_2__4237->SetBinError(3,0.0154734);
   RZ_shift_stat_2__4237->SetBinError(4,0.02680782);
   RZ_shift_stat_2__4237->SetEntries(847.2443);
   RZ_shift_stat_2__4237->SetStats(0);
   RZ_shift_stat_2__4237->SetMarkerStyle(20);
   RZ_shift_stat_2__4237->SetMarkerSize(0.8);
   RZ_shift_stat_2__4237->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_2__4237->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_2__4237->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__4237->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__4237->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__4237->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_2__4237->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_2__4237->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__4237->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__4237->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__4237->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_2__4237->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_2__4237->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__4237->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__4237->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_2__4237->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_2__4237->Draw("SAME PZ");
   Double_t xAxis4238[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_2__4238 = new TH1D("SP_shift_tot_2__4238","",11, xAxis4238);
   SP_shift_tot_2__4238->SetBinContent(5,0.3918145);
   SP_shift_tot_2__4238->SetBinContent(6,0.3861188);
   SP_shift_tot_2__4238->SetBinContent(7,0.358275);
   SP_shift_tot_2__4238->SetBinContent(8,0.3503621);
   SP_shift_tot_2__4238->SetBinContent(9,0.3741946);
   SP_shift_tot_2__4238->SetBinContent(10,0.3823068);
   SP_shift_tot_2__4238->SetBinContent(11,0.3910264);
   SP_shift_tot_2__4238->SetBinError(5,0.01974885);
   SP_shift_tot_2__4238->SetBinError(6,0.02431828);
   SP_shift_tot_2__4238->SetBinError(7,0.02571752);
   SP_shift_tot_2__4238->SetBinError(8,0.02547124);
   SP_shift_tot_2__4238->SetBinError(9,0.02643827);
   SP_shift_tot_2__4238->SetBinError(10,0.02595344);
   SP_shift_tot_2__4238->SetBinError(11,0.03967507);
   SP_shift_tot_2__4238->SetEntries(1324.58);
   SP_shift_tot_2__4238->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_2__4238->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__4238->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__4238->SetMarkerColor(ci);
   SP_shift_tot_2__4238->SetMarkerStyle(20);
   SP_shift_tot_2__4238->SetMarkerSize(0.8);
   SP_shift_tot_2__4238->GetXaxis()->SetRange(1,8);
   SP_shift_tot_2__4238->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_2__4238->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__4238->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__4238->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__4238->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_2__4238->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_2__4238->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__4238->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__4238->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__4238->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_2__4238->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_2__4238->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__4238->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__4238->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_2__4238->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_2__4238->Draw("SAME E2");
   Double_t xAxis4239[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_2__4239 = new TH1D("SP_shift_stat_2__4239","",11, xAxis4239);
   SP_shift_stat_2__4239->SetBinContent(5,0.3918145);
   SP_shift_stat_2__4239->SetBinContent(6,0.3861188);
   SP_shift_stat_2__4239->SetBinContent(7,0.358275);
   SP_shift_stat_2__4239->SetBinContent(8,0.3503621);
   SP_shift_stat_2__4239->SetBinContent(9,0.3741946);
   SP_shift_stat_2__4239->SetBinContent(10,0.3823068);
   SP_shift_stat_2__4239->SetBinContent(11,0.3910264);
   SP_shift_stat_2__4239->SetBinError(5,0.0002900991);
   SP_shift_stat_2__4239->SetBinError(6,0.0003342779);
   SP_shift_stat_2__4239->SetBinError(7,0.0005880115);
   SP_shift_stat_2__4239->SetBinError(8,0.0007938783);
   SP_shift_stat_2__4239->SetBinError(9,0.001430195);
   SP_shift_stat_2__4239->SetBinError(10,0.005597458);
   SP_shift_stat_2__4239->SetBinError(11,0.02430469);
   SP_shift_stat_2__4239->SetEntries(11096.82);
   SP_shift_stat_2__4239->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__4239->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__4239->SetMarkerColor(ci);
   SP_shift_stat_2__4239->SetMarkerStyle(20);
   SP_shift_stat_2__4239->SetMarkerSize(0.8);
   SP_shift_stat_2__4239->GetXaxis()->SetRange(1,8);
   SP_shift_stat_2__4239->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_2__4239->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__4239->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__4239->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__4239->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_2__4239->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_2__4239->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__4239->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__4239->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__4239->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_2__4239->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_2__4239->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__4239->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__4239->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_2__4239->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_2__4239->Draw("SAME PZ");
   Double_t xAxis4240[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__4240 = new TH1D("chist_copy__4240","",11, xAxis4240);
   chist_copy__4240->SetMinimum(-0.9);
   chist_copy__4240->SetMaximum(2);
   chist_copy__4240->SetDirectory(nullptr);
   chist_copy__4240->SetStats(0);
   chist_copy__4240->SetLineColor(0);
   chist_copy__4240->SetLineWidth(0);
   chist_copy__4240->SetMarkerColor(0);
   chist_copy__4240->SetMarkerStyle(20);
   chist_copy__4240->SetMarkerSize(0);
   chist_copy__4240->GetXaxis()->SetRange(1,8);
   chist_copy__4240->GetXaxis()->SetNdivisions(4000510);
   chist_copy__4240->GetXaxis()->SetLabelFont(42);
   chist_copy__4240->GetXaxis()->SetLabelSize(0);
   chist_copy__4240->GetXaxis()->SetTitleSize(0.08);
   chist_copy__4240->GetXaxis()->SetTickLength(0.04);
   chist_copy__4240->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__4240->GetXaxis()->SetTitleFont(42);
   chist_copy__4240->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__4240->GetYaxis()->SetNdivisions(3000510);
   chist_copy__4240->GetYaxis()->SetLabelFont(42);
   chist_copy__4240->GetYaxis()->SetLabelSize(0.08);
   chist_copy__4240->GetYaxis()->SetTitleSize(0.08);
   chist_copy__4240->GetYaxis()->SetTickLength(0.04);
   chist_copy__4240->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__4240->GetYaxis()->SetTitleFont(42);
   chist_copy__4240->GetZaxis()->SetLabelFont(42);
   chist_copy__4240->GetZaxis()->SetLabelSize(0.05);
   chist_copy__4240->GetZaxis()->SetTitleSize(0.05);
   chist_copy__4240->GetZaxis()->SetTitleOffset(1);
   chist_copy__4240->GetZaxis()->SetTitleFont(42);
   chist_copy__4240->Draw("sameaxis");
   up__703->Modified();
   c1_n20->cd();
   c1_n20->Modified();
   c1_n20->SetSelected(c1_n20);
}
