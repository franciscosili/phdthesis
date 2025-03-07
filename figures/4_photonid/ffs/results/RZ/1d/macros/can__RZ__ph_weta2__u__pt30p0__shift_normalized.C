#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__RZ__ph_weta2__u__pt30p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n12/
//=========  (Thu Apr  4 07:36:50 2024) by ROOT version 6.30/02
   TCanvas *c1_n12 = new TCanvas("c1_n12", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n12->SetHighLightColor(2);
   c1_n12->Range(0,0,1,1);
   c1_n12->SetFillColor(0);
   c1_n12->SetBorderMode(0);
   c1_n12->SetBorderSize(2);
   c1_n12->SetTickx(1);
   c1_n12->SetTicky(1);
   c1_n12->SetLeftMargin(0.16);
   c1_n12->SetRightMargin(0.05);
   c1_n12->SetTopMargin(0.05);
   c1_n12->SetBottomMargin(0.16);
   c1_n12->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__2070 = new TPad("dw", "dw",0,0,1,0.5);
   dw__2070->Draw();
   dw__2070->cd();
   dw__2070->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__2070->SetFillColor(0);
   dw__2070->SetFillStyle(4000);
   dw__2070->SetBorderMode(0);
   dw__2070->SetBorderSize(0);
   dw__2070->SetTickx(1);
   dw__2070->SetTicky(1);
   dw__2070->SetLeftMargin(0.120603);
   dw__2070->SetRightMargin(0.08040201);
   dw__2070->SetTopMargin(0);
   dw__2070->SetBottomMargin(0.2072539);
   dw__2070->SetFrameBorderMode(0);
   dw__2070->SetFrameBorderMode(0);
   Double_t xAxis1114[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__10074 = new TH1D("chist_dw__10074","",8, xAxis1114);
   chist_dw__10074->SetMinimum(0.2);
   chist_dw__10074->SetMaximum(3.2);
   chist_dw__10074->SetDirectory(nullptr);
   chist_dw__10074->SetStats(0);
   chist_dw__10074->SetLineColor(0);
   chist_dw__10074->SetLineWidth(0);
   chist_dw__10074->SetMarkerColor(0);
   chist_dw__10074->SetMarkerStyle(20);
   chist_dw__10074->SetMarkerSize(0);
   chist_dw__10074->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__10074->GetXaxis()->SetRange(1,4);
   chist_dw__10074->GetXaxis()->SetLabelFont(42);
   chist_dw__10074->GetXaxis()->SetLabelSize(0.08);
   chist_dw__10074->GetXaxis()->SetTitleSize(0.08);
   chist_dw__10074->GetXaxis()->SetTickLength(0.04);
   chist_dw__10074->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__10074->GetXaxis()->SetTitleFont(42);
   chist_dw__10074->GetYaxis()->SetTitle("Stretch");
   chist_dw__10074->GetYaxis()->CenterTitle(true);
   chist_dw__10074->GetYaxis()->SetNdivisions(405);
   chist_dw__10074->GetYaxis()->SetLabelFont(42);
   chist_dw__10074->GetYaxis()->SetLabelSize(0.08);
   chist_dw__10074->GetYaxis()->SetTitleSize(0.08);
   chist_dw__10074->GetYaxis()->SetTickLength(0.04);
   chist_dw__10074->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__10074->GetYaxis()->SetTitleFont(42);
   chist_dw__10074->GetZaxis()->SetLabelFont(42);
   chist_dw__10074->GetZaxis()->SetLabelSize(0.05);
   chist_dw__10074->GetZaxis()->SetTitleSize(0.05);
   chist_dw__10074->GetZaxis()->SetTitleOffset(1);
   chist_dw__10074->GetZaxis()->SetTitleFont(42);
   chist_dw__10074->Draw("");
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
   Double_t xAxis1115[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_4__10075 = new TH1D("stretch_tot_4__10075","",8, xAxis1115);
   stretch_tot_4__10075->SetBinContent(1,0.9950836);
   stretch_tot_4__10075->SetBinContent(2,1.003644);
   stretch_tot_4__10075->SetBinContent(3,0.9858654);
   stretch_tot_4__10075->SetBinContent(4,1.016888);
   stretch_tot_4__10075->SetBinContent(6,0.9895581);
   stretch_tot_4__10075->SetBinContent(7,1.06848);
   stretch_tot_4__10075->SetBinContent(8,1.02428);
   stretch_tot_4__10075->SetBinError(1,0.01409007);
   stretch_tot_4__10075->SetBinError(2,0.02707567);
   stretch_tot_4__10075->SetBinError(3,0.02034869);
   stretch_tot_4__10075->SetBinError(4,0.0290277);
   stretch_tot_4__10075->SetBinError(6,0.03251135);
   stretch_tot_4__10075->SetBinError(7,0.03532634);
   stretch_tot_4__10075->SetBinError(8,0.03238672);
   stretch_tot_4__10075->SetEntries(9054.304);
   stretch_tot_4__10075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_4__10075->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_4__10075->SetLineColor(ci);
   stretch_tot_4__10075->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_4__10075->SetMarkerColor(ci);
   stretch_tot_4__10075->SetMarkerStyle(20);
   stretch_tot_4__10075->SetMarkerSize(0.8);
   stretch_tot_4__10075->GetXaxis()->SetRange(1,4);
   stretch_tot_4__10075->GetXaxis()->SetLabelFont(42);
   stretch_tot_4__10075->GetXaxis()->SetTitleFont(42);
   stretch_tot_4__10075->GetYaxis()->SetLabelFont(42);
   stretch_tot_4__10075->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_4__10075->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_4__10075->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_4__10075->GetYaxis()->SetTitleFont(42);
   stretch_tot_4__10075->GetZaxis()->SetLabelFont(42);
   stretch_tot_4__10075->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_4__10075->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_4__10075->GetZaxis()->SetTitleOffset(1);
   stretch_tot_4__10075->GetZaxis()->SetTitleFont(42);
   stretch_tot_4__10075->Draw("SAME E2");
   Double_t xAxis1116[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_4__10076 = new TH1D("stretch_stat_4__10076","",8, xAxis1116);
   stretch_stat_4__10076->SetBinContent(1,0.9950836);
   stretch_stat_4__10076->SetBinContent(2,1.003644);
   stretch_stat_4__10076->SetBinContent(3,0.9858654);
   stretch_stat_4__10076->SetBinContent(4,1.016888);
   stretch_stat_4__10076->SetBinContent(6,0.9895581);
   stretch_stat_4__10076->SetBinContent(7,1.06848);
   stretch_stat_4__10076->SetBinContent(8,1.02428);
   stretch_stat_4__10076->SetBinError(1,0.01347493);
   stretch_stat_4__10076->SetBinError(2,0.02335528);
   stretch_stat_4__10076->SetBinError(3,0.01968913);
   stretch_stat_4__10076->SetBinError(4,0.02841881);
   stretch_stat_4__10076->SetBinError(6,0.02902333);
   stretch_stat_4__10076->SetBinError(7,0.03487867);
   stretch_stat_4__10076->SetBinError(8,0.02917512);
   stretch_stat_4__10076->SetEntries(10384.12);
   stretch_stat_4__10076->SetStats(0);
   stretch_stat_4__10076->SetLineWidth(2);
   stretch_stat_4__10076->SetMarkerStyle(20);
   stretch_stat_4__10076->SetMarkerSize(0.8);
   stretch_stat_4__10076->GetXaxis()->SetRange(1,4);
   stretch_stat_4__10076->GetXaxis()->SetLabelFont(42);
   stretch_stat_4__10076->GetXaxis()->SetTitleFont(42);
   stretch_stat_4__10076->GetYaxis()->SetLabelFont(42);
   stretch_stat_4__10076->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_4__10076->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_4__10076->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_4__10076->GetYaxis()->SetTitleFont(42);
   stretch_stat_4__10076->GetZaxis()->SetLabelFont(42);
   stretch_stat_4__10076->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_4__10076->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_4__10076->GetZaxis()->SetTitleOffset(1);
   stretch_stat_4__10076->GetZaxis()->SetTitleFont(42);
   stretch_stat_4__10076->Draw("SAME PZ");
   dw__2070->Modified();
   c1_n12->cd();
  
// ------------>Primitives in pad: up
   TPad *up__2071 = new TPad("up", "up",0,0.5,1,1);
   up__2071->Draw();
   up__2071->cd();
   up__2071->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__2071->SetFillColor(0);
   up__2071->SetFillStyle(4000);
   up__2071->SetBorderMode(0);
   up__2071->SetBorderSize(0);
   up__2071->SetTickx(1);
   up__2071->SetTicky(1);
   up__2071->SetLeftMargin(0.120603);
   up__2071->SetRightMargin(0.08040201);
   up__2071->SetBottomMargin(0.01243523);
   up__2071->SetFrameBorderMode(0);
   up__2071->SetFrameBorderMode(0);
   Double_t xAxis1117[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__10077 = new TH1D("chist__10077","",8, xAxis1117);
   chist__10077->SetMinimum(-0.9);
   chist__10077->SetMaximum(2);
   chist__10077->SetDirectory(nullptr);
   chist__10077->SetStats(0);
   chist__10077->SetLineColor(0);
   chist__10077->SetLineWidth(0);
   chist__10077->SetMarkerColor(0);
   chist__10077->SetMarkerStyle(20);
   chist__10077->SetMarkerSize(0);
   chist__10077->GetXaxis()->SetRange(1,4);
   chist__10077->GetXaxis()->SetNdivisions(4000510);
   chist__10077->GetXaxis()->SetLabelFont(42);
   chist__10077->GetXaxis()->SetLabelSize(0);
   chist__10077->GetXaxis()->SetTitleSize(0.08);
   chist__10077->GetXaxis()->SetTickLength(0.04);
   chist__10077->GetXaxis()->SetTitleOffset(2.020933);
   chist__10077->GetXaxis()->SetTitleFont(42);
   chist__10077->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__10077->GetYaxis()->SetNdivisions(3000510);
   chist__10077->GetYaxis()->SetLabelFont(42);
   chist__10077->GetYaxis()->SetLabelSize(0.08);
   chist__10077->GetYaxis()->SetTitleSize(0.08);
   chist__10077->GetYaxis()->SetTickLength(0.04);
   chist__10077->GetYaxis()->SetTitleOffset(0.727387);
   chist__10077->GetYaxis()->SetTitleFont(42);
   chist__10077->GetZaxis()->SetLabelFont(42);
   chist__10077->GetZaxis()->SetLabelSize(0.05);
   chist__10077->GetZaxis()->SetTitleSize(0.05);
   chist__10077->GetZaxis()->SetTitleOffset(1);
   chist__10077->GetZaxis()->SetTitleFont(42);
   chist__10077->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("shift_tot_4","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("shift_stat_4","RZ, Stat unc., TUNE26","PE");
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
      tex = new TLatex(0.160804,0.5098,"30.00 #leq p_{T}^{#gamma} [GeV] < 50.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1118[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_4__10078 = new TH1D("shift_tot_4__10078","",8, xAxis1118);
   shift_tot_4__10078->SetBinContent(1,0.1563759);
   shift_tot_4__10078->SetBinContent(2,0.1629471);
   shift_tot_4__10078->SetBinContent(3,0.06577887);
   shift_tot_4__10078->SetBinContent(4,0.1448872);
   shift_tot_4__10078->SetBinContent(6,0.4213673);
   shift_tot_4__10078->SetBinContent(7,0.6362968);
   shift_tot_4__10078->SetBinContent(8,0.7889582);
   shift_tot_4__10078->SetBinError(1,0.0156904);
   shift_tot_4__10078->SetBinError(2,0.02648701);
   shift_tot_4__10078->SetBinError(3,0.02539326);
   shift_tot_4__10078->SetBinError(4,0.03276316);
   shift_tot_4__10078->SetBinError(6,0.02900478);
   shift_tot_4__10078->SetBinError(7,0.05079592);
   shift_tot_4__10078->SetBinError(8,0.03863976);
   shift_tot_4__10078->SetEntries(745.1041);
   shift_tot_4__10078->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_4__10078->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_4__10078->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_4__10078->SetMarkerColor(ci);
   shift_tot_4__10078->SetMarkerStyle(20);
   shift_tot_4__10078->SetMarkerSize(0.8);
   shift_tot_4__10078->GetXaxis()->SetRange(1,4);
   shift_tot_4__10078->GetXaxis()->SetLabelFont(42);
   shift_tot_4__10078->GetXaxis()->SetTitleFont(42);
   shift_tot_4__10078->GetYaxis()->SetLabelFont(42);
   shift_tot_4__10078->GetYaxis()->SetLabelSize(0.05);
   shift_tot_4__10078->GetYaxis()->SetTitleSize(0.05);
   shift_tot_4__10078->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_4__10078->GetYaxis()->SetTitleFont(42);
   shift_tot_4__10078->GetZaxis()->SetLabelFont(42);
   shift_tot_4__10078->GetZaxis()->SetLabelSize(0.05);
   shift_tot_4__10078->GetZaxis()->SetTitleSize(0.05);
   shift_tot_4__10078->GetZaxis()->SetTitleOffset(1);
   shift_tot_4__10078->GetZaxis()->SetTitleFont(42);
   shift_tot_4__10078->Draw("SAME E2");
   Double_t xAxis1119[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_4__10079 = new TH1D("shift_stat_4__10079","",8, xAxis1119);
   shift_stat_4__10079->SetBinContent(1,0.1563759);
   shift_stat_4__10079->SetBinContent(2,0.1629471);
   shift_stat_4__10079->SetBinContent(3,0.06577887);
   shift_stat_4__10079->SetBinContent(4,0.1448872);
   shift_stat_4__10079->SetBinContent(6,0.4213673);
   shift_stat_4__10079->SetBinContent(7,0.6362968);
   shift_stat_4__10079->SetBinContent(8,0.7889582);
   shift_stat_4__10079->SetBinError(1,0.01515719);
   shift_stat_4__10079->SetBinError(2,0.0249864);
   shift_stat_4__10079->SetBinError(3,0.02098248);
   shift_stat_4__10079->SetBinError(4,0.03078054);
   shift_stat_4__10079->SetBinError(6,0.02727626);
   shift_stat_4__10079->SetBinError(7,0.0404146);
   shift_stat_4__10079->SetBinError(8,0.03394069);
   shift_stat_4__10079->SetEntries(978.7234);
   shift_stat_4__10079->SetStats(0);
   shift_stat_4__10079->SetMarkerStyle(20);
   shift_stat_4__10079->SetMarkerSize(0.8);
   shift_stat_4__10079->GetXaxis()->SetRange(1,4);
   shift_stat_4__10079->GetXaxis()->SetLabelFont(42);
   shift_stat_4__10079->GetXaxis()->SetTitleFont(42);
   shift_stat_4__10079->GetYaxis()->SetLabelFont(42);
   shift_stat_4__10079->GetYaxis()->SetLabelSize(0.05);
   shift_stat_4__10079->GetYaxis()->SetTitleSize(0.05);
   shift_stat_4__10079->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_4__10079->GetYaxis()->SetTitleFont(42);
   shift_stat_4__10079->GetZaxis()->SetLabelFont(42);
   shift_stat_4__10079->GetZaxis()->SetLabelSize(0.05);
   shift_stat_4__10079->GetZaxis()->SetTitleSize(0.05);
   shift_stat_4__10079->GetZaxis()->SetTitleOffset(1);
   shift_stat_4__10079->GetZaxis()->SetTitleFont(42);
   shift_stat_4__10079->Draw("SAME PZ");
   Double_t xAxis1120[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__10080 = new TH1D("chist_copy__10080","",8, xAxis1120);
   chist_copy__10080->SetMinimum(-0.9);
   chist_copy__10080->SetMaximum(2);
   chist_copy__10080->SetDirectory(nullptr);
   chist_copy__10080->SetStats(0);
   chist_copy__10080->SetLineColor(0);
   chist_copy__10080->SetLineWidth(0);
   chist_copy__10080->SetMarkerColor(0);
   chist_copy__10080->SetMarkerStyle(20);
   chist_copy__10080->SetMarkerSize(0);
   chist_copy__10080->GetXaxis()->SetRange(1,4);
   chist_copy__10080->GetXaxis()->SetNdivisions(4000510);
   chist_copy__10080->GetXaxis()->SetLabelFont(42);
   chist_copy__10080->GetXaxis()->SetLabelSize(0);
   chist_copy__10080->GetXaxis()->SetTitleSize(0.08);
   chist_copy__10080->GetXaxis()->SetTickLength(0.04);
   chist_copy__10080->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__10080->GetXaxis()->SetTitleFont(42);
   chist_copy__10080->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__10080->GetYaxis()->SetNdivisions(3000510);
   chist_copy__10080->GetYaxis()->SetLabelFont(42);
   chist_copy__10080->GetYaxis()->SetLabelSize(0.08);
   chist_copy__10080->GetYaxis()->SetTitleSize(0.08);
   chist_copy__10080->GetYaxis()->SetTickLength(0.04);
   chist_copy__10080->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__10080->GetYaxis()->SetTitleFont(42);
   chist_copy__10080->GetZaxis()->SetLabelFont(42);
   chist_copy__10080->GetZaxis()->SetLabelSize(0.05);
   chist_copy__10080->GetZaxis()->SetTitleSize(0.05);
   chist_copy__10080->GetZaxis()->SetTitleOffset(1);
   chist_copy__10080->GetZaxis()->SetTitleFont(42);
   chist_copy__10080->Draw("sameaxis");
   up__2071->Modified();
   c1_n12->cd();
   c1_n12->Modified();
   c1_n12->SetSelected(c1_n12);
}
