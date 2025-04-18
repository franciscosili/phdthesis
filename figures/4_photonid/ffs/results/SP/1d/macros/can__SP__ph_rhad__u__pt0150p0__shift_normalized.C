#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_rhad__u__pt0150p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n20/
//=========  (Thu Apr  4 17:59:18 2024) by ROOT version 6.30/02
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
   TPad *dw__1710 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1710->Draw();
   dw__1710->cd();
   dw__1710->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1710->SetFillColor(0);
   dw__1710->SetFillStyle(4000);
   dw__1710->SetBorderMode(0);
   dw__1710->SetBorderSize(0);
   dw__1710->SetTickx(1);
   dw__1710->SetTicky(1);
   dw__1710->SetLeftMargin(0.120603);
   dw__1710->SetRightMargin(0.08040201);
   dw__1710->SetTopMargin(0);
   dw__1710->SetBottomMargin(0.2072539);
   dw__1710->SetFrameBorderMode(0);
   dw__1710->SetFrameBorderMode(0);
   Double_t xAxis572[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__8412 = new TH1D("chist_dw__8412","",8, xAxis572);
   chist_dw__8412->SetMinimum(0.2);
   chist_dw__8412->SetMaximum(3.2);
   chist_dw__8412->SetDirectory(nullptr);
   chist_dw__8412->SetStats(0);
   chist_dw__8412->SetLineColor(0);
   chist_dw__8412->SetLineWidth(0);
   chist_dw__8412->SetMarkerColor(0);
   chist_dw__8412->SetMarkerStyle(20);
   chist_dw__8412->SetMarkerSize(0);
   chist_dw__8412->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__8412->GetXaxis()->SetRange(1,8);
   chist_dw__8412->GetXaxis()->SetLabelFont(42);
   chist_dw__8412->GetXaxis()->SetLabelSize(0.08);
   chist_dw__8412->GetXaxis()->SetTitleSize(0.08);
   chist_dw__8412->GetXaxis()->SetTickLength(0.04);
   chist_dw__8412->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__8412->GetXaxis()->SetTitleFont(42);
   chist_dw__8412->GetYaxis()->SetTitle("Stretch");
   chist_dw__8412->GetYaxis()->CenterTitle(true);
   chist_dw__8412->GetYaxis()->SetNdivisions(405);
   chist_dw__8412->GetYaxis()->SetLabelFont(42);
   chist_dw__8412->GetYaxis()->SetLabelSize(0.08);
   chist_dw__8412->GetYaxis()->SetTitleSize(0.08);
   chist_dw__8412->GetYaxis()->SetTickLength(0.04);
   chist_dw__8412->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__8412->GetYaxis()->SetTitleFont(42);
   chist_dw__8412->GetZaxis()->SetLabelFont(42);
   chist_dw__8412->GetZaxis()->SetLabelSize(0.05);
   chist_dw__8412->GetZaxis()->SetTitleSize(0.05);
   chist_dw__8412->GetZaxis()->SetTitleOffset(1);
   chist_dw__8412->GetZaxis()->SetTitleFont(42);
   chist_dw__8412->Draw("");
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
   Double_t xAxis573[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_5__8413 = new TH1D("stretch_tot_5__8413","",8, xAxis573);
   stretch_tot_5__8413->SetBinContent(3,1.033725);
   stretch_tot_5__8413->SetBinContent(4,1.082466);
   stretch_tot_5__8413->SetBinError(3,0.001559578);
   stretch_tot_5__8413->SetBinError(4,0.04761623);
   stretch_tot_5__8413->SetEntries(1973.031);
   stretch_tot_5__8413->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_5__8413->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_5__8413->SetLineColor(ci);
   stretch_tot_5__8413->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_5__8413->SetMarkerColor(ci);
   stretch_tot_5__8413->SetMarkerStyle(20);
   stretch_tot_5__8413->SetMarkerSize(0.8);
   stretch_tot_5__8413->GetXaxis()->SetRange(1,8);
   stretch_tot_5__8413->GetXaxis()->SetLabelFont(42);
   stretch_tot_5__8413->GetXaxis()->SetTitleFont(42);
   stretch_tot_5__8413->GetYaxis()->SetLabelFont(42);
   stretch_tot_5__8413->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_5__8413->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_5__8413->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_5__8413->GetYaxis()->SetTitleFont(42);
   stretch_tot_5__8413->GetZaxis()->SetLabelFont(42);
   stretch_tot_5__8413->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_5__8413->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_5__8413->GetZaxis()->SetTitleOffset(1);
   stretch_tot_5__8413->GetZaxis()->SetTitleFont(42);
   stretch_tot_5__8413->Draw("SAME E2");
   Double_t xAxis574[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_5__8414 = new TH1D("stretch_stat_5__8414","",8, xAxis574);
   stretch_stat_5__8414->SetBinContent(3,1.033725);
   stretch_stat_5__8414->SetBinContent(4,1.082466);
   stretch_stat_5__8414->SetBinError(3,0.000417162);
   stretch_stat_5__8414->SetBinError(4,0.001353813);
   stretch_stat_5__8414->SetEntries(2231506);
   stretch_stat_5__8414->SetStats(0);
   stretch_stat_5__8414->SetLineWidth(2);
   stretch_stat_5__8414->SetMarkerStyle(20);
   stretch_stat_5__8414->SetMarkerSize(0.8);
   stretch_stat_5__8414->GetXaxis()->SetRange(1,8);
   stretch_stat_5__8414->GetXaxis()->SetLabelFont(42);
   stretch_stat_5__8414->GetXaxis()->SetTitleFont(42);
   stretch_stat_5__8414->GetYaxis()->SetLabelFont(42);
   stretch_stat_5__8414->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_5__8414->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_5__8414->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_5__8414->GetYaxis()->SetTitleFont(42);
   stretch_stat_5__8414->GetZaxis()->SetLabelFont(42);
   stretch_stat_5__8414->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_5__8414->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_5__8414->GetZaxis()->SetTitleOffset(1);
   stretch_stat_5__8414->GetZaxis()->SetTitleFont(42);
   stretch_stat_5__8414->Draw("SAME PZ");
   dw__1710->Modified();
   c1_n20->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1711 = new TPad("up", "up",0,0.5,1,1);
   up__1711->Draw();
   up__1711->cd();
   up__1711->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__1711->SetFillColor(0);
   up__1711->SetFillStyle(4000);
   up__1711->SetBorderMode(0);
   up__1711->SetBorderSize(0);
   up__1711->SetTickx(1);
   up__1711->SetTicky(1);
   up__1711->SetLeftMargin(0.120603);
   up__1711->SetRightMargin(0.08040201);
   up__1711->SetBottomMargin(0.01243523);
   up__1711->SetFrameBorderMode(0);
   up__1711->SetFrameBorderMode(0);
   Double_t xAxis575[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__8415 = new TH1D("chist__8415","",8, xAxis575);
   chist__8415->SetMinimum(-0.7);
   chist__8415->SetMaximum(1.1);
   chist__8415->SetDirectory(nullptr);
   chist__8415->SetStats(0);
   chist__8415->SetLineColor(0);
   chist__8415->SetLineWidth(0);
   chist__8415->SetMarkerColor(0);
   chist__8415->SetMarkerStyle(20);
   chist__8415->SetMarkerSize(0);
   chist__8415->GetXaxis()->SetRange(1,8);
   chist__8415->GetXaxis()->SetNdivisions(4000510);
   chist__8415->GetXaxis()->SetLabelFont(42);
   chist__8415->GetXaxis()->SetLabelSize(0);
   chist__8415->GetXaxis()->SetTitleSize(0.08);
   chist__8415->GetXaxis()->SetTickLength(0.04);
   chist__8415->GetXaxis()->SetTitleOffset(2.020933);
   chist__8415->GetXaxis()->SetTitleFont(42);
   chist__8415->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__8415->GetYaxis()->SetNdivisions(3000510);
   chist__8415->GetYaxis()->SetLabelFont(42);
   chist__8415->GetYaxis()->SetLabelSize(0.08);
   chist__8415->GetYaxis()->SetTitleSize(0.08);
   chist__8415->GetYaxis()->SetTickLength(0.04);
   chist__8415->GetYaxis()->SetTitleOffset(0.727387);
   chist__8415->GetYaxis()->SetTitleFont(42);
   chist__8415->GetZaxis()->SetLabelFont(42);
   chist__8415->GetZaxis()->SetLabelSize(0.05);
   chist__8415->GetZaxis()->SetTitleSize(0.05);
   chist__8415->GetZaxis()->SetTitleOffset(1);
   chist__8415->GetZaxis()->SetTitleFont(42);
   chist__8415->Draw("pe");
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
   
   TLegend *leg = new TLegend(0.4861809,0.699,0.879397,0.875,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03000911);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("shift_tot_5","SP, Total unc., TUNE26","F");

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("shift_stat_5","SP, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"R_{had}");
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
      tex = new TLatex(0.160804,0.5098,"150.0 #leq p_{T}^{#gamma} [GeV] < 300.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis576[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_5__8416 = new TH1D("shift_tot_5__8416","",8, xAxis576);
   shift_tot_5__8416->SetBinContent(3,-0.03434305);
   shift_tot_5__8416->SetBinContent(4,-0.008844668);
   shift_tot_5__8416->SetBinError(3,0.006281122);
   shift_tot_5__8416->SetBinError(4,0.003971391);
   shift_tot_5__8416->SetEntries(33.77452);
   shift_tot_5__8416->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_5__8416->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_5__8416->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_5__8416->SetMarkerColor(ci);
   shift_tot_5__8416->SetMarkerStyle(20);
   shift_tot_5__8416->SetMarkerSize(0.8);
   shift_tot_5__8416->GetXaxis()->SetRange(1,8);
   shift_tot_5__8416->GetXaxis()->SetLabelFont(42);
   shift_tot_5__8416->GetXaxis()->SetTitleFont(42);
   shift_tot_5__8416->GetYaxis()->SetLabelFont(42);
   shift_tot_5__8416->GetYaxis()->SetLabelSize(0.05);
   shift_tot_5__8416->GetYaxis()->SetTitleSize(0.05);
   shift_tot_5__8416->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_5__8416->GetYaxis()->SetTitleFont(42);
   shift_tot_5__8416->GetZaxis()->SetLabelFont(42);
   shift_tot_5__8416->GetZaxis()->SetLabelSize(0.05);
   shift_tot_5__8416->GetZaxis()->SetTitleSize(0.05);
   shift_tot_5__8416->GetZaxis()->SetTitleOffset(1);
   shift_tot_5__8416->GetZaxis()->SetTitleFont(42);
   shift_tot_5__8416->Draw("SAME E2");
   Double_t xAxis577[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_5__8417 = new TH1D("shift_stat_5__8417","",8, xAxis577);
   shift_stat_5__8417->SetBinContent(3,-0.03434305);
   shift_stat_5__8417->SetBinContent(4,-0.008844668);
   shift_stat_5__8417->SetBinError(3,0.0005192787);
   shift_stat_5__8417->SetBinError(4,0.0008298453);
   shift_stat_5__8417->SetEntries(1946.355);
   shift_stat_5__8417->SetStats(0);
   shift_stat_5__8417->SetMarkerStyle(20);
   shift_stat_5__8417->SetMarkerSize(0.8);
   shift_stat_5__8417->GetXaxis()->SetRange(1,8);
   shift_stat_5__8417->GetXaxis()->SetLabelFont(42);
   shift_stat_5__8417->GetXaxis()->SetTitleFont(42);
   shift_stat_5__8417->GetYaxis()->SetLabelFont(42);
   shift_stat_5__8417->GetYaxis()->SetLabelSize(0.05);
   shift_stat_5__8417->GetYaxis()->SetTitleSize(0.05);
   shift_stat_5__8417->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_5__8417->GetYaxis()->SetTitleFont(42);
   shift_stat_5__8417->GetZaxis()->SetLabelFont(42);
   shift_stat_5__8417->GetZaxis()->SetLabelSize(0.05);
   shift_stat_5__8417->GetZaxis()->SetTitleSize(0.05);
   shift_stat_5__8417->GetZaxis()->SetTitleOffset(1);
   shift_stat_5__8417->GetZaxis()->SetTitleFont(42);
   shift_stat_5__8417->Draw("SAME PZ");
   Double_t xAxis578[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__8418 = new TH1D("chist_copy__8418","",8, xAxis578);
   chist_copy__8418->SetMinimum(-0.7);
   chist_copy__8418->SetMaximum(1.1);
   chist_copy__8418->SetDirectory(nullptr);
   chist_copy__8418->SetStats(0);
   chist_copy__8418->SetLineColor(0);
   chist_copy__8418->SetLineWidth(0);
   chist_copy__8418->SetMarkerColor(0);
   chist_copy__8418->SetMarkerStyle(20);
   chist_copy__8418->SetMarkerSize(0);
   chist_copy__8418->GetXaxis()->SetRange(1,8);
   chist_copy__8418->GetXaxis()->SetNdivisions(4000510);
   chist_copy__8418->GetXaxis()->SetLabelFont(42);
   chist_copy__8418->GetXaxis()->SetLabelSize(0);
   chist_copy__8418->GetXaxis()->SetTitleSize(0.08);
   chist_copy__8418->GetXaxis()->SetTickLength(0.04);
   chist_copy__8418->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__8418->GetXaxis()->SetTitleFont(42);
   chist_copy__8418->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__8418->GetYaxis()->SetNdivisions(3000510);
   chist_copy__8418->GetYaxis()->SetLabelFont(42);
   chist_copy__8418->GetYaxis()->SetLabelSize(0.08);
   chist_copy__8418->GetYaxis()->SetTitleSize(0.08);
   chist_copy__8418->GetYaxis()->SetTickLength(0.04);
   chist_copy__8418->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__8418->GetYaxis()->SetTitleFont(42);
   chist_copy__8418->GetZaxis()->SetLabelFont(42);
   chist_copy__8418->GetZaxis()->SetLabelSize(0.05);
   chist_copy__8418->GetZaxis()->SetTitleSize(0.05);
   chist_copy__8418->GetZaxis()->SetTitleOffset(1);
   chist_copy__8418->GetZaxis()->SetTitleFont(42);
   chist_copy__8418->Draw("sameaxis");
   up__1711->Modified();
   c1_n20->cd();
   c1_n20->Modified();
   c1_n20->SetSelected(c1_n20);
}
