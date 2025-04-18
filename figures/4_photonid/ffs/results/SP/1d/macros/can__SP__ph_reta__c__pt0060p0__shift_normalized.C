#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_reta__c__pt0060p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n50/
//=========  (Thu Apr  4 17:59:24 2024) by ROOT version 6.30/02
   TCanvas *c1_n50 = new TCanvas("c1_n50", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n50->SetHighLightColor(2);
   c1_n50->Range(0,0,1,1);
   c1_n50->SetFillColor(0);
   c1_n50->SetBorderMode(0);
   c1_n50->SetBorderSize(2);
   c1_n50->SetTickx(1);
   c1_n50->SetTicky(1);
   c1_n50->SetLeftMargin(0.16);
   c1_n50->SetRightMargin(0.05);
   c1_n50->SetTopMargin(0.05);
   c1_n50->SetBottomMargin(0.16);
   c1_n50->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2088 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2088->Draw();
   dw__2088->cd();
   dw__2088->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2088->SetFillColor(0);
   dw__2088->SetFillStyle(4000);
   dw__2088->SetBorderMode(0);
   dw__2088->SetBorderSize(0);
   dw__2088->SetTickx(1);
   dw__2088->SetTicky(1);
   dw__2088->SetLeftMargin(0.120603);
   dw__2088->SetRightMargin(0.08040201);
   dw__2088->SetTopMargin(0);
   dw__2088->SetBottomMargin(0.2072539);
   dw__2088->SetFrameBorderMode(0);
   dw__2088->SetFrameBorderMode(0);
   Double_t xAxis2087[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__9927 = new TH1D("chist_dw__9927","",8, xAxis2087);
   chist_dw__9927->SetMinimum(0.2);
   chist_dw__9927->SetMaximum(3.2);
   chist_dw__9927->SetDirectory(nullptr);
   chist_dw__9927->SetStats(0);
   chist_dw__9927->SetLineColor(0);
   chist_dw__9927->SetLineWidth(0);
   chist_dw__9927->SetMarkerColor(0);
   chist_dw__9927->SetMarkerStyle(20);
   chist_dw__9927->SetMarkerSize(0);
   chist_dw__9927->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__9927->GetXaxis()->SetRange(1,7);
   chist_dw__9927->GetXaxis()->SetLabelFont(42);
   chist_dw__9927->GetXaxis()->SetLabelSize(0.08);
   chist_dw__9927->GetXaxis()->SetTitleSize(0.08);
   chist_dw__9927->GetXaxis()->SetTickLength(0.04);
   chist_dw__9927->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__9927->GetXaxis()->SetTitleFont(42);
   chist_dw__9927->GetYaxis()->SetTitle("Stretch");
   chist_dw__9927->GetYaxis()->CenterTitle(true);
   chist_dw__9927->GetYaxis()->SetNdivisions(405);
   chist_dw__9927->GetYaxis()->SetLabelFont(42);
   chist_dw__9927->GetYaxis()->SetLabelSize(0.08);
   chist_dw__9927->GetYaxis()->SetTitleSize(0.08);
   chist_dw__9927->GetYaxis()->SetTickLength(0.04);
   chist_dw__9927->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__9927->GetYaxis()->SetTitleFont(42);
   chist_dw__9927->GetZaxis()->SetLabelFont(42);
   chist_dw__9927->GetZaxis()->SetLabelSize(0.05);
   chist_dw__9927->GetZaxis()->SetTitleSize(0.05);
   chist_dw__9927->GetZaxis()->SetTitleOffset(1);
   chist_dw__9927->GetZaxis()->SetTitleFont(42);
   chist_dw__9927->Draw("");
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
   Double_t xAxis2088[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_2__9928 = new TH1D("stretch_tot_2__9928","",8, xAxis2088);
   stretch_tot_2__9928->SetBinContent(1,1.04002);
   stretch_tot_2__9928->SetBinContent(2,1.034523);
   stretch_tot_2__9928->SetBinContent(3,1.049702);
   stretch_tot_2__9928->SetBinContent(4,1.052463);
   stretch_tot_2__9928->SetBinContent(6,1.067118);
   stretch_tot_2__9928->SetBinContent(7,1.082318);
   stretch_tot_2__9928->SetBinContent(8,1.124287);
   stretch_tot_2__9928->SetBinError(1,0.02285545);
   stretch_tot_2__9928->SetBinError(2,0.01635998);
   stretch_tot_2__9928->SetBinError(3,0.02153272);
   stretch_tot_2__9928->SetBinError(4,0.01366898);
   stretch_tot_2__9928->SetBinError(6,0.01144413);
   stretch_tot_2__9928->SetBinError(7,0.01130605);
   stretch_tot_2__9928->SetBinError(8,0.01106496);
   stretch_tot_2__9928->SetEntries(30470.15);
   stretch_tot_2__9928->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_2__9928->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_2__9928->SetLineColor(ci);
   stretch_tot_2__9928->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_2__9928->SetMarkerColor(ci);
   stretch_tot_2__9928->SetMarkerStyle(20);
   stretch_tot_2__9928->SetMarkerSize(0.8);
   stretch_tot_2__9928->GetXaxis()->SetRange(1,7);
   stretch_tot_2__9928->GetXaxis()->SetLabelFont(42);
   stretch_tot_2__9928->GetXaxis()->SetTitleFont(42);
   stretch_tot_2__9928->GetYaxis()->SetLabelFont(42);
   stretch_tot_2__9928->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_2__9928->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_2__9928->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_2__9928->GetYaxis()->SetTitleFont(42);
   stretch_tot_2__9928->GetZaxis()->SetLabelFont(42);
   stretch_tot_2__9928->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_2__9928->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_2__9928->GetZaxis()->SetTitleOffset(1);
   stretch_tot_2__9928->GetZaxis()->SetTitleFont(42);
   stretch_tot_2__9928->Draw("SAME E2");
   Double_t xAxis2089[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_2__9929 = new TH1D("stretch_stat_2__9929","",8, xAxis2089);
   stretch_stat_2__9929->SetBinContent(1,1.04002);
   stretch_stat_2__9929->SetBinContent(2,1.034523);
   stretch_stat_2__9929->SetBinContent(3,1.049702);
   stretch_stat_2__9929->SetBinContent(4,1.052463);
   stretch_stat_2__9929->SetBinContent(6,1.067118);
   stretch_stat_2__9929->SetBinContent(7,1.082318);
   stretch_stat_2__9929->SetBinContent(8,1.124287);
   stretch_stat_2__9929->SetBinError(1,0.0003361434);
   stretch_stat_2__9929->SetBinError(2,0.0006204777);
   stretch_stat_2__9929->SetBinError(3,0.0003789741);
   stretch_stat_2__9929->SetBinError(4,0.0004263411);
   stretch_stat_2__9929->SetBinError(6,0.0002861022);
   stretch_stat_2__9929->SetBinError(7,0.000368236);
   stretch_stat_2__9929->SetBinError(8,0.0003406772);
   stretch_stat_2__9929->SetEntries(4.798132e+07);
   stretch_stat_2__9929->SetStats(0);
   stretch_stat_2__9929->SetLineWidth(2);
   stretch_stat_2__9929->SetMarkerStyle(20);
   stretch_stat_2__9929->SetMarkerSize(0.8);
   stretch_stat_2__9929->GetXaxis()->SetRange(1,7);
   stretch_stat_2__9929->GetXaxis()->SetLabelFont(42);
   stretch_stat_2__9929->GetXaxis()->SetTitleFont(42);
   stretch_stat_2__9929->GetYaxis()->SetLabelFont(42);
   stretch_stat_2__9929->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_2__9929->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_2__9929->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_2__9929->GetYaxis()->SetTitleFont(42);
   stretch_stat_2__9929->GetZaxis()->SetLabelFont(42);
   stretch_stat_2__9929->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_2__9929->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_2__9929->GetZaxis()->SetTitleOffset(1);
   stretch_stat_2__9929->GetZaxis()->SetTitleFont(42);
   stretch_stat_2__9929->Draw("SAME PZ");
   dw__2088->Modified();
   c1_n50->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2089 = new TPad("up", "up",0,0.5,1,1);
   up__2089->Draw();
   up__2089->cd();
   up__2089->Range(-0.3577359,-1.646424,2.608491,2.08687);
   up__2089->SetFillColor(0);
   up__2089->SetFillStyle(4000);
   up__2089->SetBorderMode(0);
   up__2089->SetBorderSize(0);
   up__2089->SetTickx(1);
   up__2089->SetTicky(1);
   up__2089->SetLeftMargin(0.120603);
   up__2089->SetRightMargin(0.08040201);
   up__2089->SetBottomMargin(0.01243523);
   up__2089->SetFrameBorderMode(0);
   up__2089->SetFrameBorderMode(0);
   Double_t xAxis2090[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__9930 = new TH1D("chist__9930","",8, xAxis2090);
   chist__9930->SetMinimum(-1.6);
   chist__9930->SetMaximum(1.7);
   chist__9930->SetDirectory(nullptr);
   chist__9930->SetStats(0);
   chist__9930->SetLineColor(0);
   chist__9930->SetLineWidth(0);
   chist__9930->SetMarkerColor(0);
   chist__9930->SetMarkerStyle(20);
   chist__9930->SetMarkerSize(0);
   chist__9930->GetXaxis()->SetRange(1,7);
   chist__9930->GetXaxis()->SetNdivisions(4000510);
   chist__9930->GetXaxis()->SetLabelFont(42);
   chist__9930->GetXaxis()->SetLabelSize(0);
   chist__9930->GetXaxis()->SetTitleSize(0.08);
   chist__9930->GetXaxis()->SetTickLength(0.04);
   chist__9930->GetXaxis()->SetTitleOffset(2.020933);
   chist__9930->GetXaxis()->SetTitleFont(42);
   chist__9930->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__9930->GetYaxis()->SetNdivisions(3000510);
   chist__9930->GetYaxis()->SetLabelFont(42);
   chist__9930->GetYaxis()->SetLabelSize(0.08);
   chist__9930->GetYaxis()->SetTitleSize(0.08);
   chist__9930->GetYaxis()->SetTickLength(0.04);
   chist__9930->GetYaxis()->SetTitleOffset(0.727387);
   chist__9930->GetYaxis()->SetTitleFont(42);
   chist__9930->GetZaxis()->SetLabelFont(42);
   chist__9930->GetZaxis()->SetLabelSize(0.05);
   chist__9930->GetZaxis()->SetTitleSize(0.05);
   chist__9930->GetZaxis()->SetTitleOffset(1);
   chist__9930->GetZaxis()->SetTitleFont(42);
   chist__9930->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"R_{#eta}");
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
      tex = new TLatex(0.160804,0.5098,"60.0 #leq p_{T}^{#gamma} [GeV] < 80.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2091[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_2__9931 = new TH1D("shift_tot_2__9931","",8, xAxis2091);
   shift_tot_2__9931->SetBinContent(1,-0.1365348);
   shift_tot_2__9931->SetBinContent(2,-0.1498631);
   shift_tot_2__9931->SetBinContent(3,-0.2650751);
   shift_tot_2__9931->SetBinContent(4,-0.3583558);
   shift_tot_2__9931->SetBinContent(6,-0.3633482);
   shift_tot_2__9931->SetBinContent(7,-0.58344);
   shift_tot_2__9931->SetBinContent(8,-0.6895688);
   shift_tot_2__9931->SetBinError(1,0.02001093);
   shift_tot_2__9931->SetBinError(2,0.02028601);
   shift_tot_2__9931->SetBinError(3,0.02675953);
   shift_tot_2__9931->SetBinError(4,0.02570818);
   shift_tot_2__9931->SetBinError(6,0.02300335);
   shift_tot_2__9931->SetBinError(7,0.01937054);
   shift_tot_2__9931->SetBinError(8,0.02491234);
   shift_tot_2__9931->SetEntries(1745.603);
   shift_tot_2__9931->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_2__9931->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_2__9931->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_2__9931->SetMarkerColor(ci);
   shift_tot_2__9931->SetMarkerStyle(20);
   shift_tot_2__9931->SetMarkerSize(0.8);
   shift_tot_2__9931->GetXaxis()->SetRange(1,7);
   shift_tot_2__9931->GetXaxis()->SetLabelFont(42);
   shift_tot_2__9931->GetXaxis()->SetTitleFont(42);
   shift_tot_2__9931->GetYaxis()->SetLabelFont(42);
   shift_tot_2__9931->GetYaxis()->SetLabelSize(0.05);
   shift_tot_2__9931->GetYaxis()->SetTitleSize(0.05);
   shift_tot_2__9931->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_2__9931->GetYaxis()->SetTitleFont(42);
   shift_tot_2__9931->GetZaxis()->SetLabelFont(42);
   shift_tot_2__9931->GetZaxis()->SetLabelSize(0.05);
   shift_tot_2__9931->GetZaxis()->SetTitleSize(0.05);
   shift_tot_2__9931->GetZaxis()->SetTitleOffset(1);
   shift_tot_2__9931->GetZaxis()->SetTitleFont(42);
   shift_tot_2__9931->Draw("SAME E2");
   Double_t xAxis2092[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_2__9932 = new TH1D("shift_stat_2__9932","",8, xAxis2092);
   shift_stat_2__9932->SetBinContent(1,-0.1365348);
   shift_stat_2__9932->SetBinContent(2,-0.1498631);
   shift_stat_2__9932->SetBinContent(3,-0.2650751);
   shift_stat_2__9932->SetBinContent(4,-0.3583558);
   shift_stat_2__9932->SetBinContent(6,-0.3633482);
   shift_stat_2__9932->SetBinContent(7,-0.58344);
   shift_stat_2__9932->SetBinContent(8,-0.6895688);
   shift_stat_2__9932->SetBinError(1,0.0003320552);
   shift_stat_2__9932->SetBinError(2,0.0006072471);
   shift_stat_2__9932->SetBinError(3,0.0003589315);
   shift_stat_2__9932->SetBinError(4,0.0004072594);
   shift_stat_2__9932->SetBinError(6,0.0003164073);
   shift_stat_2__9932->SetBinError(7,0.0004748663);
   shift_stat_2__9932->SetBinError(8,0.0003407224);
   shift_stat_2__9932->SetEntries(5334075);
   shift_stat_2__9932->SetStats(0);
   shift_stat_2__9932->SetMarkerStyle(20);
   shift_stat_2__9932->SetMarkerSize(0.8);
   shift_stat_2__9932->GetXaxis()->SetRange(1,7);
   shift_stat_2__9932->GetXaxis()->SetLabelFont(42);
   shift_stat_2__9932->GetXaxis()->SetTitleFont(42);
   shift_stat_2__9932->GetYaxis()->SetLabelFont(42);
   shift_stat_2__9932->GetYaxis()->SetLabelSize(0.05);
   shift_stat_2__9932->GetYaxis()->SetTitleSize(0.05);
   shift_stat_2__9932->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_2__9932->GetYaxis()->SetTitleFont(42);
   shift_stat_2__9932->GetZaxis()->SetLabelFont(42);
   shift_stat_2__9932->GetZaxis()->SetLabelSize(0.05);
   shift_stat_2__9932->GetZaxis()->SetTitleSize(0.05);
   shift_stat_2__9932->GetZaxis()->SetTitleOffset(1);
   shift_stat_2__9932->GetZaxis()->SetTitleFont(42);
   shift_stat_2__9932->Draw("SAME PZ");
   Double_t xAxis2093[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__9933 = new TH1D("chist_copy__9933","",8, xAxis2093);
   chist_copy__9933->SetMinimum(-1.6);
   chist_copy__9933->SetMaximum(1.7);
   chist_copy__9933->SetDirectory(nullptr);
   chist_copy__9933->SetStats(0);
   chist_copy__9933->SetLineColor(0);
   chist_copy__9933->SetLineWidth(0);
   chist_copy__9933->SetMarkerColor(0);
   chist_copy__9933->SetMarkerStyle(20);
   chist_copy__9933->SetMarkerSize(0);
   chist_copy__9933->GetXaxis()->SetRange(1,7);
   chist_copy__9933->GetXaxis()->SetNdivisions(4000510);
   chist_copy__9933->GetXaxis()->SetLabelFont(42);
   chist_copy__9933->GetXaxis()->SetLabelSize(0);
   chist_copy__9933->GetXaxis()->SetTitleSize(0.08);
   chist_copy__9933->GetXaxis()->SetTickLength(0.04);
   chist_copy__9933->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__9933->GetXaxis()->SetTitleFont(42);
   chist_copy__9933->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__9933->GetYaxis()->SetNdivisions(3000510);
   chist_copy__9933->GetYaxis()->SetLabelFont(42);
   chist_copy__9933->GetYaxis()->SetLabelSize(0.08);
   chist_copy__9933->GetYaxis()->SetTitleSize(0.08);
   chist_copy__9933->GetYaxis()->SetTickLength(0.04);
   chist_copy__9933->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__9933->GetYaxis()->SetTitleFont(42);
   chist_copy__9933->GetZaxis()->SetLabelFont(42);
   chist_copy__9933->GetZaxis()->SetLabelSize(0.05);
   chist_copy__9933->GetZaxis()->SetTitleSize(0.05);
   chist_copy__9933->GetZaxis()->SetTitleOffset(1);
   chist_copy__9933->GetZaxis()->SetTitleFont(42);
   chist_copy__9933->Draw("sameaxis");
   up__2089->Modified();
   c1_n50->cd();
   c1_n50->Modified();
   c1_n50->SetSelected(c1_n50);
}
