#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_w1__u__pt0050p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n14/
//=========  (Thu Apr  4 17:59:21 2024) by ROOT version 6.30/02
   TCanvas *c1_n14 = new TCanvas("c1_n14", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n14->SetHighLightColor(2);
   c1_n14->Range(0,0,1,1);
   c1_n14->SetFillColor(0);
   c1_n14->SetBorderMode(0);
   c1_n14->SetBorderSize(2);
   c1_n14->SetTickx(1);
   c1_n14->SetTicky(1);
   c1_n14->SetLeftMargin(0.16);
   c1_n14->SetRightMargin(0.05);
   c1_n14->SetTopMargin(0.05);
   c1_n14->SetBottomMargin(0.16);
   c1_n14->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1862 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1862->Draw();
   dw__1862->cd();
   dw__1862->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1862->SetFillColor(0);
   dw__1862->SetFillStyle(4000);
   dw__1862->SetBorderMode(0);
   dw__1862->SetBorderSize(0);
   dw__1862->SetTickx(1);
   dw__1862->SetTicky(1);
   dw__1862->SetLeftMargin(0.120603);
   dw__1862->SetRightMargin(0.08040201);
   dw__1862->SetTopMargin(0);
   dw__1862->SetBottomMargin(0.2072539);
   dw__1862->SetFrameBorderMode(0);
   dw__1862->SetFrameBorderMode(0);
   Double_t xAxis1184[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__9024 = new TH1D("chist_dw__9024","",8, xAxis1184);
   chist_dw__9024->SetMinimum(0.2);
   chist_dw__9024->SetMaximum(3.2);
   chist_dw__9024->SetDirectory(nullptr);
   chist_dw__9024->SetStats(0);
   chist_dw__9024->SetLineColor(0);
   chist_dw__9024->SetLineWidth(0);
   chist_dw__9024->SetMarkerColor(0);
   chist_dw__9024->SetMarkerStyle(20);
   chist_dw__9024->SetMarkerSize(0);
   chist_dw__9024->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__9024->GetXaxis()->SetRange(1,7);
   chist_dw__9024->GetXaxis()->SetLabelFont(42);
   chist_dw__9024->GetXaxis()->SetLabelSize(0.08);
   chist_dw__9024->GetXaxis()->SetTitleSize(0.08);
   chist_dw__9024->GetXaxis()->SetTickLength(0.04);
   chist_dw__9024->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__9024->GetXaxis()->SetTitleFont(42);
   chist_dw__9024->GetYaxis()->SetTitle("Stretch");
   chist_dw__9024->GetYaxis()->CenterTitle(true);
   chist_dw__9024->GetYaxis()->SetNdivisions(405);
   chist_dw__9024->GetYaxis()->SetLabelFont(42);
   chist_dw__9024->GetYaxis()->SetLabelSize(0.08);
   chist_dw__9024->GetYaxis()->SetTitleSize(0.08);
   chist_dw__9024->GetYaxis()->SetTickLength(0.04);
   chist_dw__9024->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__9024->GetYaxis()->SetTitleFont(42);
   chist_dw__9024->GetZaxis()->SetLabelFont(42);
   chist_dw__9024->GetZaxis()->SetLabelSize(0.05);
   chist_dw__9024->GetZaxis()->SetTitleSize(0.05);
   chist_dw__9024->GetZaxis()->SetTitleOffset(1);
   chist_dw__9024->GetZaxis()->SetTitleFont(42);
   chist_dw__9024->Draw("");
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
   Double_t xAxis1185[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_1__9025 = new TH1D("stretch_tot_1__9025","",8, xAxis1185);
   stretch_tot_1__9025->SetBinContent(1,1.02992);
   stretch_tot_1__9025->SetBinContent(2,1.058879);
   stretch_tot_1__9025->SetBinContent(3,1.023601);
   stretch_tot_1__9025->SetBinContent(4,0.9794744);
   stretch_tot_1__9025->SetBinContent(6,0.887733);
   stretch_tot_1__9025->SetBinContent(7,1.101755);
   stretch_tot_1__9025->SetBinContent(8,1.107495);
   stretch_tot_1__9025->SetBinError(1,0.004240124);
   stretch_tot_1__9025->SetBinError(2,0.003643395);
   stretch_tot_1__9025->SetBinError(3,0.007702851);
   stretch_tot_1__9025->SetBinError(4,0.003798499);
   stretch_tot_1__9025->SetBinError(6,0.003262164);
   stretch_tot_1__9025->SetBinError(7,0.007750832);
   stretch_tot_1__9025->SetBinError(8,0.01613589);
   stretch_tot_1__9025->SetEntries(118504.2);
   stretch_tot_1__9025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_1__9025->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__9025->SetLineColor(ci);
   stretch_tot_1__9025->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__9025->SetMarkerColor(ci);
   stretch_tot_1__9025->SetMarkerStyle(20);
   stretch_tot_1__9025->SetMarkerSize(0.8);
   stretch_tot_1__9025->GetXaxis()->SetRange(1,7);
   stretch_tot_1__9025->GetXaxis()->SetLabelFont(42);
   stretch_tot_1__9025->GetXaxis()->SetTitleFont(42);
   stretch_tot_1__9025->GetYaxis()->SetLabelFont(42);
   stretch_tot_1__9025->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_1__9025->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_1__9025->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_1__9025->GetYaxis()->SetTitleFont(42);
   stretch_tot_1__9025->GetZaxis()->SetLabelFont(42);
   stretch_tot_1__9025->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_1__9025->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_1__9025->GetZaxis()->SetTitleOffset(1);
   stretch_tot_1__9025->GetZaxis()->SetTitleFont(42);
   stretch_tot_1__9025->Draw("SAME E2");
   Double_t xAxis1186[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_1__9026 = new TH1D("stretch_stat_1__9026","",8, xAxis1186);
   stretch_stat_1__9026->SetBinContent(1,1.02992);
   stretch_stat_1__9026->SetBinContent(2,1.058879);
   stretch_stat_1__9026->SetBinContent(3,1.023601);
   stretch_stat_1__9026->SetBinContent(4,0.9794744);
   stretch_stat_1__9026->SetBinContent(6,0.887733);
   stretch_stat_1__9026->SetBinContent(7,1.101755);
   stretch_stat_1__9026->SetBinContent(8,1.107495);
   stretch_stat_1__9026->SetBinError(1,0.0001324134);
   stretch_stat_1__9026->SetBinError(2,0.0002276681);
   stretch_stat_1__9026->SetBinError(3,0.000183992);
   stretch_stat_1__9026->SetBinError(4,0.0002735889);
   stretch_stat_1__9026->SetBinError(6,0.0002374142);
   stretch_stat_1__9026->SetBinError(7,0.0003315706);
   stretch_stat_1__9026->SetBinError(8,0.0002203013);
   stretch_stat_1__9026->SetEntries(1.315315e+08);
   stretch_stat_1__9026->SetStats(0);
   stretch_stat_1__9026->SetLineWidth(2);
   stretch_stat_1__9026->SetMarkerStyle(20);
   stretch_stat_1__9026->SetMarkerSize(0.8);
   stretch_stat_1__9026->GetXaxis()->SetRange(1,7);
   stretch_stat_1__9026->GetXaxis()->SetLabelFont(42);
   stretch_stat_1__9026->GetXaxis()->SetTitleFont(42);
   stretch_stat_1__9026->GetYaxis()->SetLabelFont(42);
   stretch_stat_1__9026->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_1__9026->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_1__9026->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_1__9026->GetYaxis()->SetTitleFont(42);
   stretch_stat_1__9026->GetZaxis()->SetLabelFont(42);
   stretch_stat_1__9026->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_1__9026->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_1__9026->GetZaxis()->SetTitleOffset(1);
   stretch_stat_1__9026->GetZaxis()->SetTitleFont(42);
   stretch_stat_1__9026->Draw("SAME PZ");
   dw__1862->Modified();
   c1_n14->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1863 = new TPad("up", "up",0,0.5,1,1);
   up__1863->Draw();
   up__1863->cd();
   up__1863->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__1863->SetFillColor(0);
   up__1863->SetFillStyle(4000);
   up__1863->SetBorderMode(0);
   up__1863->SetBorderSize(0);
   up__1863->SetTickx(1);
   up__1863->SetTicky(1);
   up__1863->SetLeftMargin(0.120603);
   up__1863->SetRightMargin(0.08040201);
   up__1863->SetBottomMargin(0.01243523);
   up__1863->SetFrameBorderMode(0);
   up__1863->SetFrameBorderMode(0);
   Double_t xAxis1187[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__9027 = new TH1D("chist__9027","",8, xAxis1187);
   chist__9027->SetMinimum(-0.9);
   chist__9027->SetMaximum(2);
   chist__9027->SetDirectory(nullptr);
   chist__9027->SetStats(0);
   chist__9027->SetLineColor(0);
   chist__9027->SetLineWidth(0);
   chist__9027->SetMarkerColor(0);
   chist__9027->SetMarkerStyle(20);
   chist__9027->SetMarkerSize(0);
   chist__9027->GetXaxis()->SetRange(1,7);
   chist__9027->GetXaxis()->SetNdivisions(4000510);
   chist__9027->GetXaxis()->SetLabelFont(42);
   chist__9027->GetXaxis()->SetLabelSize(0);
   chist__9027->GetXaxis()->SetTitleSize(0.08);
   chist__9027->GetXaxis()->SetTickLength(0.04);
   chist__9027->GetXaxis()->SetTitleOffset(2.020933);
   chist__9027->GetXaxis()->SetTitleFont(42);
   chist__9027->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__9027->GetYaxis()->SetNdivisions(3000510);
   chist__9027->GetYaxis()->SetLabelFont(42);
   chist__9027->GetYaxis()->SetLabelSize(0.08);
   chist__9027->GetYaxis()->SetTitleSize(0.08);
   chist__9027->GetYaxis()->SetTickLength(0.04);
   chist__9027->GetYaxis()->SetTitleOffset(0.727387);
   chist__9027->GetYaxis()->SetTitleFont(42);
   chist__9027->GetZaxis()->SetLabelFont(42);
   chist__9027->GetZaxis()->SetLabelSize(0.05);
   chist__9027->GetZaxis()->SetTitleSize(0.05);
   chist__9027->GetZaxis()->SetTitleOffset(1);
   chist__9027->GetZaxis()->SetTitleFont(42);
   chist__9027->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_1","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_1","SP, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
      tex = new TLatex(0.160804,0.5098,"50.0 #leq p_{T}^{#gamma} [GeV] < 60.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1188[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_1__9028 = new TH1D("shift_tot_1__9028","",8, xAxis1188);
   shift_tot_1__9028->SetBinContent(1,0.3102175);
   shift_tot_1__9028->SetBinContent(2,0.3918145);
   shift_tot_1__9028->SetBinContent(3,0.4135035);
   shift_tot_1__9028->SetBinContent(4,0.4936376);
   shift_tot_1__9028->SetBinContent(6,0.6231932);
   shift_tot_1__9028->SetBinContent(7,0.9209704);
   shift_tot_1__9028->SetBinContent(8,1.163034);
   shift_tot_1__9028->SetBinError(1,0.01754139);
   shift_tot_1__9028->SetBinError(2,0.01974885);
   shift_tot_1__9028->SetBinError(3,0.02259069);
   shift_tot_1__9028->SetBinError(4,0.02156501);
   shift_tot_1__9028->SetBinError(6,0.01363004);
   shift_tot_1__9028->SetBinError(7,0.01612252);
   shift_tot_1__9028->SetBinError(8,0.01696707);
   shift_tot_1__9028->SetEntries(7741.326);
   shift_tot_1__9028->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_1__9028->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__9028->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__9028->SetMarkerColor(ci);
   shift_tot_1__9028->SetMarkerStyle(20);
   shift_tot_1__9028->SetMarkerSize(0.8);
   shift_tot_1__9028->GetXaxis()->SetRange(1,7);
   shift_tot_1__9028->GetXaxis()->SetLabelFont(42);
   shift_tot_1__9028->GetXaxis()->SetTitleFont(42);
   shift_tot_1__9028->GetYaxis()->SetLabelFont(42);
   shift_tot_1__9028->GetYaxis()->SetLabelSize(0.05);
   shift_tot_1__9028->GetYaxis()->SetTitleSize(0.05);
   shift_tot_1__9028->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_1__9028->GetYaxis()->SetTitleFont(42);
   shift_tot_1__9028->GetZaxis()->SetLabelFont(42);
   shift_tot_1__9028->GetZaxis()->SetLabelSize(0.05);
   shift_tot_1__9028->GetZaxis()->SetTitleSize(0.05);
   shift_tot_1__9028->GetZaxis()->SetTitleOffset(1);
   shift_tot_1__9028->GetZaxis()->SetTitleFont(42);
   shift_tot_1__9028->Draw("SAME E2");
   Double_t xAxis1189[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_1__9029 = new TH1D("shift_stat_1__9029","",8, xAxis1189);
   shift_stat_1__9029->SetBinContent(1,0.3102175);
   shift_stat_1__9029->SetBinContent(2,0.3918145);
   shift_stat_1__9029->SetBinContent(3,0.4135035);
   shift_stat_1__9029->SetBinContent(4,0.4936376);
   shift_stat_1__9029->SetBinContent(6,0.6231932);
   shift_stat_1__9029->SetBinContent(7,0.9209704);
   shift_stat_1__9029->SetBinContent(8,1.163034);
   shift_stat_1__9029->SetBinError(1,0.0001555463);
   shift_stat_1__9029->SetBinError(2,0.0002900991);
   shift_stat_1__9029->SetBinError(3,0.0002317366);
   shift_stat_1__9029->SetBinError(4,0.0003139941);
   shift_stat_1__9029->SetBinError(6,0.0003353512);
   shift_stat_1__9029->SetBinError(7,0.0003649178);
   shift_stat_1__9029->SetBinError(8,0.0002499877);
   shift_stat_1__9029->SetEntries(3.275702e+07);
   shift_stat_1__9029->SetStats(0);
   shift_stat_1__9029->SetMarkerStyle(20);
   shift_stat_1__9029->SetMarkerSize(0.8);
   shift_stat_1__9029->GetXaxis()->SetRange(1,7);
   shift_stat_1__9029->GetXaxis()->SetLabelFont(42);
   shift_stat_1__9029->GetXaxis()->SetTitleFont(42);
   shift_stat_1__9029->GetYaxis()->SetLabelFont(42);
   shift_stat_1__9029->GetYaxis()->SetLabelSize(0.05);
   shift_stat_1__9029->GetYaxis()->SetTitleSize(0.05);
   shift_stat_1__9029->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_1__9029->GetYaxis()->SetTitleFont(42);
   shift_stat_1__9029->GetZaxis()->SetLabelFont(42);
   shift_stat_1__9029->GetZaxis()->SetLabelSize(0.05);
   shift_stat_1__9029->GetZaxis()->SetTitleSize(0.05);
   shift_stat_1__9029->GetZaxis()->SetTitleOffset(1);
   shift_stat_1__9029->GetZaxis()->SetTitleFont(42);
   shift_stat_1__9029->Draw("SAME PZ");
   Double_t xAxis1190[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__9030 = new TH1D("chist_copy__9030","",8, xAxis1190);
   chist_copy__9030->SetMinimum(-0.9);
   chist_copy__9030->SetMaximum(2);
   chist_copy__9030->SetDirectory(nullptr);
   chist_copy__9030->SetStats(0);
   chist_copy__9030->SetLineColor(0);
   chist_copy__9030->SetLineWidth(0);
   chist_copy__9030->SetMarkerColor(0);
   chist_copy__9030->SetMarkerStyle(20);
   chist_copy__9030->SetMarkerSize(0);
   chist_copy__9030->GetXaxis()->SetRange(1,7);
   chist_copy__9030->GetXaxis()->SetNdivisions(4000510);
   chist_copy__9030->GetXaxis()->SetLabelFont(42);
   chist_copy__9030->GetXaxis()->SetLabelSize(0);
   chist_copy__9030->GetXaxis()->SetTitleSize(0.08);
   chist_copy__9030->GetXaxis()->SetTickLength(0.04);
   chist_copy__9030->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__9030->GetXaxis()->SetTitleFont(42);
   chist_copy__9030->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__9030->GetYaxis()->SetNdivisions(3000510);
   chist_copy__9030->GetYaxis()->SetLabelFont(42);
   chist_copy__9030->GetYaxis()->SetLabelSize(0.08);
   chist_copy__9030->GetYaxis()->SetTitleSize(0.08);
   chist_copy__9030->GetYaxis()->SetTickLength(0.04);
   chist_copy__9030->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__9030->GetYaxis()->SetTitleFont(42);
   chist_copy__9030->GetZaxis()->SetLabelFont(42);
   chist_copy__9030->GetZaxis()->SetLabelSize(0.05);
   chist_copy__9030->GetZaxis()->SetTitleSize(0.05);
   chist_copy__9030->GetZaxis()->SetTitleOffset(1);
   chist_copy__9030->GetZaxis()->SetTitleFont(42);
   chist_copy__9030->Draw("sameaxis");
   up__1863->Modified();
   c1_n14->cd();
   c1_n14->Modified();
   c1_n14->SetSelected(c1_n14);
}
