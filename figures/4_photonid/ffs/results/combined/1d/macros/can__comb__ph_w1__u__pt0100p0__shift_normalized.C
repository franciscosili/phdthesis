#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_w1__u__pt0100p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n33/
//=========  (Thu Apr  4 19:00:53 2024) by ROOT version 6.30/02
   TCanvas *c1_n33 = new TCanvas("c1_n33", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n33->SetHighLightColor(2);
   c1_n33->Range(0,0,1,1);
   c1_n33->SetFillColor(0);
   c1_n33->SetBorderMode(0);
   c1_n33->SetBorderSize(2);
   c1_n33->SetTickx(1);
   c1_n33->SetTicky(1);
   c1_n33->SetLeftMargin(0.16);
   c1_n33->SetRightMargin(0.05);
   c1_n33->SetTopMargin(0.05);
   c1_n33->SetBottomMargin(0.16);
   c1_n33->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__728 = new TPad("dw", "dw",0,0,1,0.5);
   dw__728->Draw();
   dw__728->cd();
   dw__728->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__728->SetFillColor(0);
   dw__728->SetFillStyle(4000);
   dw__728->SetBorderMode(0);
   dw__728->SetBorderSize(0);
   dw__728->SetTickx(1);
   dw__728->SetTicky(1);
   dw__728->SetLeftMargin(0.120603);
   dw__728->SetRightMargin(0.08040201);
   dw__728->SetTopMargin(0);
   dw__728->SetBottomMargin(0.2072539);
   dw__728->SetFrameBorderMode(0);
   dw__728->SetFrameBorderMode(0);
   Double_t xAxis4373[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__4373 = new TH1D("chist_dw__4373","",8, xAxis4373);
   chist_dw__4373->SetMinimum(0.2);
   chist_dw__4373->SetMaximum(3.2);
   chist_dw__4373->SetDirectory(nullptr);
   chist_dw__4373->SetStats(0);
   chist_dw__4373->SetLineColor(0);
   chist_dw__4373->SetLineWidth(0);
   chist_dw__4373->SetMarkerColor(0);
   chist_dw__4373->SetMarkerStyle(20);
   chist_dw__4373->SetMarkerSize(0);
   chist_dw__4373->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__4373->GetXaxis()->SetRange(1,11);
   chist_dw__4373->GetXaxis()->SetLabelFont(42);
   chist_dw__4373->GetXaxis()->SetLabelSize(0.08);
   chist_dw__4373->GetXaxis()->SetTitleSize(0.08);
   chist_dw__4373->GetXaxis()->SetTickLength(0.04);
   chist_dw__4373->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__4373->GetXaxis()->SetTitleFont(42);
   chist_dw__4373->GetYaxis()->SetTitle("Stretch");
   chist_dw__4373->GetYaxis()->CenterTitle(true);
   chist_dw__4373->GetYaxis()->SetNdivisions(405);
   chist_dw__4373->GetYaxis()->SetLabelFont(42);
   chist_dw__4373->GetYaxis()->SetLabelSize(0.08);
   chist_dw__4373->GetYaxis()->SetTitleSize(0.08);
   chist_dw__4373->GetYaxis()->SetTickLength(0.04);
   chist_dw__4373->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__4373->GetYaxis()->SetTitleFont(42);
   chist_dw__4373->GetZaxis()->SetLabelFont(42);
   chist_dw__4373->GetZaxis()->SetLabelSize(0.05);
   chist_dw__4373->GetZaxis()->SetTitleSize(0.05);
   chist_dw__4373->GetZaxis()->SetTitleOffset(1);
   chist_dw__4373->GetZaxis()->SetTitleFont(42);
   chist_dw__4373->Draw("");
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
   Double_t xAxis4374[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_8__4374 = new TH1D("RZ_stretch_tot_8__4374","",8, xAxis4374);
   RZ_stretch_tot_8__4374->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_8__4374->SetFillColor(ci);
   RZ_stretch_tot_8__4374->SetLineWidth(2);
   RZ_stretch_tot_8__4374->SetMarkerStyle(20);
   RZ_stretch_tot_8__4374->SetMarkerSize(0.8);
   RZ_stretch_tot_8__4374->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_8__4374->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__4374->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__4374->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__4374->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__4374->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__4374->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__4374->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__4374->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__4374->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__4374->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__4374->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__4374->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__4374->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__4374->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_8__4374->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__4374->Draw("SAME E2");
   Double_t xAxis4375[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_8__4375 = new TH1D("RZ_stretch_stat_8__4375","",8, xAxis4375);
   RZ_stretch_stat_8__4375->SetStats(0);
   RZ_stretch_stat_8__4375->SetLineWidth(2);
   RZ_stretch_stat_8__4375->SetMarkerStyle(20);
   RZ_stretch_stat_8__4375->SetMarkerSize(0.8);
   RZ_stretch_stat_8__4375->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_8__4375->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__4375->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__4375->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__4375->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__4375->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__4375->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__4375->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__4375->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__4375->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__4375->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__4375->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__4375->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__4375->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__4375->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_8__4375->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__4375->Draw("SAME PZ");
   Double_t xAxis4376[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_8__4376 = new TH1D("SP_stretch_tot_8__4376","",8, xAxis4376);
   SP_stretch_tot_8__4376->SetBinContent(1,1.052924);
   SP_stretch_tot_8__4376->SetBinContent(2,1.073773);
   SP_stretch_tot_8__4376->SetBinContent(3,1.026781);
   SP_stretch_tot_8__4376->SetBinContent(4,0.9727589);
   SP_stretch_tot_8__4376->SetBinContent(6,0.8717113);
   SP_stretch_tot_8__4376->SetBinContent(7,1.086608);
   SP_stretch_tot_8__4376->SetBinContent(8,1.120562);
   SP_stretch_tot_8__4376->SetBinError(1,0.01334901);
   SP_stretch_tot_8__4376->SetBinError(2,0.01451481);
   SP_stretch_tot_8__4376->SetBinError(3,0.01191119);
   SP_stretch_tot_8__4376->SetBinError(4,0.01121112);
   SP_stretch_tot_8__4376->SetBinError(6,0.00274802);
   SP_stretch_tot_8__4376->SetBinError(7,0.007015238);
   SP_stretch_tot_8__4376->SetBinError(8,0.009852514);
   SP_stretch_tot_8__4376->SetEntries(64068.97);
   SP_stretch_tot_8__4376->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_8__4376->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__4376->SetLineColor(ci);
   SP_stretch_tot_8__4376->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__4376->SetMarkerColor(ci);
   SP_stretch_tot_8__4376->SetMarkerStyle(20);
   SP_stretch_tot_8__4376->SetMarkerSize(0.8);
   SP_stretch_tot_8__4376->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_8__4376->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_8__4376->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__4376->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__4376->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__4376->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_8__4376->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_8__4376->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__4376->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__4376->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__4376->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_8__4376->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_8__4376->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__4376->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__4376->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_8__4376->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_8__4376->Draw("SAME E2");
   Double_t xAxis4377[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_8__4377 = new TH1D("SP_stretch_stat_8__4377","",8, xAxis4377);
   SP_stretch_stat_8__4377->SetBinContent(1,1.052924);
   SP_stretch_stat_8__4377->SetBinContent(2,1.073773);
   SP_stretch_stat_8__4377->SetBinContent(3,1.026781);
   SP_stretch_stat_8__4377->SetBinContent(4,0.9727589);
   SP_stretch_stat_8__4377->SetBinContent(6,0.8717113);
   SP_stretch_stat_8__4377->SetBinContent(7,1.086608);
   SP_stretch_stat_8__4377->SetBinContent(8,1.120562);
   SP_stretch_stat_8__4377->SetBinError(1,0.0004075975);
   SP_stretch_stat_8__4377->SetBinError(2,0.0006856272);
   SP_stretch_stat_8__4377->SetBinError(3,0.0005391714);
   SP_stretch_stat_8__4377->SetBinError(4,0.0007910913);
   SP_stretch_stat_8__4377->SetBinError(6,0.0006465248);
   SP_stretch_stat_8__4377->SetBinError(7,0.0009650549);
   SP_stretch_stat_8__4377->SetBinError(8,0.0007207933);
   SP_stretch_stat_8__4377->SetEntries(1.517227e+07);
   SP_stretch_stat_8__4377->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__4377->SetLineColor(ci);
   SP_stretch_stat_8__4377->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__4377->SetMarkerColor(ci);
   SP_stretch_stat_8__4377->SetMarkerStyle(20);
   SP_stretch_stat_8__4377->SetMarkerSize(0.8);
   SP_stretch_stat_8__4377->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_8__4377->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_8__4377->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__4377->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__4377->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__4377->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_8__4377->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_8__4377->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__4377->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__4377->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__4377->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_8__4377->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_8__4377->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__4377->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__4377->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_8__4377->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_8__4377->Draw("SAME PZ");
   dw__728->Modified();
   c1_n33->cd();
  
// ------------>Primitives in pad: up
   TPad *up__729 = new TPad("up", "up",0,0.5,1,1);
   up__729->Draw();
   up__729->cd();
   up__729->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__729->SetFillColor(0);
   up__729->SetFillStyle(4000);
   up__729->SetBorderMode(0);
   up__729->SetBorderSize(0);
   up__729->SetTickx(1);
   up__729->SetTicky(1);
   up__729->SetLeftMargin(0.120603);
   up__729->SetRightMargin(0.08040201);
   up__729->SetBottomMargin(0.01243523);
   up__729->SetFrameBorderMode(0);
   up__729->SetFrameBorderMode(0);
   Double_t xAxis4378[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__4378 = new TH1D("chist__4378","",8, xAxis4378);
   chist__4378->SetMinimum(-0.9);
   chist__4378->SetMaximum(2);
   chist__4378->SetDirectory(nullptr);
   chist__4378->SetStats(0);
   chist__4378->SetLineColor(0);
   chist__4378->SetLineWidth(0);
   chist__4378->SetMarkerColor(0);
   chist__4378->SetMarkerStyle(20);
   chist__4378->SetMarkerSize(0);
   chist__4378->GetXaxis()->SetRange(1,11);
   chist__4378->GetXaxis()->SetNdivisions(4000510);
   chist__4378->GetXaxis()->SetLabelFont(42);
   chist__4378->GetXaxis()->SetLabelSize(0);
   chist__4378->GetXaxis()->SetTitleSize(0.08);
   chist__4378->GetXaxis()->SetTickLength(0.04);
   chist__4378->GetXaxis()->SetTitleOffset(2.020933);
   chist__4378->GetXaxis()->SetTitleFont(42);
   chist__4378->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__4378->GetYaxis()->SetNdivisions(3000510);
   chist__4378->GetYaxis()->SetLabelFont(42);
   chist__4378->GetYaxis()->SetLabelSize(0.08);
   chist__4378->GetYaxis()->SetTitleSize(0.08);
   chist__4378->GetYaxis()->SetTickLength(0.04);
   chist__4378->GetYaxis()->SetTitleOffset(0.727387);
   chist__4378->GetYaxis()->SetTitleFont(42);
   chist__4378->GetZaxis()->SetLabelFont(42);
   chist__4378->GetZaxis()->SetLabelSize(0.05);
   chist__4378->GetZaxis()->SetTitleSize(0.05);
   chist__4378->GetZaxis()->SetTitleOffset(1);
   chist__4378->GetZaxis()->SetTitleFont(42);
   chist__4378->Draw("pe");
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
      tex = new TLatex(0.160804,0.5098,"100.00 #leq p_{T}^{#gamma} [GeV] < 150.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis4379[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_8__4379 = new TH1D("RZ_shift_tot_8__4379","",8, xAxis4379);
   RZ_shift_tot_8__4379->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_8__4379->SetFillColor(ci);
   RZ_shift_tot_8__4379->SetMarkerStyle(20);
   RZ_shift_tot_8__4379->SetMarkerSize(0.8);
   RZ_shift_tot_8__4379->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_8__4379->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_8__4379->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__4379->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__4379->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__4379->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_8__4379->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_8__4379->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__4379->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__4379->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__4379->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_8__4379->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_8__4379->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__4379->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__4379->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_8__4379->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_8__4379->Draw("SAME E2");
   Double_t xAxis4380[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_8__4380 = new TH1D("RZ_shift_stat_8__4380","",8, xAxis4380);
   RZ_shift_stat_8__4380->SetStats(0);
   RZ_shift_stat_8__4380->SetMarkerStyle(20);
   RZ_shift_stat_8__4380->SetMarkerSize(0.8);
   RZ_shift_stat_8__4380->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_8__4380->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_8__4380->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__4380->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__4380->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__4380->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_8__4380->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_8__4380->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__4380->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__4380->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__4380->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_8__4380->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_8__4380->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__4380->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__4380->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_8__4380->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_8__4380->Draw("SAME PZ");
   Double_t xAxis4381[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_8__4381 = new TH1D("SP_shift_tot_8__4381","",8, xAxis4381);
   SP_shift_tot_8__4381->SetBinContent(1,0.2753924);
   SP_shift_tot_8__4381->SetBinContent(2,0.3503621);
   SP_shift_tot_8__4381->SetBinContent(3,0.3912563);
   SP_shift_tot_8__4381->SetBinContent(4,0.5349227);
   SP_shift_tot_8__4381->SetBinContent(6,0.6404912);
   SP_shift_tot_8__4381->SetBinContent(7,0.9289188);
   SP_shift_tot_8__4381->SetBinContent(8,1.199005);
   SP_shift_tot_8__4381->SetBinError(1,0.02387195);
   SP_shift_tot_8__4381->SetBinError(2,0.02547124);
   SP_shift_tot_8__4381->SetBinError(3,0.02461868);
   SP_shift_tot_8__4381->SetBinError(4,0.02584375);
   SP_shift_tot_8__4381->SetBinError(6,0.02649743);
   SP_shift_tot_8__4381->SetBinError(7,0.01104182);
   SP_shift_tot_8__4381->SetBinError(8,0.01343438);
   SP_shift_tot_8__4381->SetEntries(5337.32);
   SP_shift_tot_8__4381->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_8__4381->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__4381->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__4381->SetMarkerColor(ci);
   SP_shift_tot_8__4381->SetMarkerStyle(20);
   SP_shift_tot_8__4381->SetMarkerSize(0.8);
   SP_shift_tot_8__4381->GetXaxis()->SetRange(1,11);
   SP_shift_tot_8__4381->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_8__4381->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__4381->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__4381->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__4381->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_8__4381->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_8__4381->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__4381->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__4381->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__4381->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_8__4381->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_8__4381->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__4381->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__4381->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_8__4381->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_8__4381->Draw("SAME E2");
   Double_t xAxis4382[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_8__4382 = new TH1D("SP_shift_stat_8__4382","",8, xAxis4382);
   SP_shift_stat_8__4382->SetBinContent(1,0.2753924);
   SP_shift_stat_8__4382->SetBinContent(2,0.3503621);
   SP_shift_stat_8__4382->SetBinContent(3,0.3912563);
   SP_shift_stat_8__4382->SetBinContent(4,0.5349227);
   SP_shift_stat_8__4382->SetBinContent(6,0.6404912);
   SP_shift_stat_8__4382->SetBinContent(7,0.9289188);
   SP_shift_stat_8__4382->SetBinContent(8,1.199005);
   SP_shift_stat_8__4382->SetBinError(1,0.0004648329);
   SP_shift_stat_8__4382->SetBinError(2,0.0007938783);
   SP_shift_stat_8__4382->SetBinError(3,0.0006640227);
   SP_shift_stat_8__4382->SetBinError(4,0.0008983789);
   SP_shift_stat_8__4382->SetBinError(6,0.0009237272);
   SP_shift_stat_8__4382->SetBinError(7,0.0009718984);
   SP_shift_stat_8__4382->SetBinError(8,0.0006906649);
   SP_shift_stat_8__4382->SetEntries(4272044);
   SP_shift_stat_8__4382->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__4382->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__4382->SetMarkerColor(ci);
   SP_shift_stat_8__4382->SetMarkerStyle(20);
   SP_shift_stat_8__4382->SetMarkerSize(0.8);
   SP_shift_stat_8__4382->GetXaxis()->SetRange(1,11);
   SP_shift_stat_8__4382->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_8__4382->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__4382->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__4382->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__4382->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_8__4382->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_8__4382->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__4382->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__4382->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__4382->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_8__4382->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_8__4382->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__4382->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__4382->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_8__4382->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_8__4382->Draw("SAME PZ");
   Double_t xAxis4383[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__4383 = new TH1D("chist_copy__4383","",8, xAxis4383);
   chist_copy__4383->SetMinimum(-0.9);
   chist_copy__4383->SetMaximum(2);
   chist_copy__4383->SetDirectory(nullptr);
   chist_copy__4383->SetStats(0);
   chist_copy__4383->SetLineColor(0);
   chist_copy__4383->SetLineWidth(0);
   chist_copy__4383->SetMarkerColor(0);
   chist_copy__4383->SetMarkerStyle(20);
   chist_copy__4383->SetMarkerSize(0);
   chist_copy__4383->GetXaxis()->SetRange(1,11);
   chist_copy__4383->GetXaxis()->SetNdivisions(4000510);
   chist_copy__4383->GetXaxis()->SetLabelFont(42);
   chist_copy__4383->GetXaxis()->SetLabelSize(0);
   chist_copy__4383->GetXaxis()->SetTitleSize(0.08);
   chist_copy__4383->GetXaxis()->SetTickLength(0.04);
   chist_copy__4383->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__4383->GetXaxis()->SetTitleFont(42);
   chist_copy__4383->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__4383->GetYaxis()->SetNdivisions(3000510);
   chist_copy__4383->GetYaxis()->SetLabelFont(42);
   chist_copy__4383->GetYaxis()->SetLabelSize(0.08);
   chist_copy__4383->GetYaxis()->SetTitleSize(0.08);
   chist_copy__4383->GetYaxis()->SetTickLength(0.04);
   chist_copy__4383->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__4383->GetYaxis()->SetTitleFont(42);
   chist_copy__4383->GetZaxis()->SetLabelFont(42);
   chist_copy__4383->GetZaxis()->SetLabelSize(0.05);
   chist_copy__4383->GetZaxis()->SetTitleSize(0.05);
   chist_copy__4383->GetZaxis()->SetTitleOffset(1);
   chist_copy__4383->GetZaxis()->SetTitleFont(42);
   chist_copy__4383->Draw("sameaxis");
   up__729->Modified();
   c1_n33->cd();
   c1_n33->Modified();
   c1_n33->SetSelected(c1_n33);
}
