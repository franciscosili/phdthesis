#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_wstot__u__pt0020p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n28/
//=========  (Thu Apr  4 19:01:12 2024) by ROOT version 6.30/02
   TCanvas *c1_n28 = new TCanvas("c1_n28", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n28->SetHighLightColor(2);
   c1_n28->Range(0,0,1,1);
   c1_n28->SetFillColor(0);
   c1_n28->SetBorderMode(0);
   c1_n28->SetBorderSize(2);
   c1_n28->SetTickx(1);
   c1_n28->SetTicky(1);
   c1_n28->SetLeftMargin(0.16);
   c1_n28->SetRightMargin(0.05);
   c1_n28->SetTopMargin(0.05);
   c1_n28->SetBottomMargin(0.16);
   c1_n28->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1006 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1006->Draw();
   dw__1006->cd();
   dw__1006->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1006->SetFillColor(0);
   dw__1006->SetFillStyle(4000);
   dw__1006->SetBorderMode(0);
   dw__1006->SetBorderSize(0);
   dw__1006->SetTickx(1);
   dw__1006->SetTicky(1);
   dw__1006->SetLeftMargin(0.120603);
   dw__1006->SetRightMargin(0.08040201);
   dw__1006->SetTopMargin(0);
   dw__1006->SetBottomMargin(0.2072539);
   dw__1006->SetFrameBorderMode(0);
   dw__1006->SetFrameBorderMode(0);
   Double_t xAxis6046[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__6046 = new TH1D("chist_dw__6046","",8, xAxis6046);
   chist_dw__6046->SetMinimum(0.2);
   chist_dw__6046->SetMaximum(3.2);
   chist_dw__6046->SetDirectory(nullptr);
   chist_dw__6046->SetStats(0);
   chist_dw__6046->SetLineColor(0);
   chist_dw__6046->SetLineWidth(0);
   chist_dw__6046->SetMarkerColor(0);
   chist_dw__6046->SetMarkerStyle(20);
   chist_dw__6046->SetMarkerSize(0);
   chist_dw__6046->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__6046->GetXaxis()->SetRange(1,11);
   chist_dw__6046->GetXaxis()->SetLabelFont(42);
   chist_dw__6046->GetXaxis()->SetLabelSize(0.08);
   chist_dw__6046->GetXaxis()->SetTitleSize(0.08);
   chist_dw__6046->GetXaxis()->SetTickLength(0.04);
   chist_dw__6046->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__6046->GetXaxis()->SetTitleFont(42);
   chist_dw__6046->GetYaxis()->SetTitle("Stretch");
   chist_dw__6046->GetYaxis()->CenterTitle(true);
   chist_dw__6046->GetYaxis()->SetNdivisions(405);
   chist_dw__6046->GetYaxis()->SetLabelFont(42);
   chist_dw__6046->GetYaxis()->SetLabelSize(0.08);
   chist_dw__6046->GetYaxis()->SetTitleSize(0.08);
   chist_dw__6046->GetYaxis()->SetTickLength(0.04);
   chist_dw__6046->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__6046->GetYaxis()->SetTitleFont(42);
   chist_dw__6046->GetZaxis()->SetLabelFont(42);
   chist_dw__6046->GetZaxis()->SetLabelSize(0.05);
   chist_dw__6046->GetZaxis()->SetTitleSize(0.05);
   chist_dw__6046->GetZaxis()->SetTitleOffset(1);
   chist_dw__6046->GetZaxis()->SetTitleFont(42);
   chist_dw__6046->Draw("");
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
   Double_t xAxis6047[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_3__6047 = new TH1D("RZ_stretch_tot_3__6047","",8, xAxis6047);
   RZ_stretch_tot_3__6047->SetBinContent(1,0.9542535);
   RZ_stretch_tot_3__6047->SetBinContent(2,0.9544498);
   RZ_stretch_tot_3__6047->SetBinContent(3,0.9687915);
   RZ_stretch_tot_3__6047->SetBinContent(4,0.9742817);
   RZ_stretch_tot_3__6047->SetBinContent(6,0.9638007);
   RZ_stretch_tot_3__6047->SetBinContent(7,0.8683494);
   RZ_stretch_tot_3__6047->SetBinContent(8,0.8875305);
   RZ_stretch_tot_3__6047->SetBinError(1,0.01116878);
   RZ_stretch_tot_3__6047->SetBinError(2,0.0177293);
   RZ_stretch_tot_3__6047->SetBinError(3,0.01363228);
   RZ_stretch_tot_3__6047->SetBinError(4,0.01972523);
   RZ_stretch_tot_3__6047->SetBinError(6,0.02030506);
   RZ_stretch_tot_3__6047->SetBinError(7,0.02608612);
   RZ_stretch_tot_3__6047->SetBinError(8,0.02288949);
   RZ_stretch_tot_3__6047->SetEntries(16415.4);
   RZ_stretch_tot_3__6047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_3__6047->SetFillColor(ci);
   RZ_stretch_tot_3__6047->SetLineWidth(2);
   RZ_stretch_tot_3__6047->SetMarkerStyle(20);
   RZ_stretch_tot_3__6047->SetMarkerSize(0.8);
   RZ_stretch_tot_3__6047->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_3__6047->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_3__6047->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_3__6047->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_3__6047->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_3__6047->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_3__6047->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_3__6047->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_3__6047->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_3__6047->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_3__6047->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_3__6047->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_3__6047->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_3__6047->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_3__6047->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_3__6047->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_3__6047->Draw("SAME E2");
   Double_t xAxis6048[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_3__6048 = new TH1D("RZ_stretch_stat_3__6048","",8, xAxis6048);
   RZ_stretch_stat_3__6048->SetBinContent(1,0.9542535);
   RZ_stretch_stat_3__6048->SetBinContent(2,0.9544498);
   RZ_stretch_stat_3__6048->SetBinContent(3,0.9687915);
   RZ_stretch_stat_3__6048->SetBinContent(4,0.9742817);
   RZ_stretch_stat_3__6048->SetBinContent(6,0.9638007);
   RZ_stretch_stat_3__6048->SetBinContent(7,0.8683494);
   RZ_stretch_stat_3__6048->SetBinContent(8,0.8875305);
   RZ_stretch_stat_3__6048->SetBinError(1,0.01053702);
   RZ_stretch_stat_3__6048->SetBinError(2,0.01601207);
   RZ_stretch_stat_3__6048->SetBinError(3,0.01350296);
   RZ_stretch_stat_3__6048->SetBinError(4,0.01932181);
   RZ_stretch_stat_3__6048->SetBinError(6,0.01805036);
   RZ_stretch_stat_3__6048->SetBinError(7,0.0245202);
   RZ_stretch_stat_3__6048->SetBinError(8,0.01934158);
   RZ_stretch_stat_3__6048->SetEntries(19415.29);
   RZ_stretch_stat_3__6048->SetStats(0);
   RZ_stretch_stat_3__6048->SetLineWidth(2);
   RZ_stretch_stat_3__6048->SetMarkerStyle(20);
   RZ_stretch_stat_3__6048->SetMarkerSize(0.8);
   RZ_stretch_stat_3__6048->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_3__6048->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_3__6048->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_3__6048->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_3__6048->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_3__6048->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_3__6048->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_3__6048->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_3__6048->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_3__6048->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_3__6048->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_3__6048->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_3__6048->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_3__6048->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_3__6048->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_3__6048->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_3__6048->Draw("SAME PZ");
   Double_t xAxis6049[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_3__6049 = new TH1D("SP_stretch_tot_3__6049","",8, xAxis6049);
   SP_stretch_tot_3__6049->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_3__6049->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_3__6049->SetLineColor(ci);
   SP_stretch_tot_3__6049->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_3__6049->SetMarkerColor(ci);
   SP_stretch_tot_3__6049->SetMarkerStyle(20);
   SP_stretch_tot_3__6049->SetMarkerSize(0.8);
   SP_stretch_tot_3__6049->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_3__6049->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_3__6049->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_3__6049->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_3__6049->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_3__6049->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_3__6049->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_3__6049->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_3__6049->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_3__6049->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_3__6049->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_3__6049->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_3__6049->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_3__6049->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_3__6049->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_3__6049->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_3__6049->Draw("SAME E2");
   Double_t xAxis6050[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_3__6050 = new TH1D("SP_stretch_stat_3__6050","",8, xAxis6050);
   SP_stretch_stat_3__6050->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_3__6050->SetLineColor(ci);
   SP_stretch_stat_3__6050->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_3__6050->SetMarkerColor(ci);
   SP_stretch_stat_3__6050->SetMarkerStyle(20);
   SP_stretch_stat_3__6050->SetMarkerSize(0.8);
   SP_stretch_stat_3__6050->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_3__6050->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_3__6050->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_3__6050->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_3__6050->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_3__6050->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_3__6050->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_3__6050->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_3__6050->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_3__6050->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_3__6050->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_3__6050->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_3__6050->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_3__6050->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_3__6050->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_3__6050->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_3__6050->Draw("SAME PZ");
   dw__1006->Modified();
   c1_n28->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1007 = new TPad("up", "up",0,0.5,1,1);
   up__1007->Draw();
   up__1007->cd();
   up__1007->Range(-0.3577359,-0.281653,2.608491,2.263775);
   up__1007->SetFillColor(0);
   up__1007->SetFillStyle(4000);
   up__1007->SetBorderMode(0);
   up__1007->SetBorderSize(0);
   up__1007->SetTickx(1);
   up__1007->SetTicky(1);
   up__1007->SetLeftMargin(0.120603);
   up__1007->SetRightMargin(0.08040201);
   up__1007->SetBottomMargin(0.01243523);
   up__1007->SetFrameBorderMode(0);
   up__1007->SetFrameBorderMode(0);
   Double_t xAxis6051[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__6051 = new TH1D("chist__6051","",8, xAxis6051);
   chist__6051->SetMinimum(-0.25);
   chist__6051->SetMaximum(2);
   chist__6051->SetDirectory(nullptr);
   chist__6051->SetStats(0);
   chist__6051->SetLineColor(0);
   chist__6051->SetLineWidth(0);
   chist__6051->SetMarkerColor(0);
   chist__6051->SetMarkerStyle(20);
   chist__6051->SetMarkerSize(0);
   chist__6051->GetXaxis()->SetRange(1,11);
   chist__6051->GetXaxis()->SetNdivisions(4000510);
   chist__6051->GetXaxis()->SetLabelFont(42);
   chist__6051->GetXaxis()->SetLabelSize(0);
   chist__6051->GetXaxis()->SetTitleSize(0.08);
   chist__6051->GetXaxis()->SetTickLength(0.04);
   chist__6051->GetXaxis()->SetTitleOffset(2.020933);
   chist__6051->GetXaxis()->SetTitleFont(42);
   chist__6051->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__6051->GetYaxis()->SetNdivisions(3000510);
   chist__6051->GetYaxis()->SetLabelFont(42);
   chist__6051->GetYaxis()->SetLabelSize(0.08);
   chist__6051->GetYaxis()->SetTitleSize(0.08);
   chist__6051->GetYaxis()->SetTickLength(0.04);
   chist__6051->GetYaxis()->SetTitleOffset(0.727387);
   chist__6051->GetYaxis()->SetTitleFont(42);
   chist__6051->GetZaxis()->SetLabelFont(42);
   chist__6051->GetZaxis()->SetLabelSize(0.05);
   chist__6051->GetZaxis()->SetTitleSize(0.05);
   chist__6051->GetZaxis()->SetTitleOffset(1);
   chist__6051->GetZaxis()->SetTitleFont(42);
   chist__6051->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_3","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_3","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_3","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_3","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"w_{s tot}");
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
      tex = new TLatex(0.160804,0.5098,"20.00 #leq p_{T}^{#gamma} [GeV] < 30.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis6052[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_3__6052 = new TH1D("RZ_shift_tot_3__6052","",8, xAxis6052);
   RZ_shift_tot_3__6052->SetBinContent(1,0.09751102);
   RZ_shift_tot_3__6052->SetBinContent(2,0.161216);
   RZ_shift_tot_3__6052->SetBinContent(3,0.1676007);
   RZ_shift_tot_3__6052->SetBinContent(4,0.2246422);
   RZ_shift_tot_3__6052->SetBinContent(6,0.2247525);
   RZ_shift_tot_3__6052->SetBinContent(7,0.4838227);
   RZ_shift_tot_3__6052->SetBinContent(8,0.5845079);
   RZ_shift_tot_3__6052->SetBinError(1,0.009099943);
   RZ_shift_tot_3__6052->SetBinError(2,0.01683163);
   RZ_shift_tot_3__6052->SetBinError(3,0.01314999);
   RZ_shift_tot_3__6052->SetBinError(4,0.02143808);
   RZ_shift_tot_3__6052->SetBinError(6,0.0205624);
   RZ_shift_tot_3__6052->SetBinError(7,0.0192527);
   RZ_shift_tot_3__6052->SetBinError(8,0.02155607);
   RZ_shift_tot_3__6052->SetEntries(1674.669);
   RZ_shift_tot_3__6052->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_3__6052->SetFillColor(ci);
   RZ_shift_tot_3__6052->SetMarkerStyle(20);
   RZ_shift_tot_3__6052->SetMarkerSize(0.8);
   RZ_shift_tot_3__6052->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_3__6052->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_3__6052->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_3__6052->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_3__6052->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_3__6052->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_3__6052->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_3__6052->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_3__6052->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_3__6052->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_3__6052->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_3__6052->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_3__6052->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_3__6052->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_3__6052->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_3__6052->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_3__6052->Draw("SAME E2");
   Double_t xAxis6053[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_3__6053 = new TH1D("RZ_shift_stat_3__6053","",8, xAxis6053);
   RZ_shift_stat_3__6053->SetBinContent(1,0.09751102);
   RZ_shift_stat_3__6053->SetBinContent(2,0.161216);
   RZ_shift_stat_3__6053->SetBinContent(3,0.1676007);
   RZ_shift_stat_3__6053->SetBinContent(4,0.2246422);
   RZ_shift_stat_3__6053->SetBinContent(6,0.2247525);
   RZ_shift_stat_3__6053->SetBinContent(7,0.4838227);
   RZ_shift_stat_3__6053->SetBinContent(8,0.5845079);
   RZ_shift_stat_3__6053->SetBinError(1,0.00800337);
   RZ_shift_stat_3__6053->SetBinError(2,0.01414823);
   RZ_shift_stat_3__6053->SetBinError(3,0.01277525);
   RZ_shift_stat_3__6053->SetBinError(4,0.01892414);
   RZ_shift_stat_3__6053->SetBinError(6,0.01759598);
   RZ_shift_stat_3__6053->SetBinError(7,0.01723143);
   RZ_shift_stat_3__6053->SetBinError(8,0.01325917);
   RZ_shift_stat_3__6053->SetEntries(2410.444);
   RZ_shift_stat_3__6053->SetStats(0);
   RZ_shift_stat_3__6053->SetMarkerStyle(20);
   RZ_shift_stat_3__6053->SetMarkerSize(0.8);
   RZ_shift_stat_3__6053->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_3__6053->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_3__6053->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_3__6053->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_3__6053->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_3__6053->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_3__6053->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_3__6053->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_3__6053->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_3__6053->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_3__6053->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_3__6053->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_3__6053->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_3__6053->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_3__6053->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_3__6053->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_3__6053->Draw("SAME PZ");
   Double_t xAxis6054[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_3__6054 = new TH1D("SP_shift_tot_3__6054","",8, xAxis6054);
   SP_shift_tot_3__6054->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_3__6054->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_3__6054->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_3__6054->SetMarkerColor(ci);
   SP_shift_tot_3__6054->SetMarkerStyle(20);
   SP_shift_tot_3__6054->SetMarkerSize(0.8);
   SP_shift_tot_3__6054->GetXaxis()->SetRange(1,11);
   SP_shift_tot_3__6054->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_3__6054->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_3__6054->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_3__6054->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_3__6054->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_3__6054->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_3__6054->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_3__6054->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_3__6054->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_3__6054->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_3__6054->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_3__6054->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_3__6054->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_3__6054->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_3__6054->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_3__6054->Draw("SAME E2");
   Double_t xAxis6055[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_3__6055 = new TH1D("SP_shift_stat_3__6055","",8, xAxis6055);
   SP_shift_stat_3__6055->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_3__6055->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_3__6055->SetMarkerColor(ci);
   SP_shift_stat_3__6055->SetMarkerStyle(20);
   SP_shift_stat_3__6055->SetMarkerSize(0.8);
   SP_shift_stat_3__6055->GetXaxis()->SetRange(1,11);
   SP_shift_stat_3__6055->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_3__6055->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_3__6055->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_3__6055->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_3__6055->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_3__6055->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_3__6055->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_3__6055->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_3__6055->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_3__6055->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_3__6055->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_3__6055->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_3__6055->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_3__6055->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_3__6055->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_3__6055->Draw("SAME PZ");
   Double_t xAxis6056[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__6056 = new TH1D("chist_copy__6056","",8, xAxis6056);
   chist_copy__6056->SetMinimum(-0.25);
   chist_copy__6056->SetMaximum(2);
   chist_copy__6056->SetDirectory(nullptr);
   chist_copy__6056->SetStats(0);
   chist_copy__6056->SetLineColor(0);
   chist_copy__6056->SetLineWidth(0);
   chist_copy__6056->SetMarkerColor(0);
   chist_copy__6056->SetMarkerStyle(20);
   chist_copy__6056->SetMarkerSize(0);
   chist_copy__6056->GetXaxis()->SetRange(1,11);
   chist_copy__6056->GetXaxis()->SetNdivisions(4000510);
   chist_copy__6056->GetXaxis()->SetLabelFont(42);
   chist_copy__6056->GetXaxis()->SetLabelSize(0);
   chist_copy__6056->GetXaxis()->SetTitleSize(0.08);
   chist_copy__6056->GetXaxis()->SetTickLength(0.04);
   chist_copy__6056->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__6056->GetXaxis()->SetTitleFont(42);
   chist_copy__6056->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__6056->GetYaxis()->SetNdivisions(3000510);
   chist_copy__6056->GetYaxis()->SetLabelFont(42);
   chist_copy__6056->GetYaxis()->SetLabelSize(0.08);
   chist_copy__6056->GetYaxis()->SetTitleSize(0.08);
   chist_copy__6056->GetYaxis()->SetTickLength(0.04);
   chist_copy__6056->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__6056->GetYaxis()->SetTitleFont(42);
   chist_copy__6056->GetZaxis()->SetLabelFont(42);
   chist_copy__6056->GetZaxis()->SetLabelSize(0.05);
   chist_copy__6056->GetZaxis()->SetTitleSize(0.05);
   chist_copy__6056->GetZaxis()->SetTitleOffset(1);
   chist_copy__6056->GetZaxis()->SetTitleFont(42);
   chist_copy__6056->Draw("sameaxis");
   up__1007->Modified();
   c1_n28->cd();
   c1_n28->Modified();
   c1_n28->SetSelected(c1_n28);
}
