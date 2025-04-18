#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad__u__pt0080p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n26/
//=========  (Thu Apr  4 19:00:25 2024) by ROOT version 6.30/02
   TCanvas *c1_n26 = new TCanvas("c1_n26", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n26->SetHighLightColor(2);
   c1_n26->Range(0,0,1,1);
   c1_n26->SetFillColor(0);
   c1_n26->SetBorderMode(0);
   c1_n26->SetBorderSize(2);
   c1_n26->SetTickx(1);
   c1_n26->SetTicky(1);
   c1_n26->SetLeftMargin(0.16);
   c1_n26->SetRightMargin(0.05);
   c1_n26->SetTopMargin(0.05);
   c1_n26->SetBottomMargin(0.16);
   c1_n26->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__330 = new TPad("dw", "dw",0,0,1,0.5);
   dw__330->Draw();
   dw__330->cd();
   dw__330->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__330->SetFillColor(0);
   dw__330->SetFillStyle(4000);
   dw__330->SetBorderMode(0);
   dw__330->SetBorderSize(0);
   dw__330->SetTickx(1);
   dw__330->SetTicky(1);
   dw__330->SetLeftMargin(0.120603);
   dw__330->SetRightMargin(0.08040201);
   dw__330->SetTopMargin(0);
   dw__330->SetBottomMargin(0.2072539);
   dw__330->SetFrameBorderMode(0);
   dw__330->SetFrameBorderMode(0);
   Double_t xAxis1986[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__1986 = new TH1D("chist_dw__1986","",8, xAxis1986);
   chist_dw__1986->SetMinimum(0.2);
   chist_dw__1986->SetMaximum(3.2);
   chist_dw__1986->SetDirectory(nullptr);
   chist_dw__1986->SetStats(0);
   chist_dw__1986->SetLineColor(0);
   chist_dw__1986->SetLineWidth(0);
   chist_dw__1986->SetMarkerColor(0);
   chist_dw__1986->SetMarkerStyle(20);
   chist_dw__1986->SetMarkerSize(0);
   chist_dw__1986->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__1986->GetXaxis()->SetRange(1,8);
   chist_dw__1986->GetXaxis()->SetLabelFont(42);
   chist_dw__1986->GetXaxis()->SetLabelSize(0.08);
   chist_dw__1986->GetXaxis()->SetTitleSize(0.08);
   chist_dw__1986->GetXaxis()->SetTickLength(0.04);
   chist_dw__1986->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__1986->GetXaxis()->SetTitleFont(42);
   chist_dw__1986->GetYaxis()->SetTitle("Stretch");
   chist_dw__1986->GetYaxis()->CenterTitle(true);
   chist_dw__1986->GetYaxis()->SetNdivisions(405);
   chist_dw__1986->GetYaxis()->SetLabelFont(42);
   chist_dw__1986->GetYaxis()->SetLabelSize(0.08);
   chist_dw__1986->GetYaxis()->SetTitleSize(0.08);
   chist_dw__1986->GetYaxis()->SetTickLength(0.04);
   chist_dw__1986->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__1986->GetYaxis()->SetTitleFont(42);
   chist_dw__1986->GetZaxis()->SetLabelFont(42);
   chist_dw__1986->GetZaxis()->SetLabelSize(0.05);
   chist_dw__1986->GetZaxis()->SetTitleSize(0.05);
   chist_dw__1986->GetZaxis()->SetTitleOffset(1);
   chist_dw__1986->GetZaxis()->SetTitleFont(42);
   chist_dw__1986->Draw("");
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
   Double_t xAxis1987[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_7__1987 = new TH1D("RZ_stretch_tot_7__1987","",8, xAxis1987);
   RZ_stretch_tot_7__1987->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_7__1987->SetFillColor(ci);
   RZ_stretch_tot_7__1987->SetLineWidth(2);
   RZ_stretch_tot_7__1987->SetMarkerStyle(20);
   RZ_stretch_tot_7__1987->SetMarkerSize(0.8);
   RZ_stretch_tot_7__1987->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_7__1987->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__1987->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__1987->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__1987->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__1987->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__1987->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__1987->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__1987->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__1987->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_7__1987->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__1987->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_7__1987->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_7__1987->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_7__1987->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_7__1987->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_7__1987->Draw("SAME E2");
   Double_t xAxis1988[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_7__1988 = new TH1D("RZ_stretch_stat_7__1988","",8, xAxis1988);
   RZ_stretch_stat_7__1988->SetStats(0);
   RZ_stretch_stat_7__1988->SetLineWidth(2);
   RZ_stretch_stat_7__1988->SetMarkerStyle(20);
   RZ_stretch_stat_7__1988->SetMarkerSize(0.8);
   RZ_stretch_stat_7__1988->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_7__1988->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__1988->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__1988->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__1988->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__1988->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__1988->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__1988->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__1988->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__1988->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_7__1988->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__1988->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_7__1988->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_7__1988->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_7__1988->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_7__1988->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_7__1988->Draw("SAME PZ");
   Double_t xAxis1989[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_7__1989 = new TH1D("SP_stretch_tot_7__1989","",8, xAxis1989);
   SP_stretch_tot_7__1989->SetBinContent(3,1.117759);
   SP_stretch_tot_7__1989->SetBinContent(4,1.087963);
   SP_stretch_tot_7__1989->SetBinError(3,0.001357289);
   SP_stretch_tot_7__1989->SetBinError(4,0.005184974);
   SP_stretch_tot_7__1989->SetEntries(169365);
   SP_stretch_tot_7__1989->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_7__1989->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__1989->SetLineColor(ci);
   SP_stretch_tot_7__1989->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_7__1989->SetMarkerColor(ci);
   SP_stretch_tot_7__1989->SetMarkerStyle(20);
   SP_stretch_tot_7__1989->SetMarkerSize(0.8);
   SP_stretch_tot_7__1989->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_7__1989->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_7__1989->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__1989->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__1989->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__1989->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_7__1989->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_7__1989->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__1989->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__1989->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_7__1989->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_7__1989->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_7__1989->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_7__1989->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_7__1989->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_7__1989->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_7__1989->Draw("SAME E2");
   Double_t xAxis1990[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_7__1990 = new TH1D("SP_stretch_stat_7__1990","",8, xAxis1990);
   SP_stretch_stat_7__1990->SetBinContent(3,1.117759);
   SP_stretch_stat_7__1990->SetBinContent(4,1.087963);
   SP_stretch_stat_7__1990->SetBinError(3,0.0005620187);
   SP_stretch_stat_7__1990->SetBinError(4,0.0007907657);
   SP_stretch_stat_7__1990->SetEntries(5169294);
   SP_stretch_stat_7__1990->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__1990->SetLineColor(ci);
   SP_stretch_stat_7__1990->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_7__1990->SetMarkerColor(ci);
   SP_stretch_stat_7__1990->SetMarkerStyle(20);
   SP_stretch_stat_7__1990->SetMarkerSize(0.8);
   SP_stretch_stat_7__1990->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_7__1990->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_7__1990->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__1990->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__1990->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__1990->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_7__1990->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_7__1990->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__1990->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__1990->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_7__1990->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_7__1990->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_7__1990->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_7__1990->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_7__1990->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_7__1990->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_7__1990->Draw("SAME PZ");
   dw__330->Modified();
   c1_n26->cd();
  
// ------------>Primitives in pad: up
   TPad *up__331 = new TPad("up", "up",0,0.5,1,1);
   up__331->Draw();
   up__331->cd();
   up__331->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__331->SetFillColor(0);
   up__331->SetFillStyle(4000);
   up__331->SetBorderMode(0);
   up__331->SetBorderSize(0);
   up__331->SetTickx(1);
   up__331->SetTicky(1);
   up__331->SetLeftMargin(0.120603);
   up__331->SetRightMargin(0.08040201);
   up__331->SetBottomMargin(0.01243523);
   up__331->SetFrameBorderMode(0);
   up__331->SetFrameBorderMode(0);
   Double_t xAxis1991[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__1991 = new TH1D("chist__1991","",8, xAxis1991);
   chist__1991->SetMinimum(-0.7);
   chist__1991->SetMaximum(1.1);
   chist__1991->SetDirectory(nullptr);
   chist__1991->SetStats(0);
   chist__1991->SetLineColor(0);
   chist__1991->SetLineWidth(0);
   chist__1991->SetMarkerColor(0);
   chist__1991->SetMarkerStyle(20);
   chist__1991->SetMarkerSize(0);
   chist__1991->GetXaxis()->SetRange(1,8);
   chist__1991->GetXaxis()->SetNdivisions(4000510);
   chist__1991->GetXaxis()->SetLabelFont(42);
   chist__1991->GetXaxis()->SetLabelSize(0);
   chist__1991->GetXaxis()->SetTitleSize(0.08);
   chist__1991->GetXaxis()->SetTickLength(0.04);
   chist__1991->GetXaxis()->SetTitleOffset(2.020933);
   chist__1991->GetXaxis()->SetTitleFont(42);
   chist__1991->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__1991->GetYaxis()->SetNdivisions(3000510);
   chist__1991->GetYaxis()->SetLabelFont(42);
   chist__1991->GetYaxis()->SetLabelSize(0.08);
   chist__1991->GetYaxis()->SetTitleSize(0.08);
   chist__1991->GetYaxis()->SetTickLength(0.04);
   chist__1991->GetYaxis()->SetTitleOffset(0.727387);
   chist__1991->GetYaxis()->SetTitleFont(42);
   chist__1991->GetZaxis()->SetLabelFont(42);
   chist__1991->GetZaxis()->SetLabelSize(0.05);
   chist__1991->GetZaxis()->SetTitleSize(0.05);
   chist__1991->GetZaxis()->SetTitleOffset(1);
   chist__1991->GetZaxis()->SetTitleFont(42);
   chist__1991->Draw("pe");
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
   
   TLegend *leg = new TLegend(0.4861809,0.523,0.879397,0.875,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03000911);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_7","RZ, Total unc., TUNE26","F");

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RZ_shift_stat_7","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_7","SP, Total unc., TUNE26","F");

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_stat_7","SP, Stat unc., TUNE26","PE");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
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
      tex = new TLatex(0.160804,0.5098,"80.00 #leq p_{T}^{#gamma} [GeV] < 100.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1992[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_7__1992 = new TH1D("RZ_shift_tot_7__1992","",8, xAxis1992);
   RZ_shift_tot_7__1992->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_7__1992->SetFillColor(ci);
   RZ_shift_tot_7__1992->SetMarkerStyle(20);
   RZ_shift_tot_7__1992->SetMarkerSize(0.8);
   RZ_shift_tot_7__1992->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_7__1992->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_7__1992->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__1992->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__1992->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__1992->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_7__1992->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_7__1992->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__1992->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__1992->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_7__1992->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_7__1992->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_7__1992->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_7__1992->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_7__1992->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_7__1992->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_7__1992->Draw("SAME E2");
   Double_t xAxis1993[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_7__1993 = new TH1D("RZ_shift_stat_7__1993","",8, xAxis1993);
   RZ_shift_stat_7__1993->SetStats(0);
   RZ_shift_stat_7__1993->SetMarkerStyle(20);
   RZ_shift_stat_7__1993->SetMarkerSize(0.8);
   RZ_shift_stat_7__1993->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_7__1993->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_7__1993->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__1993->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__1993->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__1993->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_7__1993->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_7__1993->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__1993->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__1993->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_7__1993->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_7__1993->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_7__1993->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_7__1993->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_7__1993->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_7__1993->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_7__1993->Draw("SAME PZ");
   Double_t xAxis1994[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_7__1994 = new TH1D("SP_shift_tot_7__1994","",8, xAxis1994);
   SP_shift_tot_7__1994->SetBinContent(3,-0.04305606);
   SP_shift_tot_7__1994->SetBinContent(4,-0.003080425);
   SP_shift_tot_7__1994->SetBinError(3,0.0008399378);
   SP_shift_tot_7__1994->SetBinError(4,0.005225818);
   SP_shift_tot_7__1994->SetEntries(75.98072);
   SP_shift_tot_7__1994->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_7__1994->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__1994->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_7__1994->SetMarkerColor(ci);
   SP_shift_tot_7__1994->SetMarkerStyle(20);
   SP_shift_tot_7__1994->SetMarkerSize(0.8);
   SP_shift_tot_7__1994->GetXaxis()->SetRange(1,8);
   SP_shift_tot_7__1994->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_7__1994->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__1994->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__1994->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__1994->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_7__1994->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_7__1994->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__1994->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__1994->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_7__1994->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_7__1994->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_7__1994->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_7__1994->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_7__1994->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_7__1994->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_7__1994->Draw("SAME E2");
   Double_t xAxis1995[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_7__1995 = new TH1D("SP_shift_stat_7__1995","",8, xAxis1995);
   SP_shift_stat_7__1995->SetBinContent(3,-0.04305606);
   SP_shift_stat_7__1995->SetBinContent(4,-0.003080425);
   SP_shift_stat_7__1995->SetBinError(3,0.000279169);
   SP_shift_stat_7__1995->SetBinError(4,0.0004407022);
   SP_shift_stat_7__1995->SetEntries(7821.221);
   SP_shift_stat_7__1995->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__1995->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_7__1995->SetMarkerColor(ci);
   SP_shift_stat_7__1995->SetMarkerStyle(20);
   SP_shift_stat_7__1995->SetMarkerSize(0.8);
   SP_shift_stat_7__1995->GetXaxis()->SetRange(1,8);
   SP_shift_stat_7__1995->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_7__1995->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__1995->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__1995->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__1995->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_7__1995->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_7__1995->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__1995->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__1995->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_7__1995->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_7__1995->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_7__1995->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_7__1995->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_7__1995->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_7__1995->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_7__1995->Draw("SAME PZ");
   Double_t xAxis1996[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__1996 = new TH1D("chist_copy__1996","",8, xAxis1996);
   chist_copy__1996->SetMinimum(-0.7);
   chist_copy__1996->SetMaximum(1.1);
   chist_copy__1996->SetDirectory(nullptr);
   chist_copy__1996->SetStats(0);
   chist_copy__1996->SetLineColor(0);
   chist_copy__1996->SetLineWidth(0);
   chist_copy__1996->SetMarkerColor(0);
   chist_copy__1996->SetMarkerStyle(20);
   chist_copy__1996->SetMarkerSize(0);
   chist_copy__1996->GetXaxis()->SetRange(1,8);
   chist_copy__1996->GetXaxis()->SetNdivisions(4000510);
   chist_copy__1996->GetXaxis()->SetLabelFont(42);
   chist_copy__1996->GetXaxis()->SetLabelSize(0);
   chist_copy__1996->GetXaxis()->SetTitleSize(0.08);
   chist_copy__1996->GetXaxis()->SetTickLength(0.04);
   chist_copy__1996->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__1996->GetXaxis()->SetTitleFont(42);
   chist_copy__1996->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__1996->GetYaxis()->SetNdivisions(3000510);
   chist_copy__1996->GetYaxis()->SetLabelFont(42);
   chist_copy__1996->GetYaxis()->SetLabelSize(0.08);
   chist_copy__1996->GetYaxis()->SetTitleSize(0.08);
   chist_copy__1996->GetYaxis()->SetTickLength(0.04);
   chist_copy__1996->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__1996->GetYaxis()->SetTitleFont(42);
   chist_copy__1996->GetZaxis()->SetLabelFont(42);
   chist_copy__1996->GetZaxis()->SetLabelSize(0.05);
   chist_copy__1996->GetZaxis()->SetTitleSize(0.05);
   chist_copy__1996->GetZaxis()->SetTitleOffset(1);
   chist_copy__1996->GetZaxis()->SetTitleFont(42);
   chist_copy__1996->Draw("sameaxis");
   up__331->Modified();
   c1_n26->cd();
   c1_n26->Modified();
   c1_n26->SetSelected(c1_n26);
}
