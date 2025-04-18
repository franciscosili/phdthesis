#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__SP__ph_rhad__u__pt0060p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n17/
//=========  (Thu Apr  4 17:59:18 2024) by ROOT version 6.30/02
   TCanvas *c1_n17 = new TCanvas("c1_n17", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n17->SetHighLightColor(2);
   c1_n17->Range(0,0,1,1);
   c1_n17->SetFillColor(0);
   c1_n17->SetBorderMode(0);
   c1_n17->SetBorderSize(2);
   c1_n17->SetTickx(1);
   c1_n17->SetTicky(1);
   c1_n17->SetLeftMargin(0.16);
   c1_n17->SetRightMargin(0.05);
   c1_n17->SetTopMargin(0.05);
   c1_n17->SetBottomMargin(0.16);
   c1_n17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__1704 = new TPad("dw", "dw",0,0,1,0.5);
   dw__1704->Draw();
   dw__1704->cd();
   dw__1704->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__1704->SetFillColor(0);
   dw__1704->SetFillStyle(4000);
   dw__1704->SetBorderMode(0);
   dw__1704->SetBorderSize(0);
   dw__1704->SetTickx(1);
   dw__1704->SetTicky(1);
   dw__1704->SetLeftMargin(0.120603);
   dw__1704->SetRightMargin(0.08040201);
   dw__1704->SetTopMargin(0);
   dw__1704->SetBottomMargin(0.2072539);
   dw__1704->SetFrameBorderMode(0);
   dw__1704->SetFrameBorderMode(0);
   Double_t xAxis551[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__8391 = new TH1D("chist_dw__8391","",8, xAxis551);
   chist_dw__8391->SetMinimum(0.2);
   chist_dw__8391->SetMaximum(3.2);
   chist_dw__8391->SetDirectory(nullptr);
   chist_dw__8391->SetStats(0);
   chist_dw__8391->SetLineColor(0);
   chist_dw__8391->SetLineWidth(0);
   chist_dw__8391->SetMarkerColor(0);
   chist_dw__8391->SetMarkerStyle(20);
   chist_dw__8391->SetMarkerSize(0);
   chist_dw__8391->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__8391->GetXaxis()->SetRange(1,8);
   chist_dw__8391->GetXaxis()->SetLabelFont(42);
   chist_dw__8391->GetXaxis()->SetLabelSize(0.08);
   chist_dw__8391->GetXaxis()->SetTitleSize(0.08);
   chist_dw__8391->GetXaxis()->SetTickLength(0.04);
   chist_dw__8391->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__8391->GetXaxis()->SetTitleFont(42);
   chist_dw__8391->GetYaxis()->SetTitle("Stretch");
   chist_dw__8391->GetYaxis()->CenterTitle(true);
   chist_dw__8391->GetYaxis()->SetNdivisions(405);
   chist_dw__8391->GetYaxis()->SetLabelFont(42);
   chist_dw__8391->GetYaxis()->SetLabelSize(0.08);
   chist_dw__8391->GetYaxis()->SetTitleSize(0.08);
   chist_dw__8391->GetYaxis()->SetTickLength(0.04);
   chist_dw__8391->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__8391->GetYaxis()->SetTitleFont(42);
   chist_dw__8391->GetZaxis()->SetLabelFont(42);
   chist_dw__8391->GetZaxis()->SetLabelSize(0.05);
   chist_dw__8391->GetZaxis()->SetTitleSize(0.05);
   chist_dw__8391->GetZaxis()->SetTitleOffset(1);
   chist_dw__8391->GetZaxis()->SetTitleFont(42);
   chist_dw__8391->Draw("");
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
   Double_t xAxis552[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_tot_2__8392 = new TH1D("stretch_tot_2__8392","",8, xAxis552);
   stretch_tot_2__8392->SetBinContent(3,1.124421);
   stretch_tot_2__8392->SetBinContent(4,1.091217);
   stretch_tot_2__8392->SetBinError(3,0.003185295);
   stretch_tot_2__8392->SetBinError(4,0.004544964);
   stretch_tot_2__8392->SetEntries(159370.4);
   stretch_tot_2__8392->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   stretch_tot_2__8392->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_2__8392->SetLineColor(ci);
   stretch_tot_2__8392->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   stretch_tot_2__8392->SetMarkerColor(ci);
   stretch_tot_2__8392->SetMarkerStyle(20);
   stretch_tot_2__8392->SetMarkerSize(0.8);
   stretch_tot_2__8392->GetXaxis()->SetRange(1,8);
   stretch_tot_2__8392->GetXaxis()->SetLabelFont(42);
   stretch_tot_2__8392->GetXaxis()->SetTitleFont(42);
   stretch_tot_2__8392->GetYaxis()->SetLabelFont(42);
   stretch_tot_2__8392->GetYaxis()->SetLabelSize(0.05);
   stretch_tot_2__8392->GetYaxis()->SetTitleSize(0.05);
   stretch_tot_2__8392->GetYaxis()->SetTitleOffset(1.4);
   stretch_tot_2__8392->GetYaxis()->SetTitleFont(42);
   stretch_tot_2__8392->GetZaxis()->SetLabelFont(42);
   stretch_tot_2__8392->GetZaxis()->SetLabelSize(0.05);
   stretch_tot_2__8392->GetZaxis()->SetTitleSize(0.05);
   stretch_tot_2__8392->GetZaxis()->SetTitleOffset(1);
   stretch_tot_2__8392->GetZaxis()->SetTitleFont(42);
   stretch_tot_2__8392->Draw("SAME E2");
   Double_t xAxis553[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *stretch_stat_2__8393 = new TH1D("stretch_stat_2__8393","",8, xAxis553);
   stretch_stat_2__8393->SetBinContent(3,1.124421);
   stretch_stat_2__8393->SetBinContent(4,1.091217);
   stretch_stat_2__8393->SetBinError(3,0.0003109308);
   stretch_stat_2__8393->SetBinError(4,0.0004376222);
   stretch_stat_2__8393->SetEntries(1.703402e+07);
   stretch_stat_2__8393->SetStats(0);
   stretch_stat_2__8393->SetLineWidth(2);
   stretch_stat_2__8393->SetMarkerStyle(20);
   stretch_stat_2__8393->SetMarkerSize(0.8);
   stretch_stat_2__8393->GetXaxis()->SetRange(1,8);
   stretch_stat_2__8393->GetXaxis()->SetLabelFont(42);
   stretch_stat_2__8393->GetXaxis()->SetTitleFont(42);
   stretch_stat_2__8393->GetYaxis()->SetLabelFont(42);
   stretch_stat_2__8393->GetYaxis()->SetLabelSize(0.05);
   stretch_stat_2__8393->GetYaxis()->SetTitleSize(0.05);
   stretch_stat_2__8393->GetYaxis()->SetTitleOffset(1.4);
   stretch_stat_2__8393->GetYaxis()->SetTitleFont(42);
   stretch_stat_2__8393->GetZaxis()->SetLabelFont(42);
   stretch_stat_2__8393->GetZaxis()->SetLabelSize(0.05);
   stretch_stat_2__8393->GetZaxis()->SetTitleSize(0.05);
   stretch_stat_2__8393->GetZaxis()->SetTitleOffset(1);
   stretch_stat_2__8393->GetZaxis()->SetTitleFont(42);
   stretch_stat_2__8393->Draw("SAME PZ");
   dw__1704->Modified();
   c1_n17->cd();
  
// ------------>Primitives in pad: up
   TPad *up__1705 = new TPad("up", "up",0,0.5,1,1);
   up__1705->Draw();
   up__1705->cd();
   up__1705->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__1705->SetFillColor(0);
   up__1705->SetFillStyle(4000);
   up__1705->SetBorderMode(0);
   up__1705->SetBorderSize(0);
   up__1705->SetTickx(1);
   up__1705->SetTicky(1);
   up__1705->SetLeftMargin(0.120603);
   up__1705->SetRightMargin(0.08040201);
   up__1705->SetBottomMargin(0.01243523);
   up__1705->SetFrameBorderMode(0);
   up__1705->SetFrameBorderMode(0);
   Double_t xAxis554[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__8394 = new TH1D("chist__8394","",8, xAxis554);
   chist__8394->SetMinimum(-0.7);
   chist__8394->SetMaximum(1.1);
   chist__8394->SetDirectory(nullptr);
   chist__8394->SetStats(0);
   chist__8394->SetLineColor(0);
   chist__8394->SetLineWidth(0);
   chist__8394->SetMarkerColor(0);
   chist__8394->SetMarkerStyle(20);
   chist__8394->SetMarkerSize(0);
   chist__8394->GetXaxis()->SetRange(1,8);
   chist__8394->GetXaxis()->SetNdivisions(4000510);
   chist__8394->GetXaxis()->SetLabelFont(42);
   chist__8394->GetXaxis()->SetLabelSize(0);
   chist__8394->GetXaxis()->SetTitleSize(0.08);
   chist__8394->GetXaxis()->SetTickLength(0.04);
   chist__8394->GetXaxis()->SetTitleOffset(2.020933);
   chist__8394->GetXaxis()->SetTitleFont(42);
   chist__8394->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__8394->GetYaxis()->SetNdivisions(3000510);
   chist__8394->GetYaxis()->SetLabelFont(42);
   chist__8394->GetYaxis()->SetLabelSize(0.08);
   chist__8394->GetYaxis()->SetTitleSize(0.08);
   chist__8394->GetYaxis()->SetTickLength(0.04);
   chist__8394->GetYaxis()->SetTitleOffset(0.727387);
   chist__8394->GetYaxis()->SetTitleFont(42);
   chist__8394->GetZaxis()->SetLabelFont(42);
   chist__8394->GetZaxis()->SetLabelSize(0.05);
   chist__8394->GetZaxis()->SetTitleSize(0.05);
   chist__8394->GetZaxis()->SetTitleOffset(1);
   chist__8394->GetZaxis()->SetTitleFont(42);
   chist__8394->Draw("pe");
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
      tex = new TLatex(0.160804,0.5098,"60.0 #leq p_{T}^{#gamma} [GeV] < 80.0");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis555[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_tot_2__8395 = new TH1D("shift_tot_2__8395","",8, xAxis555);
   shift_tot_2__8395->SetBinContent(3,-0.03933707);
   shift_tot_2__8395->SetBinContent(4,-0.001698194);
   shift_tot_2__8395->SetBinError(3,0.0008642397);
   shift_tot_2__8395->SetBinError(4,0.0030008);
   shift_tot_2__8395->SetEntries(172.6766);
   shift_tot_2__8395->SetStats(0);

   ci = 1690;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.6);
   shift_tot_2__8395->SetFillColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_2__8395->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   shift_tot_2__8395->SetMarkerColor(ci);
   shift_tot_2__8395->SetMarkerStyle(20);
   shift_tot_2__8395->SetMarkerSize(0.8);
   shift_tot_2__8395->GetXaxis()->SetRange(1,8);
   shift_tot_2__8395->GetXaxis()->SetLabelFont(42);
   shift_tot_2__8395->GetXaxis()->SetTitleFont(42);
   shift_tot_2__8395->GetYaxis()->SetLabelFont(42);
   shift_tot_2__8395->GetYaxis()->SetLabelSize(0.05);
   shift_tot_2__8395->GetYaxis()->SetTitleSize(0.05);
   shift_tot_2__8395->GetYaxis()->SetTitleOffset(1.4);
   shift_tot_2__8395->GetYaxis()->SetTitleFont(42);
   shift_tot_2__8395->GetZaxis()->SetLabelFont(42);
   shift_tot_2__8395->GetZaxis()->SetLabelSize(0.05);
   shift_tot_2__8395->GetZaxis()->SetTitleSize(0.05);
   shift_tot_2__8395->GetZaxis()->SetTitleOffset(1);
   shift_tot_2__8395->GetZaxis()->SetTitleFont(42);
   shift_tot_2__8395->Draw("SAME E2");
   Double_t xAxis556[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *shift_stat_2__8396 = new TH1D("shift_stat_2__8396","",8, xAxis556);
   shift_stat_2__8396->SetBinContent(3,-0.03933707);
   shift_stat_2__8396->SetBinContent(4,-0.001698194);
   shift_stat_2__8396->SetBinError(3,0.0001711853);
   shift_stat_2__8396->SetBinError(4,0.0002607974);
   shift_stat_2__8396->SetEntries(17302.7);
   shift_stat_2__8396->SetStats(0);
   shift_stat_2__8396->SetMarkerStyle(20);
   shift_stat_2__8396->SetMarkerSize(0.8);
   shift_stat_2__8396->GetXaxis()->SetRange(1,8);
   shift_stat_2__8396->GetXaxis()->SetLabelFont(42);
   shift_stat_2__8396->GetXaxis()->SetTitleFont(42);
   shift_stat_2__8396->GetYaxis()->SetLabelFont(42);
   shift_stat_2__8396->GetYaxis()->SetLabelSize(0.05);
   shift_stat_2__8396->GetYaxis()->SetTitleSize(0.05);
   shift_stat_2__8396->GetYaxis()->SetTitleOffset(1.4);
   shift_stat_2__8396->GetYaxis()->SetTitleFont(42);
   shift_stat_2__8396->GetZaxis()->SetLabelFont(42);
   shift_stat_2__8396->GetZaxis()->SetLabelSize(0.05);
   shift_stat_2__8396->GetZaxis()->SetTitleSize(0.05);
   shift_stat_2__8396->GetZaxis()->SetTitleOffset(1);
   shift_stat_2__8396->GetZaxis()->SetTitleFont(42);
   shift_stat_2__8396->Draw("SAME PZ");
   Double_t xAxis557[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__8397 = new TH1D("chist_copy__8397","",8, xAxis557);
   chist_copy__8397->SetMinimum(-0.7);
   chist_copy__8397->SetMaximum(1.1);
   chist_copy__8397->SetDirectory(nullptr);
   chist_copy__8397->SetStats(0);
   chist_copy__8397->SetLineColor(0);
   chist_copy__8397->SetLineWidth(0);
   chist_copy__8397->SetMarkerColor(0);
   chist_copy__8397->SetMarkerStyle(20);
   chist_copy__8397->SetMarkerSize(0);
   chist_copy__8397->GetXaxis()->SetRange(1,8);
   chist_copy__8397->GetXaxis()->SetNdivisions(4000510);
   chist_copy__8397->GetXaxis()->SetLabelFont(42);
   chist_copy__8397->GetXaxis()->SetLabelSize(0);
   chist_copy__8397->GetXaxis()->SetTitleSize(0.08);
   chist_copy__8397->GetXaxis()->SetTickLength(0.04);
   chist_copy__8397->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__8397->GetXaxis()->SetTitleFont(42);
   chist_copy__8397->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__8397->GetYaxis()->SetNdivisions(3000510);
   chist_copy__8397->GetYaxis()->SetLabelFont(42);
   chist_copy__8397->GetYaxis()->SetLabelSize(0.08);
   chist_copy__8397->GetYaxis()->SetTitleSize(0.08);
   chist_copy__8397->GetYaxis()->SetTickLength(0.04);
   chist_copy__8397->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__8397->GetYaxis()->SetTitleFont(42);
   chist_copy__8397->GetZaxis()->SetLabelFont(42);
   chist_copy__8397->GetZaxis()->SetLabelSize(0.05);
   chist_copy__8397->GetZaxis()->SetTitleSize(0.05);
   chist_copy__8397->GetZaxis()->SetTitleOffset(1);
   chist_copy__8397->GetZaxis()->SetTitleFont(42);
   chist_copy__8397->Draw("sameaxis");
   up__1705->Modified();
   c1_n17->cd();
   c1_n17->Modified();
   c1_n17->SetSelected(c1_n17);
}
