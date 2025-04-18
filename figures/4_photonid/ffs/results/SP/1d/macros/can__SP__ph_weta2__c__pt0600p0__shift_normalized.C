#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_weta2__c__pt0600p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n48/
//=========  (Thu Apr  4 17:59:30 2024) by ROOT version 6.30/02
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
   TPad *dw__2406 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2406->Draw();
   dw__2406->cd();
   dw__2406->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2406->SetFillColor(0);
   dw__2406->SetFillStyle(4000);
   dw__2406->SetBorderMode(0);
   dw__2406->SetBorderSize(0);
   dw__2406->SetTickx(1);
   dw__2406->SetTicky(1);
   dw__2406->SetLeftMargin(0.120603);
   dw__2406->SetRightMargin(0.08040201);
   dw__2406->SetTopMargin(0);
   dw__2406->SetBottomMargin(0.2072539);
   dw__2406->SetFrameBorderMode(0);
   dw__2406->SetFrameBorderMode(0);
   Double_t xAxis3354[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__11194 = new TH1D("chist_dw__11194","",8, xAxis3354);
   chist_dw__11194->SetMinimum(0.2);
   chist_dw__11194->SetMaximum(3.2);
   chist_dw__11194->SetDirectory(nullptr);
   chist_dw__11194->SetStats(0);
   chist_dw__11194->SetLineColor(0);
   chist_dw__11194->SetLineWidth(0);
   chist_dw__11194->SetMarkerColor(0);
   chist_dw__11194->SetMarkerStyle(20);
   chist_dw__11194->SetMarkerSize(0);
   chist_dw__11194->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__11194->GetXaxis()->SetRange(1,7);
   chist_dw__11194->GetXaxis()->SetLabelFont(42);
   chist_dw__11194->GetXaxis()->SetLabelSize(0.08);
   chist_dw__11194->GetXaxis()->SetTitleSize(0.08);
   chist_dw__11194->GetXaxis()->SetTickLength(0.04);
   chist_dw__11194->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__11194->GetXaxis()->SetTitleFont(42);
   chist_dw__11194->GetYaxis()->SetTitle("Stretch");
   chist_dw__11194->GetYaxis()->CenterTitle(true);
   chist_dw__11194->GetYaxis()->SetNdivisions(405);
   chist_dw__11194->GetYaxis()->SetLabelFont(42);
   chist_dw__11194->GetYaxis()->SetLabelSize(0.08);
   chist_dw__11194->GetYaxis()->SetTitleSize(0.08);
   chist_dw__11194->GetYaxis()->SetTickLength(0.04);
   chist_dw__11194->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__11194->GetYaxis()->SetTitleFont(42);
   chist_dw__11194->GetZaxis()->SetLabelFont(42);
   chist_dw__11194->GetZaxis()->SetLabelSize(0.05);
   chist_dw__11194->GetZaxis()->SetTitleSize(0.05);
   chist_dw__11194->GetZaxis()->SetTitleOffset(1);
   chist_dw__11194->GetZaxis()->SetTitleFont(42);
   chist_dw__11194->Draw("");
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
   Double_t xAxis3355[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_7__11195 = new TH1D("stretch_tot_7__11195","",8, xAxis3355);
   stretch_tot_7__11195->SetBinContent(1,1.36905);
   stretch_tot_7__11195->SetBinContent(2,1.552038);
   stretch_tot_7__11195->SetBinContent(3,1.500566);
   stretch_tot_7__11195->SetBinContent(4,1.672514);
   stretch_tot_7__11195->SetBinContent(6,1.314517);
   stretch_tot_7__11195->SetBinContent(7,1.383242);
   stretch_tot_7__11195->SetBinContent(8,1.388193);
   stretch_tot_7__11195->SetBinError(1,0.1870832);
   stretch_tot_7__11195->SetBinError(2,0.3116212);
   stretch_tot_7__11195->SetBinError(3,0.355274);
   stretch_tot_7__11195->SetBinError(4,0.435891);
   stretch_tot_7__11195->SetBinError(6,0.16475);
   stretch_tot_7__11195->SetBinError(7,0.1493438);
   stretch_tot_7__11195->SetBinError(8,0.2061873);
   stretch_tot_7__11195->SetEntries(191.8141);
   stretch_tot_7__11195->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_7__11195->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_7__11195->SetLineColor(ci);
   stretch_tot_7__11195->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_7__11195->SetMarkerColor(ci);
   stretch_tot_7__11195->SetMarkerStyle(20);
   stretch_tot_7__11195->SetMarkerSize(0.8);
   stretch_tot_7__11195->GetXaxis()->SetRange(1,7);
   stretch_tot_7__11195->GetXaxis()->SetLabelFont(42);
   stretch_tot_7__11195->GetXaxis()->SetTitleFont(42);
   stretch_tot_7__11195->GetYaxis()->SetLabelFont(42);
   stretch_tot_7__11195->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_7__11195->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_7__11195->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_7__11195->GetYaxis()->SetTitleFont(42);
   stretch_tot_7__11195->GetZaxis()->SetLabelFont(42);
   stretch_tot_7__11195->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_7__11195->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_7__11195->GetZaxis()->SetTitleOffset(1);
   stretch_tot_7__11195->GetZaxis()->SetTitleFont(42);
   stretch_tot_7__11195->Draw("SAME E2");
   Double_t xAxis3356[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_7__11196 = new TH1D("stretch_stat_7__11196","",8, xAxis3356);
   stretch_stat_7__11196->SetBinContent(1,1.36905);
   stretch_stat_7__11196->SetBinContent(2,1.552038);
   stretch_stat_7__11196->SetBinContent(3,1.500566);
   stretch_stat_7__11196->SetBinContent(4,1.672514);
   stretch_stat_7__11196->SetBinContent(6,1.314517);
   stretch_stat_7__11196->SetBinContent(7,1.383242);
   stretch_stat_7__11196->SetBinContent(8,1.388193);
   stretch_stat_7__11196->SetBinError(1,0.03044177);
   stretch_stat_7__11196->SetBinError(2,0.05632099);
   stretch_stat_7__11196->SetBinError(3,0.03082852);
   stretch_stat_7__11196->SetBinError(4,0.04143541);
   stretch_stat_7__11196->SetBinError(6,0.039477);
   stretch_stat_7__11196->SetBinError(7,0.07235332);
   stretch_stat_7__11196->SetBinError(8,0.0849145);
   stretch_stat_7__11196->SetEntries(4989.651);
   stretch_stat_7__11196->SetStats(0);
   stretch_stat_7__11196->SetLineWidth(2);
   stretch_stat_7__11196->SetMarkerStyle(20);
   stretch_stat_7__11196->SetMarkerSize(0.8);
   stretch_stat_7__11196->GetXaxis()->SetRange(1,7);
   stretch_stat_7__11196->GetXaxis()->SetLabelFont(42);
   stretch_stat_7__11196->GetXaxis()->SetTitleFont(42);
   stretch_stat_7__11196->GetYaxis()->SetLabelFont(42);
   stretch_stat_7__11196->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_7__11196->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_7__11196->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_7__11196->GetYaxis()->SetTitleFont(42);
   stretch_stat_7__11196->GetZaxis()->SetLabelFont(42);
   stretch_stat_7__11196->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_7__11196->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_7__11196->GetZaxis()->SetTitleOffset(1);
   stretch_stat_7__11196->GetZaxis()->SetTitleFont(42);
   stretch_stat_7__11196->Draw("SAME PZ");
   dw__2406->Modified();
   c1_n48->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2407 = new TPad("up", "up",0,0.5,1,1);
   up__2407->Draw();
   up__2407->cd();
   up__2407->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__2407->SetFillColor(0);
   up__2407->SetFillStyle(4000);
   up__2407->SetBorderMode(0);
   up__2407->SetBorderSize(0);
   up__2407->SetTickx(1);
   up__2407->SetTicky(1);
   up__2407->SetLeftMargin(0.120603);
   up__2407->SetRightMargin(0.08040201);
   up__2407->SetBottomMargin(0.01243523);
   up__2407->SetFrameBorderMode(0);
   up__2407->SetFrameBorderMode(0);
   Double_t xAxis3357[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__11197 = new TH1D("chist__11197","",8, xAxis3357);
   chist__11197->SetMinimum(-0.9);
   chist__11197->SetMaximum(2);
   chist__11197->SetDirectory(nullptr);
   chist__11197->SetStats(0);
   chist__11197->SetLineColor(0);
   chist__11197->SetLineWidth(0);
   chist__11197->SetMarkerColor(0);
   chist__11197->SetMarkerStyle(20);
   chist__11197->SetMarkerSize(0);
   chist__11197->GetXaxis()->SetRange(1,7);
   chist__11197->GetXaxis()->SetNdivisions(4000510);
   chist__11197->GetXaxis()->SetLabelFont(42);
   chist__11197->GetXaxis()->SetLabelSize(0);
   chist__11197->GetXaxis()->SetTitleSize(0.08);
   chist__11197->GetXaxis()->SetTickLength(0.04);
   chist__11197->GetXaxis()->SetTitleOffset(2.020933);
   chist__11197->GetXaxis()->SetTitleFont(42);
   chist__11197->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__11197->GetYaxis()->SetNdivisions(3000510);
   chist__11197->GetYaxis()->SetLabelFont(42);
   chist__11197->GetYaxis()->SetLabelSize(0.08);
   chist__11197->GetYaxis()->SetTitleSize(0.08);
   chist__11197->GetYaxis()->SetTickLength(0.04);
   chist__11197->GetYaxis()->SetTitleOffset(0.727387);
   chist__11197->GetYaxis()->SetTitleFont(42);
   chist__11197->GetZaxis()->SetLabelFont(42);
   chist__11197->GetZaxis()->SetLabelSize(0.05);
   chist__11197->GetZaxis()->SetTitleSize(0.05);
   chist__11197->GetZaxis()->SetTitleOffset(1);
   chist__11197->GetZaxis()->SetTitleFont(42);
   chist__11197->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_7","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_7","SP, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.633,"w_{#eta 2}");
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
      tex = new TLatex(0.160804,0.5098,"600.0 #leq p_{T}^{#gamma} [GeV] < 5000.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis3358[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_7__11198 = new TH1D("shift_tot_7__11198","",8, xAxis3358);
   shift_tot_7__11198->SetBinContent(1,0.5148469);
   shift_tot_7__11198->SetBinContent(2,0.5567801);
   shift_tot_7__11198->SetBinContent(3,0.441257);
   shift_tot_7__11198->SetBinContent(4,0.5588956);
   shift_tot_7__11198->SetBinContent(6,0.8535429);
   shift_tot_7__11198->SetBinContent(7,0.9029085);
   shift_tot_7__11198->SetBinContent(8,1.11367);
   shift_tot_7__11198->SetBinError(1,0.1675473);
   shift_tot_7__11198->SetBinError(2,0.2444186);
   shift_tot_7__11198->SetBinError(3,0.3060368);
   shift_tot_7__11198->SetBinError(4,0.3033976);
   shift_tot_7__11198->SetBinError(6,0.2020726);
   shift_tot_7__11198->SetBinError(7,0.1622462);
   shift_tot_7__11198->SetBinError(8,0.2620197);
   shift_tot_7__11198->SetEntries(59.66391);
   shift_tot_7__11198->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_7__11198->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_7__11198->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_7__11198->SetMarkerColor(ci);
   shift_tot_7__11198->SetMarkerStyle(20);
   shift_tot_7__11198->SetMarkerSize(0.8);
   shift_tot_7__11198->GetXaxis()->SetRange(1,7);
   shift_tot_7__11198->GetXaxis()->SetLabelFont(42);
   shift_tot_7__11198->GetXaxis()->SetTitleFont(42);
   shift_tot_7__11198->GetYaxis()->SetLabelFont(42);
   shift_tot_7__11198->GetYaxis()->SetLabelSize(0.05);
   shift_tot_7__11198->GetYaxis()->SetTitleSize(0.05);
   shift_tot_7__11198->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_7__11198->GetYaxis()->SetTitleFont(42);
   shift_tot_7__11198->GetZaxis()->SetLabelFont(42);
   shift_tot_7__11198->GetZaxis()->SetLabelSize(0.05);
   shift_tot_7__11198->GetZaxis()->SetTitleSize(0.05);
   shift_tot_7__11198->GetZaxis()->SetTitleOffset(1);
   shift_tot_7__11198->GetZaxis()->SetTitleFont(42);
   shift_tot_7__11198->Draw("SAME E2");
   Double_t xAxis3359[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_7__11199 = new TH1D("shift_stat_7__11199","",8, xAxis3359);
   shift_stat_7__11199->SetBinContent(1,0.5148469);
   shift_stat_7__11199->SetBinContent(2,0.5567801);
   shift_stat_7__11199->SetBinContent(3,0.441257);
   shift_stat_7__11199->SetBinContent(4,0.5588956);
   shift_stat_7__11199->SetBinContent(6,0.8535429);
   shift_stat_7__11199->SetBinContent(7,0.9029085);
   shift_stat_7__11199->SetBinContent(8,1.11367);
   shift_stat_7__11199->SetBinError(1,0.0227407);
   shift_stat_7__11199->SetBinError(2,0.03846291);
   shift_stat_7__11199->SetBinError(3,0.02273913);
   shift_stat_7__11199->SetBinError(4,0.02682104);
   shift_stat_7__11199->SetBinError(6,0.03526654);
   shift_stat_7__11199->SetBinError(7,0.06615914);
   shift_stat_7__11199->SetBinError(8,0.07923142);
   shift_stat_7__11199->SetEntries(1614.026);
   shift_stat_7__11199->SetStats(0);
   shift_stat_7__11199->SetMarkerStyle(20);
   shift_stat_7__11199->SetMarkerSize(0.8);
   shift_stat_7__11199->GetXaxis()->SetRange(1,7);
   shift_stat_7__11199->GetXaxis()->SetLabelFont(42);
   shift_stat_7__11199->GetXaxis()->SetTitleFont(42);
   shift_stat_7__11199->GetYaxis()->SetLabelFont(42);
   shift_stat_7__11199->GetYaxis()->SetLabelSize(0.05);
   shift_stat_7__11199->GetYaxis()->SetTitleSize(0.05);
   shift_stat_7__11199->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_7__11199->GetYaxis()->SetTitleFont(42);
   shift_stat_7__11199->GetZaxis()->SetLabelFont(42);
   shift_stat_7__11199->GetZaxis()->SetLabelSize(0.05);
   shift_stat_7__11199->GetZaxis()->SetTitleSize(0.05);
   shift_stat_7__11199->GetZaxis()->SetTitleOffset(1);
   shift_stat_7__11199->GetZaxis()->SetTitleFont(42);
   shift_stat_7__11199->Draw("SAME PZ");
   Double_t xAxis3360[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__11200 = new TH1D("chist_copy__11200","",8, xAxis3360);
   chist_copy__11200->SetMinimum(-0.9);
   chist_copy__11200->SetMaximum(2);
   chist_copy__11200->SetDirectory(nullptr);
   chist_copy__11200->SetStats(0);
   chist_copy__11200->SetLineColor(0);
   chist_copy__11200->SetLineWidth(0);
   chist_copy__11200->SetMarkerColor(0);
   chist_copy__11200->SetMarkerStyle(20);
   chist_copy__11200->SetMarkerSize(0);
   chist_copy__11200->GetXaxis()->SetRange(1,7);
   chist_copy__11200->GetXaxis()->SetNdivisions(4000510);
   chist_copy__11200->GetXaxis()->SetLabelFont(42);
   chist_copy__11200->GetXaxis()->SetLabelSize(0);
   chist_copy__11200->GetXaxis()->SetTitleSize(0.08);
   chist_copy__11200->GetXaxis()->SetTickLength(0.04);
   chist_copy__11200->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__11200->GetXaxis()->SetTitleFont(42);
   chist_copy__11200->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__11200->GetYaxis()->SetNdivisions(3000510);
   chist_copy__11200->GetYaxis()->SetLabelFont(42);
   chist_copy__11200->GetYaxis()->SetLabelSize(0.08);
   chist_copy__11200->GetYaxis()->SetTitleSize(0.08);
   chist_copy__11200->GetYaxis()->SetTickLength(0.04);
   chist_copy__11200->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__11200->GetYaxis()->SetTitleFont(42);
   chist_copy__11200->GetZaxis()->SetLabelFont(42);
   chist_copy__11200->GetZaxis()->SetLabelSize(0.05);
   chist_copy__11200->GetZaxis()->SetTitleSize(0.05);
   chist_copy__11200->GetZaxis()->SetTitleOffset(1);
   chist_copy__11200->GetZaxis()->SetTitleFont(42);
   chist_copy__11200->Draw("sameaxis");
   up__2407->Modified();
   c1_n48->cd();
   c1_n48->Modified();
   c1_n48->SetSelected(c1_n48);
}
