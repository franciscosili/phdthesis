#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_weta2__c__eta1p15__shift_normalized()
{
//=========Macro generated from canvas: c1_n22/
//=========  (Thu Apr  4 19:01:06 2024) by ROOT version 6.30/02
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
   TPad *dw__922 = new TPad("dw", "dw",0,0,1,0.5);
   dw__922->Draw();
   dw__922->cd();
   dw__922->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__922->SetFillColor(0);
   dw__922->SetFillStyle(4000);
   dw__922->SetBorderMode(0);
   dw__922->SetBorderSize(0);
   dw__922->SetLogx();
   dw__922->SetTickx(1);
   dw__922->SetTicky(1);
   dw__922->SetLeftMargin(0.120603);
   dw__922->SetRightMargin(0.08040201);
   dw__922->SetTopMargin(0);
   dw__922->SetBottomMargin(0.2072539);
   dw__922->SetFrameBorderMode(0);
   dw__922->SetFrameBorderMode(0);
   Double_t xAxis5548[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__5548 = new TH1D("chist_dw__5548","",11, xAxis5548);
   chist_dw__5548->SetMinimum(0.2);
   chist_dw__5548->SetMaximum(3.2);
   chist_dw__5548->SetDirectory(nullptr);
   chist_dw__5548->SetStats(0);
   chist_dw__5548->SetLineColor(0);
   chist_dw__5548->SetLineWidth(0);
   chist_dw__5548->SetMarkerColor(0);
   chist_dw__5548->SetMarkerStyle(20);
   chist_dw__5548->SetMarkerSize(0);
   chist_dw__5548->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__5548->GetXaxis()->SetRange(1,8);
   chist_dw__5548->GetXaxis()->SetMoreLogLabels();
   chist_dw__5548->GetXaxis()->SetLabelFont(42);
   chist_dw__5548->GetXaxis()->SetLabelSize(0.08);
   chist_dw__5548->GetXaxis()->SetTitleSize(0.08);
   chist_dw__5548->GetXaxis()->SetTickLength(0.04);
   chist_dw__5548->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__5548->GetXaxis()->SetTitleFont(42);
   chist_dw__5548->GetYaxis()->SetTitle("Stretch");
   chist_dw__5548->GetYaxis()->CenterTitle(true);
   chist_dw__5548->GetYaxis()->SetNdivisions(405);
   chist_dw__5548->GetYaxis()->SetLabelFont(42);
   chist_dw__5548->GetYaxis()->SetLabelSize(0.08);
   chist_dw__5548->GetYaxis()->SetTitleSize(0.08);
   chist_dw__5548->GetYaxis()->SetTickLength(0.04);
   chist_dw__5548->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__5548->GetYaxis()->SetTitleFont(42);
   chist_dw__5548->GetZaxis()->SetLabelFont(42);
   chist_dw__5548->GetZaxis()->SetLabelSize(0.05);
   chist_dw__5548->GetZaxis()->SetTitleSize(0.05);
   chist_dw__5548->GetZaxis()->SetTitleOffset(1);
   chist_dw__5548->GetZaxis()->SetTitleFont(42);
   chist_dw__5548->Draw("");
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
   Double_t xAxis5549[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_4__5549 = new TH1D("RZ_stretch_tot_4__5549","",11, xAxis5549);
   RZ_stretch_tot_4__5549->SetBinContent(1,0.9884912);
   RZ_stretch_tot_4__5549->SetBinContent(2,0.9650578);
   RZ_stretch_tot_4__5549->SetBinContent(3,0.97937);
   RZ_stretch_tot_4__5549->SetBinContent(4,1.009155);
   RZ_stretch_tot_4__5549->SetBinError(1,0.04752872);
   RZ_stretch_tot_4__5549->SetBinError(2,0.03324014);
   RZ_stretch_tot_4__5549->SetBinError(3,0.02757973);
   RZ_stretch_tot_4__5549->SetBinError(4,0.04450068);
   RZ_stretch_tot_4__5549->SetEntries(2545.514);
   RZ_stretch_tot_4__5549->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_4__5549->SetFillColor(ci);
   RZ_stretch_tot_4__5549->SetLineWidth(2);
   RZ_stretch_tot_4__5549->SetMarkerStyle(20);
   RZ_stretch_tot_4__5549->SetMarkerSize(0.8);
   RZ_stretch_tot_4__5549->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_4__5549->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_4__5549->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_4__5549->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_4__5549->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_4__5549->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_4__5549->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_4__5549->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_4__5549->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_4__5549->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_4__5549->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_4__5549->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_4__5549->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_4__5549->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_4__5549->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_4__5549->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_4__5549->Draw("SAME E2");
   Double_t xAxis5550[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_4__5550 = new TH1D("RZ_stretch_stat_4__5550","",11, xAxis5550);
   RZ_stretch_stat_4__5550->SetBinContent(1,0.9884912);
   RZ_stretch_stat_4__5550->SetBinContent(2,0.9650578);
   RZ_stretch_stat_4__5550->SetBinContent(3,0.97937);
   RZ_stretch_stat_4__5550->SetBinContent(4,1.009155);
   RZ_stretch_stat_4__5550->SetBinError(1,0.02192523);
   RZ_stretch_stat_4__5550->SetBinError(2,0.02614848);
   RZ_stretch_stat_4__5550->SetBinError(3,0.02381125);
   RZ_stretch_stat_4__5550->SetBinError(4,0.03815036);
   RZ_stretch_stat_4__5550->SetEntries(4876.221);
   RZ_stretch_stat_4__5550->SetStats(0);
   RZ_stretch_stat_4__5550->SetLineWidth(2);
   RZ_stretch_stat_4__5550->SetMarkerStyle(20);
   RZ_stretch_stat_4__5550->SetMarkerSize(0.8);
   RZ_stretch_stat_4__5550->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_4__5550->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_4__5550->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_4__5550->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_4__5550->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_4__5550->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_4__5550->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_4__5550->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_4__5550->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_4__5550->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_4__5550->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_4__5550->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_4__5550->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_4__5550->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_4__5550->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_4__5550->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_4__5550->Draw("SAME PZ");
   Double_t xAxis5551[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_4__5551 = new TH1D("SP_stretch_tot_4__5551","",11, xAxis5551);
   SP_stretch_tot_4__5551->SetBinContent(5,1.051321);
   SP_stretch_tot_4__5551->SetBinContent(6,1.06921);
   SP_stretch_tot_4__5551->SetBinContent(7,1.077258);
   SP_stretch_tot_4__5551->SetBinContent(8,1.103718);
   SP_stretch_tot_4__5551->SetBinContent(9,1.201338);
   SP_stretch_tot_4__5551->SetBinContent(10,1.422959);
   SP_stretch_tot_4__5551->SetBinContent(11,1.672514);
   SP_stretch_tot_4__5551->SetBinError(5,0.004950063);
   SP_stretch_tot_4__5551->SetBinError(6,0.01816982);
   SP_stretch_tot_4__5551->SetBinError(7,0.01530687);
   SP_stretch_tot_4__5551->SetBinError(8,0.04001249);
   SP_stretch_tot_4__5551->SetBinError(9,0.09810189);
   SP_stretch_tot_4__5551->SetBinError(10,0.2584496);
   SP_stretch_tot_4__5551->SetBinError(11,0.435891);
   SP_stretch_tot_4__5551->SetEntries(275.2346);
   SP_stretch_tot_4__5551->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_4__5551->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_4__5551->SetLineColor(ci);
   SP_stretch_tot_4__5551->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_4__5551->SetMarkerColor(ci);
   SP_stretch_tot_4__5551->SetMarkerStyle(20);
   SP_stretch_tot_4__5551->SetMarkerSize(0.8);
   SP_stretch_tot_4__5551->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_4__5551->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_4__5551->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_4__5551->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_4__5551->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_4__5551->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_4__5551->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_4__5551->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_4__5551->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_4__5551->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_4__5551->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_4__5551->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_4__5551->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_4__5551->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_4__5551->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_4__5551->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_4__5551->Draw("SAME E2");
   Double_t xAxis5552[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_4__5552 = new TH1D("SP_stretch_stat_4__5552","",11, xAxis5552);
   SP_stretch_stat_4__5552->SetBinContent(5,1.051321);
   SP_stretch_stat_4__5552->SetBinContent(6,1.06921);
   SP_stretch_stat_4__5552->SetBinContent(7,1.077258);
   SP_stretch_stat_4__5552->SetBinContent(8,1.103718);
   SP_stretch_stat_4__5552->SetBinContent(9,1.201338);
   SP_stretch_stat_4__5552->SetBinContent(10,1.422959);
   SP_stretch_stat_4__5552->SetBinContent(11,1.672514);
   SP_stretch_stat_4__5552->SetBinError(5,0.0002953897);
   SP_stretch_stat_4__5552->SetBinError(6,0.0003526499);
   SP_stretch_stat_4__5552->SetBinError(7,0.0006339839);
   SP_stretch_stat_4__5552->SetBinError(8,0.0009345047);
   SP_stretch_stat_4__5552->SetBinError(9,0.001622972);
   SP_stretch_stat_4__5552->SetBinError(10,0.00868126);
   SP_stretch_stat_4__5552->SetBinError(11,0.04143541);
   SP_stretch_stat_4__5552->SetEntries(41155.61);
   SP_stretch_stat_4__5552->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_4__5552->SetLineColor(ci);
   SP_stretch_stat_4__5552->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_4__5552->SetMarkerColor(ci);
   SP_stretch_stat_4__5552->SetMarkerStyle(20);
   SP_stretch_stat_4__5552->SetMarkerSize(0.8);
   SP_stretch_stat_4__5552->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_4__5552->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_4__5552->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_4__5552->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_4__5552->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_4__5552->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_4__5552->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_4__5552->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_4__5552->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_4__5552->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_4__5552->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_4__5552->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_4__5552->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_4__5552->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_4__5552->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_4__5552->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_4__5552->Draw("SAME PZ");
   dw__922->Modified();
   c1_n22->cd();
  
// ------------>Primitives in pad: up
   TPad *up__923 = new TPad("up", "up",0,0.5,1,1);
   up__923->Draw();
   up__923->cd();
   up__923->Range(0.4143249,-0.9407972,3.986152,2.339977);
   up__923->SetFillColor(0);
   up__923->SetFillStyle(4000);
   up__923->SetBorderMode(0);
   up__923->SetBorderSize(0);
   up__923->SetLogx();
   up__923->SetTickx(1);
   up__923->SetTicky(1);
   up__923->SetLeftMargin(0.120603);
   up__923->SetRightMargin(0.08040201);
   up__923->SetBottomMargin(0.01243523);
   up__923->SetFrameBorderMode(0);
   up__923->SetFrameBorderMode(0);
   Double_t xAxis5553[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__5553 = new TH1D("chist__5553","",11, xAxis5553);
   chist__5553->SetMinimum(-0.9);
   chist__5553->SetMaximum(2);
   chist__5553->SetDirectory(nullptr);
   chist__5553->SetStats(0);
   chist__5553->SetLineColor(0);
   chist__5553->SetLineWidth(0);
   chist__5553->SetMarkerColor(0);
   chist__5553->SetMarkerStyle(20);
   chist__5553->SetMarkerSize(0);
   chist__5553->GetXaxis()->SetRange(1,8);
   chist__5553->GetXaxis()->SetNdivisions(4000510);
   chist__5553->GetXaxis()->SetLabelFont(42);
   chist__5553->GetXaxis()->SetLabelSize(0);
   chist__5553->GetXaxis()->SetTitleSize(0.08);
   chist__5553->GetXaxis()->SetTickLength(0.04);
   chist__5553->GetXaxis()->SetTitleOffset(2.020933);
   chist__5553->GetXaxis()->SetTitleFont(42);
   chist__5553->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__5553->GetYaxis()->SetNdivisions(3000510);
   chist__5553->GetYaxis()->SetLabelFont(42);
   chist__5553->GetYaxis()->SetLabelSize(0.08);
   chist__5553->GetYaxis()->SetTitleSize(0.08);
   chist__5553->GetYaxis()->SetTickLength(0.04);
   chist__5553->GetYaxis()->SetTitleOffset(0.727387);
   chist__5553->GetYaxis()->SetTitleFont(42);
   chist__5553->GetZaxis()->SetLabelFont(42);
   chist__5553->GetZaxis()->SetLabelSize(0.05);
   chist__5553->GetZaxis()->SetTitleSize(0.05);
   chist__5553->GetZaxis()->SetTitleOffset(1);
   chist__5553->GetZaxis()->SetTitleFont(42);
   chist__5553->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_4","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_4","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_4","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_4","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"w_{#eta 2}");
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
      tex = new TLatex(0.160804,0.5098,"1.15 #leq |#eta^{#gamma}| < 1.37");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis5554[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_4__5554 = new TH1D("RZ_shift_tot_4__5554","",11, xAxis5554);
   RZ_shift_tot_4__5554->SetBinContent(1,0.111212);
   RZ_shift_tot_4__5554->SetBinContent(2,0.08738656);
   RZ_shift_tot_4__5554->SetBinContent(3,0.1297848);
   RZ_shift_tot_4__5554->SetBinContent(4,0.09595721);
   RZ_shift_tot_4__5554->SetBinError(1,0.03028352);
   RZ_shift_tot_4__5554->SetBinError(2,0.03707216);
   RZ_shift_tot_4__5554->SetBinError(3,0.02719163);
   RZ_shift_tot_4__5554->SetBinError(4,0.04697399);
   RZ_shift_tot_4__5554->SetEntries(34.38075);
   RZ_shift_tot_4__5554->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_4__5554->SetFillColor(ci);
   RZ_shift_tot_4__5554->SetMarkerStyle(20);
   RZ_shift_tot_4__5554->SetMarkerSize(0.8);
   RZ_shift_tot_4__5554->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_4__5554->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_4__5554->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_4__5554->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_4__5554->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_4__5554->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_4__5554->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_4__5554->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_4__5554->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_4__5554->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_4__5554->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_4__5554->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_4__5554->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_4__5554->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_4__5554->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_4__5554->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_4__5554->Draw("SAME E2");
   Double_t xAxis5555[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_4__5555 = new TH1D("RZ_shift_stat_4__5555","",11, xAxis5555);
   RZ_shift_stat_4__5555->SetBinContent(1,0.111212);
   RZ_shift_stat_4__5555->SetBinContent(2,0.08738656);
   RZ_shift_stat_4__5555->SetBinContent(3,0.1297848);
   RZ_shift_stat_4__5555->SetBinContent(4,0.09595721);
   RZ_shift_stat_4__5555->SetBinError(1,0.02285301);
   RZ_shift_stat_4__5555->SetBinError(2,0.02702991);
   RZ_shift_stat_4__5555->SetBinError(3,0.02578273);
   RZ_shift_stat_4__5555->SetBinError(4,0.04206793);
   RZ_shift_stat_4__5555->SetEntries(48.83333);
   RZ_shift_stat_4__5555->SetStats(0);
   RZ_shift_stat_4__5555->SetMarkerStyle(20);
   RZ_shift_stat_4__5555->SetMarkerSize(0.8);
   RZ_shift_stat_4__5555->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_4__5555->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_4__5555->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_4__5555->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_4__5555->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_4__5555->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_4__5555->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_4__5555->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_4__5555->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_4__5555->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_4__5555->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_4__5555->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_4__5555->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_4__5555->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_4__5555->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_4__5555->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_4__5555->Draw("SAME PZ");
   Double_t xAxis5556[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_4__5556 = new TH1D("SP_shift_tot_4__5556","",11, xAxis5556);
   SP_shift_tot_4__5556->SetBinContent(5,0.1593502);
   SP_shift_tot_4__5556->SetBinContent(6,0.1752361);
   SP_shift_tot_4__5556->SetBinContent(7,0.1801679);
   SP_shift_tot_4__5556->SetBinContent(8,0.1936589);
   SP_shift_tot_4__5556->SetBinContent(9,0.2816941);
   SP_shift_tot_4__5556->SetBinContent(10,0.3783252);
   SP_shift_tot_4__5556->SetBinContent(11,0.5588956);
   SP_shift_tot_4__5556->SetBinError(5,0.007997654);
   SP_shift_tot_4__5556->SetBinError(6,0.01514815);
   SP_shift_tot_4__5556->SetBinError(7,0.01896269);
   SP_shift_tot_4__5556->SetBinError(8,0.04183388);
   SP_shift_tot_4__5556->SetBinError(9,0.0926395);
   SP_shift_tot_4__5556->SetBinError(10,0.179755);
   SP_shift_tot_4__5556->SetBinError(11,0.3033976);
   SP_shift_tot_4__5556->SetEntries(27.44494);
   SP_shift_tot_4__5556->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_4__5556->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_4__5556->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_4__5556->SetMarkerColor(ci);
   SP_shift_tot_4__5556->SetMarkerStyle(20);
   SP_shift_tot_4__5556->SetMarkerSize(0.8);
   SP_shift_tot_4__5556->GetXaxis()->SetRange(1,8);
   SP_shift_tot_4__5556->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_4__5556->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_4__5556->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_4__5556->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_4__5556->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_4__5556->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_4__5556->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_4__5556->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_4__5556->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_4__5556->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_4__5556->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_4__5556->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_4__5556->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_4__5556->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_4__5556->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_4__5556->Draw("SAME E2");
   Double_t xAxis5557[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_4__5557 = new TH1D("SP_shift_stat_4__5557","",11, xAxis5557);
   SP_shift_stat_4__5557->SetBinContent(5,0.1593502);
   SP_shift_stat_4__5557->SetBinContent(6,0.1752361);
   SP_shift_stat_4__5557->SetBinContent(7,0.1801679);
   SP_shift_stat_4__5557->SetBinContent(8,0.1936589);
   SP_shift_stat_4__5557->SetBinContent(9,0.2816941);
   SP_shift_stat_4__5557->SetBinContent(10,0.3783252);
   SP_shift_stat_4__5557->SetBinContent(11,0.5588956);
   SP_shift_stat_4__5557->SetBinError(5,0.0003533819);
   SP_shift_stat_4__5557->SetBinError(6,0.0004181882);
   SP_shift_stat_4__5557->SetBinError(7,0.0007149238);
   SP_shift_stat_4__5557->SetBinError(8,0.0009705578);
   SP_shift_stat_4__5557->SetBinError(9,0.001645701);
   SP_shift_stat_4__5557->SetBinError(10,0.004668764);
   SP_shift_stat_4__5557->SetBinError(11,0.02682104);
   SP_shift_stat_4__5557->SetEntries(4981.843);
   SP_shift_stat_4__5557->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_4__5557->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_4__5557->SetMarkerColor(ci);
   SP_shift_stat_4__5557->SetMarkerStyle(20);
   SP_shift_stat_4__5557->SetMarkerSize(0.8);
   SP_shift_stat_4__5557->GetXaxis()->SetRange(1,8);
   SP_shift_stat_4__5557->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_4__5557->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_4__5557->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_4__5557->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_4__5557->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_4__5557->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_4__5557->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_4__5557->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_4__5557->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_4__5557->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_4__5557->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_4__5557->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_4__5557->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_4__5557->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_4__5557->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_4__5557->Draw("SAME PZ");
   Double_t xAxis5558[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__5558 = new TH1D("chist_copy__5558","",11, xAxis5558);
   chist_copy__5558->SetMinimum(-0.9);
   chist_copy__5558->SetMaximum(2);
   chist_copy__5558->SetDirectory(nullptr);
   chist_copy__5558->SetStats(0);
   chist_copy__5558->SetLineColor(0);
   chist_copy__5558->SetLineWidth(0);
   chist_copy__5558->SetMarkerColor(0);
   chist_copy__5558->SetMarkerStyle(20);
   chist_copy__5558->SetMarkerSize(0);
   chist_copy__5558->GetXaxis()->SetRange(1,8);
   chist_copy__5558->GetXaxis()->SetNdivisions(4000510);
   chist_copy__5558->GetXaxis()->SetLabelFont(42);
   chist_copy__5558->GetXaxis()->SetLabelSize(0);
   chist_copy__5558->GetXaxis()->SetTitleSize(0.08);
   chist_copy__5558->GetXaxis()->SetTickLength(0.04);
   chist_copy__5558->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__5558->GetXaxis()->SetTitleFont(42);
   chist_copy__5558->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__5558->GetYaxis()->SetNdivisions(3000510);
   chist_copy__5558->GetYaxis()->SetLabelFont(42);
   chist_copy__5558->GetYaxis()->SetLabelSize(0.08);
   chist_copy__5558->GetYaxis()->SetTitleSize(0.08);
   chist_copy__5558->GetYaxis()->SetTickLength(0.04);
   chist_copy__5558->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__5558->GetYaxis()->SetTitleFont(42);
   chist_copy__5558->GetZaxis()->SetLabelFont(42);
   chist_copy__5558->GetZaxis()->SetLabelSize(0.05);
   chist_copy__5558->GetZaxis()->SetTitleSize(0.05);
   chist_copy__5558->GetZaxis()->SetTitleOffset(1);
   chist_copy__5558->GetZaxis()->SetTitleFont(42);
   chist_copy__5558->Draw("sameaxis");
   up__923->Modified();
   c1_n22->cd();
   c1_n22->Modified();
   c1_n22->SetSelected(c1_n22);
}
