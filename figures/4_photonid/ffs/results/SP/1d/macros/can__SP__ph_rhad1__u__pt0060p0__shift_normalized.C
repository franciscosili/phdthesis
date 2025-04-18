#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_rhad1__u__pt0060p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n44/
//=========  (Thu Apr  4 17:59:19 2024) by ROOT version 6.30/02
   TCanvas *c1_n44 = new TCanvas("c1_n44", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n44->SetHighLightColor(2);
   c1_n44->Range(0,0,1,1);
   c1_n44->SetFillColor(0);
   c1_n44->SetBorderMode(0);
   c1_n44->SetBorderSize(2);
   c1_n44->SetTickx(1);
   c1_n44->SetTicky(1);
   c1_n44->SetLeftMargin(0.16);
   c1_n44->SetRightMargin(0.05);
   c1_n44->SetTopMargin(0.05);
   c1_n44->SetBottomMargin(0.16);
   c1_n44->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1752 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1752->Draw();
   dw__1752->cd();
   dw__1752->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1752->SetFillColor(0);
   dw__1752->SetFillStyle(4000);
   dw__1752->SetBorderMode(0);
   dw__1752->SetBorderSize(0);
   dw__1752->SetTickx(1);
   dw__1752->SetTicky(1);
   dw__1752->SetLeftMargin(0.120603);
   dw__1752->SetRightMargin(0.08040201);
   dw__1752->SetTopMargin(0);
   dw__1752->SetBottomMargin(0.2072539);
   dw__1752->SetFrameBorderMode(0);
   dw__1752->SetFrameBorderMode(0);
   Double_t xAxis743[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__8583 = new TH1D("chist_dw__8583","",8, xAxis743);
   chist_dw__8583->SetMinimum(0.2);
   chist_dw__8583->SetMaximum(3.2);
   chist_dw__8583->SetDirectory(nullptr);
   chist_dw__8583->SetStats(0);
   chist_dw__8583->SetLineColor(0);
   chist_dw__8583->SetLineWidth(0);
   chist_dw__8583->SetMarkerColor(0);
   chist_dw__8583->SetMarkerStyle(20);
   chist_dw__8583->SetMarkerSize(0);
   chist_dw__8583->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__8583->GetXaxis()->SetRange(1,7);
   chist_dw__8583->GetXaxis()->SetLabelFont(42);
   chist_dw__8583->GetXaxis()->SetLabelSize(0.08);
   chist_dw__8583->GetXaxis()->SetTitleSize(0.08);
   chist_dw__8583->GetXaxis()->SetTickLength(0.04);
   chist_dw__8583->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__8583->GetXaxis()->SetTitleFont(42);
   chist_dw__8583->GetYaxis()->SetTitle("Stretch");
   chist_dw__8583->GetYaxis()->CenterTitle(true);
   chist_dw__8583->GetYaxis()->SetNdivisions(405);
   chist_dw__8583->GetYaxis()->SetLabelFont(42);
   chist_dw__8583->GetYaxis()->SetLabelSize(0.08);
   chist_dw__8583->GetYaxis()->SetTitleSize(0.08);
   chist_dw__8583->GetYaxis()->SetTickLength(0.04);
   chist_dw__8583->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__8583->GetYaxis()->SetTitleFont(42);
   chist_dw__8583->GetZaxis()->SetLabelFont(42);
   chist_dw__8583->GetZaxis()->SetLabelSize(0.05);
   chist_dw__8583->GetZaxis()->SetTitleSize(0.05);
   chist_dw__8583->GetZaxis()->SetTitleOffset(1);
   chist_dw__8583->GetZaxis()->SetTitleFont(42);
   chist_dw__8583->Draw("");
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
   Double_t xAxis744[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_2__8584 = new TH1D("stretch_tot_2__8584","",8, xAxis744);
   stretch_tot_2__8584->SetBinContent(1,1.083999);
   stretch_tot_2__8584->SetBinContent(2,1.13785);
   stretch_tot_2__8584->SetBinContent(6,1.012592);
   stretch_tot_2__8584->SetBinContent(7,1.041583);
   stretch_tot_2__8584->SetBinContent(8,1.047964);
   stretch_tot_2__8584->SetBinError(1,0.0004028869);
   stretch_tot_2__8584->SetBinError(2,0.0009358563);
   stretch_tot_2__8584->SetBinError(6,0.01050617);
   stretch_tot_2__8584->SetBinError(7,0.006404513);
   stretch_tot_2__8584->SetBinError(8,0.004600494);
   stretch_tot_2__8584->SetEntries(163276.6);
   stretch_tot_2__8584->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_2__8584->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_2__8584->SetLineColor(ci);
   stretch_tot_2__8584->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_2__8584->SetMarkerColor(ci);
   stretch_tot_2__8584->SetMarkerStyle(20);
   stretch_tot_2__8584->SetMarkerSize(0.8);
   stretch_tot_2__8584->GetXaxis()->SetRange(1,7);
   stretch_tot_2__8584->GetXaxis()->SetLabelFont(42);
   stretch_tot_2__8584->GetXaxis()->SetTitleFont(42);
   stretch_tot_2__8584->GetYaxis()->SetLabelFont(42);
   stretch_tot_2__8584->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_2__8584->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_2__8584->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_2__8584->GetYaxis()->SetTitleFont(42);
   stretch_tot_2__8584->GetZaxis()->SetLabelFont(42);
   stretch_tot_2__8584->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_2__8584->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_2__8584->GetZaxis()->SetTitleOffset(1);
   stretch_tot_2__8584->GetZaxis()->SetTitleFont(42);
   stretch_tot_2__8584->Draw("SAME E2");
   Double_t xAxis745[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_2__8585 = new TH1D("stretch_stat_2__8585","",8, xAxis745);
   stretch_stat_2__8585->SetBinContent(1,1.083999);
   stretch_stat_2__8585->SetBinContent(2,1.13785);
   stretch_stat_2__8585->SetBinContent(6,1.012592);
   stretch_stat_2__8585->SetBinContent(7,1.041583);
   stretch_stat_2__8585->SetBinContent(8,1.047964);
   stretch_stat_2__8585->SetBinError(1,0.0002174889);
   stretch_stat_2__8585->SetBinError(2,0.0003514773);
   stretch_stat_2__8585->SetBinError(6,0.0002995649);
   stretch_stat_2__8585->SetBinError(7,0.0004209443);
   stretch_stat_2__8585->SetBinError(8,0.0003151033);
   stretch_stat_2__8585->SetEntries(5.277772e+07);
   stretch_stat_2__8585->SetStats(0);
   stretch_stat_2__8585->SetLineWidth(2);
   stretch_stat_2__8585->SetMarkerStyle(20);
   stretch_stat_2__8585->SetMarkerSize(0.8);
   stretch_stat_2__8585->GetXaxis()->SetRange(1,7);
   stretch_stat_2__8585->GetXaxis()->SetLabelFont(42);
   stretch_stat_2__8585->GetXaxis()->SetTitleFont(42);
   stretch_stat_2__8585->GetYaxis()->SetLabelFont(42);
   stretch_stat_2__8585->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_2__8585->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_2__8585->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_2__8585->GetYaxis()->SetTitleFont(42);
   stretch_stat_2__8585->GetZaxis()->SetLabelFont(42);
   stretch_stat_2__8585->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_2__8585->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_2__8585->GetZaxis()->SetTitleOffset(1);
   stretch_stat_2__8585->GetZaxis()->SetTitleFont(42);
   stretch_stat_2__8585->Draw("SAME PZ");
   dw__1752->Modified();
   c1_n44->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1753 = new TPad("up", "up",0,0.5,1,1);
   up__1753->Draw();
   up__1753->cd();
   up__1753->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__1753->SetFillColor(0);
   up__1753->SetFillStyle(4000);
   up__1753->SetBorderMode(0);
   up__1753->SetBorderSize(0);
   up__1753->SetTickx(1);
   up__1753->SetTicky(1);
   up__1753->SetLeftMargin(0.120603);
   up__1753->SetRightMargin(0.08040201);
   up__1753->SetBottomMargin(0.01243523);
   up__1753->SetFrameBorderMode(0);
   up__1753->SetFrameBorderMode(0);
   Double_t xAxis746[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__8586 = new TH1D("chist__8586","",8, xAxis746);
   chist__8586->SetMinimum(-0.7);
   chist__8586->SetMaximum(1.1);
   chist__8586->SetDirectory(nullptr);
   chist__8586->SetStats(0);
   chist__8586->SetLineColor(0);
   chist__8586->SetLineWidth(0);
   chist__8586->SetMarkerColor(0);
   chist__8586->SetMarkerStyle(20);
   chist__8586->SetMarkerSize(0);
   chist__8586->GetXaxis()->SetRange(1,7);
   chist__8586->GetXaxis()->SetNdivisions(4000510);
   chist__8586->GetXaxis()->SetLabelFont(42);
   chist__8586->GetXaxis()->SetLabelSize(0);
   chist__8586->GetXaxis()->SetTitleSize(0.08);
   chist__8586->GetXaxis()->SetTickLength(0.04);
   chist__8586->GetXaxis()->SetTitleOffset(2.020933);
   chist__8586->GetXaxis()->SetTitleFont(42);
   chist__8586->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__8586->GetYaxis()->SetNdivisions(3000510);
   chist__8586->GetYaxis()->SetLabelFont(42);
   chist__8586->GetYaxis()->SetLabelSize(0.08);
   chist__8586->GetYaxis()->SetTitleSize(0.08);
   chist__8586->GetYaxis()->SetTickLength(0.04);
   chist__8586->GetYaxis()->SetTitleOffset(0.727387);
   chist__8586->GetYaxis()->SetTitleFont(42);
   chist__8586->GetZaxis()->SetLabelFont(42);
   chist__8586->GetZaxis()->SetLabelSize(0.05);
   chist__8586->GetZaxis()->SetTitleSize(0.05);
   chist__8586->GetZaxis()->SetTitleOffset(1);
   chist__8586->GetZaxis()->SetTitleFont(42);
   chist__8586->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_2","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_2","SP, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"R_{had1}");
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
      tex = new TLatex(0.160804,0.5098,"60.0 #leq p_{T}^{#gamma} [GeV] < 80.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis747[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_2__8587 = new TH1D("shift_tot_2__8587","",8, xAxis747);
   shift_tot_2__8587->SetBinContent(1,-0.07747606);
   shift_tot_2__8587->SetBinContent(2,-0.04965506);
   shift_tot_2__8587->SetBinContent(6,0.01196309);
   shift_tot_2__8587->SetBinContent(7,0.04026382);
   shift_tot_2__8587->SetBinContent(8,0.04053725);
   shift_tot_2__8587->SetBinError(1,0.0002446823);
   shift_tot_2__8587->SetBinError(2,0.001753201);
   shift_tot_2__8587->SetBinError(6,0.008069769);
   shift_tot_2__8587->SetBinError(7,0.008344748);
   shift_tot_2__8587->SetBinError(8,0.01412129);
   shift_tot_2__8587->SetEntries(3.50159);
   shift_tot_2__8587->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_2__8587->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_2__8587->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_2__8587->SetMarkerColor(ci);
   shift_tot_2__8587->SetMarkerStyle(20);
   shift_tot_2__8587->SetMarkerSize(0.8);
   shift_tot_2__8587->GetXaxis()->SetRange(1,7);
   shift_tot_2__8587->GetXaxis()->SetLabelFont(42);
   shift_tot_2__8587->GetXaxis()->SetTitleFont(42);
   shift_tot_2__8587->GetYaxis()->SetLabelFont(42);
   shift_tot_2__8587->GetYaxis()->SetLabelSize(0.05);
   shift_tot_2__8587->GetYaxis()->SetTitleSize(0.05);
   shift_tot_2__8587->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_2__8587->GetYaxis()->SetTitleFont(42);
   shift_tot_2__8587->GetZaxis()->SetLabelFont(42);
   shift_tot_2__8587->GetZaxis()->SetLabelSize(0.05);
   shift_tot_2__8587->GetZaxis()->SetTitleSize(0.05);
   shift_tot_2__8587->GetZaxis()->SetTitleOffset(1);
   shift_tot_2__8587->GetZaxis()->SetTitleFont(42);
   shift_tot_2__8587->Draw("SAME E2");
   Double_t xAxis748[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_2__8588 = new TH1D("shift_stat_2__8588","",8, xAxis748);
   shift_stat_2__8588->SetBinContent(1,-0.07747606);
   shift_stat_2__8588->SetBinContent(2,-0.04965506);
   shift_stat_2__8588->SetBinContent(6,0.01196309);
   shift_stat_2__8588->SetBinContent(7,0.04026382);
   shift_stat_2__8588->SetBinContent(8,0.04053725);
   shift_stat_2__8588->SetBinError(1,0.0001266214);
   shift_stat_2__8588->SetBinError(2,0.0001709178);
   shift_stat_2__8588->SetBinError(6,0.0003229073);
   shift_stat_2__8588->SetBinError(7,0.0003822125);
   shift_stat_2__8588->SetBinError(8,0.0002743611);
   shift_stat_2__8588->SetEntries(3184.595);
   shift_stat_2__8588->SetStats(0);
   shift_stat_2__8588->SetMarkerStyle(20);
   shift_stat_2__8588->SetMarkerSize(0.8);
   shift_stat_2__8588->GetXaxis()->SetRange(1,7);
   shift_stat_2__8588->GetXaxis()->SetLabelFont(42);
   shift_stat_2__8588->GetXaxis()->SetTitleFont(42);
   shift_stat_2__8588->GetYaxis()->SetLabelFont(42);
   shift_stat_2__8588->GetYaxis()->SetLabelSize(0.05);
   shift_stat_2__8588->GetYaxis()->SetTitleSize(0.05);
   shift_stat_2__8588->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_2__8588->GetYaxis()->SetTitleFont(42);
   shift_stat_2__8588->GetZaxis()->SetLabelFont(42);
   shift_stat_2__8588->GetZaxis()->SetLabelSize(0.05);
   shift_stat_2__8588->GetZaxis()->SetTitleSize(0.05);
   shift_stat_2__8588->GetZaxis()->SetTitleOffset(1);
   shift_stat_2__8588->GetZaxis()->SetTitleFont(42);
   shift_stat_2__8588->Draw("SAME PZ");
   Double_t xAxis749[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__8589 = new TH1D("chist_copy__8589","",8, xAxis749);
   chist_copy__8589->SetMinimum(-0.7);
   chist_copy__8589->SetMaximum(1.1);
   chist_copy__8589->SetDirectory(nullptr);
   chist_copy__8589->SetStats(0);
   chist_copy__8589->SetLineColor(0);
   chist_copy__8589->SetLineWidth(0);
   chist_copy__8589->SetMarkerColor(0);
   chist_copy__8589->SetMarkerStyle(20);
   chist_copy__8589->SetMarkerSize(0);
   chist_copy__8589->GetXaxis()->SetRange(1,7);
   chist_copy__8589->GetXaxis()->SetNdivisions(4000510);
   chist_copy__8589->GetXaxis()->SetLabelFont(42);
   chist_copy__8589->GetXaxis()->SetLabelSize(0);
   chist_copy__8589->GetXaxis()->SetTitleSize(0.08);
   chist_copy__8589->GetXaxis()->SetTickLength(0.04);
   chist_copy__8589->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__8589->GetXaxis()->SetTitleFont(42);
   chist_copy__8589->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__8589->GetYaxis()->SetNdivisions(3000510);
   chist_copy__8589->GetYaxis()->SetLabelFont(42);
   chist_copy__8589->GetYaxis()->SetLabelSize(0.08);
   chist_copy__8589->GetYaxis()->SetTitleSize(0.08);
   chist_copy__8589->GetYaxis()->SetTickLength(0.04);
   chist_copy__8589->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__8589->GetYaxis()->SetTitleFont(42);
   chist_copy__8589->GetZaxis()->SetLabelFont(42);
   chist_copy__8589->GetZaxis()->SetLabelSize(0.05);
   chist_copy__8589->GetZaxis()->SetTitleSize(0.05);
   chist_copy__8589->GetZaxis()->SetTitleOffset(1);
   chist_copy__8589->GetZaxis()->SetTitleFont(42);
   chist_copy__8589->Draw("sameaxis");
   up__1753->Modified();
   c1_n44->cd();
   c1_n44->Modified();
   c1_n44->SetSelected(c1_n44);
}
