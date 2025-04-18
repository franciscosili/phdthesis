#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__RZ__ph_reta__c__pt20p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n87/
//=========  (Thu Apr  4 07:36:52 2024) by ROOT version 6.30/02
   TCanvas *c1_n87 = new TCanvas("c1_n87", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n87->SetHighLightColor(2);
   c1_n87->Range(0,0,1,1);
   c1_n87->SetFillColor(0);
   c1_n87->SetBorderMode(0);
   c1_n87->SetBorderSize(2);
   c1_n87->SetTickx(1);
   c1_n87->SetTicky(1);
   c1_n87->SetLeftMargin(0.16);
   c1_n87->SetRightMargin(0.05);
   c1_n87->SetTopMargin(0.05);
   c1_n87->SetBottomMargin(0.16);
   c1_n87->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2200 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2200->Draw();
   dw__2200->cd();
   dw__2200->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2200->SetFillColor(0);
   dw__2200->SetFillStyle(4000);
   dw__2200->SetBorderMode(0);
   dw__2200->SetBorderSize(0);
   dw__2200->SetTickx(1);
   dw__2200->SetTicky(1);
   dw__2200->SetLeftMargin(0.120603);
   dw__2200->SetRightMargin(0.08040201);
   dw__2200->SetTopMargin(0);
   dw__2200->SetBottomMargin(0.2072539);
   dw__2200->SetFrameBorderMode(0);
   dw__2200->SetFrameBorderMode(0);
   Double_t xAxis1635[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__10595 = new TH1D("chist_dw__10595","",8, xAxis1635);
   chist_dw__10595->SetMinimum(0.2);
   chist_dw__10595->SetMaximum(3.2);
   chist_dw__10595->SetDirectory(nullptr);
   chist_dw__10595->SetStats(0);
   chist_dw__10595->SetLineColor(0);
   chist_dw__10595->SetLineWidth(0);
   chist_dw__10595->SetMarkerColor(0);
   chist_dw__10595->SetMarkerStyle(20);
   chist_dw__10595->SetMarkerSize(0);
   chist_dw__10595->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__10595->GetXaxis()->SetRange(1,4);
   chist_dw__10595->GetXaxis()->SetLabelFont(42);
   chist_dw__10595->GetXaxis()->SetLabelSize(0.08);
   chist_dw__10595->GetXaxis()->SetTitleSize(0.08);
   chist_dw__10595->GetXaxis()->SetTickLength(0.04);
   chist_dw__10595->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__10595->GetXaxis()->SetTitleFont(42);
   chist_dw__10595->GetYaxis()->SetTitle("Stretch");
   chist_dw__10595->GetYaxis()->CenterTitle(true);
   chist_dw__10595->GetYaxis()->SetNdivisions(405);
   chist_dw__10595->GetYaxis()->SetLabelFont(42);
   chist_dw__10595->GetYaxis()->SetLabelSize(0.08);
   chist_dw__10595->GetYaxis()->SetTitleSize(0.08);
   chist_dw__10595->GetYaxis()->SetTickLength(0.04);
   chist_dw__10595->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__10595->GetYaxis()->SetTitleFont(42);
   chist_dw__10595->GetZaxis()->SetLabelFont(42);
   chist_dw__10595->GetZaxis()->SetLabelSize(0.05);
   chist_dw__10595->GetZaxis()->SetTitleSize(0.05);
   chist_dw__10595->GetZaxis()->SetTitleOffset(1);
   chist_dw__10595->GetZaxis()->SetTitleFont(42);
   chist_dw__10595->Draw("");
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
   Double_t xAxis1636[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_3__10596 = new TH1D("stretch_tot_3__10596","",8, xAxis1636);
   stretch_tot_3__10596->SetBinContent(1,0.9241768);
   stretch_tot_3__10596->SetBinContent(2,0.9788918);
   stretch_tot_3__10596->SetBinContent(3,0.9484185);
   stretch_tot_3__10596->SetBinContent(4,0.9703695);
   stretch_tot_3__10596->SetBinContent(6,0.9614722);
   stretch_tot_3__10596->SetBinContent(7,0.9500685);
   stretch_tot_3__10596->SetBinContent(8,0.9906674);
   stretch_tot_3__10596->SetBinError(1,0.02394672);
   stretch_tot_3__10596->SetBinError(2,0.05062991);
   stretch_tot_3__10596->SetBinError(3,0.03927257);
   stretch_tot_3__10596->SetBinError(4,0.02777241);
   stretch_tot_3__10596->SetBinError(6,0.02150643);
   stretch_tot_3__10596->SetBinError(7,0.04570732);
   stretch_tot_3__10596->SetBinError(8,0.03852313);
   stretch_tot_3__10596->SetEntries(4766.195);
   stretch_tot_3__10596->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_3__10596->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_3__10596->SetLineColor(ci);
   stretch_tot_3__10596->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_3__10596->SetMarkerColor(ci);
   stretch_tot_3__10596->SetMarkerStyle(20);
   stretch_tot_3__10596->SetMarkerSize(0.8);
   stretch_tot_3__10596->GetXaxis()->SetRange(1,4);
   stretch_tot_3__10596->GetXaxis()->SetLabelFont(42);
   stretch_tot_3__10596->GetXaxis()->SetTitleFont(42);
   stretch_tot_3__10596->GetYaxis()->SetLabelFont(42);
   stretch_tot_3__10596->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_3__10596->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_3__10596->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_3__10596->GetYaxis()->SetTitleFont(42);
   stretch_tot_3__10596->GetZaxis()->SetLabelFont(42);
   stretch_tot_3__10596->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_3__10596->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_3__10596->GetZaxis()->SetTitleOffset(1);
   stretch_tot_3__10596->GetZaxis()->SetTitleFont(42);
   stretch_tot_3__10596->Draw("SAME E2");
   Double_t xAxis1637[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_3__10597 = new TH1D("stretch_stat_3__10597","",8, xAxis1637);
   stretch_stat_3__10597->SetBinContent(1,0.9241768);
   stretch_stat_3__10597->SetBinContent(2,0.9788918);
   stretch_stat_3__10597->SetBinContent(3,0.9484185);
   stretch_stat_3__10597->SetBinContent(4,0.9703695);
   stretch_stat_3__10597->SetBinContent(6,0.9614722);
   stretch_stat_3__10597->SetBinContent(7,0.9500685);
   stretch_stat_3__10597->SetBinContent(8,0.9906674);
   stretch_stat_3__10597->SetBinError(1,0.01718064);
   stretch_stat_3__10597->SetBinError(2,0.0345208);
   stretch_stat_3__10597->SetBinError(3,0.02019463);
   stretch_stat_3__10597->SetBinError(4,0.025348);
   stretch_stat_3__10597->SetBinError(6,0.018938);
   stretch_stat_3__10597->SetBinError(7,0.02487589);
   stretch_stat_3__10597->SetBinError(8,0.0240304);
   stretch_stat_3__10597->SetEntries(11048.8);
   stretch_stat_3__10597->SetStats(0);
   stretch_stat_3__10597->SetLineWidth(2);
   stretch_stat_3__10597->SetMarkerStyle(20);
   stretch_stat_3__10597->SetMarkerSize(0.8);
   stretch_stat_3__10597->GetXaxis()->SetRange(1,4);
   stretch_stat_3__10597->GetXaxis()->SetLabelFont(42);
   stretch_stat_3__10597->GetXaxis()->SetTitleFont(42);
   stretch_stat_3__10597->GetYaxis()->SetLabelFont(42);
   stretch_stat_3__10597->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_3__10597->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_3__10597->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_3__10597->GetYaxis()->SetTitleFont(42);
   stretch_stat_3__10597->GetZaxis()->SetLabelFont(42);
   stretch_stat_3__10597->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_3__10597->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_3__10597->GetZaxis()->SetTitleOffset(1);
   stretch_stat_3__10597->GetZaxis()->SetTitleFont(42);
   stretch_stat_3__10597->Draw("SAME PZ");
   dw__2200->Modified();
   c1_n87->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2201 = new TPad("up", "up",0,0.5,1,1);
   up__2201->Draw();
   up__2201->cd();
   up__2201->Range(-0.3577359,-1.646424,2.608491,2.08687);
   up__2201->SetFillColor(0);
   up__2201->SetFillStyle(4000);
   up__2201->SetBorderMode(0);
   up__2201->SetBorderSize(0);
   up__2201->SetTickx(1);
   up__2201->SetTicky(1);
   up__2201->SetLeftMargin(0.120603);
   up__2201->SetRightMargin(0.08040201);
   up__2201->SetBottomMargin(0.01243523);
   up__2201->SetFrameBorderMode(0);
   up__2201->SetFrameBorderMode(0);
   Double_t xAxis1638[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__10598 = new TH1D("chist__10598","",8, xAxis1638);
   chist__10598->SetMinimum(-1.6);
   chist__10598->SetMaximum(1.7);
   chist__10598->SetDirectory(nullptr);
   chist__10598->SetStats(0);
   chist__10598->SetLineColor(0);
   chist__10598->SetLineWidth(0);
   chist__10598->SetMarkerColor(0);
   chist__10598->SetMarkerStyle(20);
   chist__10598->SetMarkerSize(0);
   chist__10598->GetXaxis()->SetRange(1,4);
   chist__10598->GetXaxis()->SetNdivisions(4000510);
   chist__10598->GetXaxis()->SetLabelFont(42);
   chist__10598->GetXaxis()->SetLabelSize(0);
   chist__10598->GetXaxis()->SetTitleSize(0.08);
   chist__10598->GetXaxis()->SetTickLength(0.04);
   chist__10598->GetXaxis()->SetTitleOffset(2.020933);
   chist__10598->GetXaxis()->SetTitleFont(42);
   chist__10598->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__10598->GetYaxis()->SetNdivisions(3000510);
   chist__10598->GetYaxis()->SetLabelFont(42);
   chist__10598->GetYaxis()->SetLabelSize(0.08);
   chist__10598->GetYaxis()->SetTitleSize(0.08);
   chist__10598->GetYaxis()->SetTickLength(0.04);
   chist__10598->GetYaxis()->SetTitleOffset(0.727387);
   chist__10598->GetYaxis()->SetTitleFont(42);
   chist__10598->GetZaxis()->SetLabelFont(42);
   chist__10598->GetZaxis()->SetLabelSize(0.05);
   chist__10598->GetZaxis()->SetTitleSize(0.05);
   chist__10598->GetZaxis()->SetTitleOffset(1);
   chist__10598->GetZaxis()->SetTitleFont(42);
   chist__10598->Draw("pe");
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
      tex = new TLatex(0.160804,0.5098,"20.00 #leq p_{T}^{#gamma} [GeV] < 30.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1639[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_3__10599 = new TH1D("shift_tot_3__10599","",8, xAxis1639);
   shift_tot_3__10599->SetBinContent(1,-0.05864797);
   shift_tot_3__10599->SetBinContent(2,-0.06996758);
   shift_tot_3__10599->SetBinContent(3,-0.1319063);
   shift_tot_3__10599->SetBinContent(4,-0.1630893);
   shift_tot_3__10599->SetBinContent(6,-0.215616);
   shift_tot_3__10599->SetBinContent(7,-0.2625167);
   shift_tot_3__10599->SetBinContent(8,-0.3916514);
   shift_tot_3__10599->SetBinError(1,0.02042893);
   shift_tot_3__10599->SetBinError(2,0.03564544);
   shift_tot_3__10599->SetBinError(3,0.03168132);
   shift_tot_3__10599->SetBinError(4,0.02836266);
   shift_tot_3__10599->SetBinError(6,0.01795099);
   shift_tot_3__10599->SetBinError(7,0.02354429);
   shift_tot_3__10599->SetBinError(8,0.03648326);
   shift_tot_3__10599->SetEntries(293.2966);
   shift_tot_3__10599->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_3__10599->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_3__10599->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_3__10599->SetMarkerColor(ci);
   shift_tot_3__10599->SetMarkerStyle(20);
   shift_tot_3__10599->SetMarkerSize(0.8);
   shift_tot_3__10599->GetXaxis()->SetRange(1,4);
   shift_tot_3__10599->GetXaxis()->SetLabelFont(42);
   shift_tot_3__10599->GetXaxis()->SetTitleFont(42);
   shift_tot_3__10599->GetYaxis()->SetLabelFont(42);
   shift_tot_3__10599->GetYaxis()->SetLabelSize(0.05);
   shift_tot_3__10599->GetYaxis()->SetTitleSize(0.05);
   shift_tot_3__10599->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_3__10599->GetYaxis()->SetTitleFont(42);
   shift_tot_3__10599->GetZaxis()->SetLabelFont(42);
   shift_tot_3__10599->GetZaxis()->SetLabelSize(0.05);
   shift_tot_3__10599->GetZaxis()->SetTitleSize(0.05);
   shift_tot_3__10599->GetZaxis()->SetTitleOffset(1);
   shift_tot_3__10599->GetZaxis()->SetTitleFont(42);
   shift_tot_3__10599->Draw("SAME E2");
   Double_t xAxis1640[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_3__10600 = new TH1D("shift_stat_3__10600","",8, xAxis1640);
   shift_stat_3__10600->SetBinContent(1,-0.05864797);
   shift_stat_3__10600->SetBinContent(2,-0.06996758);
   shift_stat_3__10600->SetBinContent(3,-0.1319063);
   shift_stat_3__10600->SetBinContent(4,-0.1630893);
   shift_stat_3__10600->SetBinContent(6,-0.215616);
   shift_stat_3__10600->SetBinContent(7,-0.2625167);
   shift_stat_3__10600->SetBinContent(8,-0.3916514);
   shift_stat_3__10600->SetBinError(1,0.01680453);
   shift_stat_3__10600->SetBinError(2,0.03178424);
   shift_stat_3__10600->SetBinError(3,0.0204597);
   shift_stat_3__10600->SetBinError(4,0.02426356);
   shift_stat_3__10600->SetBinError(6,0.01549011);
   shift_stat_3__10600->SetBinError(7,0.02242534);
   shift_stat_3__10600->SetBinError(8,0.02310173);
   shift_stat_3__10600->SetEntries(467.7426);
   shift_stat_3__10600->SetStats(0);
   shift_stat_3__10600->SetMarkerStyle(20);
   shift_stat_3__10600->SetMarkerSize(0.8);
   shift_stat_3__10600->GetXaxis()->SetRange(1,4);
   shift_stat_3__10600->GetXaxis()->SetLabelFont(42);
   shift_stat_3__10600->GetXaxis()->SetTitleFont(42);
   shift_stat_3__10600->GetYaxis()->SetLabelFont(42);
   shift_stat_3__10600->GetYaxis()->SetLabelSize(0.05);
   shift_stat_3__10600->GetYaxis()->SetTitleSize(0.05);
   shift_stat_3__10600->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_3__10600->GetYaxis()->SetTitleFont(42);
   shift_stat_3__10600->GetZaxis()->SetLabelFont(42);
   shift_stat_3__10600->GetZaxis()->SetLabelSize(0.05);
   shift_stat_3__10600->GetZaxis()->SetTitleSize(0.05);
   shift_stat_3__10600->GetZaxis()->SetTitleOffset(1);
   shift_stat_3__10600->GetZaxis()->SetTitleFont(42);
   shift_stat_3__10600->Draw("SAME PZ");
   Double_t xAxis1641[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__10601 = new TH1D("chist_copy__10601","",8, xAxis1641);
   chist_copy__10601->SetMinimum(-1.6);
   chist_copy__10601->SetMaximum(1.7);
   chist_copy__10601->SetDirectory(nullptr);
   chist_copy__10601->SetStats(0);
   chist_copy__10601->SetLineColor(0);
   chist_copy__10601->SetLineWidth(0);
   chist_copy__10601->SetMarkerColor(0);
   chist_copy__10601->SetMarkerStyle(20);
   chist_copy__10601->SetMarkerSize(0);
   chist_copy__10601->GetXaxis()->SetRange(1,4);
   chist_copy__10601->GetXaxis()->SetNdivisions(4000510);
   chist_copy__10601->GetXaxis()->SetLabelFont(42);
   chist_copy__10601->GetXaxis()->SetLabelSize(0);
   chist_copy__10601->GetXaxis()->SetTitleSize(0.08);
   chist_copy__10601->GetXaxis()->SetTickLength(0.04);
   chist_copy__10601->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__10601->GetXaxis()->SetTitleFont(42);
   chist_copy__10601->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__10601->GetYaxis()->SetNdivisions(3000510);
   chist_copy__10601->GetYaxis()->SetLabelFont(42);
   chist_copy__10601->GetYaxis()->SetLabelSize(0.08);
   chist_copy__10601->GetYaxis()->SetTitleSize(0.08);
   chist_copy__10601->GetYaxis()->SetTickLength(0.04);
   chist_copy__10601->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__10601->GetYaxis()->SetTitleFont(42);
   chist_copy__10601->GetZaxis()->SetLabelFont(42);
   chist_copy__10601->GetZaxis()->SetLabelSize(0.05);
   chist_copy__10601->GetZaxis()->SetTitleSize(0.05);
   chist_copy__10601->GetZaxis()->SetTitleOffset(1);
   chist_copy__10601->GetZaxis()->SetTitleFont(42);
   chist_copy__10601->Draw("sameaxis");
   up__2201->Modified();
   c1_n87->cd();
   c1_n87->Modified();
   c1_n87->SetSelected(c1_n87);
}
