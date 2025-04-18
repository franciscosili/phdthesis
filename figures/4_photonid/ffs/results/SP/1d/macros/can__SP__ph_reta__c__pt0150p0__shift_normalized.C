#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_reta__c__pt0150p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n53/
//=========  (Thu Apr  4 17:59:24 2024) by ROOT version 6.30/02
   TCanvas *c1_n53 = new TCanvas("c1_n53", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n53->SetHighLightColor(2);
   c1_n53->Range(0,0,1,1);
   c1_n53->SetFillColor(0);
   c1_n53->SetBorderMode(0);
   c1_n53->SetBorderSize(2);
   c1_n53->SetTickx(1);
   c1_n53->SetTicky(1);
   c1_n53->SetLeftMargin(0.16);
   c1_n53->SetRightMargin(0.05);
   c1_n53->SetTopMargin(0.05);
   c1_n53->SetBottomMargin(0.16);
   c1_n53->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2094 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2094->Draw();
   dw__2094->cd();
   dw__2094->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2094->SetFillColor(0);
   dw__2094->SetFillStyle(4000);
   dw__2094->SetBorderMode(0);
   dw__2094->SetBorderSize(0);
   dw__2094->SetTickx(1);
   dw__2094->SetTicky(1);
   dw__2094->SetLeftMargin(0.120603);
   dw__2094->SetRightMargin(0.08040201);
   dw__2094->SetTopMargin(0);
   dw__2094->SetBottomMargin(0.2072539);
   dw__2094->SetFrameBorderMode(0);
   dw__2094->SetFrameBorderMode(0);
   Double_t xAxis2108[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__9948 = new TH1D("chist_dw__9948","",8, xAxis2108);
   chist_dw__9948->SetMinimum(0.2);
   chist_dw__9948->SetMaximum(3.2);
   chist_dw__9948->SetDirectory(nullptr);
   chist_dw__9948->SetStats(0);
   chist_dw__9948->SetLineColor(0);
   chist_dw__9948->SetLineWidth(0);
   chist_dw__9948->SetMarkerColor(0);
   chist_dw__9948->SetMarkerStyle(20);
   chist_dw__9948->SetMarkerSize(0);
   chist_dw__9948->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__9948->GetXaxis()->SetRange(1,8);
   chist_dw__9948->GetXaxis()->SetLabelFont(42);
   chist_dw__9948->GetXaxis()->SetLabelSize(0.08);
   chist_dw__9948->GetXaxis()->SetTitleSize(0.08);
   chist_dw__9948->GetXaxis()->SetTickLength(0.04);
   chist_dw__9948->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__9948->GetXaxis()->SetTitleFont(42);
   chist_dw__9948->GetYaxis()->SetTitle("Stretch");
   chist_dw__9948->GetYaxis()->CenterTitle(true);
   chist_dw__9948->GetYaxis()->SetNdivisions(405);
   chist_dw__9948->GetYaxis()->SetLabelFont(42);
   chist_dw__9948->GetYaxis()->SetLabelSize(0.08);
   chist_dw__9948->GetYaxis()->SetTitleSize(0.08);
   chist_dw__9948->GetYaxis()->SetTickLength(0.04);
   chist_dw__9948->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__9948->GetYaxis()->SetTitleFont(42);
   chist_dw__9948->GetZaxis()->SetLabelFont(42);
   chist_dw__9948->GetZaxis()->SetLabelSize(0.05);
   chist_dw__9948->GetZaxis()->SetTitleSize(0.05);
   chist_dw__9948->GetZaxis()->SetTitleOffset(1);
   chist_dw__9948->GetZaxis()->SetTitleFont(42);
   chist_dw__9948->Draw("");
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
   Double_t xAxis2109[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_5__9949 = new TH1D("stretch_tot_5__9949","",8, xAxis2109);
   stretch_tot_5__9949->SetBinContent(1,1.153257);
   stretch_tot_5__9949->SetBinContent(2,1.271625);
   stretch_tot_5__9949->SetBinContent(3,1.248891);
   stretch_tot_5__9949->SetBinContent(4,1.250116);
   stretch_tot_5__9949->SetBinContent(6,1.260494);
   stretch_tot_5__9949->SetBinContent(7,1.272611);
   stretch_tot_5__9949->SetBinContent(8,1.346479);
   stretch_tot_5__9949->SetBinError(1,0.0775956);
   stretch_tot_5__9949->SetBinError(2,0.1493142);
   stretch_tot_5__9949->SetBinError(3,0.1634102);
   stretch_tot_5__9949->SetBinError(4,0.1789957);
   stretch_tot_5__9949->SetBinError(6,0.09376814);
   stretch_tot_5__9949->SetBinError(7,0.0665625);
   stretch_tot_5__9949->SetBinError(8,0.1140677);
   stretch_tot_5__9949->SetEntries(684.0791);
   stretch_tot_5__9949->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_5__9949->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_5__9949->SetLineColor(ci);
   stretch_tot_5__9949->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_5__9949->SetMarkerColor(ci);
   stretch_tot_5__9949->SetMarkerStyle(20);
   stretch_tot_5__9949->SetMarkerSize(0.8);
   stretch_tot_5__9949->GetXaxis()->SetRange(1,8);
   stretch_tot_5__9949->GetXaxis()->SetLabelFont(42);
   stretch_tot_5__9949->GetXaxis()->SetTitleFont(42);
   stretch_tot_5__9949->GetYaxis()->SetLabelFont(42);
   stretch_tot_5__9949->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_5__9949->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_5__9949->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_5__9949->GetYaxis()->SetTitleFont(42);
   stretch_tot_5__9949->GetZaxis()->SetLabelFont(42);
   stretch_tot_5__9949->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_5__9949->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_5__9949->GetZaxis()->SetTitleOffset(1);
   stretch_tot_5__9949->GetZaxis()->SetTitleFont(42);
   stretch_tot_5__9949->Draw("SAME E2");
   Double_t xAxis2110[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_5__9950 = new TH1D("stretch_stat_5__9950","",8, xAxis2110);
   stretch_stat_5__9950->SetBinContent(1,1.153257);
   stretch_stat_5__9950->SetBinContent(2,1.271625);
   stretch_stat_5__9950->SetBinContent(3,1.248891);
   stretch_stat_5__9950->SetBinContent(4,1.250116);
   stretch_stat_5__9950->SetBinContent(6,1.260494);
   stretch_stat_5__9950->SetBinContent(7,1.272611);
   stretch_stat_5__9950->SetBinContent(8,1.346479);
   stretch_stat_5__9950->SetBinError(1,0.0007139889);
   stretch_stat_5__9950->SetBinError(2,0.001943941);
   stretch_stat_5__9950->SetBinError(3,0.000663299);
   stretch_stat_5__9950->SetBinError(4,0.0008215677);
   stretch_stat_5__9950->SetBinError(6,0.001506956);
   stretch_stat_5__9950->SetBinError(7,0.001490217);
   stretch_stat_5__9950->SetBinError(8,0.0009555315);
   stretch_stat_5__9950->SetEntries(7170499);
   stretch_stat_5__9950->SetStats(0);
   stretch_stat_5__9950->SetLineWidth(2);
   stretch_stat_5__9950->SetMarkerStyle(20);
   stretch_stat_5__9950->SetMarkerSize(0.8);
   stretch_stat_5__9950->GetXaxis()->SetRange(1,8);
   stretch_stat_5__9950->GetXaxis()->SetLabelFont(42);
   stretch_stat_5__9950->GetXaxis()->SetTitleFont(42);
   stretch_stat_5__9950->GetYaxis()->SetLabelFont(42);
   stretch_stat_5__9950->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_5__9950->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_5__9950->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_5__9950->GetYaxis()->SetTitleFont(42);
   stretch_stat_5__9950->GetZaxis()->SetLabelFont(42);
   stretch_stat_5__9950->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_5__9950->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_5__9950->GetZaxis()->SetTitleOffset(1);
   stretch_stat_5__9950->GetZaxis()->SetTitleFont(42);
   stretch_stat_5__9950->Draw("SAME PZ");
   dw__2094->Modified();
   c1_n53->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2095 = new TPad("up", "up",0,0.5,1,1);
   up__2095->Draw();
   up__2095->cd();
   up__2095->Range(-0.3577359,-1.646424,2.608491,2.08687);
   up__2095->SetFillColor(0);
   up__2095->SetFillStyle(4000);
   up__2095->SetBorderMode(0);
   up__2095->SetBorderSize(0);
   up__2095->SetTickx(1);
   up__2095->SetTicky(1);
   up__2095->SetLeftMargin(0.120603);
   up__2095->SetRightMargin(0.08040201);
   up__2095->SetBottomMargin(0.01243523);
   up__2095->SetFrameBorderMode(0);
   up__2095->SetFrameBorderMode(0);
   Double_t xAxis2111[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__9951 = new TH1D("chist__9951","",8, xAxis2111);
   chist__9951->SetMinimum(-1.6);
   chist__9951->SetMaximum(1.7);
   chist__9951->SetDirectory(nullptr);
   chist__9951->SetStats(0);
   chist__9951->SetLineColor(0);
   chist__9951->SetLineWidth(0);
   chist__9951->SetMarkerColor(0);
   chist__9951->SetMarkerStyle(20);
   chist__9951->SetMarkerSize(0);
   chist__9951->GetXaxis()->SetRange(1,8);
   chist__9951->GetXaxis()->SetNdivisions(4000510);
   chist__9951->GetXaxis()->SetLabelFont(42);
   chist__9951->GetXaxis()->SetLabelSize(0);
   chist__9951->GetXaxis()->SetTitleSize(0.08);
   chist__9951->GetXaxis()->SetTickLength(0.04);
   chist__9951->GetXaxis()->SetTitleOffset(2.020933);
   chist__9951->GetXaxis()->SetTitleFont(42);
   chist__9951->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__9951->GetYaxis()->SetNdivisions(3000510);
   chist__9951->GetYaxis()->SetLabelFont(42);
   chist__9951->GetYaxis()->SetLabelSize(0.08);
   chist__9951->GetYaxis()->SetTitleSize(0.08);
   chist__9951->GetYaxis()->SetTickLength(0.04);
   chist__9951->GetYaxis()->SetTitleOffset(0.727387);
   chist__9951->GetYaxis()->SetTitleFont(42);
   chist__9951->GetZaxis()->SetLabelFont(42);
   chist__9951->GetZaxis()->SetLabelSize(0.05);
   chist__9951->GetZaxis()->SetTitleSize(0.05);
   chist__9951->GetZaxis()->SetTitleOffset(1);
   chist__9951->GetZaxis()->SetTitleFont(42);
   chist__9951->Draw("pe");
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
      tex = new TLatex(0.160804,0.5098,"150.0 #leq p_{T}^{#gamma} [GeV] < 300.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2112[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_5__9952 = new TH1D("shift_tot_5__9952","",8, xAxis2112);
   shift_tot_5__9952->SetBinContent(1,-0.1560996);
   shift_tot_5__9952->SetBinContent(2,-0.1848815);
   shift_tot_5__9952->SetBinContent(3,-0.3115471);
   shift_tot_5__9952->SetBinContent(4,-0.4699474);
   shift_tot_5__9952->SetBinContent(6,-0.4375009);
   shift_tot_5__9952->SetBinContent(7,-0.6682371);
   shift_tot_5__9952->SetBinContent(8,-0.7581042);
   shift_tot_5__9952->SetBinError(1,0.04535192);
   shift_tot_5__9952->SetBinError(2,0.07185541);
   shift_tot_5__9952->SetBinError(3,0.06887749);
   shift_tot_5__9952->SetBinError(4,0.1116056);
   shift_tot_5__9952->SetBinError(6,0.07830431);
   shift_tot_5__9952->SetBinError(7,0.06517345);
   shift_tot_5__9952->SetBinError(8,0.1031287);
   shift_tot_5__9952->SetEntries(196.2843);
   shift_tot_5__9952->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_5__9952->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_5__9952->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_5__9952->SetMarkerColor(ci);
   shift_tot_5__9952->SetMarkerStyle(20);
   shift_tot_5__9952->SetMarkerSize(0.8);
   shift_tot_5__9952->GetXaxis()->SetRange(1,8);
   shift_tot_5__9952->GetXaxis()->SetLabelFont(42);
   shift_tot_5__9952->GetXaxis()->SetTitleFont(42);
   shift_tot_5__9952->GetYaxis()->SetLabelFont(42);
   shift_tot_5__9952->GetYaxis()->SetLabelSize(0.05);
   shift_tot_5__9952->GetYaxis()->SetTitleSize(0.05);
   shift_tot_5__9952->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_5__9952->GetYaxis()->SetTitleFont(42);
   shift_tot_5__9952->GetZaxis()->SetLabelFont(42);
   shift_tot_5__9952->GetZaxis()->SetLabelSize(0.05);
   shift_tot_5__9952->GetZaxis()->SetTitleSize(0.05);
   shift_tot_5__9952->GetZaxis()->SetTitleOffset(1);
   shift_tot_5__9952->GetZaxis()->SetTitleFont(42);
   shift_tot_5__9952->Draw("SAME E2");
   Double_t xAxis2113[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_5__9953 = new TH1D("shift_stat_5__9953","",8, xAxis2113);
   shift_stat_5__9953->SetBinContent(1,-0.1560996);
   shift_stat_5__9953->SetBinContent(2,-0.1848815);
   shift_stat_5__9953->SetBinContent(3,-0.3115471);
   shift_stat_5__9953->SetBinContent(4,-0.4699474);
   shift_stat_5__9953->SetBinContent(6,-0.4375009);
   shift_stat_5__9953->SetBinContent(7,-0.6682371);
   shift_stat_5__9953->SetBinContent(8,-0.7581042);
   shift_stat_5__9953->SetBinError(1,0.001388126);
   shift_stat_5__9953->SetBinError(2,0.002205248);
   shift_stat_5__9953->SetBinError(3,0.001330808);
   shift_stat_5__9953->SetBinError(4,0.001484135);
   shift_stat_5__9953->SetBinError(6,0.001186652);
   shift_stat_5__9953->SetBinError(7,0.001817319);
   shift_stat_5__9953->SetBinError(8,0.00140576);
   shift_stat_5__9953->SetEntries(511046);
   shift_stat_5__9953->SetStats(0);
   shift_stat_5__9953->SetMarkerStyle(20);
   shift_stat_5__9953->SetMarkerSize(0.8);
   shift_stat_5__9953->GetXaxis()->SetRange(1,8);
   shift_stat_5__9953->GetXaxis()->SetLabelFont(42);
   shift_stat_5__9953->GetXaxis()->SetTitleFont(42);
   shift_stat_5__9953->GetYaxis()->SetLabelFont(42);
   shift_stat_5__9953->GetYaxis()->SetLabelSize(0.05);
   shift_stat_5__9953->GetYaxis()->SetTitleSize(0.05);
   shift_stat_5__9953->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_5__9953->GetYaxis()->SetTitleFont(42);
   shift_stat_5__9953->GetZaxis()->SetLabelFont(42);
   shift_stat_5__9953->GetZaxis()->SetLabelSize(0.05);
   shift_stat_5__9953->GetZaxis()->SetTitleSize(0.05);
   shift_stat_5__9953->GetZaxis()->SetTitleOffset(1);
   shift_stat_5__9953->GetZaxis()->SetTitleFont(42);
   shift_stat_5__9953->Draw("SAME PZ");
   Double_t xAxis2114[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__9954 = new TH1D("chist_copy__9954","",8, xAxis2114);
   chist_copy__9954->SetMinimum(-1.6);
   chist_copy__9954->SetMaximum(1.7);
   chist_copy__9954->SetDirectory(nullptr);
   chist_copy__9954->SetStats(0);
   chist_copy__9954->SetLineColor(0);
   chist_copy__9954->SetLineWidth(0);
   chist_copy__9954->SetMarkerColor(0);
   chist_copy__9954->SetMarkerStyle(20);
   chist_copy__9954->SetMarkerSize(0);
   chist_copy__9954->GetXaxis()->SetRange(1,8);
   chist_copy__9954->GetXaxis()->SetNdivisions(4000510);
   chist_copy__9954->GetXaxis()->SetLabelFont(42);
   chist_copy__9954->GetXaxis()->SetLabelSize(0);
   chist_copy__9954->GetXaxis()->SetTitleSize(0.08);
   chist_copy__9954->GetXaxis()->SetTickLength(0.04);
   chist_copy__9954->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__9954->GetXaxis()->SetTitleFont(42);
   chist_copy__9954->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__9954->GetYaxis()->SetNdivisions(3000510);
   chist_copy__9954->GetYaxis()->SetLabelFont(42);
   chist_copy__9954->GetYaxis()->SetLabelSize(0.08);
   chist_copy__9954->GetYaxis()->SetTitleSize(0.08);
   chist_copy__9954->GetYaxis()->SetTickLength(0.04);
   chist_copy__9954->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__9954->GetYaxis()->SetTitleFont(42);
   chist_copy__9954->GetZaxis()->SetLabelFont(42);
   chist_copy__9954->GetZaxis()->SetLabelSize(0.05);
   chist_copy__9954->GetZaxis()->SetTitleSize(0.05);
   chist_copy__9954->GetZaxis()->SetTitleOffset(1);
   chist_copy__9954->GetZaxis()->SetTitleFont(42);
   chist_copy__9954->Draw("sameaxis");
   up__2095->Modified();
   c1_n53->cd();
   c1_n53->Modified();
   c1_n53->SetSelected(c1_n53);
}
