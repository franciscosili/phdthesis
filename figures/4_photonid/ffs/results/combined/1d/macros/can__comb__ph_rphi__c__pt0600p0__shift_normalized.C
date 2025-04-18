#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rphi__c__pt0600p0__shift_normalized()
{
//=========Macro generated from canvas: c1/
//=========  (Thu Apr  4 19:00:22 2024) by ROOT version 6.30/02
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__286 = new TPad("dw", "dw",0,0,1,0.5);
   dw__286->Draw();
   dw__286->cd();
   dw__286->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__286->SetFillColor(0);
   dw__286->SetFillStyle(4000);
   dw__286->SetBorderMode(0);
   dw__286->SetBorderSize(0);
   dw__286->SetTickx(1);
   dw__286->SetTicky(1);
   dw__286->SetLeftMargin(0.120603);
   dw__286->SetRightMargin(0.08040201);
   dw__286->SetTopMargin(0);
   dw__286->SetBottomMargin(0.2072539);
   dw__286->SetFrameBorderMode(0);
   dw__286->SetFrameBorderMode(0);
   Double_t xAxis1718[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__1718 = new TH1D("chist_dw__1718","",8, xAxis1718);
   chist_dw__1718->SetMinimum(0.2);
   chist_dw__1718->SetMaximum(3.2);
   chist_dw__1718->SetDirectory(nullptr);
   chist_dw__1718->SetStats(0);
   chist_dw__1718->SetLineColor(0);
   chist_dw__1718->SetLineWidth(0);
   chist_dw__1718->SetMarkerColor(0);
   chist_dw__1718->SetMarkerStyle(20);
   chist_dw__1718->SetMarkerSize(0);
   chist_dw__1718->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__1718->GetXaxis()->SetRange(1,8);
   chist_dw__1718->GetXaxis()->SetLabelFont(42);
   chist_dw__1718->GetXaxis()->SetLabelSize(0.08);
   chist_dw__1718->GetXaxis()->SetTitleSize(0.08);
   chist_dw__1718->GetXaxis()->SetTickLength(0.04);
   chist_dw__1718->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__1718->GetXaxis()->SetTitleFont(42);
   chist_dw__1718->GetYaxis()->SetTitle("Stretch");
   chist_dw__1718->GetYaxis()->CenterTitle(true);
   chist_dw__1718->GetYaxis()->SetNdivisions(405);
   chist_dw__1718->GetYaxis()->SetLabelFont(42);
   chist_dw__1718->GetYaxis()->SetLabelSize(0.08);
   chist_dw__1718->GetYaxis()->SetTitleSize(0.08);
   chist_dw__1718->GetYaxis()->SetTickLength(0.04);
   chist_dw__1718->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__1718->GetYaxis()->SetTitleFont(42);
   chist_dw__1718->GetZaxis()->SetLabelFont(42);
   chist_dw__1718->GetZaxis()->SetLabelSize(0.05);
   chist_dw__1718->GetZaxis()->SetTitleSize(0.05);
   chist_dw__1718->GetZaxis()->SetTitleOffset(1);
   chist_dw__1718->GetZaxis()->SetTitleFont(42);
   chist_dw__1718->Draw("");
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
   Double_t xAxis1719[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_11__1719 = new TH1D("RZ_stretch_tot_11__1719","",8, xAxis1719);
   RZ_stretch_tot_11__1719->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_11__1719->SetFillColor(ci);
   RZ_stretch_tot_11__1719->SetLineWidth(2);
   RZ_stretch_tot_11__1719->SetMarkerStyle(20);
   RZ_stretch_tot_11__1719->SetMarkerSize(0.8);
   RZ_stretch_tot_11__1719->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_11__1719->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_11__1719->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_11__1719->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_11__1719->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_11__1719->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_11__1719->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_11__1719->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_11__1719->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_11__1719->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_11__1719->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_11__1719->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_11__1719->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_11__1719->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_11__1719->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_11__1719->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_11__1719->Draw("SAME E2");
   Double_t xAxis1720[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_11__1720 = new TH1D("RZ_stretch_stat_11__1720","",8, xAxis1720);
   RZ_stretch_stat_11__1720->SetStats(0);
   RZ_stretch_stat_11__1720->SetLineWidth(2);
   RZ_stretch_stat_11__1720->SetMarkerStyle(20);
   RZ_stretch_stat_11__1720->SetMarkerSize(0.8);
   RZ_stretch_stat_11__1720->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_11__1720->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_11__1720->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_11__1720->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_11__1720->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_11__1720->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_11__1720->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_11__1720->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_11__1720->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_11__1720->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_11__1720->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_11__1720->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_11__1720->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_11__1720->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_11__1720->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_11__1720->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_11__1720->Draw("SAME PZ");
   Double_t xAxis1721[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_11__1721 = new TH1D("SP_stretch_tot_11__1721","",8, xAxis1721);
   SP_stretch_tot_11__1721->SetBinContent(1,1.566796);
   SP_stretch_tot_11__1721->SetBinContent(2,1.818321);
   SP_stretch_tot_11__1721->SetBinContent(3,1.782008);
   SP_stretch_tot_11__1721->SetBinContent(4,1.895423);
   SP_stretch_tot_11__1721->SetBinContent(6,1.750242);
   SP_stretch_tot_11__1721->SetBinContent(7,1.944956);
   SP_stretch_tot_11__1721->SetBinContent(8,1.856262);
   SP_stretch_tot_11__1721->SetBinError(1,0.3031021);
   SP_stretch_tot_11__1721->SetBinError(2,0.5682088);
   SP_stretch_tot_11__1721->SetBinError(3,0.6490073);
   SP_stretch_tot_11__1721->SetBinError(4,0.6892571);
   SP_stretch_tot_11__1721->SetBinError(6,0.4735808);
   SP_stretch_tot_11__1721->SetBinError(7,0.4716651);
   SP_stretch_tot_11__1721->SetBinError(8,0.2727357);
   SP_stretch_tot_11__1721->SetEntries(86.84509);
   SP_stretch_tot_11__1721->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_11__1721->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_11__1721->SetLineColor(ci);
   SP_stretch_tot_11__1721->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_11__1721->SetMarkerColor(ci);
   SP_stretch_tot_11__1721->SetMarkerStyle(20);
   SP_stretch_tot_11__1721->SetMarkerSize(0.8);
   SP_stretch_tot_11__1721->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_11__1721->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_11__1721->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_11__1721->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_11__1721->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_11__1721->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_11__1721->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_11__1721->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_11__1721->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_11__1721->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_11__1721->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_11__1721->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_11__1721->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_11__1721->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_11__1721->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_11__1721->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_11__1721->Draw("SAME E2");
   Double_t xAxis1722[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_11__1722 = new TH1D("SP_stretch_stat_11__1722","",8, xAxis1722);
   SP_stretch_stat_11__1722->SetBinContent(1,1.566796);
   SP_stretch_stat_11__1722->SetBinContent(2,1.818321);
   SP_stretch_stat_11__1722->SetBinContent(3,1.782008);
   SP_stretch_stat_11__1722->SetBinContent(4,1.895423);
   SP_stretch_stat_11__1722->SetBinContent(6,1.750242);
   SP_stretch_stat_11__1722->SetBinContent(7,1.944956);
   SP_stretch_stat_11__1722->SetBinContent(8,1.856262);
   SP_stretch_stat_11__1722->SetBinError(1,0.03131199);
   SP_stretch_stat_11__1722->SetBinError(2,0.07416816);
   SP_stretch_stat_11__1722->SetBinError(3,0.04634495);
   SP_stretch_stat_11__1722->SetBinError(4,0.04883592);
   SP_stretch_stat_11__1722->SetBinError(6,0.0536964);
   SP_stretch_stat_11__1722->SetBinError(7,0.1188609);
   SP_stretch_stat_11__1722->SetBinError(8,0.1304307);
   SP_stretch_stat_11__1722->SetEntries(3532.901);
   SP_stretch_stat_11__1722->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_11__1722->SetLineColor(ci);
   SP_stretch_stat_11__1722->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_11__1722->SetMarkerColor(ci);
   SP_stretch_stat_11__1722->SetMarkerStyle(20);
   SP_stretch_stat_11__1722->SetMarkerSize(0.8);
   SP_stretch_stat_11__1722->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_11__1722->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_11__1722->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_11__1722->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_11__1722->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_11__1722->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_11__1722->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_11__1722->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_11__1722->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_11__1722->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_11__1722->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_11__1722->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_11__1722->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_11__1722->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_11__1722->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_11__1722->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_11__1722->Draw("SAME PZ");
   dw__286->Modified();
   c1->cd();
  
// ------------>Primitives in pad: up
   TPad *up__287 = new TPad("up", "up",0,0.5,1,1);
   up__287->Draw();
   up__287->cd();
   up__287->Range(-0.3577359,-1.042204,2.608491,2.3517);
   up__287->SetFillColor(0);
   up__287->SetFillStyle(4000);
   up__287->SetBorderMode(0);
   up__287->SetBorderSize(0);
   up__287->SetTickx(1);
   up__287->SetTicky(1);
   up__287->SetLeftMargin(0.120603);
   up__287->SetRightMargin(0.08040201);
   up__287->SetBottomMargin(0.01243523);
   up__287->SetFrameBorderMode(0);
   up__287->SetFrameBorderMode(0);
   Double_t xAxis1723[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__1723 = new TH1D("chist__1723","",8, xAxis1723);
   chist__1723->SetMinimum(-1);
   chist__1723->SetMaximum(2);
   chist__1723->SetDirectory(nullptr);
   chist__1723->SetStats(0);
   chist__1723->SetLineColor(0);
   chist__1723->SetLineWidth(0);
   chist__1723->SetMarkerColor(0);
   chist__1723->SetMarkerStyle(20);
   chist__1723->SetMarkerSize(0);
   chist__1723->GetXaxis()->SetRange(1,8);
   chist__1723->GetXaxis()->SetNdivisions(4000510);
   chist__1723->GetXaxis()->SetLabelFont(42);
   chist__1723->GetXaxis()->SetLabelSize(0);
   chist__1723->GetXaxis()->SetTitleSize(0.08);
   chist__1723->GetXaxis()->SetTickLength(0.04);
   chist__1723->GetXaxis()->SetTitleOffset(2.020933);
   chist__1723->GetXaxis()->SetTitleFont(42);
   chist__1723->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__1723->GetYaxis()->SetNdivisions(3000510);
   chist__1723->GetYaxis()->SetLabelFont(42);
   chist__1723->GetYaxis()->SetLabelSize(0.08);
   chist__1723->GetYaxis()->SetTitleSize(0.08);
   chist__1723->GetYaxis()->SetTickLength(0.04);
   chist__1723->GetYaxis()->SetTitleOffset(0.727387);
   chist__1723->GetYaxis()->SetTitleFont(42);
   chist__1723->GetZaxis()->SetLabelFont(42);
   chist__1723->GetZaxis()->SetLabelSize(0.05);
   chist__1723->GetZaxis()->SetTitleSize(0.05);
   chist__1723->GetZaxis()->SetTitleOffset(1);
   chist__1723->GetZaxis()->SetTitleFont(42);
   chist__1723->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_11","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_11","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_11","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_11","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"R_{#phi}");
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
      tex = new TLatex(0.160804,0.5098,"600.00 #leq p_{T}^{#gamma} [GeV] < 5000.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1724[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_11__1724 = new TH1D("RZ_shift_tot_11__1724","",8, xAxis1724);
   RZ_shift_tot_11__1724->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_11__1724->SetFillColor(ci);
   RZ_shift_tot_11__1724->SetMarkerStyle(20);
   RZ_shift_tot_11__1724->SetMarkerSize(0.8);
   RZ_shift_tot_11__1724->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_11__1724->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_11__1724->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_11__1724->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_11__1724->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_11__1724->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_11__1724->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_11__1724->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_11__1724->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_11__1724->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_11__1724->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_11__1724->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_11__1724->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_11__1724->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_11__1724->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_11__1724->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_11__1724->Draw("SAME E2");
   Double_t xAxis1725[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_11__1725 = new TH1D("RZ_shift_stat_11__1725","",8, xAxis1725);
   RZ_shift_stat_11__1725->SetStats(0);
   RZ_shift_stat_11__1725->SetMarkerStyle(20);
   RZ_shift_stat_11__1725->SetMarkerSize(0.8);
   RZ_shift_stat_11__1725->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_11__1725->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_11__1725->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_11__1725->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_11__1725->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_11__1725->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_11__1725->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_11__1725->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_11__1725->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_11__1725->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_11__1725->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_11__1725->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_11__1725->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_11__1725->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_11__1725->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_11__1725->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_11__1725->Draw("SAME PZ");
   Double_t xAxis1726[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_11__1726 = new TH1D("SP_shift_tot_11__1726","",8, xAxis1726);
   SP_shift_tot_11__1726->SetBinContent(1,0.4486213);
   SP_shift_tot_11__1726->SetBinContent(2,0.2366659);
   SP_shift_tot_11__1726->SetBinContent(3,0.08139289);
   SP_shift_tot_11__1726->SetBinContent(4,-0.1488936);
   SP_shift_tot_11__1726->SetBinContent(6,-0.02070364);
   SP_shift_tot_11__1726->SetBinContent(7,0.3414917);
   SP_shift_tot_11__1726->SetBinContent(8,0.1967872);
   SP_shift_tot_11__1726->SetBinError(1,0.1175793);
   SP_shift_tot_11__1726->SetBinError(2,0.2335933);
   SP_shift_tot_11__1726->SetBinError(3,0.2709516);
   SP_shift_tot_11__1726->SetBinError(4,0.3536323);
   SP_shift_tot_11__1726->SetBinError(6,0.2035697);
   SP_shift_tot_11__1726->SetBinError(7,0.1370228);
   SP_shift_tot_11__1726->SetBinError(8,0.2415897);
   SP_shift_tot_11__1726->SetEntries(3.344326);
   SP_shift_tot_11__1726->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_11__1726->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_11__1726->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_11__1726->SetMarkerColor(ci);
   SP_shift_tot_11__1726->SetMarkerStyle(20);
   SP_shift_tot_11__1726->SetMarkerSize(0.8);
   SP_shift_tot_11__1726->GetXaxis()->SetRange(1,8);
   SP_shift_tot_11__1726->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_11__1726->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_11__1726->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_11__1726->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_11__1726->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_11__1726->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_11__1726->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_11__1726->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_11__1726->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_11__1726->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_11__1726->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_11__1726->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_11__1726->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_11__1726->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_11__1726->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_11__1726->Draw("SAME E2");
   Double_t xAxis1727[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_11__1727 = new TH1D("SP_shift_stat_11__1727","",8, xAxis1727);
   SP_shift_stat_11__1727->SetBinContent(1,0.4486213);
   SP_shift_stat_11__1727->SetBinContent(2,0.2366659);
   SP_shift_stat_11__1727->SetBinContent(3,0.08139289);
   SP_shift_stat_11__1727->SetBinContent(4,-0.1488936);
   SP_shift_stat_11__1727->SetBinContent(6,-0.02070364);
   SP_shift_stat_11__1727->SetBinContent(7,0.3414917);
   SP_shift_stat_11__1727->SetBinContent(8,0.1967872);
   SP_shift_stat_11__1727->SetBinError(1,0.009448602);
   SP_shift_stat_11__1727->SetBinError(2,0.02752695);
   SP_shift_stat_11__1727->SetBinError(3,0.01690946);
   SP_shift_stat_11__1727->SetBinError(4,0.02085151);
   SP_shift_stat_11__1727->SetBinError(6,0.02352898);
   SP_shift_stat_11__1727->SetBinError(7,0.0404781);
   SP_shift_stat_11__1727->SetBinError(8,0.054795);
   SP_shift_stat_11__1727->SetEntries(190.6223);
   SP_shift_stat_11__1727->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_11__1727->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_11__1727->SetMarkerColor(ci);
   SP_shift_stat_11__1727->SetMarkerStyle(20);
   SP_shift_stat_11__1727->SetMarkerSize(0.8);
   SP_shift_stat_11__1727->GetXaxis()->SetRange(1,8);
   SP_shift_stat_11__1727->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_11__1727->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_11__1727->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_11__1727->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_11__1727->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_11__1727->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_11__1727->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_11__1727->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_11__1727->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_11__1727->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_11__1727->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_11__1727->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_11__1727->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_11__1727->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_11__1727->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_11__1727->Draw("SAME PZ");
   Double_t xAxis1728[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__1728 = new TH1D("chist_copy__1728","",8, xAxis1728);
   chist_copy__1728->SetMinimum(-1);
   chist_copy__1728->SetMaximum(2);
   chist_copy__1728->SetDirectory(nullptr);
   chist_copy__1728->SetStats(0);
   chist_copy__1728->SetLineColor(0);
   chist_copy__1728->SetLineWidth(0);
   chist_copy__1728->SetMarkerColor(0);
   chist_copy__1728->SetMarkerStyle(20);
   chist_copy__1728->SetMarkerSize(0);
   chist_copy__1728->GetXaxis()->SetRange(1,8);
   chist_copy__1728->GetXaxis()->SetNdivisions(4000510);
   chist_copy__1728->GetXaxis()->SetLabelFont(42);
   chist_copy__1728->GetXaxis()->SetLabelSize(0);
   chist_copy__1728->GetXaxis()->SetTitleSize(0.08);
   chist_copy__1728->GetXaxis()->SetTickLength(0.04);
   chist_copy__1728->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__1728->GetXaxis()->SetTitleFont(42);
   chist_copy__1728->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__1728->GetYaxis()->SetNdivisions(3000510);
   chist_copy__1728->GetYaxis()->SetLabelFont(42);
   chist_copy__1728->GetYaxis()->SetLabelSize(0.08);
   chist_copy__1728->GetYaxis()->SetTitleSize(0.08);
   chist_copy__1728->GetYaxis()->SetTickLength(0.04);
   chist_copy__1728->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__1728->GetYaxis()->SetTitleFont(42);
   chist_copy__1728->GetZaxis()->SetLabelFont(42);
   chist_copy__1728->GetZaxis()->SetLabelSize(0.05);
   chist_copy__1728->GetZaxis()->SetTitleSize(0.05);
   chist_copy__1728->GetZaxis()->SetTitleOffset(1);
   chist_copy__1728->GetZaxis()->SetTitleFont(42);
   chist_copy__1728->Draw("sameaxis");
   up__287->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
