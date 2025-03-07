#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__RZ__ph_rhad1__c__pt20p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n58/
//=========  (Thu Apr  4 07:36:54 2024) by ROOT version 6.30/02
   TCanvas *c1_n58 = new TCanvas("c1_n58", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n58->SetHighLightColor(2);
   c1_n58->Range(0,0,1,1);
   c1_n58->SetFillColor(0);
   c1_n58->SetBorderMode(0);
   c1_n58->SetBorderSize(2);
   c1_n58->SetTickx(1);
   c1_n58->SetTicky(1);
   c1_n58->SetLeftMargin(0.16);
   c1_n58->SetRightMargin(0.05);
   c1_n58->SetTopMargin(0.05);
   c1_n58->SetBottomMargin(0.16);
   c1_n58->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2304 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2304->Draw();
   dw__2304->cd();
   dw__2304->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2304->SetFillColor(0);
   dw__2304->SetFillStyle(4000);
   dw__2304->SetBorderMode(0);
   dw__2304->SetBorderSize(0);
   dw__2304->SetTickx(1);
   dw__2304->SetTicky(1);
   dw__2304->SetLeftMargin(0.120603);
   dw__2304->SetRightMargin(0.08040201);
   dw__2304->SetTopMargin(0);
   dw__2304->SetBottomMargin(0.2072539);
   dw__2304->SetFrameBorderMode(0);
   dw__2304->SetFrameBorderMode(0);
   Double_t xAxis2051[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__11011 = new TH1D("chist_dw__11011","",8, xAxis2051);
   chist_dw__11011->SetMinimum(0.2);
   chist_dw__11011->SetMaximum(3.2);
   chist_dw__11011->SetDirectory(nullptr);
   chist_dw__11011->SetStats(0);
   chist_dw__11011->SetLineColor(0);
   chist_dw__11011->SetLineWidth(0);
   chist_dw__11011->SetMarkerColor(0);
   chist_dw__11011->SetMarkerStyle(20);
   chist_dw__11011->SetMarkerSize(0);
   chist_dw__11011->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__11011->GetXaxis()->SetRange(1,8);
   chist_dw__11011->GetXaxis()->SetLabelFont(42);
   chist_dw__11011->GetXaxis()->SetLabelSize(0.08);
   chist_dw__11011->GetXaxis()->SetTitleSize(0.08);
   chist_dw__11011->GetXaxis()->SetTickLength(0.04);
   chist_dw__11011->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__11011->GetXaxis()->SetTitleFont(42);
   chist_dw__11011->GetYaxis()->SetTitle("Stretch");
   chist_dw__11011->GetYaxis()->CenterTitle(true);
   chist_dw__11011->GetYaxis()->SetNdivisions(405);
   chist_dw__11011->GetYaxis()->SetLabelFont(42);
   chist_dw__11011->GetYaxis()->SetLabelSize(0.08);
   chist_dw__11011->GetYaxis()->SetTitleSize(0.08);
   chist_dw__11011->GetYaxis()->SetTickLength(0.04);
   chist_dw__11011->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__11011->GetYaxis()->SetTitleFont(42);
   chist_dw__11011->GetZaxis()->SetLabelFont(42);
   chist_dw__11011->GetZaxis()->SetLabelSize(0.05);
   chist_dw__11011->GetZaxis()->SetTitleSize(0.05);
   chist_dw__11011->GetZaxis()->SetTitleOffset(1);
   chist_dw__11011->GetZaxis()->SetTitleFont(42);
   chist_dw__11011->Draw("");
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
   Double_t xAxis2052[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_3__11012 = new TH1D("stretch_tot_3__11012","",8, xAxis2052);
   stretch_tot_3__11012->SetBinContent(1,1.130323);
   stretch_tot_3__11012->SetBinContent(2,1.160213);
   stretch_tot_3__11012->SetBinContent(6,1.0267);
   stretch_tot_3__11012->SetBinContent(7,1.02648);
   stretch_tot_3__11012->SetBinContent(8,0.9819526);
   stretch_tot_3__11012->SetBinError(1,0.03130528);
   stretch_tot_3__11012->SetBinError(2,0.0586225);
   stretch_tot_3__11012->SetBinError(6,0.02552);
   stretch_tot_3__11012->SetBinError(7,0.04604597);
   stretch_tot_3__11012->SetBinError(8,0.04210557);
   stretch_tot_3__11012->SetEntries(3165.132);
   stretch_tot_3__11012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_3__11012->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_3__11012->SetLineColor(ci);
   stretch_tot_3__11012->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_3__11012->SetMarkerColor(ci);
   stretch_tot_3__11012->SetMarkerStyle(20);
   stretch_tot_3__11012->SetMarkerSize(0.8);
   stretch_tot_3__11012->GetXaxis()->SetRange(1,8);
   stretch_tot_3__11012->GetXaxis()->SetLabelFont(42);
   stretch_tot_3__11012->GetXaxis()->SetTitleFont(42);
   stretch_tot_3__11012->GetYaxis()->SetLabelFont(42);
   stretch_tot_3__11012->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_3__11012->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_3__11012->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_3__11012->GetYaxis()->SetTitleFont(42);
   stretch_tot_3__11012->GetZaxis()->SetLabelFont(42);
   stretch_tot_3__11012->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_3__11012->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_3__11012->GetZaxis()->SetTitleOffset(1);
   stretch_tot_3__11012->GetZaxis()->SetTitleFont(42);
   stretch_tot_3__11012->Draw("SAME E2");
   Double_t xAxis2053[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_3__11013 = new TH1D("stretch_stat_3__11013","",8, xAxis2053);
   stretch_stat_3__11013->SetBinContent(1,1.130323);
   stretch_stat_3__11013->SetBinContent(2,1.160213);
   stretch_stat_3__11013->SetBinContent(6,1.0267);
   stretch_stat_3__11013->SetBinContent(7,1.02648);
   stretch_stat_3__11013->SetBinContent(8,0.9819526);
   stretch_stat_3__11013->SetBinError(1,0.02831218);
   stretch_stat_3__11013->SetBinError(2,0.05306767);
   stretch_stat_3__11013->SetBinError(6,0.02167968);
   stretch_stat_3__11013->SetBinError(7,0.0309817);
   stretch_stat_3__11013->SetBinError(8,0.02673508);
   stretch_stat_3__11013->SetEntries(4922.04);
   stretch_stat_3__11013->SetStats(0);
   stretch_stat_3__11013->SetLineWidth(2);
   stretch_stat_3__11013->SetMarkerStyle(20);
   stretch_stat_3__11013->SetMarkerSize(0.8);
   stretch_stat_3__11013->GetXaxis()->SetRange(1,8);
   stretch_stat_3__11013->GetXaxis()->SetLabelFont(42);
   stretch_stat_3__11013->GetXaxis()->SetTitleFont(42);
   stretch_stat_3__11013->GetYaxis()->SetLabelFont(42);
   stretch_stat_3__11013->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_3__11013->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_3__11013->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_3__11013->GetYaxis()->SetTitleFont(42);
   stretch_stat_3__11013->GetZaxis()->SetLabelFont(42);
   stretch_stat_3__11013->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_3__11013->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_3__11013->GetZaxis()->SetTitleOffset(1);
   stretch_stat_3__11013->GetZaxis()->SetTitleFont(42);
   stretch_stat_3__11013->Draw("SAME PZ");
   dw__2304->Modified();
   c1_n58->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2305 = new TPad("up", "up",0,0.5,1,1);
   up__2305->Draw();
   up__2305->cd();
   up__2305->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__2305->SetFillColor(0);
   up__2305->SetFillStyle(4000);
   up__2305->SetBorderMode(0);
   up__2305->SetBorderSize(0);
   up__2305->SetTickx(1);
   up__2305->SetTicky(1);
   up__2305->SetLeftMargin(0.120603);
   up__2305->SetRightMargin(0.08040201);
   up__2305->SetBottomMargin(0.01243523);
   up__2305->SetFrameBorderMode(0);
   up__2305->SetFrameBorderMode(0);
   Double_t xAxis2054[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__11014 = new TH1D("chist__11014","",8, xAxis2054);
   chist__11014->SetMinimum(-0.7);
   chist__11014->SetMaximum(1.1);
   chist__11014->SetDirectory(nullptr);
   chist__11014->SetStats(0);
   chist__11014->SetLineColor(0);
   chist__11014->SetLineWidth(0);
   chist__11014->SetMarkerColor(0);
   chist__11014->SetMarkerStyle(20);
   chist__11014->SetMarkerSize(0);
   chist__11014->GetXaxis()->SetRange(1,8);
   chist__11014->GetXaxis()->SetNdivisions(4000510);
   chist__11014->GetXaxis()->SetLabelFont(42);
   chist__11014->GetXaxis()->SetLabelSize(0);
   chist__11014->GetXaxis()->SetTitleSize(0.08);
   chist__11014->GetXaxis()->SetTickLength(0.04);
   chist__11014->GetXaxis()->SetTitleOffset(2.020933);
   chist__11014->GetXaxis()->SetTitleFont(42);
   chist__11014->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__11014->GetYaxis()->SetNdivisions(3000510);
   chist__11014->GetYaxis()->SetLabelFont(42);
   chist__11014->GetYaxis()->SetLabelSize(0.08);
   chist__11014->GetYaxis()->SetTitleSize(0.08);
   chist__11014->GetYaxis()->SetTickLength(0.04);
   chist__11014->GetYaxis()->SetTitleOffset(0.727387);
   chist__11014->GetYaxis()->SetTitleFont(42);
   chist__11014->GetZaxis()->SetLabelFont(42);
   chist__11014->GetZaxis()->SetLabelSize(0.05);
   chist__11014->GetZaxis()->SetTitleSize(0.05);
   chist__11014->GetZaxis()->SetTitleOffset(1);
   chist__11014->GetZaxis()->SetTitleFont(42);
   chist__11014->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_3","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_3","RZ, Stat unc., TUNE26","PE");
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
      tex = new TLatex(0.160804,0.5714,"Converted #gamma");
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
   Double_t xAxis2055[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_3__11015 = new TH1D("shift_tot_3__11015","",8, xAxis2055);
   shift_tot_3__11015->SetBinContent(1,-0.05892662);
   shift_tot_3__11015->SetBinContent(2,-0.04750142);
   shift_tot_3__11015->SetBinContent(6,0.03233603);
   shift_tot_3__11015->SetBinContent(7,0.07006448);
   shift_tot_3__11015->SetBinContent(8,0.01686319);
   shift_tot_3__11015->SetBinError(1,0.0124979);
   shift_tot_3__11015->SetBinError(2,0.02362558);
   shift_tot_3__11015->SetBinError(6,0.02267362);
   shift_tot_3__11015->SetBinError(7,0.02866348);
   shift_tot_3__11015->SetBinError(8,0.02760828);
   shift_tot_3__11015->SetEntries(0.05858407);
   shift_tot_3__11015->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_3__11015->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_3__11015->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_3__11015->SetMarkerColor(ci);
   shift_tot_3__11015->SetMarkerStyle(20);
   shift_tot_3__11015->SetMarkerSize(0.8);
   shift_tot_3__11015->GetXaxis()->SetRange(1,8);
   shift_tot_3__11015->GetXaxis()->SetLabelFont(42);
   shift_tot_3__11015->GetXaxis()->SetTitleFont(42);
   shift_tot_3__11015->GetYaxis()->SetLabelFont(42);
   shift_tot_3__11015->GetYaxis()->SetLabelSize(0.05);
   shift_tot_3__11015->GetYaxis()->SetTitleSize(0.05);
   shift_tot_3__11015->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_3__11015->GetYaxis()->SetTitleFont(42);
   shift_tot_3__11015->GetZaxis()->SetLabelFont(42);
   shift_tot_3__11015->GetZaxis()->SetLabelSize(0.05);
   shift_tot_3__11015->GetZaxis()->SetTitleSize(0.05);
   shift_tot_3__11015->GetZaxis()->SetTitleOffset(1);
   shift_tot_3__11015->GetZaxis()->SetTitleFont(42);
   shift_tot_3__11015->Draw("SAME E2");
   Double_t xAxis2056[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_3__11016 = new TH1D("shift_stat_3__11016","",8, xAxis2056);
   shift_stat_3__11016->SetBinContent(1,-0.05892662);
   shift_stat_3__11016->SetBinContent(2,-0.04750142);
   shift_stat_3__11016->SetBinContent(6,0.03233603);
   shift_stat_3__11016->SetBinContent(7,0.07006448);
   shift_stat_3__11016->SetBinContent(8,0.01686319);
   shift_stat_3__11016->SetBinError(1,0.01067706);
   shift_stat_3__11016->SetBinError(2,0.0220169);
   shift_stat_3__11016->SetBinError(6,0.01962485);
   shift_stat_3__11016->SetBinError(7,0.02730634);
   shift_stat_3__11016->SetBinError(8,0.02500215);
   shift_stat_3__11016->SetEntries(0.06997058);
   shift_stat_3__11016->SetStats(0);
   shift_stat_3__11016->SetMarkerStyle(20);
   shift_stat_3__11016->SetMarkerSize(0.8);
   shift_stat_3__11016->GetXaxis()->SetRange(1,8);
   shift_stat_3__11016->GetXaxis()->SetLabelFont(42);
   shift_stat_3__11016->GetXaxis()->SetTitleFont(42);
   shift_stat_3__11016->GetYaxis()->SetLabelFont(42);
   shift_stat_3__11016->GetYaxis()->SetLabelSize(0.05);
   shift_stat_3__11016->GetYaxis()->SetTitleSize(0.05);
   shift_stat_3__11016->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_3__11016->GetYaxis()->SetTitleFont(42);
   shift_stat_3__11016->GetZaxis()->SetLabelFont(42);
   shift_stat_3__11016->GetZaxis()->SetLabelSize(0.05);
   shift_stat_3__11016->GetZaxis()->SetTitleSize(0.05);
   shift_stat_3__11016->GetZaxis()->SetTitleOffset(1);
   shift_stat_3__11016->GetZaxis()->SetTitleFont(42);
   shift_stat_3__11016->Draw("SAME PZ");
   Double_t xAxis2057[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__11017 = new TH1D("chist_copy__11017","",8, xAxis2057);
   chist_copy__11017->SetMinimum(-0.7);
   chist_copy__11017->SetMaximum(1.1);
   chist_copy__11017->SetDirectory(nullptr);
   chist_copy__11017->SetStats(0);
   chist_copy__11017->SetLineColor(0);
   chist_copy__11017->SetLineWidth(0);
   chist_copy__11017->SetMarkerColor(0);
   chist_copy__11017->SetMarkerStyle(20);
   chist_copy__11017->SetMarkerSize(0);
   chist_copy__11017->GetXaxis()->SetRange(1,8);
   chist_copy__11017->GetXaxis()->SetNdivisions(4000510);
   chist_copy__11017->GetXaxis()->SetLabelFont(42);
   chist_copy__11017->GetXaxis()->SetLabelSize(0);
   chist_copy__11017->GetXaxis()->SetTitleSize(0.08);
   chist_copy__11017->GetXaxis()->SetTickLength(0.04);
   chist_copy__11017->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__11017->GetXaxis()->SetTitleFont(42);
   chist_copy__11017->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__11017->GetYaxis()->SetNdivisions(3000510);
   chist_copy__11017->GetYaxis()->SetLabelFont(42);
   chist_copy__11017->GetYaxis()->SetLabelSize(0.08);
   chist_copy__11017->GetYaxis()->SetTitleSize(0.08);
   chist_copy__11017->GetYaxis()->SetTickLength(0.04);
   chist_copy__11017->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__11017->GetYaxis()->SetTitleFont(42);
   chist_copy__11017->GetZaxis()->SetLabelFont(42);
   chist_copy__11017->GetZaxis()->SetLabelSize(0.05);
   chist_copy__11017->GetZaxis()->SetTitleSize(0.05);
   chist_copy__11017->GetZaxis()->SetTitleOffset(1);
   chist_copy__11017->GetZaxis()->SetTitleFont(42);
   chist_copy__11017->Draw("sameaxis");
   up__2305->Modified();
   c1_n58->cd();
   c1_n58->Modified();
   c1_n58->SetSelected(c1_n58);
}
