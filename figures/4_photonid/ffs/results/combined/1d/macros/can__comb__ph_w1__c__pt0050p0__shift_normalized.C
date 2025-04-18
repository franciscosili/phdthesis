#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_w1__c__pt0050p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n30/
//=========  (Thu Apr  4 19:00:56 2024) by ROOT version 6.30/02
   TCanvas *c1_n30 = new TCanvas("c1_n30", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n30->SetHighLightColor(2);
   c1_n30->Range(0,0,1,1);
   c1_n30->SetFillColor(0);
   c1_n30->SetBorderMode(0);
   c1_n30->SetBorderSize(2);
   c1_n30->SetTickx(1);
   c1_n30->SetTicky(1);
   c1_n30->SetLeftMargin(0.16);
   c1_n30->SetRightMargin(0.05);
   c1_n30->SetTopMargin(0.05);
   c1_n30->SetBottomMargin(0.16);
   c1_n30->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__794 = new TPad("dw", "dw",0,0,1,0.5);
   dw__794->Draw();
   dw__794->cd();
   dw__794->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__794->SetFillColor(0);
   dw__794->SetFillStyle(4000);
   dw__794->SetBorderMode(0);
   dw__794->SetBorderSize(0);
   dw__794->SetTickx(1);
   dw__794->SetTicky(1);
   dw__794->SetLeftMargin(0.120603);
   dw__794->SetRightMargin(0.08040201);
   dw__794->SetTopMargin(0);
   dw__794->SetBottomMargin(0.2072539);
   dw__794->SetFrameBorderMode(0);
   dw__794->SetFrameBorderMode(0);
   Double_t xAxis4772[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__4772 = new TH1D("chist_dw__4772","",8, xAxis4772);
   chist_dw__4772->SetMinimum(0.2);
   chist_dw__4772->SetMaximum(3.2);
   chist_dw__4772->SetDirectory(nullptr);
   chist_dw__4772->SetStats(0);
   chist_dw__4772->SetLineColor(0);
   chist_dw__4772->SetLineWidth(0);
   chist_dw__4772->SetMarkerColor(0);
   chist_dw__4772->SetMarkerStyle(20);
   chist_dw__4772->SetMarkerSize(0);
   chist_dw__4772->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__4772->GetXaxis()->SetRange(1,8);
   chist_dw__4772->GetXaxis()->SetLabelFont(42);
   chist_dw__4772->GetXaxis()->SetLabelSize(0.08);
   chist_dw__4772->GetXaxis()->SetTitleSize(0.08);
   chist_dw__4772->GetXaxis()->SetTickLength(0.04);
   chist_dw__4772->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__4772->GetXaxis()->SetTitleFont(42);
   chist_dw__4772->GetYaxis()->SetTitle("Stretch");
   chist_dw__4772->GetYaxis()->CenterTitle(true);
   chist_dw__4772->GetYaxis()->SetNdivisions(405);
   chist_dw__4772->GetYaxis()->SetLabelFont(42);
   chist_dw__4772->GetYaxis()->SetLabelSize(0.08);
   chist_dw__4772->GetYaxis()->SetTitleSize(0.08);
   chist_dw__4772->GetYaxis()->SetTickLength(0.04);
   chist_dw__4772->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__4772->GetYaxis()->SetTitleFont(42);
   chist_dw__4772->GetZaxis()->SetLabelFont(42);
   chist_dw__4772->GetZaxis()->SetLabelSize(0.05);
   chist_dw__4772->GetZaxis()->SetTitleSize(0.05);
   chist_dw__4772->GetZaxis()->SetTitleOffset(1);
   chist_dw__4772->GetZaxis()->SetTitleFont(42);
   chist_dw__4772->Draw("");
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
   Double_t xAxis4773[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_5__4773 = new TH1D("RZ_stretch_tot_5__4773","",8, xAxis4773);
   RZ_stretch_tot_5__4773->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_5__4773->SetFillColor(ci);
   RZ_stretch_tot_5__4773->SetLineWidth(2);
   RZ_stretch_tot_5__4773->SetMarkerStyle(20);
   RZ_stretch_tot_5__4773->SetMarkerSize(0.8);
   RZ_stretch_tot_5__4773->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_5__4773->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_5__4773->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_5__4773->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_5__4773->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_5__4773->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_5__4773->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_5__4773->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_5__4773->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_5__4773->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_5__4773->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_5__4773->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_5__4773->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_5__4773->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_5__4773->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_5__4773->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_5__4773->Draw("SAME E2");
   Double_t xAxis4774[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_5__4774 = new TH1D("RZ_stretch_stat_5__4774","",8, xAxis4774);
   RZ_stretch_stat_5__4774->SetStats(0);
   RZ_stretch_stat_5__4774->SetLineWidth(2);
   RZ_stretch_stat_5__4774->SetMarkerStyle(20);
   RZ_stretch_stat_5__4774->SetMarkerSize(0.8);
   RZ_stretch_stat_5__4774->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_5__4774->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_5__4774->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_5__4774->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_5__4774->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_5__4774->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_5__4774->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_5__4774->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_5__4774->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_5__4774->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_5__4774->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_5__4774->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_5__4774->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_5__4774->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_5__4774->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_5__4774->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_5__4774->Draw("SAME PZ");
   Double_t xAxis4775[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_5__4775 = new TH1D("SP_stretch_tot_5__4775","",8, xAxis4775);
   SP_stretch_tot_5__4775->SetBinContent(1,1.130006);
   SP_stretch_tot_5__4775->SetBinContent(2,1.118014);
   SP_stretch_tot_5__4775->SetBinContent(3,1.096731);
   SP_stretch_tot_5__4775->SetBinContent(4,1.118176);
   SP_stretch_tot_5__4775->SetBinContent(6,1.017198);
   SP_stretch_tot_5__4775->SetBinContent(7,1.138709);
   SP_stretch_tot_5__4775->SetBinContent(8,1.228661);
   SP_stretch_tot_5__4775->SetBinError(1,0.01922103);
   SP_stretch_tot_5__4775->SetBinError(2,0.01707255);
   SP_stretch_tot_5__4775->SetBinError(3,0.01421355);
   SP_stretch_tot_5__4775->SetBinError(4,0.0117728);
   SP_stretch_tot_5__4775->SetBinError(6,0.01831499);
   SP_stretch_tot_5__4775->SetBinError(7,0.01256463);
   SP_stretch_tot_5__4775->SetBinError(8,0.02062892);
   SP_stretch_tot_5__4775->SetEntries(32067.81);
   SP_stretch_tot_5__4775->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_5__4775->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_5__4775->SetLineColor(ci);
   SP_stretch_tot_5__4775->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_5__4775->SetMarkerColor(ci);
   SP_stretch_tot_5__4775->SetMarkerStyle(20);
   SP_stretch_tot_5__4775->SetMarkerSize(0.8);
   SP_stretch_tot_5__4775->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_5__4775->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_5__4775->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_5__4775->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_5__4775->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_5__4775->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_5__4775->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_5__4775->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_5__4775->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_5__4775->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_5__4775->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_5__4775->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_5__4775->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_5__4775->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_5__4775->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_5__4775->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_5__4775->Draw("SAME E2");
   Double_t xAxis4776[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_5__4776 = new TH1D("SP_stretch_stat_5__4776","",8, xAxis4776);
   SP_stretch_stat_5__4776->SetBinContent(1,1.130006);
   SP_stretch_stat_5__4776->SetBinContent(2,1.118014);
   SP_stretch_stat_5__4776->SetBinContent(3,1.096731);
   SP_stretch_stat_5__4776->SetBinContent(4,1.118176);
   SP_stretch_stat_5__4776->SetBinContent(6,1.017198);
   SP_stretch_stat_5__4776->SetBinContent(7,1.138709);
   SP_stretch_stat_5__4776->SetBinContent(8,1.228661);
   SP_stretch_stat_5__4776->SetBinError(1,0.0002721611);
   SP_stretch_stat_5__4776->SetBinError(2,0.0005166664);
   SP_stretch_stat_5__4776->SetBinError(3,0.000313526);
   SP_stretch_stat_5__4776->SetBinError(4,0.0003275251);
   SP_stretch_stat_5__4776->SetBinError(6,0.0003015399);
   SP_stretch_stat_5__4776->SetBinError(7,0.000343485);
   SP_stretch_stat_5__4776->SetBinError(8,0.0003083908);
   SP_stretch_stat_5__4776->SetEntries(7.239968e+07);
   SP_stretch_stat_5__4776->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_5__4776->SetLineColor(ci);
   SP_stretch_stat_5__4776->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_5__4776->SetMarkerColor(ci);
   SP_stretch_stat_5__4776->SetMarkerStyle(20);
   SP_stretch_stat_5__4776->SetMarkerSize(0.8);
   SP_stretch_stat_5__4776->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_5__4776->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_5__4776->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_5__4776->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_5__4776->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_5__4776->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_5__4776->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_5__4776->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_5__4776->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_5__4776->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_5__4776->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_5__4776->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_5__4776->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_5__4776->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_5__4776->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_5__4776->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_5__4776->Draw("SAME PZ");
   dw__794->Modified();
   c1_n30->cd();
  
// ------------>Primitives in pad: up
   TPad *up__795 = new TPad("up", "up",0,0.5,1,1);
   up__795->Draw();
   up__795->cd();
   up__795->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__795->SetFillColor(0);
   up__795->SetFillStyle(4000);
   up__795->SetBorderMode(0);
   up__795->SetBorderSize(0);
   up__795->SetTickx(1);
   up__795->SetTicky(1);
   up__795->SetLeftMargin(0.120603);
   up__795->SetRightMargin(0.08040201);
   up__795->SetBottomMargin(0.01243523);
   up__795->SetFrameBorderMode(0);
   up__795->SetFrameBorderMode(0);
   Double_t xAxis4777[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__4777 = new TH1D("chist__4777","",8, xAxis4777);
   chist__4777->SetMinimum(-0.9);
   chist__4777->SetMaximum(2);
   chist__4777->SetDirectory(nullptr);
   chist__4777->SetStats(0);
   chist__4777->SetLineColor(0);
   chist__4777->SetLineWidth(0);
   chist__4777->SetMarkerColor(0);
   chist__4777->SetMarkerStyle(20);
   chist__4777->SetMarkerSize(0);
   chist__4777->GetXaxis()->SetRange(1,8);
   chist__4777->GetXaxis()->SetNdivisions(4000510);
   chist__4777->GetXaxis()->SetLabelFont(42);
   chist__4777->GetXaxis()->SetLabelSize(0);
   chist__4777->GetXaxis()->SetTitleSize(0.08);
   chist__4777->GetXaxis()->SetTickLength(0.04);
   chist__4777->GetXaxis()->SetTitleOffset(2.020933);
   chist__4777->GetXaxis()->SetTitleFont(42);
   chist__4777->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__4777->GetYaxis()->SetNdivisions(3000510);
   chist__4777->GetYaxis()->SetLabelFont(42);
   chist__4777->GetYaxis()->SetLabelSize(0.08);
   chist__4777->GetYaxis()->SetTitleSize(0.08);
   chist__4777->GetYaxis()->SetTickLength(0.04);
   chist__4777->GetYaxis()->SetTitleOffset(0.727387);
   chist__4777->GetYaxis()->SetTitleFont(42);
   chist__4777->GetZaxis()->SetLabelFont(42);
   chist__4777->GetZaxis()->SetLabelSize(0.05);
   chist__4777->GetZaxis()->SetTitleSize(0.05);
   chist__4777->GetZaxis()->SetTitleOffset(1);
   chist__4777->GetZaxis()->SetTitleFont(42);
   chist__4777->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_5","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_5","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_5","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_5","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.633,"w_{1}");
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
      tex = new TLatex(0.160804,0.5098,"50.00 #leq p_{T}^{#gamma} [GeV] < 60.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis4778[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_5__4778 = new TH1D("RZ_shift_tot_5__4778","",8, xAxis4778);
   RZ_shift_tot_5__4778->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_5__4778->SetFillColor(ci);
   RZ_shift_tot_5__4778->SetMarkerStyle(20);
   RZ_shift_tot_5__4778->SetMarkerSize(0.8);
   RZ_shift_tot_5__4778->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_5__4778->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_5__4778->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_5__4778->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_5__4778->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_5__4778->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_5__4778->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_5__4778->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_5__4778->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_5__4778->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_5__4778->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_5__4778->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_5__4778->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_5__4778->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_5__4778->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_5__4778->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_5__4778->Draw("SAME E2");
   Double_t xAxis4779[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_5__4779 = new TH1D("RZ_shift_stat_5__4779","",8, xAxis4779);
   RZ_shift_stat_5__4779->SetStats(0);
   RZ_shift_stat_5__4779->SetMarkerStyle(20);
   RZ_shift_stat_5__4779->SetMarkerSize(0.8);
   RZ_shift_stat_5__4779->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_5__4779->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_5__4779->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_5__4779->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_5__4779->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_5__4779->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_5__4779->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_5__4779->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_5__4779->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_5__4779->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_5__4779->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_5__4779->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_5__4779->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_5__4779->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_5__4779->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_5__4779->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_5__4779->Draw("SAME PZ");
   Double_t xAxis4780[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_5__4780 = new TH1D("SP_shift_tot_5__4780","",8, xAxis4780);
   SP_shift_tot_5__4780->SetBinContent(1,0.2965869);
   SP_shift_tot_5__4780->SetBinContent(2,0.365369);
   SP_shift_tot_5__4780->SetBinContent(3,0.3964774);
   SP_shift_tot_5__4780->SetBinContent(4,0.445228);
   SP_shift_tot_5__4780->SetBinContent(6,0.5067679);
   SP_shift_tot_5__4780->SetBinContent(7,0.7159986);
   SP_shift_tot_5__4780->SetBinContent(8,0.9902718);
   SP_shift_tot_5__4780->SetBinError(1,0.03273291);
   SP_shift_tot_5__4780->SetBinError(2,0.01832933);
   SP_shift_tot_5__4780->SetBinError(3,0.02095143);
   SP_shift_tot_5__4780->SetBinError(4,0.01668876);
   SP_shift_tot_5__4780->SetBinError(6,0.02425285);
   SP_shift_tot_5__4780->SetBinError(7,0.002724564);
   SP_shift_tot_5__4780->SetBinError(8,0.02036204);
   SP_shift_tot_5__4780->SetEntries(4406.163);
   SP_shift_tot_5__4780->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_5__4780->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_5__4780->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_5__4780->SetMarkerColor(ci);
   SP_shift_tot_5__4780->SetMarkerStyle(20);
   SP_shift_tot_5__4780->SetMarkerSize(0.8);
   SP_shift_tot_5__4780->GetXaxis()->SetRange(1,8);
   SP_shift_tot_5__4780->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_5__4780->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_5__4780->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_5__4780->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_5__4780->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_5__4780->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_5__4780->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_5__4780->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_5__4780->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_5__4780->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_5__4780->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_5__4780->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_5__4780->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_5__4780->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_5__4780->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_5__4780->Draw("SAME E2");
   Double_t xAxis4781[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_5__4781 = new TH1D("SP_shift_stat_5__4781","",8, xAxis4781);
   SP_shift_stat_5__4781->SetBinContent(1,0.2965869);
   SP_shift_stat_5__4781->SetBinContent(2,0.365369);
   SP_shift_stat_5__4781->SetBinContent(3,0.3964774);
   SP_shift_stat_5__4781->SetBinContent(4,0.445228);
   SP_shift_stat_5__4781->SetBinContent(6,0.5067679);
   SP_shift_stat_5__4781->SetBinContent(7,0.7159986);
   SP_shift_stat_5__4781->SetBinContent(8,0.9902718);
   SP_shift_stat_5__4781->SetBinError(1,0.0003070048);
   SP_shift_stat_5__4781->SetBinError(2,0.0005757997);
   SP_shift_stat_5__4781->SetBinError(3,0.0003450731);
   SP_shift_stat_5__4781->SetBinError(4,0.0003647426);
   SP_shift_stat_5__4781->SetBinError(6,0.0003297217);
   SP_shift_stat_5__4781->SetBinError(7,0.0003949104);
   SP_shift_stat_5__4781->SetBinError(8,0.0002900406);
   SP_shift_stat_5__4781->SetEntries(1.345456e+07);
   SP_shift_stat_5__4781->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_5__4781->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_5__4781->SetMarkerColor(ci);
   SP_shift_stat_5__4781->SetMarkerStyle(20);
   SP_shift_stat_5__4781->SetMarkerSize(0.8);
   SP_shift_stat_5__4781->GetXaxis()->SetRange(1,8);
   SP_shift_stat_5__4781->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_5__4781->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_5__4781->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_5__4781->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_5__4781->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_5__4781->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_5__4781->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_5__4781->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_5__4781->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_5__4781->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_5__4781->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_5__4781->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_5__4781->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_5__4781->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_5__4781->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_5__4781->Draw("SAME PZ");
   Double_t xAxis4782[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__4782 = new TH1D("chist_copy__4782","",8, xAxis4782);
   chist_copy__4782->SetMinimum(-0.9);
   chist_copy__4782->SetMaximum(2);
   chist_copy__4782->SetDirectory(nullptr);
   chist_copy__4782->SetStats(0);
   chist_copy__4782->SetLineColor(0);
   chist_copy__4782->SetLineWidth(0);
   chist_copy__4782->SetMarkerColor(0);
   chist_copy__4782->SetMarkerStyle(20);
   chist_copy__4782->SetMarkerSize(0);
   chist_copy__4782->GetXaxis()->SetRange(1,8);
   chist_copy__4782->GetXaxis()->SetNdivisions(4000510);
   chist_copy__4782->GetXaxis()->SetLabelFont(42);
   chist_copy__4782->GetXaxis()->SetLabelSize(0);
   chist_copy__4782->GetXaxis()->SetTitleSize(0.08);
   chist_copy__4782->GetXaxis()->SetTickLength(0.04);
   chist_copy__4782->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__4782->GetXaxis()->SetTitleFont(42);
   chist_copy__4782->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__4782->GetYaxis()->SetNdivisions(3000510);
   chist_copy__4782->GetYaxis()->SetLabelFont(42);
   chist_copy__4782->GetYaxis()->SetLabelSize(0.08);
   chist_copy__4782->GetYaxis()->SetTitleSize(0.08);
   chist_copy__4782->GetYaxis()->SetTickLength(0.04);
   chist_copy__4782->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__4782->GetYaxis()->SetTitleFont(42);
   chist_copy__4782->GetZaxis()->SetLabelFont(42);
   chist_copy__4782->GetZaxis()->SetLabelSize(0.05);
   chist_copy__4782->GetZaxis()->SetTitleSize(0.05);
   chist_copy__4782->GetZaxis()->SetTitleOffset(1);
   chist_copy__4782->GetZaxis()->SetTitleFont(42);
   chist_copy__4782->Draw("sameaxis");
   up__795->Modified();
   c1_n30->cd();
   c1_n30->Modified();
   c1_n30->SetSelected(c1_n30);
}
