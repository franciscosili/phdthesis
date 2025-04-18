#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_rhad1__u__pt0300p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n48/
//=========  (Thu Apr  4 17:59:19 2024) by ROOT version 6.30/02
   TCanvas *c1_n48 = new TCanvas("c1_n48", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n48->SetHighLightColor(2);
   c1_n48->Range(0,0,1,1);
   c1_n48->SetFillColor(0);
   c1_n48->SetBorderMode(0);
   c1_n48->SetBorderSize(2);
   c1_n48->SetTickx(1);
   c1_n48->SetTicky(1);
   c1_n48->SetLeftMargin(0.16);
   c1_n48->SetRightMargin(0.05);
   c1_n48->SetTopMargin(0.05);
   c1_n48->SetBottomMargin(0.16);
   c1_n48->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1760 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1760->Draw();
   dw__1760->cd();
   dw__1760->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1760->SetFillColor(0);
   dw__1760->SetFillStyle(4000);
   dw__1760->SetBorderMode(0);
   dw__1760->SetBorderSize(0);
   dw__1760->SetTickx(1);
   dw__1760->SetTicky(1);
   dw__1760->SetLeftMargin(0.120603);
   dw__1760->SetRightMargin(0.08040201);
   dw__1760->SetTopMargin(0);
   dw__1760->SetBottomMargin(0.2072539);
   dw__1760->SetFrameBorderMode(0);
   dw__1760->SetFrameBorderMode(0);
   Double_t xAxis771[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__8611 = new TH1D("chist_dw__8611","",8, xAxis771);
   chist_dw__8611->SetMinimum(0.2);
   chist_dw__8611->SetMaximum(3.2);
   chist_dw__8611->SetDirectory(nullptr);
   chist_dw__8611->SetStats(0);
   chist_dw__8611->SetLineColor(0);
   chist_dw__8611->SetLineWidth(0);
   chist_dw__8611->SetMarkerColor(0);
   chist_dw__8611->SetMarkerStyle(20);
   chist_dw__8611->SetMarkerSize(0);
   chist_dw__8611->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__8611->GetXaxis()->SetRange(1,7);
   chist_dw__8611->GetXaxis()->SetLabelFont(42);
   chist_dw__8611->GetXaxis()->SetLabelSize(0.08);
   chist_dw__8611->GetXaxis()->SetTitleSize(0.08);
   chist_dw__8611->GetXaxis()->SetTickLength(0.04);
   chist_dw__8611->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__8611->GetXaxis()->SetTitleFont(42);
   chist_dw__8611->GetYaxis()->SetTitle("Stretch");
   chist_dw__8611->GetYaxis()->CenterTitle(true);
   chist_dw__8611->GetYaxis()->SetNdivisions(405);
   chist_dw__8611->GetYaxis()->SetLabelFont(42);
   chist_dw__8611->GetYaxis()->SetLabelSize(0.08);
   chist_dw__8611->GetYaxis()->SetTitleSize(0.08);
   chist_dw__8611->GetYaxis()->SetTickLength(0.04);
   chist_dw__8611->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__8611->GetYaxis()->SetTitleFont(42);
   chist_dw__8611->GetZaxis()->SetLabelFont(42);
   chist_dw__8611->GetZaxis()->SetLabelSize(0.05);
   chist_dw__8611->GetZaxis()->SetTitleSize(0.05);
   chist_dw__8611->GetZaxis()->SetTitleOffset(1);
   chist_dw__8611->GetZaxis()->SetTitleFont(42);
   chist_dw__8611->Draw("");
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
   Double_t xAxis772[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_6__8612 = new TH1D("stretch_tot_6__8612","",8, xAxis772);
   stretch_tot_6__8612->SetBinContent(1,0.880394);
   stretch_tot_6__8612->SetBinContent(2,1.021501);
   stretch_tot_6__8612->SetBinContent(6,0.9294073);
   stretch_tot_6__8612->SetBinContent(7,1.026991);
   stretch_tot_6__8612->SetBinContent(8,1.006099);
   stretch_tot_6__8612->SetBinError(1,0.01960182);
   stretch_tot_6__8612->SetBinError(2,0.1598845);
   stretch_tot_6__8612->SetBinError(6,0.02248206);
   stretch_tot_6__8612->SetBinError(7,0.04006991);
   stretch_tot_6__8612->SetBinError(8,0.05135304);
   stretch_tot_6__8612->SetEntries(770.873);
   stretch_tot_6__8612->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_6__8612->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_6__8612->SetLineColor(ci);
   stretch_tot_6__8612->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_6__8612->SetMarkerColor(ci);
   stretch_tot_6__8612->SetMarkerStyle(20);
   stretch_tot_6__8612->SetMarkerSize(0.8);
   stretch_tot_6__8612->GetXaxis()->SetRange(1,7);
   stretch_tot_6__8612->GetXaxis()->SetLabelFont(42);
   stretch_tot_6__8612->GetXaxis()->SetTitleFont(42);
   stretch_tot_6__8612->GetYaxis()->SetLabelFont(42);
   stretch_tot_6__8612->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_6__8612->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_6__8612->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_6__8612->GetYaxis()->SetTitleFont(42);
   stretch_tot_6__8612->GetZaxis()->SetLabelFont(42);
   stretch_tot_6__8612->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_6__8612->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_6__8612->GetZaxis()->SetTitleOffset(1);
   stretch_tot_6__8612->GetZaxis()->SetTitleFont(42);
   stretch_tot_6__8612->Draw("SAME E2");
   Double_t xAxis773[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_6__8613 = new TH1D("stretch_stat_6__8613","",8, xAxis773);
   stretch_stat_6__8613->SetBinContent(1,0.880394);
   stretch_stat_6__8613->SetBinContent(2,1.021501);
   stretch_stat_6__8613->SetBinContent(6,0.9294073);
   stretch_stat_6__8613->SetBinContent(7,1.026991);
   stretch_stat_6__8613->SetBinContent(8,1.006099);
   stretch_stat_6__8613->SetBinError(1,0.0018287);
   stretch_stat_6__8613->SetBinError(2,0.001767218);
   stretch_stat_6__8613->SetBinError(6,0.006664186);
   stretch_stat_6__8613->SetBinError(7,0.004423459);
   stretch_stat_6__8613->SetBinError(8,0.00263282);
   stretch_stat_6__8613->SetEntries(305804.2);
   stretch_stat_6__8613->SetStats(0);
   stretch_stat_6__8613->SetLineWidth(2);
   stretch_stat_6__8613->SetMarkerStyle(20);
   stretch_stat_6__8613->SetMarkerSize(0.8);
   stretch_stat_6__8613->GetXaxis()->SetRange(1,7);
   stretch_stat_6__8613->GetXaxis()->SetLabelFont(42);
   stretch_stat_6__8613->GetXaxis()->SetTitleFont(42);
   stretch_stat_6__8613->GetYaxis()->SetLabelFont(42);
   stretch_stat_6__8613->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_6__8613->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_6__8613->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_6__8613->GetYaxis()->SetTitleFont(42);
   stretch_stat_6__8613->GetZaxis()->SetLabelFont(42);
   stretch_stat_6__8613->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_6__8613->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_6__8613->GetZaxis()->SetTitleOffset(1);
   stretch_stat_6__8613->GetZaxis()->SetTitleFont(42);
   stretch_stat_6__8613->Draw("SAME PZ");
   dw__1760->Modified();
   c1_n48->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1761 = new TPad("up", "up",0,0.5,1,1);
   up__1761->Draw();
   up__1761->cd();
   up__1761->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__1761->SetFillColor(0);
   up__1761->SetFillStyle(4000);
   up__1761->SetBorderMode(0);
   up__1761->SetBorderSize(0);
   up__1761->SetTickx(1);
   up__1761->SetTicky(1);
   up__1761->SetLeftMargin(0.120603);
   up__1761->SetRightMargin(0.08040201);
   up__1761->SetBottomMargin(0.01243523);
   up__1761->SetFrameBorderMode(0);
   up__1761->SetFrameBorderMode(0);
   Double_t xAxis774[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__8614 = new TH1D("chist__8614","",8, xAxis774);
   chist__8614->SetMinimum(-0.7);
   chist__8614->SetMaximum(1.1);
   chist__8614->SetDirectory(nullptr);
   chist__8614->SetStats(0);
   chist__8614->SetLineColor(0);
   chist__8614->SetLineWidth(0);
   chist__8614->SetMarkerColor(0);
   chist__8614->SetMarkerStyle(20);
   chist__8614->SetMarkerSize(0);
   chist__8614->GetXaxis()->SetRange(1,7);
   chist__8614->GetXaxis()->SetNdivisions(4000510);
   chist__8614->GetXaxis()->SetLabelFont(42);
   chist__8614->GetXaxis()->SetLabelSize(0);
   chist__8614->GetXaxis()->SetTitleSize(0.08);
   chist__8614->GetXaxis()->SetTickLength(0.04);
   chist__8614->GetXaxis()->SetTitleOffset(2.020933);
   chist__8614->GetXaxis()->SetTitleFont(42);
   chist__8614->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__8614->GetYaxis()->SetNdivisions(3000510);
   chist__8614->GetYaxis()->SetLabelFont(42);
   chist__8614->GetYaxis()->SetLabelSize(0.08);
   chist__8614->GetYaxis()->SetTitleSize(0.08);
   chist__8614->GetYaxis()->SetTickLength(0.04);
   chist__8614->GetYaxis()->SetTitleOffset(0.727387);
   chist__8614->GetYaxis()->SetTitleFont(42);
   chist__8614->GetZaxis()->SetLabelFont(42);
   chist__8614->GetZaxis()->SetLabelSize(0.05);
   chist__8614->GetZaxis()->SetTitleSize(0.05);
   chist__8614->GetZaxis()->SetTitleOffset(1);
   chist__8614->GetZaxis()->SetTitleFont(42);
   chist__8614->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_6","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_6","SP, Stat unc., TUNE26","PE");
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
      tex = new TLatex(0.160804,0.5098,"300.0 #leq p_{T}^{#gamma} [GeV] < 600.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis775[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_6__8615 = new TH1D("shift_tot_6__8615","",8, xAxis775);
   shift_tot_6__8615->SetBinContent(1,-0.1057996);
   shift_tot_6__8615->SetBinContent(2,-0.02492906);
   shift_tot_6__8615->SetBinContent(6,-0.03600644);
   shift_tot_6__8615->SetBinContent(7,0.009884061);
   shift_tot_6__8615->SetBinContent(8,0.01648637);
   shift_tot_6__8615->SetBinError(1,0.01223546);
   shift_tot_6__8615->SetBinError(2,0.00731955);
   shift_tot_6__8615->SetBinError(6,0.005271341);
   shift_tot_6__8615->SetBinError(7,0.01152128);
   shift_tot_6__8615->SetBinError(8,0.01159427);
   shift_tot_6__8615->SetEntries(39.54393);
   shift_tot_6__8615->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_6__8615->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_6__8615->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_6__8615->SetMarkerColor(ci);
   shift_tot_6__8615->SetMarkerStyle(20);
   shift_tot_6__8615->SetMarkerSize(0.8);
   shift_tot_6__8615->GetXaxis()->SetRange(1,7);
   shift_tot_6__8615->GetXaxis()->SetLabelFont(42);
   shift_tot_6__8615->GetXaxis()->SetTitleFont(42);
   shift_tot_6__8615->GetYaxis()->SetLabelFont(42);
   shift_tot_6__8615->GetYaxis()->SetLabelSize(0.05);
   shift_tot_6__8615->GetYaxis()->SetTitleSize(0.05);
   shift_tot_6__8615->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_6__8615->GetYaxis()->SetTitleFont(42);
   shift_tot_6__8615->GetZaxis()->SetLabelFont(42);
   shift_tot_6__8615->GetZaxis()->SetLabelSize(0.05);
   shift_tot_6__8615->GetZaxis()->SetTitleSize(0.05);
   shift_tot_6__8615->GetZaxis()->SetTitleOffset(1);
   shift_tot_6__8615->GetZaxis()->SetTitleFont(42);
   shift_tot_6__8615->Draw("SAME E2");
   Double_t xAxis776[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_6__8616 = new TH1D("shift_stat_6__8616","",8, xAxis776);
   shift_stat_6__8616->SetBinContent(1,-0.1057996);
   shift_stat_6__8616->SetBinContent(2,-0.02492906);
   shift_stat_6__8616->SetBinContent(6,-0.03600644);
   shift_stat_6__8616->SetBinContent(7,0.009884061);
   shift_stat_6__8616->SetBinContent(8,0.01648637);
   shift_stat_6__8616->SetBinError(1,0.001859209);
   shift_stat_6__8616->SetBinError(2,0.001988471);
   shift_stat_6__8616->SetBinError(6,0.003519783);
   shift_stat_6__8616->SetBinError(7,0.004973572);
   shift_stat_6__8616->SetBinError(8,0.004005429);
   shift_stat_6__8616->SetEntries(325.2298);
   shift_stat_6__8616->SetStats(0);
   shift_stat_6__8616->SetMarkerStyle(20);
   shift_stat_6__8616->SetMarkerSize(0.8);
   shift_stat_6__8616->GetXaxis()->SetRange(1,7);
   shift_stat_6__8616->GetXaxis()->SetLabelFont(42);
   shift_stat_6__8616->GetXaxis()->SetTitleFont(42);
   shift_stat_6__8616->GetYaxis()->SetLabelFont(42);
   shift_stat_6__8616->GetYaxis()->SetLabelSize(0.05);
   shift_stat_6__8616->GetYaxis()->SetTitleSize(0.05);
   shift_stat_6__8616->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_6__8616->GetYaxis()->SetTitleFont(42);
   shift_stat_6__8616->GetZaxis()->SetLabelFont(42);
   shift_stat_6__8616->GetZaxis()->SetLabelSize(0.05);
   shift_stat_6__8616->GetZaxis()->SetTitleSize(0.05);
   shift_stat_6__8616->GetZaxis()->SetTitleOffset(1);
   shift_stat_6__8616->GetZaxis()->SetTitleFont(42);
   shift_stat_6__8616->Draw("SAME PZ");
   Double_t xAxis777[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__8617 = new TH1D("chist_copy__8617","",8, xAxis777);
   chist_copy__8617->SetMinimum(-0.7);
   chist_copy__8617->SetMaximum(1.1);
   chist_copy__8617->SetDirectory(nullptr);
   chist_copy__8617->SetStats(0);
   chist_copy__8617->SetLineColor(0);
   chist_copy__8617->SetLineWidth(0);
   chist_copy__8617->SetMarkerColor(0);
   chist_copy__8617->SetMarkerStyle(20);
   chist_copy__8617->SetMarkerSize(0);
   chist_copy__8617->GetXaxis()->SetRange(1,7);
   chist_copy__8617->GetXaxis()->SetNdivisions(4000510);
   chist_copy__8617->GetXaxis()->SetLabelFont(42);
   chist_copy__8617->GetXaxis()->SetLabelSize(0);
   chist_copy__8617->GetXaxis()->SetTitleSize(0.08);
   chist_copy__8617->GetXaxis()->SetTickLength(0.04);
   chist_copy__8617->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__8617->GetXaxis()->SetTitleFont(42);
   chist_copy__8617->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__8617->GetYaxis()->SetNdivisions(3000510);
   chist_copy__8617->GetYaxis()->SetLabelFont(42);
   chist_copy__8617->GetYaxis()->SetLabelSize(0.08);
   chist_copy__8617->GetYaxis()->SetTitleSize(0.08);
   chist_copy__8617->GetYaxis()->SetTickLength(0.04);
   chist_copy__8617->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__8617->GetYaxis()->SetTitleFont(42);
   chist_copy__8617->GetZaxis()->SetLabelFont(42);
   chist_copy__8617->GetZaxis()->SetLabelSize(0.05);
   chist_copy__8617->GetZaxis()->SetTitleSize(0.05);
   chist_copy__8617->GetZaxis()->SetTitleOffset(1);
   chist_copy__8617->GetZaxis()->SetTitleFont(42);
   chist_copy__8617->Draw("sameaxis");
   up__1761->Modified();
   c1_n48->cd();
   c1_n48->Modified();
   c1_n48->SetSelected(c1_n48);
}
