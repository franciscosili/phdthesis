#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__RZ__ph_rhad__u__pt30p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n4/
//=========  (Thu Apr  4 07:36:47 2024) by ROOT version 6.30/02
   TCanvas *c1_n4 = new TCanvas("c1_n4", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n4->SetHighLightColor(2);
   c1_n4->Range(0,0,1,1);
   c1_n4->SetFillColor(0);
   c1_n4->SetBorderMode(0);
   c1_n4->SetBorderSize(2);
   c1_n4->SetTickx(1);
   c1_n4->SetTicky(1);
   c1_n4->SetLeftMargin(0.16);
   c1_n4->SetRightMargin(0.05);
   c1_n4->SetTopMargin(0.05);
   c1_n4->SetBottomMargin(0.16);
   c1_n4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1902 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1902->Draw();
   dw__1902->cd();
   dw__1902->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1902->SetFillColor(0);
   dw__1902->SetFillStyle(4000);
   dw__1902->SetBorderMode(0);
   dw__1902->SetBorderSize(0);
   dw__1902->SetTickx(1);
   dw__1902->SetTicky(1);
   dw__1902->SetLeftMargin(0.120603);
   dw__1902->SetRightMargin(0.08040201);
   dw__1902->SetTopMargin(0);
   dw__1902->SetBottomMargin(0.2072539);
   dw__1902->SetFrameBorderMode(0);
   dw__1902->SetFrameBorderMode(0);
   Double_t xAxis442[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__9402 = new TH1D("chist_dw__9402","",8, xAxis442);
   chist_dw__9402->SetMinimum(0.2);
   chist_dw__9402->SetMaximum(3.2);
   chist_dw__9402->SetDirectory(nullptr);
   chist_dw__9402->SetStats(0);
   chist_dw__9402->SetLineColor(0);
   chist_dw__9402->SetLineWidth(0);
   chist_dw__9402->SetMarkerColor(0);
   chist_dw__9402->SetMarkerStyle(20);
   chist_dw__9402->SetMarkerSize(0);
   chist_dw__9402->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__9402->GetXaxis()->SetRange(1,4);
   chist_dw__9402->GetXaxis()->SetLabelFont(42);
   chist_dw__9402->GetXaxis()->SetLabelSize(0.08);
   chist_dw__9402->GetXaxis()->SetTitleSize(0.08);
   chist_dw__9402->GetXaxis()->SetTickLength(0.04);
   chist_dw__9402->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__9402->GetXaxis()->SetTitleFont(42);
   chist_dw__9402->GetYaxis()->SetTitle("Stretch");
   chist_dw__9402->GetYaxis()->CenterTitle(true);
   chist_dw__9402->GetYaxis()->SetNdivisions(405);
   chist_dw__9402->GetYaxis()->SetLabelFont(42);
   chist_dw__9402->GetYaxis()->SetLabelSize(0.08);
   chist_dw__9402->GetYaxis()->SetTitleSize(0.08);
   chist_dw__9402->GetYaxis()->SetTickLength(0.04);
   chist_dw__9402->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__9402->GetYaxis()->SetTitleFont(42);
   chist_dw__9402->GetZaxis()->SetLabelFont(42);
   chist_dw__9402->GetZaxis()->SetLabelSize(0.05);
   chist_dw__9402->GetZaxis()->SetTitleSize(0.05);
   chist_dw__9402->GetZaxis()->SetTitleOffset(1);
   chist_dw__9402->GetZaxis()->SetTitleFont(42);
   chist_dw__9402->Draw("");
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
   Double_t xAxis443[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_4__9403 = new TH1D("stretch_tot_4__9403","",8, xAxis443);
   stretch_tot_4__9403->SetBinContent(3,1.152267);
   stretch_tot_4__9403->SetBinContent(4,1.070312);
   stretch_tot_4__9403->SetBinError(3,0.04143089);
   stretch_tot_4__9403->SetBinError(4,0.03772476);
   stretch_tot_4__9403->SetEntries(1573.364);
   stretch_tot_4__9403->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_4__9403->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_4__9403->SetLineColor(ci);
   stretch_tot_4__9403->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_4__9403->SetMarkerColor(ci);
   stretch_tot_4__9403->SetMarkerStyle(20);
   stretch_tot_4__9403->SetMarkerSize(0.8);
   stretch_tot_4__9403->GetXaxis()->SetRange(1,4);
   stretch_tot_4__9403->GetXaxis()->SetLabelFont(42);
   stretch_tot_4__9403->GetXaxis()->SetTitleFont(42);
   stretch_tot_4__9403->GetYaxis()->SetLabelFont(42);
   stretch_tot_4__9403->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_4__9403->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_4__9403->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_4__9403->GetYaxis()->SetTitleFont(42);
   stretch_tot_4__9403->GetZaxis()->SetLabelFont(42);
   stretch_tot_4__9403->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_4__9403->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_4__9403->GetZaxis()->SetTitleOffset(1);
   stretch_tot_4__9403->GetZaxis()->SetTitleFont(42);
   stretch_tot_4__9403->Draw("SAME E2");
   Double_t xAxis444[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_4__9404 = new TH1D("stretch_stat_4__9404","",8, xAxis444);
   stretch_stat_4__9404->SetBinContent(3,1.152267);
   stretch_stat_4__9404->SetBinContent(4,1.070312);
   stretch_stat_4__9404->SetBinError(3,0.02988797);
   stretch_stat_4__9404->SetBinError(4,0.03749052);
   stretch_stat_4__9404->SetEntries(2148.856);
   stretch_stat_4__9404->SetStats(0);
   stretch_stat_4__9404->SetLineWidth(2);
   stretch_stat_4__9404->SetMarkerStyle(20);
   stretch_stat_4__9404->SetMarkerSize(0.8);
   stretch_stat_4__9404->GetXaxis()->SetRange(1,4);
   stretch_stat_4__9404->GetXaxis()->SetLabelFont(42);
   stretch_stat_4__9404->GetXaxis()->SetTitleFont(42);
   stretch_stat_4__9404->GetYaxis()->SetLabelFont(42);
   stretch_stat_4__9404->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_4__9404->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_4__9404->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_4__9404->GetYaxis()->SetTitleFont(42);
   stretch_stat_4__9404->GetZaxis()->SetLabelFont(42);
   stretch_stat_4__9404->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_4__9404->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_4__9404->GetZaxis()->SetTitleOffset(1);
   stretch_stat_4__9404->GetZaxis()->SetTitleFont(42);
   stretch_stat_4__9404->Draw("SAME PZ");
   dw__1902->Modified();
   c1_n4->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1903 = new TPad("up", "up",0,0.5,1,1);
   up__1903->Draw();
   up__1903->cd();
   up__1903->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__1903->SetFillColor(0);
   up__1903->SetFillStyle(4000);
   up__1903->SetBorderMode(0);
   up__1903->SetBorderSize(0);
   up__1903->SetTickx(1);
   up__1903->SetTicky(1);
   up__1903->SetLeftMargin(0.120603);
   up__1903->SetRightMargin(0.08040201);
   up__1903->SetBottomMargin(0.01243523);
   up__1903->SetFrameBorderMode(0);
   up__1903->SetFrameBorderMode(0);
   Double_t xAxis445[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__9405 = new TH1D("chist__9405","",8, xAxis445);
   chist__9405->SetMinimum(-0.7);
   chist__9405->SetMaximum(1.1);
   chist__9405->SetDirectory(nullptr);
   chist__9405->SetStats(0);
   chist__9405->SetLineColor(0);
   chist__9405->SetLineWidth(0);
   chist__9405->SetMarkerColor(0);
   chist__9405->SetMarkerStyle(20);
   chist__9405->SetMarkerSize(0);
   chist__9405->GetXaxis()->SetRange(1,4);
   chist__9405->GetXaxis()->SetNdivisions(4000510);
   chist__9405->GetXaxis()->SetLabelFont(42);
   chist__9405->GetXaxis()->SetLabelSize(0);
   chist__9405->GetXaxis()->SetTitleSize(0.08);
   chist__9405->GetXaxis()->SetTickLength(0.04);
   chist__9405->GetXaxis()->SetTitleOffset(2.020933);
   chist__9405->GetXaxis()->SetTitleFont(42);
   chist__9405->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__9405->GetYaxis()->SetNdivisions(3000510);
   chist__9405->GetYaxis()->SetLabelFont(42);
   chist__9405->GetYaxis()->SetLabelSize(0.08);
   chist__9405->GetYaxis()->SetTitleSize(0.08);
   chist__9405->GetYaxis()->SetTickLength(0.04);
   chist__9405->GetYaxis()->SetTitleOffset(0.727387);
   chist__9405->GetYaxis()->SetTitleFont(42);
   chist__9405->GetZaxis()->SetLabelFont(42);
   chist__9405->GetZaxis()->SetLabelSize(0.05);
   chist__9405->GetZaxis()->SetTitleSize(0.05);
   chist__9405->GetZaxis()->SetTitleOffset(1);
   chist__9405->GetZaxis()->SetTitleFont(42);
   chist__9405->Draw("pe");
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
      tex = new TLatex(0.160804,0.633,"R_{had}");
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
   Double_t xAxis446[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_4__9406 = new TH1D("shift_tot_4__9406","",8, xAxis446);
   shift_tot_4__9406->SetBinContent(3,-0.04845567);
   shift_tot_4__9406->SetBinContent(4,-0.001830469);
   shift_tot_4__9406->SetBinError(3,0.01717034);
   shift_tot_4__9406->SetBinError(4,0.02648961);
   shift_tot_4__9406->SetEntries(2.537526);
   shift_tot_4__9406->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_4__9406->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_4__9406->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_4__9406->SetMarkerColor(ci);
   shift_tot_4__9406->SetMarkerStyle(20);
   shift_tot_4__9406->SetMarkerSize(0.8);
   shift_tot_4__9406->GetXaxis()->SetRange(1,4);
   shift_tot_4__9406->GetXaxis()->SetLabelFont(42);
   shift_tot_4__9406->GetXaxis()->SetTitleFont(42);
   shift_tot_4__9406->GetYaxis()->SetLabelFont(42);
   shift_tot_4__9406->GetYaxis()->SetLabelSize(0.05);
   shift_tot_4__9406->GetYaxis()->SetTitleSize(0.05);
   shift_tot_4__9406->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_4__9406->GetYaxis()->SetTitleFont(42);
   shift_tot_4__9406->GetZaxis()->SetLabelFont(42);
   shift_tot_4__9406->GetZaxis()->SetLabelSize(0.05);
   shift_tot_4__9406->GetZaxis()->SetTitleSize(0.05);
   shift_tot_4__9406->GetZaxis()->SetTitleOffset(1);
   shift_tot_4__9406->GetZaxis()->SetTitleFont(42);
   shift_tot_4__9406->Draw("SAME E2");
   Double_t xAxis447[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_4__9407 = new TH1D("shift_stat_4__9407","",8, xAxis447);
   shift_stat_4__9407->SetBinContent(3,-0.04845567);
   shift_stat_4__9407->SetBinContent(4,-0.001830469);
   shift_stat_4__9407->SetBinError(3,0.01551728);
   shift_stat_4__9407->SetBinError(4,0.02595429);
   shift_stat_4__9407->SetEntries(2.765382);
   shift_stat_4__9407->SetStats(0);
   shift_stat_4__9407->SetMarkerStyle(20);
   shift_stat_4__9407->SetMarkerSize(0.8);
   shift_stat_4__9407->GetXaxis()->SetRange(1,4);
   shift_stat_4__9407->GetXaxis()->SetLabelFont(42);
   shift_stat_4__9407->GetXaxis()->SetTitleFont(42);
   shift_stat_4__9407->GetYaxis()->SetLabelFont(42);
   shift_stat_4__9407->GetYaxis()->SetLabelSize(0.05);
   shift_stat_4__9407->GetYaxis()->SetTitleSize(0.05);
   shift_stat_4__9407->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_4__9407->GetYaxis()->SetTitleFont(42);
   shift_stat_4__9407->GetZaxis()->SetLabelFont(42);
   shift_stat_4__9407->GetZaxis()->SetLabelSize(0.05);
   shift_stat_4__9407->GetZaxis()->SetTitleSize(0.05);
   shift_stat_4__9407->GetZaxis()->SetTitleOffset(1);
   shift_stat_4__9407->GetZaxis()->SetTitleFont(42);
   shift_stat_4__9407->Draw("SAME PZ");
   Double_t xAxis448[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__9408 = new TH1D("chist_copy__9408","",8, xAxis448);
   chist_copy__9408->SetMinimum(-0.7);
   chist_copy__9408->SetMaximum(1.1);
   chist_copy__9408->SetDirectory(nullptr);
   chist_copy__9408->SetStats(0);
   chist_copy__9408->SetLineColor(0);
   chist_copy__9408->SetLineWidth(0);
   chist_copy__9408->SetMarkerColor(0);
   chist_copy__9408->SetMarkerStyle(20);
   chist_copy__9408->SetMarkerSize(0);
   chist_copy__9408->GetXaxis()->SetRange(1,4);
   chist_copy__9408->GetXaxis()->SetNdivisions(4000510);
   chist_copy__9408->GetXaxis()->SetLabelFont(42);
   chist_copy__9408->GetXaxis()->SetLabelSize(0);
   chist_copy__9408->GetXaxis()->SetTitleSize(0.08);
   chist_copy__9408->GetXaxis()->SetTickLength(0.04);
   chist_copy__9408->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__9408->GetXaxis()->SetTitleFont(42);
   chist_copy__9408->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__9408->GetYaxis()->SetNdivisions(3000510);
   chist_copy__9408->GetYaxis()->SetLabelFont(42);
   chist_copy__9408->GetYaxis()->SetLabelSize(0.08);
   chist_copy__9408->GetYaxis()->SetTitleSize(0.08);
   chist_copy__9408->GetYaxis()->SetTickLength(0.04);
   chist_copy__9408->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__9408->GetYaxis()->SetTitleFont(42);
   chist_copy__9408->GetZaxis()->SetLabelFont(42);
   chist_copy__9408->GetZaxis()->SetLabelSize(0.05);
   chist_copy__9408->GetZaxis()->SetTitleSize(0.05);
   chist_copy__9408->GetZaxis()->SetTitleOffset(1);
   chist_copy__9408->GetZaxis()->SetTitleFont(42);
   chist_copy__9408->Draw("sameaxis");
   up__1903->Modified();
   c1_n4->cd();
   c1_n4->Modified();
   c1_n4->SetSelected(c1_n4);
}
