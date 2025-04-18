#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_eratio__u__eta2p01__shift_normalized()
{
//=========Macro generated from canvas: c1_n25/
//=========  (Thu Apr  4 19:01:19 2024) by ROOT version 6.30/02
   TCanvas *c1_n25 = new TCanvas("c1_n25", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n25->SetHighLightColor(2);
   c1_n25->Range(0,0,1,1);
   c1_n25->SetFillColor(0);
   c1_n25->SetBorderMode(0);
   c1_n25->SetBorderSize(2);
   c1_n25->SetTickx(1);
   c1_n25->SetTicky(1);
   c1_n25->SetLeftMargin(0.16);
   c1_n25->SetRightMargin(0.05);
   c1_n25->SetTopMargin(0.05);
   c1_n25->SetBottomMargin(0.16);
   c1_n25->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1144 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1144->Draw();
   dw__1144->cd();
   dw__1144->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__1144->SetFillColor(0);
   dw__1144->SetFillStyle(4000);
   dw__1144->SetBorderMode(0);
   dw__1144->SetBorderSize(0);
   dw__1144->SetLogx();
   dw__1144->SetTickx(1);
   dw__1144->SetTicky(1);
   dw__1144->SetLeftMargin(0.120603);
   dw__1144->SetRightMargin(0.08040201);
   dw__1144->SetTopMargin(0);
   dw__1144->SetBottomMargin(0.2072539);
   dw__1144->SetFrameBorderMode(0);
   dw__1144->SetFrameBorderMode(0);
   Double_t xAxis6877[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__6877 = new TH1D("chist_dw__6877","",11, xAxis6877);
   chist_dw__6877->SetMinimum(0.2);
   chist_dw__6877->SetMaximum(3.2);
   chist_dw__6877->SetDirectory(nullptr);
   chist_dw__6877->SetStats(0);
   chist_dw__6877->SetLineColor(0);
   chist_dw__6877->SetLineWidth(0);
   chist_dw__6877->SetMarkerColor(0);
   chist_dw__6877->SetMarkerStyle(20);
   chist_dw__6877->SetMarkerSize(0);
   chist_dw__6877->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__6877->GetXaxis()->SetRange(1,8);
   chist_dw__6877->GetXaxis()->SetMoreLogLabels();
   chist_dw__6877->GetXaxis()->SetLabelFont(42);
   chist_dw__6877->GetXaxis()->SetLabelSize(0.08);
   chist_dw__6877->GetXaxis()->SetTitleSize(0.08);
   chist_dw__6877->GetXaxis()->SetTickLength(0.04);
   chist_dw__6877->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__6877->GetXaxis()->SetTitleFont(42);
   chist_dw__6877->GetYaxis()->SetTitle("Stretch");
   chist_dw__6877->GetYaxis()->CenterTitle(true);
   chist_dw__6877->GetYaxis()->SetNdivisions(405);
   chist_dw__6877->GetYaxis()->SetLabelFont(42);
   chist_dw__6877->GetYaxis()->SetLabelSize(0.08);
   chist_dw__6877->GetYaxis()->SetTitleSize(0.08);
   chist_dw__6877->GetYaxis()->SetTickLength(0.04);
   chist_dw__6877->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__6877->GetYaxis()->SetTitleFont(42);
   chist_dw__6877->GetZaxis()->SetLabelFont(42);
   chist_dw__6877->GetZaxis()->SetLabelSize(0.05);
   chist_dw__6877->GetZaxis()->SetTitleSize(0.05);
   chist_dw__6877->GetZaxis()->SetTitleOffset(1);
   chist_dw__6877->GetZaxis()->SetTitleFont(42);
   chist_dw__6877->Draw("");
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
   Double_t xAxis6878[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_8__6878 = new TH1D("RZ_stretch_tot_8__6878","",11, xAxis6878);
   RZ_stretch_tot_8__6878->SetBinContent(1,1.045376);
   RZ_stretch_tot_8__6878->SetBinContent(2,1.020849);
   RZ_stretch_tot_8__6878->SetBinContent(3,1.085184);
   RZ_stretch_tot_8__6878->SetBinContent(4,1.065063);
   RZ_stretch_tot_8__6878->SetBinError(1,0.03578685);
   RZ_stretch_tot_8__6878->SetBinError(2,0.03042448);
   RZ_stretch_tot_8__6878->SetBinError(3,0.04901724);
   RZ_stretch_tot_8__6878->SetBinError(4,0.06162315);
   RZ_stretch_tot_8__6878->SetEntries(2114.88);
   RZ_stretch_tot_8__6878->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_8__6878->SetFillColor(ci);
   RZ_stretch_tot_8__6878->SetLineWidth(2);
   RZ_stretch_tot_8__6878->SetMarkerStyle(20);
   RZ_stretch_tot_8__6878->SetMarkerSize(0.8);
   RZ_stretch_tot_8__6878->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_8__6878->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__6878->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__6878->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__6878->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__6878->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__6878->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__6878->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__6878->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__6878->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__6878->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__6878->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__6878->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__6878->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__6878->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_8__6878->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__6878->Draw("SAME E2");
   Double_t xAxis6879[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_8__6879 = new TH1D("RZ_stretch_stat_8__6879","",11, xAxis6879);
   RZ_stretch_stat_8__6879->SetBinContent(1,1.045376);
   RZ_stretch_stat_8__6879->SetBinContent(2,1.020849);
   RZ_stretch_stat_8__6879->SetBinContent(3,1.085184);
   RZ_stretch_stat_8__6879->SetBinContent(4,1.065063);
   RZ_stretch_stat_8__6879->SetBinError(1,0.02404381);
   RZ_stretch_stat_8__6879->SetBinError(2,0.02822147);
   RZ_stretch_stat_8__6879->SetBinError(3,0.03388767);
   RZ_stretch_stat_8__6879->SetBinError(4,0.05819904);
   RZ_stretch_stat_8__6879->SetEntries(3008.199);
   RZ_stretch_stat_8__6879->SetStats(0);
   RZ_stretch_stat_8__6879->SetLineWidth(2);
   RZ_stretch_stat_8__6879->SetMarkerStyle(20);
   RZ_stretch_stat_8__6879->SetMarkerSize(0.8);
   RZ_stretch_stat_8__6879->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_8__6879->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__6879->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__6879->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__6879->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__6879->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__6879->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__6879->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__6879->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__6879->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__6879->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__6879->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__6879->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__6879->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__6879->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_8__6879->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__6879->Draw("SAME PZ");
   Double_t xAxis6880[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_8__6880 = new TH1D("SP_stretch_tot_8__6880","",11, xAxis6880);
   SP_stretch_tot_8__6880->SetBinContent(5,1.060632);
   SP_stretch_tot_8__6880->SetBinContent(6,1.027448);
   SP_stretch_tot_8__6880->SetBinContent(7,1.031447);
   SP_stretch_tot_8__6880->SetBinContent(8,1.007517);
   SP_stretch_tot_8__6880->SetBinContent(9,1.055688);
   SP_stretch_tot_8__6880->SetBinContent(10,1.012332);
   SP_stretch_tot_8__6880->SetBinContent(11,0.9698232);
   SP_stretch_tot_8__6880->SetBinError(5,0.0007684811);
   SP_stretch_tot_8__6880->SetBinError(6,0.0002279536);
   SP_stretch_tot_8__6880->SetBinError(7,0.0003267235);
   SP_stretch_tot_8__6880->SetBinError(8,0.0004484066);
   SP_stretch_tot_8__6880->SetBinError(9,0.001841087);
   SP_stretch_tot_8__6880->SetBinError(10,0.002223897);
   SP_stretch_tot_8__6880->SetBinError(11,0.1400605);
   SP_stretch_tot_8__6880->SetEntries(2615.664);
   SP_stretch_tot_8__6880->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_8__6880->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__6880->SetLineColor(ci);
   SP_stretch_tot_8__6880->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__6880->SetMarkerColor(ci);
   SP_stretch_tot_8__6880->SetMarkerStyle(20);
   SP_stretch_tot_8__6880->SetMarkerSize(0.8);
   SP_stretch_tot_8__6880->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_8__6880->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_8__6880->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__6880->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__6880->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__6880->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_8__6880->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_8__6880->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__6880->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__6880->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__6880->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_8__6880->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_8__6880->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__6880->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__6880->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_8__6880->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_8__6880->Draw("SAME E2");
   Double_t xAxis6881[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_8__6881 = new TH1D("SP_stretch_stat_8__6881","",11, xAxis6881);
   SP_stretch_stat_8__6881->SetBinContent(5,1.060632);
   SP_stretch_stat_8__6881->SetBinContent(6,1.027448);
   SP_stretch_stat_8__6881->SetBinContent(7,1.031447);
   SP_stretch_stat_8__6881->SetBinContent(8,1.007517);
   SP_stretch_stat_8__6881->SetBinContent(9,1.055688);
   SP_stretch_stat_8__6881->SetBinContent(10,1.012332);
   SP_stretch_stat_8__6881->SetBinContent(11,0.9698232);
   SP_stretch_stat_8__6881->SetBinError(5,0.0002805001);
   SP_stretch_stat_8__6881->SetBinError(6,0.0001313661);
   SP_stretch_stat_8__6881->SetBinError(7,0.0003266278);
   SP_stretch_stat_8__6881->SetBinError(8,0.0002874674);
   SP_stretch_stat_8__6881->SetBinError(9,0.001165306);
   SP_stretch_stat_8__6881->SetBinError(10,0.002201225);
   SP_stretch_stat_8__6881->SetBinError(11,0.1354809);
   SP_stretch_stat_8__6881->SetEntries(2795.82);
   SP_stretch_stat_8__6881->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__6881->SetLineColor(ci);
   SP_stretch_stat_8__6881->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__6881->SetMarkerColor(ci);
   SP_stretch_stat_8__6881->SetMarkerStyle(20);
   SP_stretch_stat_8__6881->SetMarkerSize(0.8);
   SP_stretch_stat_8__6881->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_8__6881->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_8__6881->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__6881->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__6881->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__6881->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_8__6881->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_8__6881->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__6881->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__6881->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__6881->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_8__6881->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_8__6881->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__6881->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__6881->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_8__6881->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_8__6881->Draw("SAME PZ");
   dw__1144->Modified();
   c1_n25->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1145 = new TPad("up", "up",0,0.5,1,1);
   up__1145->Draw();
   up__1145->cd();
   up__1145->Range(0.4143249,-1.042204,3.986152,2.3517);
   up__1145->SetFillColor(0);
   up__1145->SetFillStyle(4000);
   up__1145->SetBorderMode(0);
   up__1145->SetBorderSize(0);
   up__1145->SetLogx();
   up__1145->SetTickx(1);
   up__1145->SetTicky(1);
   up__1145->SetLeftMargin(0.120603);
   up__1145->SetRightMargin(0.08040201);
   up__1145->SetBottomMargin(0.01243523);
   up__1145->SetFrameBorderMode(0);
   up__1145->SetFrameBorderMode(0);
   Double_t xAxis6882[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__6882 = new TH1D("chist__6882","",11, xAxis6882);
   chist__6882->SetMinimum(-1);
   chist__6882->SetMaximum(2);
   chist__6882->SetDirectory(nullptr);
   chist__6882->SetStats(0);
   chist__6882->SetLineColor(0);
   chist__6882->SetLineWidth(0);
   chist__6882->SetMarkerColor(0);
   chist__6882->SetMarkerStyle(20);
   chist__6882->SetMarkerSize(0);
   chist__6882->GetXaxis()->SetRange(1,8);
   chist__6882->GetXaxis()->SetNdivisions(4000510);
   chist__6882->GetXaxis()->SetLabelFont(42);
   chist__6882->GetXaxis()->SetLabelSize(0);
   chist__6882->GetXaxis()->SetTitleSize(0.08);
   chist__6882->GetXaxis()->SetTickLength(0.04);
   chist__6882->GetXaxis()->SetTitleOffset(2.020933);
   chist__6882->GetXaxis()->SetTitleFont(42);
   chist__6882->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__6882->GetYaxis()->SetNdivisions(3000510);
   chist__6882->GetYaxis()->SetLabelFont(42);
   chist__6882->GetYaxis()->SetLabelSize(0.08);
   chist__6882->GetYaxis()->SetTitleSize(0.08);
   chist__6882->GetYaxis()->SetTickLength(0.04);
   chist__6882->GetYaxis()->SetTitleOffset(0.727387);
   chist__6882->GetYaxis()->SetTitleFont(42);
   chist__6882->GetZaxis()->SetLabelFont(42);
   chist__6882->GetZaxis()->SetLabelSize(0.05);
   chist__6882->GetZaxis()->SetTitleSize(0.05);
   chist__6882->GetZaxis()->SetTitleOffset(1);
   chist__6882->GetZaxis()->SetTitleFont(42);
   chist__6882->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_8","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_8","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_8","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_8","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5714,"Unconverted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"2.01 #leq |#eta^{#gamma}| < 2.37");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis6883[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_8__6883 = new TH1D("RZ_shift_tot_8__6883","",11, xAxis6883);
   RZ_shift_tot_8__6883->SetBinContent(1,-0.03242565);
   RZ_shift_tot_8__6883->SetBinContent(2,-0.02857317);
   RZ_shift_tot_8__6883->SetBinContent(3,-0.02693072);
   RZ_shift_tot_8__6883->SetBinContent(4,-0.030916);
   RZ_shift_tot_8__6883->SetBinError(1,0.005671655);
   RZ_shift_tot_8__6883->SetBinError(2,0.01040823);
   RZ_shift_tot_8__6883->SetBinError(3,0.008663755);
   RZ_shift_tot_8__6883->SetBinError(4,0.01803002);
   RZ_shift_tot_8__6883->SetEntries(26.12502);
   RZ_shift_tot_8__6883->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_8__6883->SetFillColor(ci);
   RZ_shift_tot_8__6883->SetMarkerStyle(20);
   RZ_shift_tot_8__6883->SetMarkerSize(0.8);
   RZ_shift_tot_8__6883->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_8__6883->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_8__6883->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__6883->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__6883->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__6883->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_8__6883->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_8__6883->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__6883->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__6883->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__6883->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_8__6883->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_8__6883->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__6883->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__6883->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_8__6883->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_8__6883->Draw("SAME E2");
   Double_t xAxis6884[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_8__6884 = new TH1D("RZ_shift_stat_8__6884","",11, xAxis6884);
   RZ_shift_stat_8__6884->SetBinContent(1,-0.03242565);
   RZ_shift_stat_8__6884->SetBinContent(2,-0.02857317);
   RZ_shift_stat_8__6884->SetBinContent(3,-0.02693072);
   RZ_shift_stat_8__6884->SetBinContent(4,-0.030916);
   RZ_shift_stat_8__6884->SetBinError(1,0.005530511);
   RZ_shift_stat_8__6884->SetBinError(2,0.008026362);
   RZ_shift_stat_8__6884->SetBinError(3,0.007278697);
   RZ_shift_stat_8__6884->SetBinError(4,0.01382495);
   RZ_shift_stat_8__6884->SetEntries(41.65005);
   RZ_shift_stat_8__6884->SetStats(0);
   RZ_shift_stat_8__6884->SetMarkerStyle(20);
   RZ_shift_stat_8__6884->SetMarkerSize(0.8);
   RZ_shift_stat_8__6884->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_8__6884->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_8__6884->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__6884->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__6884->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__6884->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_8__6884->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_8__6884->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__6884->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__6884->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__6884->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_8__6884->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_8__6884->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__6884->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__6884->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_8__6884->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_8__6884->Draw("SAME PZ");
   Double_t xAxis6885[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_8__6885 = new TH1D("SP_shift_tot_8__6885","",11, xAxis6885);
   SP_shift_tot_8__6885->SetBinContent(5,-0.02021864);
   SP_shift_tot_8__6885->SetBinContent(6,-0.02688184);
   SP_shift_tot_8__6885->SetBinContent(7,-0.02418956);
   SP_shift_tot_8__6885->SetBinContent(8,-0.006116865);
   SP_shift_tot_8__6885->SetBinContent(9,-0.001186348);
   SP_shift_tot_8__6885->SetBinContent(10,-0.002392722);
   SP_shift_tot_8__6885->SetBinContent(11,0.02455752);
   SP_shift_tot_8__6885->SetBinError(5,0.0001066537);
   SP_shift_tot_8__6885->SetBinError(6,0.000311731);
   SP_shift_tot_8__6885->SetBinError(7,0.0006080322);
   SP_shift_tot_8__6885->SetBinError(8,0.001799667);
   SP_shift_tot_8__6885->SetBinError(9,0.0004643109);
   SP_shift_tot_8__6885->SetBinError(10,0.002345273);
   SP_shift_tot_8__6885->SetBinError(11,0.03292016);
   SP_shift_tot_8__6885->SetEntries(2.912786);
   SP_shift_tot_8__6885->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_8__6885->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__6885->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__6885->SetMarkerColor(ci);
   SP_shift_tot_8__6885->SetMarkerStyle(20);
   SP_shift_tot_8__6885->SetMarkerSize(0.8);
   SP_shift_tot_8__6885->GetXaxis()->SetRange(1,8);
   SP_shift_tot_8__6885->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_8__6885->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__6885->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__6885->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__6885->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_8__6885->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_8__6885->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__6885->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__6885->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__6885->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_8__6885->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_8__6885->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__6885->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__6885->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_8__6885->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_8__6885->Draw("SAME E2");
   Double_t xAxis6886[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_8__6886 = new TH1D("SP_shift_stat_8__6886","",11, xAxis6886);
   SP_shift_stat_8__6886->SetBinContent(5,-0.02021864);
   SP_shift_stat_8__6886->SetBinContent(6,-0.02688184);
   SP_shift_stat_8__6886->SetBinContent(7,-0.02418956);
   SP_shift_stat_8__6886->SetBinContent(8,-0.006116865);
   SP_shift_stat_8__6886->SetBinContent(9,-0.001186348);
   SP_shift_stat_8__6886->SetBinContent(10,-0.002392722);
   SP_shift_stat_8__6886->SetBinContent(11,0.02455752);
   SP_shift_stat_8__6886->SetBinError(5,0.0001051937);
   SP_shift_stat_8__6886->SetBinError(6,0.0001074364);
   SP_shift_stat_8__6886->SetBinError(7,0.0002278682);
   SP_shift_stat_8__6886->SetBinError(8,0.0003392417);
   SP_shift_stat_8__6886->SetBinError(9,0.0004232659);
   SP_shift_stat_8__6886->SetBinError(10,0.00231415);
   SP_shift_stat_8__6886->SetBinError(11,0.03287973);
   SP_shift_stat_8__6886->SetEntries(2.929857);
   SP_shift_stat_8__6886->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__6886->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__6886->SetMarkerColor(ci);
   SP_shift_stat_8__6886->SetMarkerStyle(20);
   SP_shift_stat_8__6886->SetMarkerSize(0.8);
   SP_shift_stat_8__6886->GetXaxis()->SetRange(1,8);
   SP_shift_stat_8__6886->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_8__6886->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__6886->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__6886->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__6886->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_8__6886->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_8__6886->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__6886->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__6886->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__6886->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_8__6886->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_8__6886->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__6886->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__6886->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_8__6886->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_8__6886->Draw("SAME PZ");
   Double_t xAxis6887[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__6887 = new TH1D("chist_copy__6887","",11, xAxis6887);
   chist_copy__6887->SetMinimum(-1);
   chist_copy__6887->SetMaximum(2);
   chist_copy__6887->SetDirectory(nullptr);
   chist_copy__6887->SetStats(0);
   chist_copy__6887->SetLineColor(0);
   chist_copy__6887->SetLineWidth(0);
   chist_copy__6887->SetMarkerColor(0);
   chist_copy__6887->SetMarkerStyle(20);
   chist_copy__6887->SetMarkerSize(0);
   chist_copy__6887->GetXaxis()->SetRange(1,8);
   chist_copy__6887->GetXaxis()->SetNdivisions(4000510);
   chist_copy__6887->GetXaxis()->SetLabelFont(42);
   chist_copy__6887->GetXaxis()->SetLabelSize(0);
   chist_copy__6887->GetXaxis()->SetTitleSize(0.08);
   chist_copy__6887->GetXaxis()->SetTickLength(0.04);
   chist_copy__6887->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__6887->GetXaxis()->SetTitleFont(42);
   chist_copy__6887->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__6887->GetYaxis()->SetNdivisions(3000510);
   chist_copy__6887->GetYaxis()->SetLabelFont(42);
   chist_copy__6887->GetYaxis()->SetLabelSize(0.08);
   chist_copy__6887->GetYaxis()->SetTitleSize(0.08);
   chist_copy__6887->GetYaxis()->SetTickLength(0.04);
   chist_copy__6887->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__6887->GetYaxis()->SetTitleFont(42);
   chist_copy__6887->GetZaxis()->SetLabelFont(42);
   chist_copy__6887->GetZaxis()->SetLabelSize(0.05);
   chist_copy__6887->GetZaxis()->SetTitleSize(0.05);
   chist_copy__6887->GetZaxis()->SetTitleOffset(1);
   chist_copy__6887->GetZaxis()->SetTitleFont(42);
   chist_copy__6887->Draw("sameaxis");
   up__1145->Modified();
   c1_n25->cd();
   c1_n25->Modified();
   c1_n25->SetSelected(c1_n25);
}
