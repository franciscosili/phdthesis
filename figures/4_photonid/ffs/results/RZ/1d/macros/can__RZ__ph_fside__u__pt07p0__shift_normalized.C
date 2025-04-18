#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__RZ__ph_fside__u__pt07p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n47/
//=========  (Thu Apr  4 07:36:48 2024) by ROOT version 6.30/02
   TCanvas *c1_n47 = new TCanvas("c1_n47", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n47->SetHighLightColor(2);
   c1_n47->Range(0,0,1,1);
   c1_n47->SetFillColor(0);
   c1_n47->SetBorderMode(0);
   c1_n47->SetBorderSize(2);
   c1_n47->SetTickx(1);
   c1_n47->SetTicky(1);
   c1_n47->SetLeftMargin(0.16);
   c1_n47->SetRightMargin(0.05);
   c1_n47->SetTopMargin(0.05);
   c1_n47->SetBottomMargin(0.16);
   c1_n47->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1976 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1976->Draw();
   dw__1976->cd();
   dw__1976->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1976->SetFillColor(0);
   dw__1976->SetFillStyle(4000);
   dw__1976->SetBorderMode(0);
   dw__1976->SetBorderSize(0);
   dw__1976->SetTickx(1);
   dw__1976->SetTicky(1);
   dw__1976->SetLeftMargin(0.120603);
   dw__1976->SetRightMargin(0.08040201);
   dw__1976->SetTopMargin(0);
   dw__1976->SetBottomMargin(0.2072539);
   dw__1976->SetFrameBorderMode(0);
   dw__1976->SetFrameBorderMode(0);
   Double_t xAxis741[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__9701 = new TH1D("chist_dw__9701","",8, xAxis741);
   chist_dw__9701->SetMinimum(0.2);
   chist_dw__9701->SetMaximum(3.2);
   chist_dw__9701->SetDirectory(nullptr);
   chist_dw__9701->SetStats(0);
   chist_dw__9701->SetLineColor(0);
   chist_dw__9701->SetLineWidth(0);
   chist_dw__9701->SetMarkerColor(0);
   chist_dw__9701->SetMarkerStyle(20);
   chist_dw__9701->SetMarkerSize(0);
   chist_dw__9701->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__9701->GetXaxis()->SetRange(1,4);
   chist_dw__9701->GetXaxis()->SetLabelFont(42);
   chist_dw__9701->GetXaxis()->SetLabelSize(0.08);
   chist_dw__9701->GetXaxis()->SetTitleSize(0.08);
   chist_dw__9701->GetXaxis()->SetTickLength(0.04);
   chist_dw__9701->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__9701->GetXaxis()->SetTitleFont(42);
   chist_dw__9701->GetYaxis()->SetTitle("Stretch");
   chist_dw__9701->GetYaxis()->CenterTitle(true);
   chist_dw__9701->GetYaxis()->SetNdivisions(405);
   chist_dw__9701->GetYaxis()->SetLabelFont(42);
   chist_dw__9701->GetYaxis()->SetLabelSize(0.08);
   chist_dw__9701->GetYaxis()->SetTitleSize(0.08);
   chist_dw__9701->GetYaxis()->SetTickLength(0.04);
   chist_dw__9701->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__9701->GetYaxis()->SetTitleFont(42);
   chist_dw__9701->GetZaxis()->SetLabelFont(42);
   chist_dw__9701->GetZaxis()->SetLabelSize(0.05);
   chist_dw__9701->GetZaxis()->SetTitleSize(0.05);
   chist_dw__9701->GetZaxis()->SetTitleOffset(1);
   chist_dw__9701->GetZaxis()->SetTitleFont(42);
   chist_dw__9701->Draw("");
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
   Double_t xAxis742[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_1__9702 = new TH1D("stretch_tot_1__9702","",8, xAxis742);
   stretch_tot_1__9702->SetBinContent(1,1.043164);
   stretch_tot_1__9702->SetBinContent(2,1.070438);
   stretch_tot_1__9702->SetBinContent(3,1.039152);
   stretch_tot_1__9702->SetBinContent(4,1.029646);
   stretch_tot_1__9702->SetBinContent(6,1.045303);
   stretch_tot_1__9702->SetBinContent(7,1.097515);
   stretch_tot_1__9702->SetBinContent(8,1.095826);
   stretch_tot_1__9702->SetBinError(1,0.01970507);
   stretch_tot_1__9702->SetBinError(2,0.03189787);
   stretch_tot_1__9702->SetBinError(3,0.01940893);
   stretch_tot_1__9702->SetBinError(4,0.02275751);
   stretch_tot_1__9702->SetBinError(6,0.02245447);
   stretch_tot_1__9702->SetBinError(7,0.03023369);
   stretch_tot_1__9702->SetBinError(8,0.04356452);
   stretch_tot_1__9702->SetEntries(9805.342);
   stretch_tot_1__9702->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_1__9702->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__9702->SetLineColor(ci);
   stretch_tot_1__9702->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__9702->SetMarkerColor(ci);
   stretch_tot_1__9702->SetMarkerStyle(20);
   stretch_tot_1__9702->SetMarkerSize(0.8);
   stretch_tot_1__9702->GetXaxis()->SetRange(1,4);
   stretch_tot_1__9702->GetXaxis()->SetLabelFont(42);
   stretch_tot_1__9702->GetXaxis()->SetTitleFont(42);
   stretch_tot_1__9702->GetYaxis()->SetLabelFont(42);
   stretch_tot_1__9702->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_1__9702->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_1__9702->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_1__9702->GetYaxis()->SetTitleFont(42);
   stretch_tot_1__9702->GetZaxis()->SetLabelFont(42);
   stretch_tot_1__9702->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_1__9702->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_1__9702->GetZaxis()->SetTitleOffset(1);
   stretch_tot_1__9702->GetZaxis()->SetTitleFont(42);
   stretch_tot_1__9702->Draw("SAME E2");
   Double_t xAxis743[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_1__9703 = new TH1D("stretch_stat_1__9703","",8, xAxis743);
   stretch_stat_1__9703->SetBinContent(1,1.043164);
   stretch_stat_1__9703->SetBinContent(2,1.070438);
   stretch_stat_1__9703->SetBinContent(3,1.039152);
   stretch_stat_1__9703->SetBinContent(4,1.029646);
   stretch_stat_1__9703->SetBinContent(6,1.045303);
   stretch_stat_1__9703->SetBinContent(7,1.097515);
   stretch_stat_1__9703->SetBinContent(8,1.095826);
   stretch_stat_1__9703->SetBinError(1,0.002761259);
   stretch_stat_1__9703->SetBinError(2,0.0108695);
   stretch_stat_1__9703->SetBinError(3,0.008359533);
   stretch_stat_1__9703->SetBinError(4,0.01227313);
   stretch_stat_1__9703->SetBinError(6,0.01143005);
   stretch_stat_1__9703->SetBinError(7,0.01588185);
   stretch_stat_1__9703->SetBinError(8,0.01113661);
   stretch_stat_1__9703->SetEntries(64548.58);
   stretch_stat_1__9703->SetStats(0);
   stretch_stat_1__9703->SetLineWidth(2);
   stretch_stat_1__9703->SetMarkerStyle(20);
   stretch_stat_1__9703->SetMarkerSize(0.8);
   stretch_stat_1__9703->GetXaxis()->SetRange(1,4);
   stretch_stat_1__9703->GetXaxis()->SetLabelFont(42);
   stretch_stat_1__9703->GetXaxis()->SetTitleFont(42);
   stretch_stat_1__9703->GetYaxis()->SetLabelFont(42);
   stretch_stat_1__9703->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_1__9703->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_1__9703->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_1__9703->GetYaxis()->SetTitleFont(42);
   stretch_stat_1__9703->GetZaxis()->SetLabelFont(42);
   stretch_stat_1__9703->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_1__9703->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_1__9703->GetZaxis()->SetTitleOffset(1);
   stretch_stat_1__9703->GetZaxis()->SetTitleFont(42);
   stretch_stat_1__9703->Draw("SAME PZ");
   dw__1976->Modified();
   c1_n47->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1977 = new TPad("up", "up",0,0.5,1,1);
   up__1977->Draw();
   up__1977->cd();
   up__1977->Range(-0.3577359,-0.6365768,2.608491,2.304807);
   up__1977->SetFillColor(0);
   up__1977->SetFillStyle(4000);
   up__1977->SetBorderMode(0);
   up__1977->SetBorderSize(0);
   up__1977->SetTickx(1);
   up__1977->SetTicky(1);
   up__1977->SetLeftMargin(0.120603);
   up__1977->SetRightMargin(0.08040201);
   up__1977->SetBottomMargin(0.01243523);
   up__1977->SetFrameBorderMode(0);
   up__1977->SetFrameBorderMode(0);
   Double_t xAxis744[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__9704 = new TH1D("chist__9704","",8, xAxis744);
   chist__9704->SetMinimum(-0.6);
   chist__9704->SetMaximum(2);
   chist__9704->SetDirectory(nullptr);
   chist__9704->SetStats(0);
   chist__9704->SetLineColor(0);
   chist__9704->SetLineWidth(0);
   chist__9704->SetMarkerColor(0);
   chist__9704->SetMarkerStyle(20);
   chist__9704->SetMarkerSize(0);
   chist__9704->GetXaxis()->SetRange(1,4);
   chist__9704->GetXaxis()->SetNdivisions(4000510);
   chist__9704->GetXaxis()->SetLabelFont(42);
   chist__9704->GetXaxis()->SetLabelSize(0);
   chist__9704->GetXaxis()->SetTitleSize(0.08);
   chist__9704->GetXaxis()->SetTickLength(0.04);
   chist__9704->GetXaxis()->SetTitleOffset(2.020933);
   chist__9704->GetXaxis()->SetTitleFont(42);
   chist__9704->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__9704->GetYaxis()->SetNdivisions(3000510);
   chist__9704->GetYaxis()->SetLabelFont(42);
   chist__9704->GetYaxis()->SetLabelSize(0.08);
   chist__9704->GetYaxis()->SetTitleSize(0.08);
   chist__9704->GetYaxis()->SetTickLength(0.04);
   chist__9704->GetYaxis()->SetTitleOffset(0.727387);
   chist__9704->GetYaxis()->SetTitleFont(42);
   chist__9704->GetZaxis()->SetLabelFont(42);
   chist__9704->GetZaxis()->SetLabelSize(0.05);
   chist__9704->GetZaxis()->SetTitleSize(0.05);
   chist__9704->GetZaxis()->SetTitleOffset(1);
   chist__9704->GetZaxis()->SetTitleFont(42);
   chist__9704->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_1","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_1","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"f_{side}");
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
   Double_t xAxis745[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_1__9705 = new TH1D("shift_tot_1__9705","",8, xAxis745);
   shift_tot_1__9705->SetBinContent(1,0.1318572);
   shift_tot_1__9705->SetBinContent(2,0.1576699);
   shift_tot_1__9705->SetBinContent(3,0.1593615);
   shift_tot_1__9705->SetBinContent(4,0.1827818);
   shift_tot_1__9705->SetBinContent(6,0.2312817);
   shift_tot_1__9705->SetBinContent(7,0.442374);
   shift_tot_1__9705->SetBinContent(8,0.3777666);
   shift_tot_1__9705->SetBinError(1,0.01559846);
   shift_tot_1__9705->SetBinError(2,0.01704478);
   shift_tot_1__9705->SetBinError(3,0.01759756);
   shift_tot_1__9705->SetBinError(4,0.02169461);
   shift_tot_1__9705->SetBinError(6,0.01435093);
   shift_tot_1__9705->SetBinError(7,0.01180334);
   shift_tot_1__9705->SetBinError(8,0.01715362);
   shift_tot_1__9705->SetEntries(1449.981);
   shift_tot_1__9705->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_1__9705->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__9705->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__9705->SetMarkerColor(ci);
   shift_tot_1__9705->SetMarkerStyle(20);
   shift_tot_1__9705->SetMarkerSize(0.8);
   shift_tot_1__9705->GetXaxis()->SetRange(1,4);
   shift_tot_1__9705->GetXaxis()->SetLabelFont(42);
   shift_tot_1__9705->GetXaxis()->SetTitleFont(42);
   shift_tot_1__9705->GetYaxis()->SetLabelFont(42);
   shift_tot_1__9705->GetYaxis()->SetLabelSize(0.05);
   shift_tot_1__9705->GetYaxis()->SetTitleSize(0.05);
   shift_tot_1__9705->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_1__9705->GetYaxis()->SetTitleFont(42);
   shift_tot_1__9705->GetZaxis()->SetLabelFont(42);
   shift_tot_1__9705->GetZaxis()->SetLabelSize(0.05);
   shift_tot_1__9705->GetZaxis()->SetTitleSize(0.05);
   shift_tot_1__9705->GetZaxis()->SetTitleOffset(1);
   shift_tot_1__9705->GetZaxis()->SetTitleFont(42);
   shift_tot_1__9705->Draw("SAME E2");
   Double_t xAxis746[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_1__9706 = new TH1D("shift_stat_1__9706","",8, xAxis746);
   shift_stat_1__9706->SetBinContent(1,0.1318572);
   shift_stat_1__9706->SetBinContent(2,0.1576699);
   shift_stat_1__9706->SetBinContent(3,0.1593615);
   shift_stat_1__9706->SetBinContent(4,0.1827818);
   shift_stat_1__9706->SetBinContent(6,0.2312817);
   shift_stat_1__9706->SetBinContent(7,0.442374);
   shift_stat_1__9706->SetBinContent(8,0.3777666);
   shift_stat_1__9706->SetBinError(1,0.003747635);
   shift_stat_1__9706->SetBinError(2,0.007218963);
   shift_stat_1__9706->SetBinError(3,0.006758992);
   shift_stat_1__9706->SetBinError(4,0.01020978);
   shift_stat_1__9706->SetBinError(6,0.008117108);
   shift_stat_1__9706->SetBinError(7,0.008679766);
   shift_stat_1__9706->SetBinError(8,0.005333189);
   shift_stat_1__9706->SetEntries(7343.611);
   shift_stat_1__9706->SetStats(0);
   shift_stat_1__9706->SetMarkerStyle(20);
   shift_stat_1__9706->SetMarkerSize(0.8);
   shift_stat_1__9706->GetXaxis()->SetRange(1,4);
   shift_stat_1__9706->GetXaxis()->SetLabelFont(42);
   shift_stat_1__9706->GetXaxis()->SetTitleFont(42);
   shift_stat_1__9706->GetYaxis()->SetLabelFont(42);
   shift_stat_1__9706->GetYaxis()->SetLabelSize(0.05);
   shift_stat_1__9706->GetYaxis()->SetTitleSize(0.05);
   shift_stat_1__9706->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_1__9706->GetYaxis()->SetTitleFont(42);
   shift_stat_1__9706->GetZaxis()->SetLabelFont(42);
   shift_stat_1__9706->GetZaxis()->SetLabelSize(0.05);
   shift_stat_1__9706->GetZaxis()->SetTitleSize(0.05);
   shift_stat_1__9706->GetZaxis()->SetTitleOffset(1);
   shift_stat_1__9706->GetZaxis()->SetTitleFont(42);
   shift_stat_1__9706->Draw("SAME PZ");
   Double_t xAxis747[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__9707 = new TH1D("chist_copy__9707","",8, xAxis747);
   chist_copy__9707->SetMinimum(-0.6);
   chist_copy__9707->SetMaximum(2);
   chist_copy__9707->SetDirectory(nullptr);
   chist_copy__9707->SetStats(0);
   chist_copy__9707->SetLineColor(0);
   chist_copy__9707->SetLineWidth(0);
   chist_copy__9707->SetMarkerColor(0);
   chist_copy__9707->SetMarkerStyle(20);
   chist_copy__9707->SetMarkerSize(0);
   chist_copy__9707->GetXaxis()->SetRange(1,4);
   chist_copy__9707->GetXaxis()->SetNdivisions(4000510);
   chist_copy__9707->GetXaxis()->SetLabelFont(42);
   chist_copy__9707->GetXaxis()->SetLabelSize(0);
   chist_copy__9707->GetXaxis()->SetTitleSize(0.08);
   chist_copy__9707->GetXaxis()->SetTickLength(0.04);
   chist_copy__9707->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__9707->GetXaxis()->SetTitleFont(42);
   chist_copy__9707->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__9707->GetYaxis()->SetNdivisions(3000510);
   chist_copy__9707->GetYaxis()->SetLabelFont(42);
   chist_copy__9707->GetYaxis()->SetLabelSize(0.08);
   chist_copy__9707->GetYaxis()->SetTitleSize(0.08);
   chist_copy__9707->GetYaxis()->SetTickLength(0.04);
   chist_copy__9707->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__9707->GetYaxis()->SetTitleFont(42);
   chist_copy__9707->GetZaxis()->SetLabelFont(42);
   chist_copy__9707->GetZaxis()->SetLabelSize(0.05);
   chist_copy__9707->GetZaxis()->SetTitleSize(0.05);
   chist_copy__9707->GetZaxis()->SetTitleOffset(1);
   chist_copy__9707->GetZaxis()->SetTitleFont(42);
   chist_copy__9707->Draw("sameaxis");
   up__1977->Modified();
   c1_n47->cd();
   c1_n47->Modified();
   c1_n47->SetSelected(c1_n47);
}
