#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_reta__u__pt0015p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n9/
//=========  (Thu Apr  4 19:00:09 2024) by ROOT version 6.30/02
   TCanvas *c1_n9 = new TCanvas("c1_n9", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n9->SetHighLightColor(2);
   c1_n9->Range(0,0,1,1);
   c1_n9->SetFillColor(0);
   c1_n9->SetBorderMode(0);
   c1_n9->SetBorderSize(2);
   c1_n9->SetTickx(1);
   c1_n9->SetTicky(1);
   c1_n9->SetLeftMargin(0.16);
   c1_n9->SetRightMargin(0.05);
   c1_n9->SetTopMargin(0.05);
   c1_n9->SetBottomMargin(0.16);
   c1_n9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__52 = new TPad("dw", "dw",0,0,1,0.5);
   dw__52->Draw();
   dw__52->cd();
   dw__52->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__52->SetFillColor(0);
   dw__52->SetFillStyle(4000);
   dw__52->SetBorderMode(0);
   dw__52->SetBorderSize(0);
   dw__52->SetTickx(1);
   dw__52->SetTicky(1);
   dw__52->SetLeftMargin(0.120603);
   dw__52->SetRightMargin(0.08040201);
   dw__52->SetTopMargin(0);
   dw__52->SetBottomMargin(0.2072539);
   dw__52->SetFrameBorderMode(0);
   dw__52->SetFrameBorderMode(0);
   Double_t xAxis323[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__323 = new TH1D("chist_dw__323","",8, xAxis323);
   chist_dw__323->SetMinimum(0.2);
   chist_dw__323->SetMaximum(3.2);
   chist_dw__323->SetDirectory(nullptr);
   chist_dw__323->SetStats(0);
   chist_dw__323->SetLineColor(0);
   chist_dw__323->SetLineWidth(0);
   chist_dw__323->SetMarkerColor(0);
   chist_dw__323->SetMarkerStyle(20);
   chist_dw__323->SetMarkerSize(0);
   chist_dw__323->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__323->GetXaxis()->SetRange(1,11);
   chist_dw__323->GetXaxis()->SetLabelFont(42);
   chist_dw__323->GetXaxis()->SetLabelSize(0.08);
   chist_dw__323->GetXaxis()->SetTitleSize(0.08);
   chist_dw__323->GetXaxis()->SetTickLength(0.04);
   chist_dw__323->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__323->GetXaxis()->SetTitleFont(42);
   chist_dw__323->GetYaxis()->SetTitle("Stretch");
   chist_dw__323->GetYaxis()->CenterTitle(true);
   chist_dw__323->GetYaxis()->SetNdivisions(405);
   chist_dw__323->GetYaxis()->SetLabelFont(42);
   chist_dw__323->GetYaxis()->SetLabelSize(0.08);
   chist_dw__323->GetYaxis()->SetTitleSize(0.08);
   chist_dw__323->GetYaxis()->SetTickLength(0.04);
   chist_dw__323->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__323->GetYaxis()->SetTitleFont(42);
   chist_dw__323->GetZaxis()->SetLabelFont(42);
   chist_dw__323->GetZaxis()->SetLabelSize(0.05);
   chist_dw__323->GetZaxis()->SetTitleSize(0.05);
   chist_dw__323->GetZaxis()->SetTitleOffset(1);
   chist_dw__323->GetZaxis()->SetTitleFont(42);
   chist_dw__323->Draw("");
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
   Double_t xAxis324[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_2__324 = new TH1D("RZ_stretch_tot_2__324","",8, xAxis324);
   RZ_stretch_tot_2__324->SetBinContent(1,0.944529);
   RZ_stretch_tot_2__324->SetBinContent(2,0.954629);
   RZ_stretch_tot_2__324->SetBinContent(3,0.9584294);
   RZ_stretch_tot_2__324->SetBinContent(4,0.9470537);
   RZ_stretch_tot_2__324->SetBinContent(6,0.9568236);
   RZ_stretch_tot_2__324->SetBinContent(7,0.9719597);
   RZ_stretch_tot_2__324->SetBinContent(8,0.968042);
   RZ_stretch_tot_2__324->SetBinError(1,0.008176262);
   RZ_stretch_tot_2__324->SetBinError(2,0.01448773);
   RZ_stretch_tot_2__324->SetBinError(3,0.01243713);
   RZ_stretch_tot_2__324->SetBinError(4,0.02217919);
   RZ_stretch_tot_2__324->SetBinError(6,0.02340325);
   RZ_stretch_tot_2__324->SetBinError(7,0.02374396);
   RZ_stretch_tot_2__324->SetBinError(8,0.02215755);
   RZ_stretch_tot_2__324->SetEntries(17780.45);
   RZ_stretch_tot_2__324->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_2__324->SetFillColor(ci);
   RZ_stretch_tot_2__324->SetLineWidth(2);
   RZ_stretch_tot_2__324->SetMarkerStyle(20);
   RZ_stretch_tot_2__324->SetMarkerSize(0.8);
   RZ_stretch_tot_2__324->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_2__324->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__324->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__324->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__324->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__324->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__324->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_2__324->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__324->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_2__324->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_2__324->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_2__324->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_2__324->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_2__324->Draw("SAME E2");
   Double_t xAxis325[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_2__325 = new TH1D("RZ_stretch_stat_2__325","",8, xAxis325);
   RZ_stretch_stat_2__325->SetBinContent(1,0.944529);
   RZ_stretch_stat_2__325->SetBinContent(2,0.954629);
   RZ_stretch_stat_2__325->SetBinContent(3,0.9584294);
   RZ_stretch_stat_2__325->SetBinContent(4,0.9470537);
   RZ_stretch_stat_2__325->SetBinContent(6,0.9568236);
   RZ_stretch_stat_2__325->SetBinContent(7,0.9719597);
   RZ_stretch_stat_2__325->SetBinContent(8,0.968042);
   RZ_stretch_stat_2__325->SetBinError(1,0.007356595);
   RZ_stretch_stat_2__325->SetBinError(2,0.01347757);
   RZ_stretch_stat_2__325->SetBinError(3,0.01135503);
   RZ_stretch_stat_2__325->SetBinError(4,0.01663808);
   RZ_stretch_stat_2__325->SetBinError(6,0.01695011);
   RZ_stretch_stat_2__325->SetBinError(7,0.02024757);
   RZ_stretch_stat_2__325->SetBinError(8,0.0169872);
   RZ_stretch_stat_2__325->SetEntries(27596.6);
   RZ_stretch_stat_2__325->SetStats(0);
   RZ_stretch_stat_2__325->SetLineWidth(2);
   RZ_stretch_stat_2__325->SetMarkerStyle(20);
   RZ_stretch_stat_2__325->SetMarkerSize(0.8);
   RZ_stretch_stat_2__325->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_2__325->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__325->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__325->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__325->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__325->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__325->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_2__325->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__325->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_2__325->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_2__325->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_2__325->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_2__325->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_2__325->Draw("SAME PZ");
   Double_t xAxis326[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_2__326 = new TH1D("SP_stretch_tot_2__326","",8, xAxis326);
   SP_stretch_tot_2__326->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_2__326->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__326->SetLineColor(ci);
   SP_stretch_tot_2__326->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_2__326->SetMarkerColor(ci);
   SP_stretch_tot_2__326->SetMarkerStyle(20);
   SP_stretch_tot_2__326->SetMarkerSize(0.8);
   SP_stretch_tot_2__326->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_2__326->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_2__326->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_2__326->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_2__326->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__326->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__326->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_2__326->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_2__326->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_2__326->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_2__326->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_2__326->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_2__326->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_2__326->Draw("SAME E2");
   Double_t xAxis327[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_2__327 = new TH1D("SP_stretch_stat_2__327","",8, xAxis327);
   SP_stretch_stat_2__327->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__327->SetLineColor(ci);
   SP_stretch_stat_2__327->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_2__327->SetMarkerColor(ci);
   SP_stretch_stat_2__327->SetMarkerStyle(20);
   SP_stretch_stat_2__327->SetMarkerSize(0.8);
   SP_stretch_stat_2__327->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_2__327->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_2__327->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_2__327->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_2__327->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__327->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__327->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_2__327->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_2__327->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_2__327->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_2__327->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_2__327->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_2__327->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_2__327->Draw("SAME PZ");
   dw__52->Modified();
   c1_n9->cd();
  
// ------------>Primitives in pad: up
   TPad *up__53 = new TPad("up", "up",0,0.5,1,1);
   up__53->Draw();
   up__53->cd();
   up__53->Range(-0.3577359,-1.646424,2.608491,2.08687);
   up__53->SetFillColor(0);
   up__53->SetFillStyle(4000);
   up__53->SetBorderMode(0);
   up__53->SetBorderSize(0);
   up__53->SetTickx(1);
   up__53->SetTicky(1);
   up__53->SetLeftMargin(0.120603);
   up__53->SetRightMargin(0.08040201);
   up__53->SetBottomMargin(0.01243523);
   up__53->SetFrameBorderMode(0);
   up__53->SetFrameBorderMode(0);
   Double_t xAxis328[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__328 = new TH1D("chist__328","",8, xAxis328);
   chist__328->SetMinimum(-1.6);
   chist__328->SetMaximum(1.7);
   chist__328->SetDirectory(nullptr);
   chist__328->SetStats(0);
   chist__328->SetLineColor(0);
   chist__328->SetLineWidth(0);
   chist__328->SetMarkerColor(0);
   chist__328->SetMarkerStyle(20);
   chist__328->SetMarkerSize(0);
   chist__328->GetXaxis()->SetRange(1,11);
   chist__328->GetXaxis()->SetNdivisions(4000510);
   chist__328->GetXaxis()->SetLabelFont(42);
   chist__328->GetXaxis()->SetLabelSize(0);
   chist__328->GetXaxis()->SetTitleSize(0.08);
   chist__328->GetXaxis()->SetTickLength(0.04);
   chist__328->GetXaxis()->SetTitleOffset(2.020933);
   chist__328->GetXaxis()->SetTitleFont(42);
   chist__328->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__328->GetYaxis()->SetNdivisions(3000510);
   chist__328->GetYaxis()->SetLabelFont(42);
   chist__328->GetYaxis()->SetLabelSize(0.08);
   chist__328->GetYaxis()->SetTitleSize(0.08);
   chist__328->GetYaxis()->SetTickLength(0.04);
   chist__328->GetYaxis()->SetTitleOffset(0.727387);
   chist__328->GetYaxis()->SetTitleFont(42);
   chist__328->GetZaxis()->SetLabelFont(42);
   chist__328->GetZaxis()->SetLabelSize(0.05);
   chist__328->GetZaxis()->SetTitleSize(0.05);
   chist__328->GetZaxis()->SetTitleOffset(1);
   chist__328->GetZaxis()->SetTitleFont(42);
   chist__328->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"R_{#eta}");
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
      tex = new TLatex(0.160804,0.5098,"15.00 #leq p_{T}^{#gamma} [GeV] < 20.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis329[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_2__329 = new TH1D("RZ_shift_tot_2__329","",8, xAxis329);
   RZ_shift_tot_2__329->SetBinContent(1,-0.06126246);
   RZ_shift_tot_2__329->SetBinContent(2,-0.08652196);
   RZ_shift_tot_2__329->SetBinContent(3,-0.1184335);
   RZ_shift_tot_2__329->SetBinContent(4,-0.1445687);
   RZ_shift_tot_2__329->SetBinContent(6,-0.1870785);
   RZ_shift_tot_2__329->SetBinContent(7,-0.2559672);
   RZ_shift_tot_2__329->SetBinContent(8,-0.3476894);
   RZ_shift_tot_2__329->SetBinError(1,0.009717676);
   RZ_shift_tot_2__329->SetBinError(2,0.01455642);
   RZ_shift_tot_2__329->SetBinError(3,0.01463379);
   RZ_shift_tot_2__329->SetBinError(4,0.01947137);
   RZ_shift_tot_2__329->SetBinError(6,0.01470734);
   RZ_shift_tot_2__329->SetBinError(7,0.01884951);
   RZ_shift_tot_2__329->SetBinError(8,0.02687044);
   RZ_shift_tot_2__329->SetEntries(658.2306);
   RZ_shift_tot_2__329->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_2__329->SetFillColor(ci);
   RZ_shift_tot_2__329->SetMarkerStyle(20);
   RZ_shift_tot_2__329->SetMarkerSize(0.8);
   RZ_shift_tot_2__329->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_2__329->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_2__329->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_2__329->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_2__329->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__329->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__329->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_2__329->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_2__329->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_2__329->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_2__329->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_2__329->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_2__329->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_2__329->Draw("SAME E2");
   Double_t xAxis330[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_2__330 = new TH1D("RZ_shift_stat_2__330","",8, xAxis330);
   RZ_shift_stat_2__330->SetBinContent(1,-0.06126246);
   RZ_shift_stat_2__330->SetBinContent(2,-0.08652196);
   RZ_shift_stat_2__330->SetBinContent(3,-0.1184335);
   RZ_shift_stat_2__330->SetBinContent(4,-0.1445687);
   RZ_shift_stat_2__330->SetBinContent(6,-0.1870785);
   RZ_shift_stat_2__330->SetBinContent(7,-0.2559672);
   RZ_shift_stat_2__330->SetBinContent(8,-0.3476894);
   RZ_shift_stat_2__330->SetBinError(1,0.007898258);
   RZ_shift_stat_2__330->SetBinError(2,0.01300038);
   RZ_shift_stat_2__330->SetBinError(3,0.01118598);
   RZ_shift_stat_2__330->SetBinError(4,0.01599909);
   RZ_shift_stat_2__330->SetBinError(6,0.01273287);
   RZ_shift_stat_2__330->SetBinError(7,0.01802715);
   RZ_shift_stat_2__330->SetBinError(8,0.01564279);
   RZ_shift_stat_2__330->SetEntries(1073.915);
   RZ_shift_stat_2__330->SetStats(0);
   RZ_shift_stat_2__330->SetMarkerStyle(20);
   RZ_shift_stat_2__330->SetMarkerSize(0.8);
   RZ_shift_stat_2__330->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_2__330->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_2__330->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_2__330->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_2__330->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__330->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__330->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_2__330->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_2__330->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_2__330->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_2__330->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_2__330->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_2__330->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_2__330->Draw("SAME PZ");
   Double_t xAxis331[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_2__331 = new TH1D("SP_shift_tot_2__331","",8, xAxis331);
   SP_shift_tot_2__331->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_2__331->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__331->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_2__331->SetMarkerColor(ci);
   SP_shift_tot_2__331->SetMarkerStyle(20);
   SP_shift_tot_2__331->SetMarkerSize(0.8);
   SP_shift_tot_2__331->GetXaxis()->SetRange(1,11);
   SP_shift_tot_2__331->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_2__331->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_2__331->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_2__331->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__331->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__331->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_2__331->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_2__331->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_2__331->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_2__331->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_2__331->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_2__331->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_2__331->Draw("SAME E2");
   Double_t xAxis332[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_2__332 = new TH1D("SP_shift_stat_2__332","",8, xAxis332);
   SP_shift_stat_2__332->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__332->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_2__332->SetMarkerColor(ci);
   SP_shift_stat_2__332->SetMarkerStyle(20);
   SP_shift_stat_2__332->SetMarkerSize(0.8);
   SP_shift_stat_2__332->GetXaxis()->SetRange(1,11);
   SP_shift_stat_2__332->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_2__332->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_2__332->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_2__332->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__332->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__332->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_2__332->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_2__332->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_2__332->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_2__332->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_2__332->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_2__332->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_2__332->Draw("SAME PZ");
   Double_t xAxis333[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__333 = new TH1D("chist_copy__333","",8, xAxis333);
   chist_copy__333->SetMinimum(-1.6);
   chist_copy__333->SetMaximum(1.7);
   chist_copy__333->SetDirectory(nullptr);
   chist_copy__333->SetStats(0);
   chist_copy__333->SetLineColor(0);
   chist_copy__333->SetLineWidth(0);
   chist_copy__333->SetMarkerColor(0);
   chist_copy__333->SetMarkerStyle(20);
   chist_copy__333->SetMarkerSize(0);
   chist_copy__333->GetXaxis()->SetRange(1,11);
   chist_copy__333->GetXaxis()->SetNdivisions(4000510);
   chist_copy__333->GetXaxis()->SetLabelFont(42);
   chist_copy__333->GetXaxis()->SetLabelSize(0);
   chist_copy__333->GetXaxis()->SetTitleSize(0.08);
   chist_copy__333->GetXaxis()->SetTickLength(0.04);
   chist_copy__333->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__333->GetXaxis()->SetTitleFont(42);
   chist_copy__333->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__333->GetYaxis()->SetNdivisions(3000510);
   chist_copy__333->GetYaxis()->SetLabelFont(42);
   chist_copy__333->GetYaxis()->SetLabelSize(0.08);
   chist_copy__333->GetYaxis()->SetTitleSize(0.08);
   chist_copy__333->GetYaxis()->SetTickLength(0.04);
   chist_copy__333->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__333->GetYaxis()->SetTitleFont(42);
   chist_copy__333->GetZaxis()->SetLabelFont(42);
   chist_copy__333->GetZaxis()->SetLabelSize(0.05);
   chist_copy__333->GetZaxis()->SetTitleSize(0.05);
   chist_copy__333->GetZaxis()->SetTitleOffset(1);
   chist_copy__333->GetZaxis()->SetTitleFont(42);
   chist_copy__333->Draw("sameaxis");
   up__53->Modified();
   c1_n9->cd();
   c1_n9->Modified();
   c1_n9->SetSelected(c1_n9);
}
