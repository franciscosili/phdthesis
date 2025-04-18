#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rphi__u__eta1p15__shift_normalized()
{
//=========Macro generated from canvas: c1_n24/
//=========  (Thu Apr  4 19:00:17 2024) by ROOT version 6.30/02
   TCanvas *c1_n24 = new TCanvas("c1_n24", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n24->SetHighLightColor(2);
   c1_n24->Range(0,0,1,1);
   c1_n24->SetFillColor(0);
   c1_n24->SetBorderMode(0);
   c1_n24->SetBorderSize(2);
   c1_n24->SetTickx(1);
   c1_n24->SetTicky(1);
   c1_n24->SetLeftMargin(0.16);
   c1_n24->SetRightMargin(0.05);
   c1_n24->SetTopMargin(0.05);
   c1_n24->SetBottomMargin(0.16);
   c1_n24->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__186 = new TPad("dw", "dw",0,0,1,0.5);
   dw__186->Draw();
   dw__186->cd();
   dw__186->Range(0.4143249,-0.5843137,3.986152,3.2);
   dw__186->SetFillColor(0);
   dw__186->SetFillStyle(4000);
   dw__186->SetBorderMode(0);
   dw__186->SetBorderSize(0);
   dw__186->SetLogx();
   dw__186->SetTickx(1);
   dw__186->SetTicky(1);
   dw__186->SetLeftMargin(0.120603);
   dw__186->SetRightMargin(0.08040201);
   dw__186->SetTopMargin(0);
   dw__186->SetBottomMargin(0.2072539);
   dw__186->SetFrameBorderMode(0);
   dw__186->SetFrameBorderMode(0);
   Double_t xAxis1132[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_dw__1132 = new TH1D("chist_dw__1132","",11, xAxis1132);
   chist_dw__1132->SetMinimum(0.2);
   chist_dw__1132->SetMaximum(3.2);
   chist_dw__1132->SetDirectory(nullptr);
   chist_dw__1132->SetStats(0);
   chist_dw__1132->SetLineColor(0);
   chist_dw__1132->SetLineWidth(0);
   chist_dw__1132->SetMarkerColor(0);
   chist_dw__1132->SetMarkerStyle(20);
   chist_dw__1132->SetMarkerSize(0);
   chist_dw__1132->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   chist_dw__1132->GetXaxis()->SetRange(1,8);
   chist_dw__1132->GetXaxis()->SetMoreLogLabels();
   chist_dw__1132->GetXaxis()->SetLabelFont(42);
   chist_dw__1132->GetXaxis()->SetLabelSize(0.08);
   chist_dw__1132->GetXaxis()->SetTitleSize(0.08);
   chist_dw__1132->GetXaxis()->SetTickLength(0.04);
   chist_dw__1132->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__1132->GetXaxis()->SetTitleFont(42);
   chist_dw__1132->GetYaxis()->SetTitle("Stretch");
   chist_dw__1132->GetYaxis()->CenterTitle(true);
   chist_dw__1132->GetYaxis()->SetNdivisions(405);
   chist_dw__1132->GetYaxis()->SetLabelFont(42);
   chist_dw__1132->GetYaxis()->SetLabelSize(0.08);
   chist_dw__1132->GetYaxis()->SetTitleSize(0.08);
   chist_dw__1132->GetYaxis()->SetTickLength(0.04);
   chist_dw__1132->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__1132->GetYaxis()->SetTitleFont(42);
   chist_dw__1132->GetZaxis()->SetLabelFont(42);
   chist_dw__1132->GetZaxis()->SetLabelSize(0.05);
   chist_dw__1132->GetZaxis()->SetTitleSize(0.05);
   chist_dw__1132->GetZaxis()->SetTitleOffset(1);
   chist_dw__1132->GetZaxis()->SetTitleFont(42);
   chist_dw__1132->Draw("");
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
   Double_t xAxis1133[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_tot_4__1133 = new TH1D("RZ_stretch_tot_4__1133","",11, xAxis1133);
   RZ_stretch_tot_4__1133->SetBinContent(1,1.000049);
   RZ_stretch_tot_4__1133->SetBinContent(2,1.049163);
   RZ_stretch_tot_4__1133->SetBinContent(3,1.035948);
   RZ_stretch_tot_4__1133->SetBinContent(4,1.057306);
   RZ_stretch_tot_4__1133->SetBinError(1,0.02703063);
   RZ_stretch_tot_4__1133->SetBinError(2,0.04760441);
   RZ_stretch_tot_4__1133->SetBinError(3,0.02354057);
   RZ_stretch_tot_4__1133->SetBinError(4,0.03980352);
   RZ_stretch_tot_4__1133->SetEntries(3341.573);
   RZ_stretch_tot_4__1133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_4__1133->SetFillColor(ci);
   RZ_stretch_tot_4__1133->SetLineWidth(2);
   RZ_stretch_tot_4__1133->SetMarkerStyle(20);
   RZ_stretch_tot_4__1133->SetMarkerSize(0.8);
   RZ_stretch_tot_4__1133->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_4__1133->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_4__1133->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_4__1133->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_4__1133->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_4__1133->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_4__1133->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_4__1133->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_4__1133->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_4__1133->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_4__1133->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_4__1133->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_4__1133->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_4__1133->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_4__1133->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_4__1133->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_4__1133->Draw("SAME E2");
   Double_t xAxis1134[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_stretch_stat_4__1134 = new TH1D("RZ_stretch_stat_4__1134","",11, xAxis1134);
   RZ_stretch_stat_4__1134->SetBinContent(1,1.000049);
   RZ_stretch_stat_4__1134->SetBinContent(2,1.049163);
   RZ_stretch_stat_4__1134->SetBinContent(3,1.035948);
   RZ_stretch_stat_4__1134->SetBinContent(4,1.057306);
   RZ_stretch_stat_4__1134->SetBinError(1,0.008189958);
   RZ_stretch_stat_4__1134->SetBinError(2,0.02151833);
   RZ_stretch_stat_4__1134->SetBinError(3,0.02182191);
   RZ_stretch_stat_4__1134->SetBinError(4,0.03649153);
   RZ_stretch_stat_4__1134->SetEntries(7339.803);
   RZ_stretch_stat_4__1134->SetStats(0);
   RZ_stretch_stat_4__1134->SetLineWidth(2);
   RZ_stretch_stat_4__1134->SetMarkerStyle(20);
   RZ_stretch_stat_4__1134->SetMarkerSize(0.8);
   RZ_stretch_stat_4__1134->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_4__1134->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_4__1134->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_4__1134->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_4__1134->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_4__1134->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_4__1134->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_4__1134->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_4__1134->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_4__1134->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_4__1134->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_4__1134->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_4__1134->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_4__1134->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_4__1134->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_4__1134->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_4__1134->Draw("SAME PZ");
   Double_t xAxis1135[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_tot_4__1135 = new TH1D("SP_stretch_tot_4__1135","",11, xAxis1135);
   SP_stretch_tot_4__1135->SetBinContent(5,1.154196);
   SP_stretch_tot_4__1135->SetBinContent(6,1.154483);
   SP_stretch_tot_4__1135->SetBinContent(7,1.126315);
   SP_stretch_tot_4__1135->SetBinContent(8,1.085539);
   SP_stretch_tot_4__1135->SetBinContent(9,1.169624);
   SP_stretch_tot_4__1135->SetBinContent(10,1.217806);
   SP_stretch_tot_4__1135->SetBinContent(11,1.154694);
   SP_stretch_tot_4__1135->SetBinError(5,0.009615054);
   SP_stretch_tot_4__1135->SetBinError(6,0.01753734);
   SP_stretch_tot_4__1135->SetBinError(7,0.02213036);
   SP_stretch_tot_4__1135->SetBinError(8,0.0248432);
   SP_stretch_tot_4__1135->SetBinError(9,0.04032012);
   SP_stretch_tot_4__1135->SetBinError(10,0.0564411);
   SP_stretch_tot_4__1135->SetBinError(11,0.04857004);
   SP_stretch_tot_4__1135->SetEntries(7491.548);
   SP_stretch_tot_4__1135->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_4__1135->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_4__1135->SetLineColor(ci);
   SP_stretch_tot_4__1135->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_4__1135->SetMarkerColor(ci);
   SP_stretch_tot_4__1135->SetMarkerStyle(20);
   SP_stretch_tot_4__1135->SetMarkerSize(0.8);
   SP_stretch_tot_4__1135->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_4__1135->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_4__1135->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_4__1135->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_4__1135->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_4__1135->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_4__1135->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_4__1135->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_4__1135->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_4__1135->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_4__1135->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_4__1135->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_4__1135->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_4__1135->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_4__1135->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_4__1135->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_4__1135->Draw("SAME E2");
   Double_t xAxis1136[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_stretch_stat_4__1136 = new TH1D("SP_stretch_stat_4__1136","",11, xAxis1136);
   SP_stretch_stat_4__1136->SetBinContent(5,1.154196);
   SP_stretch_stat_4__1136->SetBinContent(6,1.154483);
   SP_stretch_stat_4__1136->SetBinContent(7,1.126315);
   SP_stretch_stat_4__1136->SetBinContent(8,1.085539);
   SP_stretch_stat_4__1136->SetBinContent(9,1.169624);
   SP_stretch_stat_4__1136->SetBinContent(10,1.217806);
   SP_stretch_stat_4__1136->SetBinContent(11,1.154694);
   SP_stretch_stat_4__1136->SetBinError(5,0.0002732423);
   SP_stretch_stat_4__1136->SetBinError(6,0.0002650881);
   SP_stretch_stat_4__1136->SetBinError(7,0.0006513922);
   SP_stretch_stat_4__1136->SetBinError(8,0.0008987447);
   SP_stretch_stat_4__1136->SetBinError(9,0.001353505);
   SP_stretch_stat_4__1136->SetBinError(10,0.004538893);
   SP_stretch_stat_4__1136->SetBinError(11,0.03580873);
   SP_stretch_stat_4__1136->SetEntries(49772.33);
   SP_stretch_stat_4__1136->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_4__1136->SetLineColor(ci);
   SP_stretch_stat_4__1136->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_4__1136->SetMarkerColor(ci);
   SP_stretch_stat_4__1136->SetMarkerStyle(20);
   SP_stretch_stat_4__1136->SetMarkerSize(0.8);
   SP_stretch_stat_4__1136->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_4__1136->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_4__1136->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_4__1136->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_4__1136->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_4__1136->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_4__1136->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_4__1136->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_4__1136->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_4__1136->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_4__1136->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_4__1136->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_4__1136->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_4__1136->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_4__1136->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_4__1136->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_4__1136->Draw("SAME PZ");
   dw__186->Modified();
   c1_n24->cd();
  
// ------------>Primitives in pad: up
   TPad *up__187 = new TPad("up", "up",0,0.5,1,1);
   up__187->Draw();
   up__187->cd();
   up__187->Range(0.4143249,-1.042204,3.986152,2.3517);
   up__187->SetFillColor(0);
   up__187->SetFillStyle(4000);
   up__187->SetBorderMode(0);
   up__187->SetBorderSize(0);
   up__187->SetLogx();
   up__187->SetTickx(1);
   up__187->SetTicky(1);
   up__187->SetLeftMargin(0.120603);
   up__187->SetRightMargin(0.08040201);
   up__187->SetBottomMargin(0.01243523);
   up__187->SetFrameBorderMode(0);
   up__187->SetFrameBorderMode(0);
   Double_t xAxis1137[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist__1137 = new TH1D("chist__1137","",11, xAxis1137);
   chist__1137->SetMinimum(-1);
   chist__1137->SetMaximum(2);
   chist__1137->SetDirectory(nullptr);
   chist__1137->SetStats(0);
   chist__1137->SetLineColor(0);
   chist__1137->SetLineWidth(0);
   chist__1137->SetMarkerColor(0);
   chist__1137->SetMarkerStyle(20);
   chist__1137->SetMarkerSize(0);
   chist__1137->GetXaxis()->SetRange(1,8);
   chist__1137->GetXaxis()->SetNdivisions(4000510);
   chist__1137->GetXaxis()->SetLabelFont(42);
   chist__1137->GetXaxis()->SetLabelSize(0);
   chist__1137->GetXaxis()->SetTitleSize(0.08);
   chist__1137->GetXaxis()->SetTickLength(0.04);
   chist__1137->GetXaxis()->SetTitleOffset(2.020933);
   chist__1137->GetXaxis()->SetTitleFont(42);
   chist__1137->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__1137->GetYaxis()->SetNdivisions(3000510);
   chist__1137->GetYaxis()->SetLabelFont(42);
   chist__1137->GetYaxis()->SetLabelSize(0.08);
   chist__1137->GetYaxis()->SetTitleSize(0.08);
   chist__1137->GetYaxis()->SetTickLength(0.04);
   chist__1137->GetYaxis()->SetTitleOffset(0.727387);
   chist__1137->GetYaxis()->SetTitleFont(42);
   chist__1137->GetZaxis()->SetLabelFont(42);
   chist__1137->GetZaxis()->SetLabelSize(0.05);
   chist__1137->GetZaxis()->SetTitleSize(0.05);
   chist__1137->GetZaxis()->SetTitleOffset(1);
   chist__1137->GetZaxis()->SetTitleFont(42);
   chist__1137->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"R_{#phi}");
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
      tex = new TLatex(0.160804,0.5098,"1.15 #leq |#eta^{#gamma}| < 1.37");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1138[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_tot_4__1138 = new TH1D("RZ_shift_tot_4__1138","",11, xAxis1138);
   RZ_shift_tot_4__1138->SetBinContent(1,0.02269551);
   RZ_shift_tot_4__1138->SetBinContent(2,0.06917598);
   RZ_shift_tot_4__1138->SetBinContent(3,0.08145778);
   RZ_shift_tot_4__1138->SetBinContent(4,0.1155041);
   RZ_shift_tot_4__1138->SetBinError(1,0.007493943);
   RZ_shift_tot_4__1138->SetBinError(2,0.01611069);
   RZ_shift_tot_4__1138->SetBinError(3,0.01082055);
   RZ_shift_tot_4__1138->SetBinError(4,0.02540723);
   RZ_shift_tot_4__1138->SetEntries(77.36508);
   RZ_shift_tot_4__1138->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_4__1138->SetFillColor(ci);
   RZ_shift_tot_4__1138->SetMarkerStyle(20);
   RZ_shift_tot_4__1138->SetMarkerSize(0.8);
   RZ_shift_tot_4__1138->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_4__1138->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_4__1138->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_4__1138->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_4__1138->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_4__1138->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_4__1138->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_4__1138->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_4__1138->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_4__1138->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_4__1138->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_4__1138->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_4__1138->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_4__1138->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_4__1138->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_4__1138->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_4__1138->Draw("SAME E2");
   Double_t xAxis1139[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *RZ_shift_stat_4__1139 = new TH1D("RZ_shift_stat_4__1139","",11, xAxis1139);
   RZ_shift_stat_4__1139->SetBinContent(1,0.02269551);
   RZ_shift_stat_4__1139->SetBinContent(2,0.06917598);
   RZ_shift_stat_4__1139->SetBinContent(3,0.08145778);
   RZ_shift_stat_4__1139->SetBinContent(4,0.1155041);
   RZ_shift_stat_4__1139->SetBinError(1,0.006141732);
   RZ_shift_stat_4__1139->SetBinError(2,0.009635877);
   RZ_shift_stat_4__1139->SetBinError(3,0.01009113);
   RZ_shift_stat_4__1139->SetBinError(4,0.01983756);
   RZ_shift_stat_4__1139->SetEntries(133.2811);
   RZ_shift_stat_4__1139->SetStats(0);
   RZ_shift_stat_4__1139->SetMarkerStyle(20);
   RZ_shift_stat_4__1139->SetMarkerSize(0.8);
   RZ_shift_stat_4__1139->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_4__1139->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_4__1139->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_4__1139->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_4__1139->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_4__1139->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_4__1139->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_4__1139->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_4__1139->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_4__1139->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_4__1139->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_4__1139->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_4__1139->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_4__1139->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_4__1139->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_4__1139->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_4__1139->Draw("SAME PZ");
   Double_t xAxis1140[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_tot_4__1140 = new TH1D("SP_shift_tot_4__1140","",11, xAxis1140);
   SP_shift_tot_4__1140->SetBinContent(5,0.2099878);
   SP_shift_tot_4__1140->SetBinContent(6,0.2453312);
   SP_shift_tot_4__1140->SetBinContent(7,0.2876222);
   SP_shift_tot_4__1140->SetBinContent(8,0.3177908);
   SP_shift_tot_4__1140->SetBinContent(9,0.4033073);
   SP_shift_tot_4__1140->SetBinContent(10,0.444747);
   SP_shift_tot_4__1140->SetBinContent(11,0.5507014);
   SP_shift_tot_4__1140->SetBinError(5,0.01292145);
   SP_shift_tot_4__1140->SetBinError(6,0.01582136);
   SP_shift_tot_4__1140->SetBinError(7,0.01541575);
   SP_shift_tot_4__1140->SetBinError(8,0.01816743);
   SP_shift_tot_4__1140->SetBinError(9,0.01675962);
   SP_shift_tot_4__1140->SetBinError(10,0.01888189);
   SP_shift_tot_4__1140->SetBinError(11,0.02380758);
   SP_shift_tot_4__1140->SetEntries(2763.157);
   SP_shift_tot_4__1140->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_4__1140->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_4__1140->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_4__1140->SetMarkerColor(ci);
   SP_shift_tot_4__1140->SetMarkerStyle(20);
   SP_shift_tot_4__1140->SetMarkerSize(0.8);
   SP_shift_tot_4__1140->GetXaxis()->SetRange(1,8);
   SP_shift_tot_4__1140->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_4__1140->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_4__1140->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_4__1140->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_4__1140->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_4__1140->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_4__1140->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_4__1140->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_4__1140->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_4__1140->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_4__1140->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_4__1140->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_4__1140->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_4__1140->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_4__1140->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_4__1140->Draw("SAME E2");
   Double_t xAxis1141[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *SP_shift_stat_4__1141 = new TH1D("SP_shift_stat_4__1141","",11, xAxis1141);
   SP_shift_stat_4__1141->SetBinContent(5,0.2099878);
   SP_shift_stat_4__1141->SetBinContent(6,0.2453312);
   SP_shift_stat_4__1141->SetBinContent(7,0.2876222);
   SP_shift_stat_4__1141->SetBinContent(8,0.3177908);
   SP_shift_stat_4__1141->SetBinContent(9,0.4033073);
   SP_shift_stat_4__1141->SetBinContent(10,0.444747);
   SP_shift_stat_4__1141->SetBinContent(11,0.5507014);
   SP_shift_stat_4__1141->SetBinError(5,0.0002672847);
   SP_shift_stat_4__1141->SetBinError(6,0.0002839823);
   SP_shift_stat_4__1141->SetBinError(7,0.0005160194);
   SP_shift_stat_4__1141->SetBinError(8,0.0006732092);
   SP_shift_stat_4__1141->SetBinError(9,0.00120019);
   SP_shift_stat_4__1141->SetBinError(10,0.004502177);
   SP_shift_stat_4__1141->SetBinError(11,0.02068066);
   SP_shift_stat_4__1141->SetEntries(13434.3);
   SP_shift_stat_4__1141->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_4__1141->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_4__1141->SetMarkerColor(ci);
   SP_shift_stat_4__1141->SetMarkerStyle(20);
   SP_shift_stat_4__1141->SetMarkerSize(0.8);
   SP_shift_stat_4__1141->GetXaxis()->SetRange(1,8);
   SP_shift_stat_4__1141->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_4__1141->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_4__1141->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_4__1141->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_4__1141->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_4__1141->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_4__1141->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_4__1141->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_4__1141->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_4__1141->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_4__1141->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_4__1141->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_4__1141->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_4__1141->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_4__1141->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_4__1141->Draw("SAME PZ");
   Double_t xAxis1142[12] = {7, 15, 20, 30, 50, 60, 80, 100, 150, 300, 600, 5000}; 
   
   TH1D *chist_copy__1142 = new TH1D("chist_copy__1142","",11, xAxis1142);
   chist_copy__1142->SetMinimum(-1);
   chist_copy__1142->SetMaximum(2);
   chist_copy__1142->SetDirectory(nullptr);
   chist_copy__1142->SetStats(0);
   chist_copy__1142->SetLineColor(0);
   chist_copy__1142->SetLineWidth(0);
   chist_copy__1142->SetMarkerColor(0);
   chist_copy__1142->SetMarkerStyle(20);
   chist_copy__1142->SetMarkerSize(0);
   chist_copy__1142->GetXaxis()->SetRange(1,8);
   chist_copy__1142->GetXaxis()->SetNdivisions(4000510);
   chist_copy__1142->GetXaxis()->SetLabelFont(42);
   chist_copy__1142->GetXaxis()->SetLabelSize(0);
   chist_copy__1142->GetXaxis()->SetTitleSize(0.08);
   chist_copy__1142->GetXaxis()->SetTickLength(0.04);
   chist_copy__1142->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__1142->GetXaxis()->SetTitleFont(42);
   chist_copy__1142->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__1142->GetYaxis()->SetNdivisions(3000510);
   chist_copy__1142->GetYaxis()->SetLabelFont(42);
   chist_copy__1142->GetYaxis()->SetLabelSize(0.08);
   chist_copy__1142->GetYaxis()->SetTitleSize(0.08);
   chist_copy__1142->GetYaxis()->SetTickLength(0.04);
   chist_copy__1142->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__1142->GetYaxis()->SetTitleFont(42);
   chist_copy__1142->GetZaxis()->SetLabelFont(42);
   chist_copy__1142->GetZaxis()->SetLabelSize(0.05);
   chist_copy__1142->GetZaxis()->SetTitleSize(0.05);
   chist_copy__1142->GetZaxis()->SetTitleOffset(1);
   chist_copy__1142->GetZaxis()->SetTitleFont(42);
   chist_copy__1142->Draw("sameaxis");
   up__187->Modified();
   c1_n24->cd();
   c1_n24->Modified();
   c1_n24->SetSelected(c1_n24);
}
