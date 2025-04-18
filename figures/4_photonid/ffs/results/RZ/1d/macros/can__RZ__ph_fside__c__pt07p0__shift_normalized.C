#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__RZ__ph_fside__c__pt07p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n82/
//=========  (Thu Apr  4 07:36:55 2024) by ROOT version 6.30/02
   TCanvas *c1_n82 = new TCanvas("c1_n82", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n82->SetHighLightColor(2);
   c1_n82->Range(0,0,1,1);
   c1_n82->SetFillColor(0);
   c1_n82->SetBorderMode(0);
   c1_n82->SetBorderSize(2);
   c1_n82->SetTickx(1);
   c1_n82->SetTicky(1);
   c1_n82->SetLeftMargin(0.16);
   c1_n82->SetRightMargin(0.05);
   c1_n82->SetTopMargin(0.05);
   c1_n82->SetBottomMargin(0.16);
   c1_n82->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2344 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2344->Draw();
   dw__2344->cd();
   dw__2344->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2344->SetFillColor(0);
   dw__2344->SetFillStyle(4000);
   dw__2344->SetBorderMode(0);
   dw__2344->SetBorderSize(0);
   dw__2344->SetTickx(1);
   dw__2344->SetTicky(1);
   dw__2344->SetLeftMargin(0.120603);
   dw__2344->SetRightMargin(0.08040201);
   dw__2344->SetTopMargin(0);
   dw__2344->SetBottomMargin(0.2072539);
   dw__2344->SetFrameBorderMode(0);
   dw__2344->SetFrameBorderMode(0);
   Double_t xAxis2213[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__11173 = new TH1D("chist_dw__11173","",8, xAxis2213);
   chist_dw__11173->SetMinimum(0.2);
   chist_dw__11173->SetMaximum(3.2);
   chist_dw__11173->SetDirectory(nullptr);
   chist_dw__11173->SetStats(0);
   chist_dw__11173->SetLineColor(0);
   chist_dw__11173->SetLineWidth(0);
   chist_dw__11173->SetMarkerColor(0);
   chist_dw__11173->SetMarkerStyle(20);
   chist_dw__11173->SetMarkerSize(0);
   chist_dw__11173->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__11173->GetXaxis()->SetRange(1,4);
   chist_dw__11173->GetXaxis()->SetLabelFont(42);
   chist_dw__11173->GetXaxis()->SetLabelSize(0.08);
   chist_dw__11173->GetXaxis()->SetTitleSize(0.08);
   chist_dw__11173->GetXaxis()->SetTickLength(0.04);
   chist_dw__11173->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__11173->GetXaxis()->SetTitleFont(42);
   chist_dw__11173->GetYaxis()->SetTitle("Stretch");
   chist_dw__11173->GetYaxis()->CenterTitle(true);
   chist_dw__11173->GetYaxis()->SetNdivisions(405);
   chist_dw__11173->GetYaxis()->SetLabelFont(42);
   chist_dw__11173->GetYaxis()->SetLabelSize(0.08);
   chist_dw__11173->GetYaxis()->SetTitleSize(0.08);
   chist_dw__11173->GetYaxis()->SetTickLength(0.04);
   chist_dw__11173->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__11173->GetYaxis()->SetTitleFont(42);
   chist_dw__11173->GetZaxis()->SetLabelFont(42);
   chist_dw__11173->GetZaxis()->SetLabelSize(0.05);
   chist_dw__11173->GetZaxis()->SetTitleSize(0.05);
   chist_dw__11173->GetZaxis()->SetTitleOffset(1);
   chist_dw__11173->GetZaxis()->SetTitleFont(42);
   chist_dw__11173->Draw("");
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
   Double_t xAxis2214[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_1__11174 = new TH1D("stretch_tot_1__11174","",8, xAxis2214);
   stretch_tot_1__11174->SetBinContent(1,1.029874);
   stretch_tot_1__11174->SetBinContent(2,1.07052);
   stretch_tot_1__11174->SetBinContent(3,1.060251);
   stretch_tot_1__11174->SetBinContent(4,0.9976131);
   stretch_tot_1__11174->SetBinContent(6,1.024638);
   stretch_tot_1__11174->SetBinContent(7,1.108649);
   stretch_tot_1__11174->SetBinContent(8,1.10567);
   stretch_tot_1__11174->SetBinError(1,0.01657371);
   stretch_tot_1__11174->SetBinError(2,0.04354278);
   stretch_tot_1__11174->SetBinError(3,0.04707669);
   stretch_tot_1__11174->SetBinError(4,0.02112295);
   stretch_tot_1__11174->SetBinError(6,0.0189407);
   stretch_tot_1__11174->SetBinError(7,0.02739154);
   stretch_tot_1__11174->SetBinError(8,0.04510046);
   stretch_tot_1__11174->SetEntries(6860.297);
   stretch_tot_1__11174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_1__11174->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__11174->SetLineColor(ci);
   stretch_tot_1__11174->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_1__11174->SetMarkerColor(ci);
   stretch_tot_1__11174->SetMarkerStyle(20);
   stretch_tot_1__11174->SetMarkerSize(0.8);
   stretch_tot_1__11174->GetXaxis()->SetRange(1,4);
   stretch_tot_1__11174->GetXaxis()->SetLabelFont(42);
   stretch_tot_1__11174->GetXaxis()->SetTitleFont(42);
   stretch_tot_1__11174->GetYaxis()->SetLabelFont(42);
   stretch_tot_1__11174->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_1__11174->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_1__11174->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_1__11174->GetYaxis()->SetTitleFont(42);
   stretch_tot_1__11174->GetZaxis()->SetLabelFont(42);
   stretch_tot_1__11174->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_1__11174->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_1__11174->GetZaxis()->SetTitleOffset(1);
   stretch_tot_1__11174->GetZaxis()->SetTitleFont(42);
   stretch_tot_1__11174->Draw("SAME E2");
   Double_t xAxis2215[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_1__11175 = new TH1D("stretch_stat_1__11175","",8, xAxis2215);
   stretch_stat_1__11175->SetBinContent(1,1.029874);
   stretch_stat_1__11175->SetBinContent(2,1.07052);
   stretch_stat_1__11175->SetBinContent(3,1.060251);
   stretch_stat_1__11175->SetBinContent(4,0.9976131);
   stretch_stat_1__11175->SetBinContent(6,1.024638);
   stretch_stat_1__11175->SetBinContent(7,1.108649);
   stretch_stat_1__11175->SetBinContent(8,1.10567);
   stretch_stat_1__11175->SetBinError(1,0.01541098);
   stretch_stat_1__11175->SetBinError(2,0.03083833);
   stretch_stat_1__11175->SetBinError(3,0.02126287);
   stretch_stat_1__11175->SetBinError(4,0.01927303);
   stretch_stat_1__11175->SetBinError(6,0.01580628);
   stretch_stat_1__11175->SetBinError(7,0.01995984);
   stretch_stat_1__11175->SetBinError(8,0.01940361);
   stretch_stat_1__11175->SetEntries(18018.6);
   stretch_stat_1__11175->SetStats(0);
   stretch_stat_1__11175->SetLineWidth(2);
   stretch_stat_1__11175->SetMarkerStyle(20);
   stretch_stat_1__11175->SetMarkerSize(0.8);
   stretch_stat_1__11175->GetXaxis()->SetRange(1,4);
   stretch_stat_1__11175->GetXaxis()->SetLabelFont(42);
   stretch_stat_1__11175->GetXaxis()->SetTitleFont(42);
   stretch_stat_1__11175->GetYaxis()->SetLabelFont(42);
   stretch_stat_1__11175->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_1__11175->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_1__11175->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_1__11175->GetYaxis()->SetTitleFont(42);
   stretch_stat_1__11175->GetZaxis()->SetLabelFont(42);
   stretch_stat_1__11175->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_1__11175->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_1__11175->GetZaxis()->SetTitleOffset(1);
   stretch_stat_1__11175->GetZaxis()->SetTitleFont(42);
   stretch_stat_1__11175->Draw("SAME PZ");
   dw__2344->Modified();
   c1_n82->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2345 = new TPad("up", "up",0,0.5,1,1);
   up__2345->Draw();
   up__2345->cd();
   up__2345->Range(-0.3577359,-0.6365768,2.608491,2.304807);
   up__2345->SetFillColor(0);
   up__2345->SetFillStyle(4000);
   up__2345->SetBorderMode(0);
   up__2345->SetBorderSize(0);
   up__2345->SetTickx(1);
   up__2345->SetTicky(1);
   up__2345->SetLeftMargin(0.120603);
   up__2345->SetRightMargin(0.08040201);
   up__2345->SetBottomMargin(0.01243523);
   up__2345->SetFrameBorderMode(0);
   up__2345->SetFrameBorderMode(0);
   Double_t xAxis2216[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__11176 = new TH1D("chist__11176","",8, xAxis2216);
   chist__11176->SetMinimum(-0.6);
   chist__11176->SetMaximum(2);
   chist__11176->SetDirectory(nullptr);
   chist__11176->SetStats(0);
   chist__11176->SetLineColor(0);
   chist__11176->SetLineWidth(0);
   chist__11176->SetMarkerColor(0);
   chist__11176->SetMarkerStyle(20);
   chist__11176->SetMarkerSize(0);
   chist__11176->GetXaxis()->SetRange(1,4);
   chist__11176->GetXaxis()->SetNdivisions(4000510);
   chist__11176->GetXaxis()->SetLabelFont(42);
   chist__11176->GetXaxis()->SetLabelSize(0);
   chist__11176->GetXaxis()->SetTitleSize(0.08);
   chist__11176->GetXaxis()->SetTickLength(0.04);
   chist__11176->GetXaxis()->SetTitleOffset(2.020933);
   chist__11176->GetXaxis()->SetTitleFont(42);
   chist__11176->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__11176->GetYaxis()->SetNdivisions(3000510);
   chist__11176->GetYaxis()->SetLabelFont(42);
   chist__11176->GetYaxis()->SetLabelSize(0.08);
   chist__11176->GetYaxis()->SetTitleSize(0.08);
   chist__11176->GetYaxis()->SetTickLength(0.04);
   chist__11176->GetYaxis()->SetTitleOffset(0.727387);
   chist__11176->GetYaxis()->SetTitleFont(42);
   chist__11176->GetZaxis()->SetLabelFont(42);
   chist__11176->GetZaxis()->SetLabelSize(0.05);
   chist__11176->GetZaxis()->SetTitleSize(0.05);
   chist__11176->GetZaxis()->SetTitleOffset(1);
   chist__11176->GetZaxis()->SetTitleFont(42);
   chist__11176->Draw("pe");
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
      tex = new TLatex(0.160804,0.5714,"Converted #gamma");
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
   Double_t xAxis2217[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_1__11177 = new TH1D("shift_tot_1__11177","",8, xAxis2217);
   shift_tot_1__11177->SetBinContent(1,0.1096607);
   shift_tot_1__11177->SetBinContent(2,0.1718843);
   shift_tot_1__11177->SetBinContent(3,0.1690525);
   shift_tot_1__11177->SetBinContent(4,0.1654608);
   shift_tot_1__11177->SetBinContent(6,0.2420201);
   shift_tot_1__11177->SetBinContent(7,0.4284036);
   shift_tot_1__11177->SetBinContent(8,0.3729914);
   shift_tot_1__11177->SetBinError(1,0.01907203);
   shift_tot_1__11177->SetBinError(2,0.03160359);
   shift_tot_1__11177->SetBinError(3,0.02093682);
   shift_tot_1__11177->SetBinError(4,0.040873);
   shift_tot_1__11177->SetBinError(6,0.02346322);
   shift_tot_1__11177->SetBinError(7,0.01268727);
   shift_tot_1__11177->SetBinError(8,0.01879173);
   shift_tot_1__11177->SetEntries(607.0968);
   shift_tot_1__11177->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_1__11177->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__11177->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_1__11177->SetMarkerColor(ci);
   shift_tot_1__11177->SetMarkerStyle(20);
   shift_tot_1__11177->SetMarkerSize(0.8);
   shift_tot_1__11177->GetXaxis()->SetRange(1,4);
   shift_tot_1__11177->GetXaxis()->SetLabelFont(42);
   shift_tot_1__11177->GetXaxis()->SetTitleFont(42);
   shift_tot_1__11177->GetYaxis()->SetLabelFont(42);
   shift_tot_1__11177->GetYaxis()->SetLabelSize(0.05);
   shift_tot_1__11177->GetYaxis()->SetTitleSize(0.05);
   shift_tot_1__11177->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_1__11177->GetYaxis()->SetTitleFont(42);
   shift_tot_1__11177->GetZaxis()->SetLabelFont(42);
   shift_tot_1__11177->GetZaxis()->SetLabelSize(0.05);
   shift_tot_1__11177->GetZaxis()->SetTitleSize(0.05);
   shift_tot_1__11177->GetZaxis()->SetTitleOffset(1);
   shift_tot_1__11177->GetZaxis()->SetTitleFont(42);
   shift_tot_1__11177->Draw("SAME E2");
   Double_t xAxis2218[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_1__11178 = new TH1D("shift_stat_1__11178","",8, xAxis2218);
   shift_stat_1__11178->SetBinContent(1,0.1096607);
   shift_stat_1__11178->SetBinContent(2,0.1718843);
   shift_stat_1__11178->SetBinContent(3,0.1690525);
   shift_stat_1__11178->SetBinContent(4,0.1654608);
   shift_stat_1__11178->SetBinContent(6,0.2420201);
   shift_stat_1__11178->SetBinContent(7,0.4284036);
   shift_stat_1__11178->SetBinContent(8,0.3729914);
   shift_stat_1__11178->SetBinError(1,0.009687854);
   shift_stat_1__11178->SetBinError(2,0.0220138);
   shift_stat_1__11178->SetBinError(3,0.01691372);
   shift_stat_1__11178->SetBinError(4,0.01958487);
   shift_stat_1__11178->SetBinError(6,0.01266029);
   shift_stat_1__11178->SetBinError(7,0.01157506);
   shift_stat_1__11178->SetBinError(8,0.008221552);
   shift_stat_1__11178->SetEntries(1710.507);
   shift_stat_1__11178->SetStats(0);
   shift_stat_1__11178->SetMarkerStyle(20);
   shift_stat_1__11178->SetMarkerSize(0.8);
   shift_stat_1__11178->GetXaxis()->SetRange(1,4);
   shift_stat_1__11178->GetXaxis()->SetLabelFont(42);
   shift_stat_1__11178->GetXaxis()->SetTitleFont(42);
   shift_stat_1__11178->GetYaxis()->SetLabelFont(42);
   shift_stat_1__11178->GetYaxis()->SetLabelSize(0.05);
   shift_stat_1__11178->GetYaxis()->SetTitleSize(0.05);
   shift_stat_1__11178->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_1__11178->GetYaxis()->SetTitleFont(42);
   shift_stat_1__11178->GetZaxis()->SetLabelFont(42);
   shift_stat_1__11178->GetZaxis()->SetLabelSize(0.05);
   shift_stat_1__11178->GetZaxis()->SetTitleSize(0.05);
   shift_stat_1__11178->GetZaxis()->SetTitleOffset(1);
   shift_stat_1__11178->GetZaxis()->SetTitleFont(42);
   shift_stat_1__11178->Draw("SAME PZ");
   Double_t xAxis2219[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__11179 = new TH1D("chist_copy__11179","",8, xAxis2219);
   chist_copy__11179->SetMinimum(-0.6);
   chist_copy__11179->SetMaximum(2);
   chist_copy__11179->SetDirectory(nullptr);
   chist_copy__11179->SetStats(0);
   chist_copy__11179->SetLineColor(0);
   chist_copy__11179->SetLineWidth(0);
   chist_copy__11179->SetMarkerColor(0);
   chist_copy__11179->SetMarkerStyle(20);
   chist_copy__11179->SetMarkerSize(0);
   chist_copy__11179->GetXaxis()->SetRange(1,4);
   chist_copy__11179->GetXaxis()->SetNdivisions(4000510);
   chist_copy__11179->GetXaxis()->SetLabelFont(42);
   chist_copy__11179->GetXaxis()->SetLabelSize(0);
   chist_copy__11179->GetXaxis()->SetTitleSize(0.08);
   chist_copy__11179->GetXaxis()->SetTickLength(0.04);
   chist_copy__11179->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__11179->GetXaxis()->SetTitleFont(42);
   chist_copy__11179->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__11179->GetYaxis()->SetNdivisions(3000510);
   chist_copy__11179->GetYaxis()->SetLabelFont(42);
   chist_copy__11179->GetYaxis()->SetLabelSize(0.08);
   chist_copy__11179->GetYaxis()->SetTitleSize(0.08);
   chist_copy__11179->GetYaxis()->SetTickLength(0.04);
   chist_copy__11179->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__11179->GetYaxis()->SetTitleFont(42);
   chist_copy__11179->GetZaxis()->SetLabelFont(42);
   chist_copy__11179->GetZaxis()->SetLabelSize(0.05);
   chist_copy__11179->GetZaxis()->SetTitleSize(0.05);
   chist_copy__11179->GetZaxis()->SetTitleOffset(1);
   chist_copy__11179->GetZaxis()->SetTitleFont(42);
   chist_copy__11179->Draw("sameaxis");
   up__2345->Modified();
   c1_n82->cd();
   c1_n82->Modified();
   c1_n82->SetSelected(c1_n82);
}
