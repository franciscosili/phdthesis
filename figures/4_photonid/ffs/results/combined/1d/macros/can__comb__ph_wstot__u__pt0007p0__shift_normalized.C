#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_wstot__u__pt0007p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n26/
//=========  (Thu Apr  4 19:01:12 2024) by ROOT version 6.30/02
   TCanvas *c1_n26 = new TCanvas("c1_n26", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n26->SetHighLightColor(2);
   c1_n26->Range(0,0,1,1);
   c1_n26->SetFillColor(0);
   c1_n26->SetBorderMode(0);
   c1_n26->SetBorderSize(2);
   c1_n26->SetTickx(1);
   c1_n26->SetTicky(1);
   c1_n26->SetLeftMargin(0.16);
   c1_n26->SetRightMargin(0.05);
   c1_n26->SetTopMargin(0.05);
   c1_n26->SetBottomMargin(0.16);
   c1_n26->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1002 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1002->Draw();
   dw__1002->cd();
   dw__1002->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1002->SetFillColor(0);
   dw__1002->SetFillStyle(4000);
   dw__1002->SetBorderMode(0);
   dw__1002->SetBorderSize(0);
   dw__1002->SetTickx(1);
   dw__1002->SetTicky(1);
   dw__1002->SetLeftMargin(0.120603);
   dw__1002->SetRightMargin(0.08040201);
   dw__1002->SetTopMargin(0);
   dw__1002->SetBottomMargin(0.2072539);
   dw__1002->SetFrameBorderMode(0);
   dw__1002->SetFrameBorderMode(0);
   Double_t xAxis6024[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__6024 = new TH1D("chist_dw__6024","",8, xAxis6024);
   chist_dw__6024->SetMinimum(0.2);
   chist_dw__6024->SetMaximum(3.2);
   chist_dw__6024->SetDirectory(nullptr);
   chist_dw__6024->SetStats(0);
   chist_dw__6024->SetLineColor(0);
   chist_dw__6024->SetLineWidth(0);
   chist_dw__6024->SetMarkerColor(0);
   chist_dw__6024->SetMarkerStyle(20);
   chist_dw__6024->SetMarkerSize(0);
   chist_dw__6024->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__6024->GetXaxis()->SetRange(1,11);
   chist_dw__6024->GetXaxis()->SetLabelFont(42);
   chist_dw__6024->GetXaxis()->SetLabelSize(0.08);
   chist_dw__6024->GetXaxis()->SetTitleSize(0.08);
   chist_dw__6024->GetXaxis()->SetTickLength(0.04);
   chist_dw__6024->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__6024->GetXaxis()->SetTitleFont(42);
   chist_dw__6024->GetYaxis()->SetTitle("Stretch");
   chist_dw__6024->GetYaxis()->CenterTitle(true);
   chist_dw__6024->GetYaxis()->SetNdivisions(405);
   chist_dw__6024->GetYaxis()->SetLabelFont(42);
   chist_dw__6024->GetYaxis()->SetLabelSize(0.08);
   chist_dw__6024->GetYaxis()->SetTitleSize(0.08);
   chist_dw__6024->GetYaxis()->SetTickLength(0.04);
   chist_dw__6024->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__6024->GetYaxis()->SetTitleFont(42);
   chist_dw__6024->GetZaxis()->SetLabelFont(42);
   chist_dw__6024->GetZaxis()->SetTitleOffset(1);
   chist_dw__6024->GetZaxis()->SetTitleFont(42);
   chist_dw__6024->Draw("");
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
   Double_t xAxis6025[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_1__6025 = new TH1D("RZ_stretch_tot_1__6025","",8, xAxis6025);
   RZ_stretch_tot_1__6025->SetBinContent(1,0.9983475);
   RZ_stretch_tot_1__6025->SetBinContent(2,0.9910295);
   RZ_stretch_tot_1__6025->SetBinContent(3,0.9773232);
   RZ_stretch_tot_1__6025->SetBinContent(4,0.9502403);
   RZ_stretch_tot_1__6025->SetBinContent(6,0.9399377);
   RZ_stretch_tot_1__6025->SetBinContent(7,0.8882842);
   RZ_stretch_tot_1__6025->SetBinContent(8,0.9008401);
   RZ_stretch_tot_1__6025->SetBinError(1,0.007083575);
   RZ_stretch_tot_1__6025->SetBinError(2,0.01291212);
   RZ_stretch_tot_1__6025->SetBinError(3,0.01421411);
   RZ_stretch_tot_1__6025->SetBinError(4,0.01811875);
   RZ_stretch_tot_1__6025->SetBinError(6,0.01294873);
   RZ_stretch_tot_1__6025->SetBinError(7,0.01887201);
   RZ_stretch_tot_1__6025->SetBinError(8,0.03274037);
   RZ_stretch_tot_1__6025->SetEntries(18851.75);
   RZ_stretch_tot_1__6025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_1__6025->SetFillColor(ci);
   RZ_stretch_tot_1__6025->SetLineWidth(2);
   RZ_stretch_tot_1__6025->SetMarkerStyle(20);
   RZ_stretch_tot_1__6025->SetMarkerSize(0.8);
   RZ_stretch_tot_1__6025->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_1__6025->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__6025->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_1__6025->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_1__6025->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_1__6025->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__6025->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__6025->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__6025->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_1__6025->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_1__6025->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_1__6025->Draw("SAME E2");
   Double_t xAxis6026[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_1__6026 = new TH1D("RZ_stretch_stat_1__6026","",8, xAxis6026);
   RZ_stretch_stat_1__6026->SetBinContent(1,0.9983475);
   RZ_stretch_stat_1__6026->SetBinContent(2,0.9910295);
   RZ_stretch_stat_1__6026->SetBinContent(3,0.9773232);
   RZ_stretch_stat_1__6026->SetBinContent(4,0.9502403);
   RZ_stretch_stat_1__6026->SetBinContent(6,0.9399377);
   RZ_stretch_stat_1__6026->SetBinContent(7,0.8882842);
   RZ_stretch_stat_1__6026->SetBinContent(8,0.9008401);
   RZ_stretch_stat_1__6026->SetBinError(1,0.003919358);
   RZ_stretch_stat_1__6026->SetBinError(2,0.01137381);
   RZ_stretch_stat_1__6026->SetBinError(3,0.009598827);
   RZ_stretch_stat_1__6026->SetBinError(4,0.01244948);
   RZ_stretch_stat_1__6026->SetBinError(6,0.01127492);
   RZ_stretch_stat_1__6026->SetBinError(7,0.01682341);
   RZ_stretch_stat_1__6026->SetBinError(8,0.01312185);
   RZ_stretch_stat_1__6026->SetEntries(45339.77);
   RZ_stretch_stat_1__6026->SetStats(0);
   RZ_stretch_stat_1__6026->SetLineWidth(2);
   RZ_stretch_stat_1__6026->SetMarkerStyle(20);
   RZ_stretch_stat_1__6026->SetMarkerSize(0.8);
   RZ_stretch_stat_1__6026->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_1__6026->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__6026->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_1__6026->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_1__6026->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_1__6026->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__6026->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__6026->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__6026->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_1__6026->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_1__6026->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_1__6026->Draw("SAME PZ");
   Double_t xAxis6027[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_1__6027 = new TH1D("SP_stretch_tot_1__6027","",8, xAxis6027);
   SP_stretch_tot_1__6027->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_1__6027->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_1__6027->SetLineColor(ci);
   SP_stretch_tot_1__6027->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_1__6027->SetMarkerColor(ci);
   SP_stretch_tot_1__6027->SetMarkerStyle(20);
   SP_stretch_tot_1__6027->SetMarkerSize(0.8);
   SP_stretch_tot_1__6027->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_1__6027->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_1__6027->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_1__6027->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_1__6027->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_1__6027->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_1__6027->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_1__6027->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_1__6027->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_1__6027->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_1__6027->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_1__6027->Draw("SAME E2");
   Double_t xAxis6028[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_1__6028 = new TH1D("SP_stretch_stat_1__6028","",8, xAxis6028);
   SP_stretch_stat_1__6028->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_1__6028->SetLineColor(ci);
   SP_stretch_stat_1__6028->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_1__6028->SetMarkerColor(ci);
   SP_stretch_stat_1__6028->SetMarkerStyle(20);
   SP_stretch_stat_1__6028->SetMarkerSize(0.8);
   SP_stretch_stat_1__6028->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_1__6028->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_1__6028->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_1__6028->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_1__6028->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_1__6028->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_1__6028->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_1__6028->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_1__6028->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_1__6028->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_1__6028->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_1__6028->Draw("SAME PZ");
   dw__1002->Modified();
   c1_n26->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1003 = new TPad("up", "up",0,0.5,1,1);
   up__1003->Draw();
   up__1003->cd();
   up__1003->Range(-0.3577359,-0.281653,2.608491,2.263775);
   up__1003->SetFillColor(0);
   up__1003->SetFillStyle(4000);
   up__1003->SetBorderMode(0);
   up__1003->SetBorderSize(0);
   up__1003->SetTickx(1);
   up__1003->SetTicky(1);
   up__1003->SetLeftMargin(0.120603);
   up__1003->SetRightMargin(0.08040201);
   up__1003->SetBottomMargin(0.01243523);
   up__1003->SetFrameBorderMode(0);
   up__1003->SetFrameBorderMode(0);
   Double_t xAxis6029[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__6029 = new TH1D("chist__6029","",8, xAxis6029);
   chist__6029->SetMinimum(-0.25);
   chist__6029->SetMaximum(2);
   chist__6029->SetDirectory(nullptr);
   chist__6029->SetStats(0);
   chist__6029->SetLineColor(0);
   chist__6029->SetLineWidth(0);
   chist__6029->SetMarkerColor(0);
   chist__6029->SetMarkerStyle(20);
   chist__6029->SetMarkerSize(0);
   chist__6029->GetXaxis()->SetRange(1,11);
   chist__6029->GetXaxis()->SetNdivisions(4000510);
   chist__6029->GetXaxis()->SetLabelFont(42);
   chist__6029->GetXaxis()->SetLabelSize(0);
   chist__6029->GetXaxis()->SetTitleSize(0.08);
   chist__6029->GetXaxis()->SetTickLength(0.04);
   chist__6029->GetXaxis()->SetTitleOffset(2.020933);
   chist__6029->GetXaxis()->SetTitleFont(42);
   chist__6029->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__6029->GetYaxis()->SetNdivisions(3000510);
   chist__6029->GetYaxis()->SetLabelFont(42);
   chist__6029->GetYaxis()->SetLabelSize(0.08);
   chist__6029->GetYaxis()->SetTitleSize(0.08);
   chist__6029->GetYaxis()->SetTickLength(0.04);
   chist__6029->GetYaxis()->SetTitleOffset(0.727387);
   chist__6029->GetYaxis()->SetTitleFont(42);
   chist__6029->GetZaxis()->SetLabelFont(42);
   chist__6029->GetZaxis()->SetTitleOffset(1);
   chist__6029->GetZaxis()->SetTitleFont(42);
   chist__6029->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_1","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_1","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_1","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_1","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5098,"7.00 #leq p_{T}^{#gamma} [GeV] < 15.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis6030[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_1__6030 = new TH1D("RZ_shift_tot_1__6030","",8, xAxis6030);
   RZ_shift_tot_1__6030->SetBinContent(1,0.1522527);
   RZ_shift_tot_1__6030->SetBinContent(2,0.2042018);
   RZ_shift_tot_1__6030->SetBinContent(3,0.2012743);
   RZ_shift_tot_1__6030->SetBinContent(4,0.269474);
   RZ_shift_tot_1__6030->SetBinContent(6,0.2309821);
   RZ_shift_tot_1__6030->SetBinContent(7,0.3697987);
   RZ_shift_tot_1__6030->SetBinContent(8,0.3747125);
   RZ_shift_tot_1__6030->SetBinError(1,0.007981443);
   RZ_shift_tot_1__6030->SetBinError(2,0.01315151);
   RZ_shift_tot_1__6030->SetBinError(3,0.0180957);
   RZ_shift_tot_1__6030->SetBinError(4,0.01567806);
   RZ_shift_tot_1__6030->SetBinError(6,0.01614204);
   RZ_shift_tot_1__6030->SetBinError(7,0.0152233);
   RZ_shift_tot_1__6030->SetBinError(8,0.006906358);
   RZ_shift_tot_1__6030->SetEntries(2407.313);
   RZ_shift_tot_1__6030->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_1__6030->SetFillColor(ci);
   RZ_shift_tot_1__6030->SetMarkerStyle(20);
   RZ_shift_tot_1__6030->SetMarkerSize(0.8);
   RZ_shift_tot_1__6030->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_1__6030->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_1__6030->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_1__6030->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_1__6030->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_1__6030->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_1__6030->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_1__6030->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_1__6030->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_1__6030->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_1__6030->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_1__6030->Draw("SAME E2");
   Double_t xAxis6031[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_1__6031 = new TH1D("RZ_shift_stat_1__6031","",8, xAxis6031);
   RZ_shift_stat_1__6031->SetBinContent(1,0.1522527);
   RZ_shift_stat_1__6031->SetBinContent(2,0.2042018);
   RZ_shift_stat_1__6031->SetBinContent(3,0.2012743);
   RZ_shift_stat_1__6031->SetBinContent(4,0.269474);
   RZ_shift_stat_1__6031->SetBinContent(6,0.2309821);
   RZ_shift_stat_1__6031->SetBinContent(7,0.3697987);
   RZ_shift_stat_1__6031->SetBinContent(8,0.3747125);
   RZ_shift_stat_1__6031->SetBinError(1,0.004919316);
   RZ_shift_stat_1__6031->SetBinError(2,0.008871658);
   RZ_shift_stat_1__6031->SetBinError(3,0.008301051);
   RZ_shift_stat_1__6031->SetBinError(4,0.01238705);
   RZ_shift_stat_1__6031->SetBinError(6,0.01166787);
   RZ_shift_stat_1__6031->SetBinError(7,0.01028662);
   RZ_shift_stat_1__6031->SetBinError(8,0.006740223);
   RZ_shift_stat_1__6031->SetEntries(5304.469);
   RZ_shift_stat_1__6031->SetStats(0);
   RZ_shift_stat_1__6031->SetMarkerStyle(20);
   RZ_shift_stat_1__6031->SetMarkerSize(0.8);
   RZ_shift_stat_1__6031->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_1__6031->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_1__6031->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_1__6031->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_1__6031->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_1__6031->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_1__6031->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_1__6031->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_1__6031->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_1__6031->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_1__6031->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_1__6031->Draw("SAME PZ");
   Double_t xAxis6032[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_1__6032 = new TH1D("SP_shift_tot_1__6032","",8, xAxis6032);
   SP_shift_tot_1__6032->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_1__6032->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_1__6032->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_1__6032->SetMarkerColor(ci);
   SP_shift_tot_1__6032->SetMarkerStyle(20);
   SP_shift_tot_1__6032->SetMarkerSize(0.8);
   SP_shift_tot_1__6032->GetXaxis()->SetRange(1,11);
   SP_shift_tot_1__6032->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_1__6032->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_1__6032->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_1__6032->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_1__6032->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_1__6032->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_1__6032->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_1__6032->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_1__6032->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_1__6032->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_1__6032->Draw("SAME E2");
   Double_t xAxis6033[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_1__6033 = new TH1D("SP_shift_stat_1__6033","",8, xAxis6033);
   SP_shift_stat_1__6033->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_1__6033->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_1__6033->SetMarkerColor(ci);
   SP_shift_stat_1__6033->SetMarkerStyle(20);
   SP_shift_stat_1__6033->SetMarkerSize(0.8);
   SP_shift_stat_1__6033->GetXaxis()->SetRange(1,11);
   SP_shift_stat_1__6033->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_1__6033->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_1__6033->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_1__6033->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_1__6033->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_1__6033->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_1__6033->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_1__6033->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_1__6033->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_1__6033->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_1__6033->Draw("SAME PZ");
   Double_t xAxis6034[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__6034 = new TH1D("chist_copy__6034","",8, xAxis6034);
   chist_copy__6034->SetMinimum(-0.25);
   chist_copy__6034->SetMaximum(2);
   chist_copy__6034->SetDirectory(nullptr);
   chist_copy__6034->SetStats(0);
   chist_copy__6034->SetLineColor(0);
   chist_copy__6034->SetLineWidth(0);
   chist_copy__6034->SetMarkerColor(0);
   chist_copy__6034->SetMarkerStyle(20);
   chist_copy__6034->SetMarkerSize(0);
   chist_copy__6034->GetXaxis()->SetRange(1,11);
   chist_copy__6034->GetXaxis()->SetNdivisions(4000510);
   chist_copy__6034->GetXaxis()->SetLabelFont(42);
   chist_copy__6034->GetXaxis()->SetLabelSize(0);
   chist_copy__6034->GetXaxis()->SetTitleSize(0.08);
   chist_copy__6034->GetXaxis()->SetTickLength(0.04);
   chist_copy__6034->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__6034->GetXaxis()->SetTitleFont(42);
   chist_copy__6034->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__6034->GetYaxis()->SetNdivisions(3000510);
   chist_copy__6034->GetYaxis()->SetLabelFont(42);
   chist_copy__6034->GetYaxis()->SetLabelSize(0.08);
   chist_copy__6034->GetYaxis()->SetTitleSize(0.08);
   chist_copy__6034->GetYaxis()->SetTickLength(0.04);
   chist_copy__6034->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__6034->GetYaxis()->SetTitleFont(42);
   chist_copy__6034->GetZaxis()->SetLabelFont(42);
   chist_copy__6034->GetZaxis()->SetTitleOffset(1);
   chist_copy__6034->GetZaxis()->SetTitleFont(42);
   chist_copy__6034->Draw("sameaxis");
   up__1003->Modified();
   c1_n26->cd();
   c1_n26->Modified();
   c1_n26->SetSelected(c1_n26);
}
