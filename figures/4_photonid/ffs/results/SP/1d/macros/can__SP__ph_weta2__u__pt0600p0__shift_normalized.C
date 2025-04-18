#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_weta2__u__pt0600p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n51/
//=========  (Thu Apr  4 17:59:22 2024) by ROOT version 6.30/02
   TCanvas *c1_n51 = new TCanvas("c1_n51", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n51->SetHighLightColor(2);
   c1_n51->Range(0,0,1,1);
   c1_n51->SetFillColor(0);
   c1_n51->SetBorderMode(0);
   c1_n51->SetBorderSize(2);
   c1_n51->SetTickx(1);
   c1_n51->SetTicky(1);
   c1_n51->SetLeftMargin(0.16);
   c1_n51->SetRightMargin(0.05);
   c1_n51->SetTopMargin(0.05);
   c1_n51->SetBottomMargin(0.16);
   c1_n51->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1930 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1930->Draw();
   dw__1930->cd();
   dw__1930->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1930->SetFillColor(0);
   dw__1930->SetFillStyle(4000);
   dw__1930->SetBorderMode(0);
   dw__1930->SetBorderSize(0);
   dw__1930->SetTickx(1);
   dw__1930->SetTicky(1);
   dw__1930->SetLeftMargin(0.120603);
   dw__1930->SetRightMargin(0.08040201);
   dw__1930->SetTopMargin(0);
   dw__1930->SetBottomMargin(0.2072539);
   dw__1930->SetFrameBorderMode(0);
   dw__1930->SetFrameBorderMode(0);
   Double_t xAxis1450[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__9290 = new TH1D("chist_dw__9290","",8, xAxis1450);
   chist_dw__9290->SetMinimum(0.2);
   chist_dw__9290->SetMaximum(3.2);
   chist_dw__9290->SetDirectory(nullptr);
   chist_dw__9290->SetStats(0);
   chist_dw__9290->SetLineColor(0);
   chist_dw__9290->SetLineWidth(0);
   chist_dw__9290->SetMarkerColor(0);
   chist_dw__9290->SetMarkerStyle(20);
   chist_dw__9290->SetMarkerSize(0);
   chist_dw__9290->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__9290->GetXaxis()->SetRange(1,7);
   chist_dw__9290->GetXaxis()->SetLabelFont(42);
   chist_dw__9290->GetXaxis()->SetLabelSize(0.08);
   chist_dw__9290->GetXaxis()->SetTitleSize(0.08);
   chist_dw__9290->GetXaxis()->SetTickLength(0.04);
   chist_dw__9290->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__9290->GetXaxis()->SetTitleFont(42);
   chist_dw__9290->GetYaxis()->SetTitle("Stretch");
   chist_dw__9290->GetYaxis()->CenterTitle(true);
   chist_dw__9290->GetYaxis()->SetNdivisions(405);
   chist_dw__9290->GetYaxis()->SetLabelFont(42);
   chist_dw__9290->GetYaxis()->SetLabelSize(0.08);
   chist_dw__9290->GetYaxis()->SetTitleSize(0.08);
   chist_dw__9290->GetYaxis()->SetTickLength(0.04);
   chist_dw__9290->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__9290->GetYaxis()->SetTitleFont(42);
   chist_dw__9290->GetZaxis()->SetLabelFont(42);
   chist_dw__9290->GetZaxis()->SetLabelSize(0.05);
   chist_dw__9290->GetZaxis()->SetTitleSize(0.05);
   chist_dw__9290->GetZaxis()->SetTitleOffset(1);
   chist_dw__9290->GetZaxis()->SetTitleFont(42);
   chist_dw__9290->Draw("");
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
   Double_t xAxis1451[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_7__9291 = new TH1D("stretch_tot_7__9291","",8, xAxis1451);
   stretch_tot_7__9291->SetBinContent(1,1.133226);
   stretch_tot_7__9291->SetBinContent(2,1.160175);
   stretch_tot_7__9291->SetBinContent(3,1.095567);
   stretch_tot_7__9291->SetBinContent(4,1.259216);
   stretch_tot_7__9291->SetBinContent(6,1.064641);
   stretch_tot_7__9291->SetBinContent(7,1.166867);
   stretch_tot_7__9291->SetBinContent(8,1.02814);
   stretch_tot_7__9291->SetBinError(1,0.02386184);
   stretch_tot_7__9291->SetBinError(2,0.03734093);
   stretch_tot_7__9291->SetBinError(3,0.02826016);
   stretch_tot_7__9291->SetBinError(4,0.04304172);
   stretch_tot_7__9291->SetBinError(6,0.03484313);
   stretch_tot_7__9291->SetBinError(7,0.0614585);
   stretch_tot_7__9291->SetBinError(8,0.07153381);
   stretch_tot_7__9291->SetEntries(4247.287);
   stretch_tot_7__9291->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_7__9291->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_7__9291->SetLineColor(ci);
   stretch_tot_7__9291->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_7__9291->SetMarkerColor(ci);
   stretch_tot_7__9291->SetMarkerStyle(20);
   stretch_tot_7__9291->SetMarkerSize(0.8);
   stretch_tot_7__9291->GetXaxis()->SetRange(1,7);
   stretch_tot_7__9291->GetXaxis()->SetLabelFont(42);
   stretch_tot_7__9291->GetXaxis()->SetTitleFont(42);
   stretch_tot_7__9291->GetYaxis()->SetLabelFont(42);
   stretch_tot_7__9291->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_7__9291->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_7__9291->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_7__9291->GetYaxis()->SetTitleFont(42);
   stretch_tot_7__9291->GetZaxis()->SetLabelFont(42);
   stretch_tot_7__9291->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_7__9291->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_7__9291->GetZaxis()->SetTitleOffset(1);
   stretch_tot_7__9291->GetZaxis()->SetTitleFont(42);
   stretch_tot_7__9291->Draw("SAME E2");
   Double_t xAxis1452[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_7__9292 = new TH1D("stretch_stat_7__9292","",8, xAxis1452);
   stretch_stat_7__9292->SetBinContent(1,1.133226);
   stretch_stat_7__9292->SetBinContent(2,1.160175);
   stretch_stat_7__9292->SetBinContent(3,1.095567);
   stretch_stat_7__9292->SetBinContent(4,1.259216);
   stretch_stat_7__9292->SetBinContent(6,1.064641);
   stretch_stat_7__9292->SetBinContent(7,1.166867);
   stretch_stat_7__9292->SetBinContent(8,1.02814);
   stretch_stat_7__9292->SetBinError(1,0.01513653);
   stretch_stat_7__9292->SetBinError(2,0.0247775);
   stretch_stat_7__9292->SetBinError(3,0.02155391);
   stretch_stat_7__9292->SetBinError(4,0.03532852);
   stretch_stat_7__9292->SetBinError(6,0.03480353);
   stretch_stat_7__9292->SetBinError(7,0.05959136);
   stretch_stat_7__9292->SetBinError(8,0.06687484);
   stretch_stat_7__9292->SetEntries(5303.802);
   stretch_stat_7__9292->SetStats(0);
   stretch_stat_7__9292->SetLineWidth(2);
   stretch_stat_7__9292->SetMarkerStyle(20);
   stretch_stat_7__9292->SetMarkerSize(0.8);
   stretch_stat_7__9292->GetXaxis()->SetRange(1,7);
   stretch_stat_7__9292->GetXaxis()->SetLabelFont(42);
   stretch_stat_7__9292->GetXaxis()->SetTitleFont(42);
   stretch_stat_7__9292->GetYaxis()->SetLabelFont(42);
   stretch_stat_7__9292->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_7__9292->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_7__9292->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_7__9292->GetYaxis()->SetTitleFont(42);
   stretch_stat_7__9292->GetZaxis()->SetLabelFont(42);
   stretch_stat_7__9292->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_7__9292->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_7__9292->GetZaxis()->SetTitleOffset(1);
   stretch_stat_7__9292->GetZaxis()->SetTitleFont(42);
   stretch_stat_7__9292->Draw("SAME PZ");
   dw__1930->Modified();
   c1_n51->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1931 = new TPad("up", "up",0,0.5,1,1);
   up__1931->Draw();
   up__1931->cd();
   up__1931->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__1931->SetFillColor(0);
   up__1931->SetFillStyle(4000);
   up__1931->SetBorderMode(0);
   up__1931->SetBorderSize(0);
   up__1931->SetTickx(1);
   up__1931->SetTicky(1);
   up__1931->SetLeftMargin(0.120603);
   up__1931->SetRightMargin(0.08040201);
   up__1931->SetBottomMargin(0.01243523);
   up__1931->SetFrameBorderMode(0);
   up__1931->SetFrameBorderMode(0);
   Double_t xAxis1453[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__9293 = new TH1D("chist__9293","",8, xAxis1453);
   chist__9293->SetMinimum(-0.9);
   chist__9293->SetMaximum(2);
   chist__9293->SetDirectory(nullptr);
   chist__9293->SetStats(0);
   chist__9293->SetLineColor(0);
   chist__9293->SetLineWidth(0);
   chist__9293->SetMarkerColor(0);
   chist__9293->SetMarkerStyle(20);
   chist__9293->SetMarkerSize(0);
   chist__9293->GetXaxis()->SetRange(1,7);
   chist__9293->GetXaxis()->SetNdivisions(4000510);
   chist__9293->GetXaxis()->SetLabelFont(42);
   chist__9293->GetXaxis()->SetLabelSize(0);
   chist__9293->GetXaxis()->SetTitleSize(0.08);
   chist__9293->GetXaxis()->SetTickLength(0.04);
   chist__9293->GetXaxis()->SetTitleOffset(2.020933);
   chist__9293->GetXaxis()->SetTitleFont(42);
   chist__9293->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__9293->GetYaxis()->SetNdivisions(3000510);
   chist__9293->GetYaxis()->SetLabelFont(42);
   chist__9293->GetYaxis()->SetLabelSize(0.08);
   chist__9293->GetYaxis()->SetTitleSize(0.08);
   chist__9293->GetYaxis()->SetTickLength(0.04);
   chist__9293->GetYaxis()->SetTitleOffset(0.727387);
   chist__9293->GetYaxis()->SetTitleFont(42);
   chist__9293->GetZaxis()->SetLabelFont(42);
   chist__9293->GetZaxis()->SetLabelSize(0.05);
   chist__9293->GetZaxis()->SetTitleSize(0.05);
   chist__9293->GetZaxis()->SetTitleOffset(1);
   chist__9293->GetZaxis()->SetTitleFont(42);
   chist__9293->Draw("pe");
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
      tex = new TLatex(0.160804,0.5714,"Unconverted #gamma");
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
   Double_t xAxis1454[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_7__9294 = new TH1D("shift_tot_7__9294","",8, xAxis1454);
   shift_tot_7__9294->SetBinContent(1,0.3673561);
   shift_tot_7__9294->SetBinContent(2,0.4256685);
   shift_tot_7__9294->SetBinContent(3,0.1371951);
   shift_tot_7__9294->SetBinContent(4,0.2945779);
   shift_tot_7__9294->SetBinContent(6,0.8217189);
   shift_tot_7__9294->SetBinContent(7,0.9319371);
   shift_tot_7__9294->SetBinContent(8,1.04473);
   shift_tot_7__9294->SetBinError(1,0.02795765);
   shift_tot_7__9294->SetBinError(2,0.03770717);
   shift_tot_7__9294->SetBinError(3,0.02643135);
   shift_tot_7__9294->SetBinError(4,0.03101294);
   shift_tot_7__9294->SetBinError(6,0.03893652);
   shift_tot_7__9294->SetBinError(7,0.07085192);
   shift_tot_7__9294->SetBinError(8,0.08919867);
   shift_tot_7__9294->SetEntries(881.7672);
   shift_tot_7__9294->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_7__9294->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_7__9294->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_7__9294->SetMarkerColor(ci);
   shift_tot_7__9294->SetMarkerStyle(20);
   shift_tot_7__9294->SetMarkerSize(0.8);
   shift_tot_7__9294->GetXaxis()->SetRange(1,7);
   shift_tot_7__9294->GetXaxis()->SetLabelFont(42);
   shift_tot_7__9294->GetXaxis()->SetTitleFont(42);
   shift_tot_7__9294->GetYaxis()->SetLabelFont(42);
   shift_tot_7__9294->GetYaxis()->SetLabelSize(0.05);
   shift_tot_7__9294->GetYaxis()->SetTitleSize(0.05);
   shift_tot_7__9294->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_7__9294->GetYaxis()->SetTitleFont(42);
   shift_tot_7__9294->GetZaxis()->SetLabelFont(42);
   shift_tot_7__9294->GetZaxis()->SetLabelSize(0.05);
   shift_tot_7__9294->GetZaxis()->SetTitleSize(0.05);
   shift_tot_7__9294->GetZaxis()->SetTitleOffset(1);
   shift_tot_7__9294->GetZaxis()->SetTitleFont(42);
   shift_tot_7__9294->Draw("SAME E2");
   Double_t xAxis1455[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_7__9295 = new TH1D("shift_stat_7__9295","",8, xAxis1455);
   shift_stat_7__9295->SetBinContent(1,0.3673561);
   shift_stat_7__9295->SetBinContent(2,0.4256685);
   shift_stat_7__9295->SetBinContent(3,0.1371951);
   shift_stat_7__9295->SetBinContent(4,0.2945779);
   shift_stat_7__9295->SetBinContent(6,0.8217189);
   shift_stat_7__9295->SetBinContent(7,0.9319371);
   shift_stat_7__9295->SetBinContent(8,1.04473);
   shift_stat_7__9295->SetBinError(1,0.01373);
   shift_stat_7__9295->SetBinError(2,0.02355347);
   shift_stat_7__9295->SetBinError(3,0.01977838);
   shift_stat_7__9295->SetBinError(4,0.03003254);
   shift_stat_7__9295->SetBinError(6,0.03844237);
   shift_stat_7__9295->SetBinError(7,0.0689591);
   shift_stat_7__9295->SetBinError(8,0.08323189);
   shift_stat_7__9295->SetEntries(1065.07);
   shift_stat_7__9295->SetStats(0);
   shift_stat_7__9295->SetMarkerStyle(20);
   shift_stat_7__9295->SetMarkerSize(0.8);
   shift_stat_7__9295->GetXaxis()->SetRange(1,7);
   shift_stat_7__9295->GetXaxis()->SetLabelFont(42);
   shift_stat_7__9295->GetXaxis()->SetTitleFont(42);
   shift_stat_7__9295->GetYaxis()->SetLabelFont(42);
   shift_stat_7__9295->GetYaxis()->SetLabelSize(0.05);
   shift_stat_7__9295->GetYaxis()->SetTitleSize(0.05);
   shift_stat_7__9295->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_7__9295->GetYaxis()->SetTitleFont(42);
   shift_stat_7__9295->GetZaxis()->SetLabelFont(42);
   shift_stat_7__9295->GetZaxis()->SetLabelSize(0.05);
   shift_stat_7__9295->GetZaxis()->SetTitleSize(0.05);
   shift_stat_7__9295->GetZaxis()->SetTitleOffset(1);
   shift_stat_7__9295->GetZaxis()->SetTitleFont(42);
   shift_stat_7__9295->Draw("SAME PZ");
   Double_t xAxis1456[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__9296 = new TH1D("chist_copy__9296","",8, xAxis1456);
   chist_copy__9296->SetMinimum(-0.9);
   chist_copy__9296->SetMaximum(2);
   chist_copy__9296->SetDirectory(nullptr);
   chist_copy__9296->SetStats(0);
   chist_copy__9296->SetLineColor(0);
   chist_copy__9296->SetLineWidth(0);
   chist_copy__9296->SetMarkerColor(0);
   chist_copy__9296->SetMarkerStyle(20);
   chist_copy__9296->SetMarkerSize(0);
   chist_copy__9296->GetXaxis()->SetRange(1,7);
   chist_copy__9296->GetXaxis()->SetNdivisions(4000510);
   chist_copy__9296->GetXaxis()->SetLabelFont(42);
   chist_copy__9296->GetXaxis()->SetLabelSize(0);
   chist_copy__9296->GetXaxis()->SetTitleSize(0.08);
   chist_copy__9296->GetXaxis()->SetTickLength(0.04);
   chist_copy__9296->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__9296->GetXaxis()->SetTitleFont(42);
   chist_copy__9296->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__9296->GetYaxis()->SetNdivisions(3000510);
   chist_copy__9296->GetYaxis()->SetLabelFont(42);
   chist_copy__9296->GetYaxis()->SetLabelSize(0.08);
   chist_copy__9296->GetYaxis()->SetTitleSize(0.08);
   chist_copy__9296->GetYaxis()->SetTickLength(0.04);
   chist_copy__9296->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__9296->GetYaxis()->SetTitleFont(42);
   chist_copy__9296->GetZaxis()->SetLabelFont(42);
   chist_copy__9296->GetZaxis()->SetLabelSize(0.05);
   chist_copy__9296->GetZaxis()->SetTitleSize(0.05);
   chist_copy__9296->GetZaxis()->SetTitleOffset(1);
   chist_copy__9296->GetZaxis()->SetTitleFont(42);
   chist_copy__9296->Draw("sameaxis");
   up__1931->Modified();
   c1_n51->cd();
   c1_n51->Modified();
   c1_n51->SetSelected(c1_n51);
}
