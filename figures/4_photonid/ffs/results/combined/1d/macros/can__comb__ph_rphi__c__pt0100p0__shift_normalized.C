#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rphi__c__pt0100p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n71/
//=========  (Thu Apr  4 19:00:21 2024) by ROOT version 6.30/02
   TCanvas *c1_n71 = new TCanvas("c1_n71", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n71->SetHighLightColor(2);
   c1_n71->Range(0,0,1,1);
   c1_n71->SetFillColor(0);
   c1_n71->SetBorderMode(0);
   c1_n71->SetBorderSize(2);
   c1_n71->SetTickx(1);
   c1_n71->SetTicky(1);
   c1_n71->SetLeftMargin(0.16);
   c1_n71->SetRightMargin(0.05);
   c1_n71->SetTopMargin(0.05);
   c1_n71->SetBottomMargin(0.16);
   c1_n71->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__280 = new TPad("dw", "dw",0,0,1,0.5);
   dw__280->Draw();
   dw__280->cd();
   dw__280->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__280->SetFillColor(0);
   dw__280->SetFillStyle(4000);
   dw__280->SetBorderMode(0);
   dw__280->SetBorderSize(0);
   dw__280->SetTickx(1);
   dw__280->SetTicky(1);
   dw__280->SetLeftMargin(0.120603);
   dw__280->SetRightMargin(0.08040201);
   dw__280->SetTopMargin(0);
   dw__280->SetBottomMargin(0.2072539);
   dw__280->SetFrameBorderMode(0);
   dw__280->SetFrameBorderMode(0);
   Double_t xAxis1685[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__1685 = new TH1D("chist_dw__1685","",8, xAxis1685);
   chist_dw__1685->SetMinimum(0.2);
   chist_dw__1685->SetMaximum(3.2);
   chist_dw__1685->SetDirectory(nullptr);
   chist_dw__1685->SetStats(0);
   chist_dw__1685->SetLineColor(0);
   chist_dw__1685->SetLineWidth(0);
   chist_dw__1685->SetMarkerColor(0);
   chist_dw__1685->SetMarkerStyle(20);
   chist_dw__1685->SetMarkerSize(0);
   chist_dw__1685->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__1685->GetXaxis()->SetRange(1,11);
   chist_dw__1685->GetXaxis()->SetLabelFont(42);
   chist_dw__1685->GetXaxis()->SetLabelSize(0.08);
   chist_dw__1685->GetXaxis()->SetTitleSize(0.08);
   chist_dw__1685->GetXaxis()->SetTickLength(0.04);
   chist_dw__1685->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__1685->GetXaxis()->SetTitleFont(42);
   chist_dw__1685->GetYaxis()->SetTitle("Stretch");
   chist_dw__1685->GetYaxis()->CenterTitle(true);
   chist_dw__1685->GetYaxis()->SetNdivisions(405);
   chist_dw__1685->GetYaxis()->SetLabelFont(42);
   chist_dw__1685->GetYaxis()->SetLabelSize(0.08);
   chist_dw__1685->GetYaxis()->SetTitleSize(0.08);
   chist_dw__1685->GetYaxis()->SetTickLength(0.04);
   chist_dw__1685->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__1685->GetYaxis()->SetTitleFont(42);
   chist_dw__1685->GetZaxis()->SetLabelFont(42);
   chist_dw__1685->GetZaxis()->SetLabelSize(0.05);
   chist_dw__1685->GetZaxis()->SetTitleSize(0.05);
   chist_dw__1685->GetZaxis()->SetTitleOffset(1);
   chist_dw__1685->GetZaxis()->SetTitleFont(42);
   chist_dw__1685->Draw("");
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
   Double_t xAxis1686[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_8__1686 = new TH1D("RZ_stretch_tot_8__1686","",8, xAxis1686);
   RZ_stretch_tot_8__1686->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_8__1686->SetFillColor(ci);
   RZ_stretch_tot_8__1686->SetLineWidth(2);
   RZ_stretch_tot_8__1686->SetMarkerStyle(20);
   RZ_stretch_tot_8__1686->SetMarkerSize(0.8);
   RZ_stretch_tot_8__1686->GetXaxis()->SetRange(1,11);
   RZ_stretch_tot_8__1686->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__1686->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__1686->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__1686->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__1686->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__1686->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__1686->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__1686->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__1686->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_8__1686->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__1686->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_8__1686->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_8__1686->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_8__1686->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_8__1686->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_8__1686->Draw("SAME E2");
   Double_t xAxis1687[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_8__1687 = new TH1D("RZ_stretch_stat_8__1687","",8, xAxis1687);
   RZ_stretch_stat_8__1687->SetStats(0);
   RZ_stretch_stat_8__1687->SetLineWidth(2);
   RZ_stretch_stat_8__1687->SetMarkerStyle(20);
   RZ_stretch_stat_8__1687->SetMarkerSize(0.8);
   RZ_stretch_stat_8__1687->GetXaxis()->SetRange(1,11);
   RZ_stretch_stat_8__1687->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__1687->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__1687->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__1687->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__1687->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__1687->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__1687->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__1687->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__1687->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_8__1687->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__1687->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_8__1687->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_8__1687->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_8__1687->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_8__1687->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_8__1687->Draw("SAME PZ");
   Double_t xAxis1688[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_8__1688 = new TH1D("SP_stretch_tot_8__1688","",8, xAxis1688);
   SP_stretch_tot_8__1688->SetBinContent(1,1.13707);
   SP_stretch_tot_8__1688->SetBinContent(2,1.151588);
   SP_stretch_tot_8__1688->SetBinContent(3,1.200748);
   SP_stretch_tot_8__1688->SetBinContent(4,1.252455);
   SP_stretch_tot_8__1688->SetBinContent(6,1.165067);
   SP_stretch_tot_8__1688->SetBinContent(7,1.164817);
   SP_stretch_tot_8__1688->SetBinContent(8,1.307106);
   SP_stretch_tot_8__1688->SetBinError(1,0.06767082);
   SP_stretch_tot_8__1688->SetBinError(2,0.07041374);
   SP_stretch_tot_8__1688->SetBinError(3,0.09823972);
   SP_stretch_tot_8__1688->SetBinError(4,0.1048899);
   SP_stretch_tot_8__1688->SetBinError(6,0.09269192);
   SP_stretch_tot_8__1688->SetBinError(7,0.07170526);
   SP_stretch_tot_8__1688->SetBinError(8,0.1067337);
   SP_stretch_tot_8__1688->SetEntries(1269.168);
   SP_stretch_tot_8__1688->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_8__1688->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__1688->SetLineColor(ci);
   SP_stretch_tot_8__1688->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_8__1688->SetMarkerColor(ci);
   SP_stretch_tot_8__1688->SetMarkerStyle(20);
   SP_stretch_tot_8__1688->SetMarkerSize(0.8);
   SP_stretch_tot_8__1688->GetXaxis()->SetRange(1,11);
   SP_stretch_tot_8__1688->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_8__1688->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__1688->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__1688->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__1688->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_8__1688->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_8__1688->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__1688->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__1688->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_8__1688->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_8__1688->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_8__1688->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_8__1688->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_8__1688->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_8__1688->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_8__1688->Draw("SAME E2");
   Double_t xAxis1689[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_8__1689 = new TH1D("SP_stretch_stat_8__1689","",8, xAxis1689);
   SP_stretch_stat_8__1689->SetBinContent(1,1.13707);
   SP_stretch_stat_8__1689->SetBinContent(2,1.151588);
   SP_stretch_stat_8__1689->SetBinContent(3,1.200748);
   SP_stretch_stat_8__1689->SetBinContent(4,1.252455);
   SP_stretch_stat_8__1689->SetBinContent(6,1.165067);
   SP_stretch_stat_8__1689->SetBinContent(7,1.164817);
   SP_stretch_stat_8__1689->SetBinContent(8,1.307106);
   SP_stretch_stat_8__1689->SetBinError(1,0.0007759279);
   SP_stretch_stat_8__1689->SetBinError(2,0.00167757);
   SP_stretch_stat_8__1689->SetBinError(3,0.000973399);
   SP_stretch_stat_8__1689->SetBinError(4,0.001064891);
   SP_stretch_stat_8__1689->SetBinError(6,0.0008799361);
   SP_stretch_stat_8__1689->SetBinError(7,0.001176803);
   SP_stretch_stat_8__1689->SetBinError(8,0.0007531488);
   SP_stretch_stat_8__1689->SetEntries(8536420);
   SP_stretch_stat_8__1689->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__1689->SetLineColor(ci);
   SP_stretch_stat_8__1689->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_8__1689->SetMarkerColor(ci);
   SP_stretch_stat_8__1689->SetMarkerStyle(20);
   SP_stretch_stat_8__1689->SetMarkerSize(0.8);
   SP_stretch_stat_8__1689->GetXaxis()->SetRange(1,11);
   SP_stretch_stat_8__1689->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_8__1689->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__1689->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__1689->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__1689->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_8__1689->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_8__1689->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__1689->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__1689->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_8__1689->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_8__1689->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_8__1689->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_8__1689->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_8__1689->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_8__1689->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_8__1689->Draw("SAME PZ");
   dw__280->Modified();
   c1_n71->cd();
  
// ------------>Primitives in pad: up
   TPad *up__281 = new TPad("up", "up",0,0.5,1,1);
   up__281->Draw();
   up__281->cd();
   up__281->Range(-0.3577359,-1.042204,2.608491,2.3517);
   up__281->SetFillColor(0);
   up__281->SetFillStyle(4000);
   up__281->SetBorderMode(0);
   up__281->SetBorderSize(0);
   up__281->SetTickx(1);
   up__281->SetTicky(1);
   up__281->SetLeftMargin(0.120603);
   up__281->SetRightMargin(0.08040201);
   up__281->SetBottomMargin(0.01243523);
   up__281->SetFrameBorderMode(0);
   up__281->SetFrameBorderMode(0);
   Double_t xAxis1690[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__1690 = new TH1D("chist__1690","",8, xAxis1690);
   chist__1690->SetMinimum(-1);
   chist__1690->SetMaximum(2);
   chist__1690->SetDirectory(nullptr);
   chist__1690->SetStats(0);
   chist__1690->SetLineColor(0);
   chist__1690->SetLineWidth(0);
   chist__1690->SetMarkerColor(0);
   chist__1690->SetMarkerStyle(20);
   chist__1690->SetMarkerSize(0);
   chist__1690->GetXaxis()->SetRange(1,11);
   chist__1690->GetXaxis()->SetNdivisions(4000510);
   chist__1690->GetXaxis()->SetLabelFont(42);
   chist__1690->GetXaxis()->SetLabelSize(0);
   chist__1690->GetXaxis()->SetTitleSize(0.08);
   chist__1690->GetXaxis()->SetTickLength(0.04);
   chist__1690->GetXaxis()->SetTitleOffset(2.020933);
   chist__1690->GetXaxis()->SetTitleFont(42);
   chist__1690->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__1690->GetYaxis()->SetNdivisions(3000510);
   chist__1690->GetYaxis()->SetLabelFont(42);
   chist__1690->GetYaxis()->SetLabelSize(0.08);
   chist__1690->GetYaxis()->SetTitleSize(0.08);
   chist__1690->GetYaxis()->SetTickLength(0.04);
   chist__1690->GetYaxis()->SetTitleOffset(0.727387);
   chist__1690->GetYaxis()->SetTitleFont(42);
   chist__1690->GetZaxis()->SetLabelFont(42);
   chist__1690->GetZaxis()->SetLabelSize(0.05);
   chist__1690->GetZaxis()->SetTitleSize(0.05);
   chist__1690->GetZaxis()->SetTitleOffset(1);
   chist__1690->GetZaxis()->SetTitleFont(42);
   chist__1690->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"R_{#phi}");
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
      tex = new TLatex(0.160804,0.5098,"100.00 #leq p_{T}^{#gamma} [GeV] < 150.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1691[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_8__1691 = new TH1D("RZ_shift_tot_8__1691","",8, xAxis1691);
   RZ_shift_tot_8__1691->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_8__1691->SetFillColor(ci);
   RZ_shift_tot_8__1691->SetMarkerStyle(20);
   RZ_shift_tot_8__1691->SetMarkerSize(0.8);
   RZ_shift_tot_8__1691->GetXaxis()->SetRange(1,11);
   RZ_shift_tot_8__1691->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_8__1691->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__1691->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__1691->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__1691->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_8__1691->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_8__1691->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__1691->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__1691->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_8__1691->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_8__1691->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_8__1691->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_8__1691->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_8__1691->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_8__1691->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_8__1691->Draw("SAME E2");
   Double_t xAxis1692[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_8__1692 = new TH1D("RZ_shift_stat_8__1692","",8, xAxis1692);
   RZ_shift_stat_8__1692->SetStats(0);
   RZ_shift_stat_8__1692->SetMarkerStyle(20);
   RZ_shift_stat_8__1692->SetMarkerSize(0.8);
   RZ_shift_stat_8__1692->GetXaxis()->SetRange(1,11);
   RZ_shift_stat_8__1692->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_8__1692->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__1692->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__1692->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__1692->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_8__1692->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_8__1692->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__1692->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__1692->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_8__1692->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_8__1692->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_8__1692->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_8__1692->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_8__1692->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_8__1692->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_8__1692->Draw("SAME PZ");
   Double_t xAxis1693[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_8__1693 = new TH1D("SP_shift_tot_8__1693","",8, xAxis1693);
   SP_shift_tot_8__1693->SetBinContent(1,0.2595418);
   SP_shift_tot_8__1693->SetBinContent(2,0.2109913);
   SP_shift_tot_8__1693->SetBinContent(3,0.1892915);
   SP_shift_tot_8__1693->SetBinContent(4,0.07969313);
   SP_shift_tot_8__1693->SetBinContent(6,0.1291941);
   SP_shift_tot_8__1693->SetBinContent(7,0.1627273);
   SP_shift_tot_8__1693->SetBinContent(8,0.1633514);
   SP_shift_tot_8__1693->SetBinError(1,0.01757185);
   SP_shift_tot_8__1693->SetBinError(2,0.02100756);
   SP_shift_tot_8__1693->SetBinError(3,0.03533955);
   SP_shift_tot_8__1693->SetBinError(4,0.0423731);
   SP_shift_tot_8__1693->SetBinError(6,0.04110461);
   SP_shift_tot_8__1693->SetBinError(7,0.03046344);
   SP_shift_tot_8__1693->SetBinError(8,0.04129754);
   SP_shift_tot_8__1693->SetEntries(175.8566);
   SP_shift_tot_8__1693->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_8__1693->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__1693->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_8__1693->SetMarkerColor(ci);
   SP_shift_tot_8__1693->SetMarkerStyle(20);
   SP_shift_tot_8__1693->SetMarkerSize(0.8);
   SP_shift_tot_8__1693->GetXaxis()->SetRange(1,11);
   SP_shift_tot_8__1693->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_8__1693->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__1693->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__1693->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__1693->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_8__1693->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_8__1693->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__1693->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__1693->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_8__1693->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_8__1693->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_8__1693->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_8__1693->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_8__1693->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_8__1693->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_8__1693->Draw("SAME E2");
   Double_t xAxis1694[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_8__1694 = new TH1D("SP_shift_stat_8__1694","",8, xAxis1694);
   SP_shift_stat_8__1694->SetBinContent(1,0.2595418);
   SP_shift_stat_8__1694->SetBinContent(2,0.2109913);
   SP_shift_stat_8__1694->SetBinContent(3,0.1892915);
   SP_shift_stat_8__1694->SetBinContent(4,0.07969313);
   SP_shift_stat_8__1694->SetBinContent(6,0.1291941);
   SP_shift_stat_8__1694->SetBinContent(7,0.1627273);
   SP_shift_stat_8__1694->SetBinContent(8,0.1633514);
   SP_shift_stat_8__1694->SetBinError(1,0.000427879);
   SP_shift_stat_8__1694->SetBinError(2,0.0009417471);
   SP_shift_stat_8__1694->SetBinError(3,0.0005475071);
   SP_shift_stat_8__1694->SetBinError(4,0.000672567);
   SP_shift_stat_8__1694->SetBinError(6,0.0005631339);
   SP_shift_stat_8__1694->SetBinError(7,0.0006892754);
   SP_shift_stat_8__1694->SetBinError(8,0.0005913043);
   SP_shift_stat_8__1694->SetEntries(481630.8);
   SP_shift_stat_8__1694->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__1694->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_8__1694->SetMarkerColor(ci);
   SP_shift_stat_8__1694->SetMarkerStyle(20);
   SP_shift_stat_8__1694->SetMarkerSize(0.8);
   SP_shift_stat_8__1694->GetXaxis()->SetRange(1,11);
   SP_shift_stat_8__1694->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_8__1694->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__1694->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__1694->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__1694->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_8__1694->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_8__1694->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__1694->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__1694->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_8__1694->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_8__1694->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_8__1694->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_8__1694->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_8__1694->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_8__1694->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_8__1694->Draw("SAME PZ");
   Double_t xAxis1695[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__1695 = new TH1D("chist_copy__1695","",8, xAxis1695);
   chist_copy__1695->SetMinimum(-1);
   chist_copy__1695->SetMaximum(2);
   chist_copy__1695->SetDirectory(nullptr);
   chist_copy__1695->SetStats(0);
   chist_copy__1695->SetLineColor(0);
   chist_copy__1695->SetLineWidth(0);
   chist_copy__1695->SetMarkerColor(0);
   chist_copy__1695->SetMarkerStyle(20);
   chist_copy__1695->SetMarkerSize(0);
   chist_copy__1695->GetXaxis()->SetRange(1,11);
   chist_copy__1695->GetXaxis()->SetNdivisions(4000510);
   chist_copy__1695->GetXaxis()->SetLabelFont(42);
   chist_copy__1695->GetXaxis()->SetLabelSize(0);
   chist_copy__1695->GetXaxis()->SetTitleSize(0.08);
   chist_copy__1695->GetXaxis()->SetTickLength(0.04);
   chist_copy__1695->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__1695->GetXaxis()->SetTitleFont(42);
   chist_copy__1695->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__1695->GetYaxis()->SetNdivisions(3000510);
   chist_copy__1695->GetYaxis()->SetLabelFont(42);
   chist_copy__1695->GetYaxis()->SetLabelSize(0.08);
   chist_copy__1695->GetYaxis()->SetTitleSize(0.08);
   chist_copy__1695->GetYaxis()->SetTickLength(0.04);
   chist_copy__1695->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__1695->GetYaxis()->SetTitleFont(42);
   chist_copy__1695->GetZaxis()->SetLabelFont(42);
   chist_copy__1695->GetZaxis()->SetLabelSize(0.05);
   chist_copy__1695->GetZaxis()->SetTitleSize(0.05);
   chist_copy__1695->GetZaxis()->SetTitleOffset(1);
   chist_copy__1695->GetZaxis()->SetTitleFont(42);
   chist_copy__1695->Draw("sameaxis");
   up__281->Modified();
   c1_n71->cd();
   c1_n71->Modified();
   c1_n71->SetSelected(c1_n71);
}
