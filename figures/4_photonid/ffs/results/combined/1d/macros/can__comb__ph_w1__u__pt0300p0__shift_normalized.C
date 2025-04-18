#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_w1__u__pt0300p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n35/
//=========  (Thu Apr  4 19:00:53 2024) by ROOT version 6.30/02
   TCanvas *c1_n35 = new TCanvas("c1_n35", "",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n35->SetHighLightColor(2);
   c1_n35->Range(0,0,1,1);
   c1_n35->SetFillColor(0);
   c1_n35->SetBorderMode(0);
   c1_n35->SetBorderSize(2);
   c1_n35->SetTickx(1);
   c1_n35->SetTicky(1);
   c1_n35->SetLeftMargin(0.16);
   c1_n35->SetRightMargin(0.05);
   c1_n35->SetTopMargin(0.05);
   c1_n35->SetBottomMargin(0.16);
   c1_n35->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: dw
   TPad *dw__732 = new TPad("dw", "dw",0,0,1,0.5);
   dw__732->Draw();
   dw__732->cd();
   dw__732->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__732->SetFillColor(0);
   dw__732->SetFillStyle(4000);
   dw__732->SetBorderMode(0);
   dw__732->SetBorderSize(0);
   dw__732->SetTickx(1);
   dw__732->SetTicky(1);
   dw__732->SetLeftMargin(0.120603);
   dw__732->SetRightMargin(0.08040201);
   dw__732->SetTopMargin(0);
   dw__732->SetBottomMargin(0.2072539);
   dw__732->SetFrameBorderMode(0);
   dw__732->SetFrameBorderMode(0);
   Double_t xAxis4395[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__4395 = new TH1D("chist_dw__4395","",8, xAxis4395);
   chist_dw__4395->SetMinimum(0.2);
   chist_dw__4395->SetMaximum(3.2);
   chist_dw__4395->SetDirectory(nullptr);
   chist_dw__4395->SetStats(0);
   chist_dw__4395->SetLineColor(0);
   chist_dw__4395->SetLineWidth(0);
   chist_dw__4395->SetMarkerColor(0);
   chist_dw__4395->SetMarkerStyle(20);
   chist_dw__4395->SetMarkerSize(0);
   chist_dw__4395->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__4395->GetXaxis()->SetRange(1,8);
   chist_dw__4395->GetXaxis()->SetLabelFont(42);
   chist_dw__4395->GetXaxis()->SetLabelSize(0.08);
   chist_dw__4395->GetXaxis()->SetTitleSize(0.08);
   chist_dw__4395->GetXaxis()->SetTickLength(0.04);
   chist_dw__4395->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__4395->GetXaxis()->SetTitleFont(42);
   chist_dw__4395->GetYaxis()->SetTitle("Stretch");
   chist_dw__4395->GetYaxis()->CenterTitle(true);
   chist_dw__4395->GetYaxis()->SetNdivisions(405);
   chist_dw__4395->GetYaxis()->SetLabelFont(42);
   chist_dw__4395->GetYaxis()->SetLabelSize(0.08);
   chist_dw__4395->GetYaxis()->SetTitleSize(0.08);
   chist_dw__4395->GetYaxis()->SetTickLength(0.04);
   chist_dw__4395->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__4395->GetYaxis()->SetTitleFont(42);
   chist_dw__4395->GetZaxis()->SetLabelFont(42);
   chist_dw__4395->GetZaxis()->SetLabelSize(0.05);
   chist_dw__4395->GetZaxis()->SetTitleSize(0.05);
   chist_dw__4395->GetZaxis()->SetTitleOffset(1);
   chist_dw__4395->GetZaxis()->SetTitleFont(42);
   chist_dw__4395->Draw("");
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
   Double_t xAxis4396[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_10__4396 = new TH1D("RZ_stretch_tot_10__4396","",8, xAxis4396);
   RZ_stretch_tot_10__4396->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_10__4396->SetFillColor(ci);
   RZ_stretch_tot_10__4396->SetLineWidth(2);
   RZ_stretch_tot_10__4396->SetMarkerStyle(20);
   RZ_stretch_tot_10__4396->SetMarkerSize(0.8);
   RZ_stretch_tot_10__4396->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_10__4396->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_10__4396->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_10__4396->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_10__4396->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_10__4396->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_10__4396->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_10__4396->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_10__4396->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_10__4396->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_10__4396->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_10__4396->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_10__4396->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_10__4396->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_10__4396->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_10__4396->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_10__4396->Draw("SAME E2");
   Double_t xAxis4397[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_10__4397 = new TH1D("RZ_stretch_stat_10__4397","",8, xAxis4397);
   RZ_stretch_stat_10__4397->SetStats(0);
   RZ_stretch_stat_10__4397->SetLineWidth(2);
   RZ_stretch_stat_10__4397->SetMarkerStyle(20);
   RZ_stretch_stat_10__4397->SetMarkerSize(0.8);
   RZ_stretch_stat_10__4397->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_10__4397->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_10__4397->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_10__4397->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_10__4397->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_10__4397->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_10__4397->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_10__4397->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_10__4397->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_10__4397->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_10__4397->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_10__4397->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_10__4397->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_10__4397->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_10__4397->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_10__4397->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_10__4397->Draw("SAME PZ");
   Double_t xAxis4398[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_10__4398 = new TH1D("SP_stretch_tot_10__4398","",8, xAxis4398);
   SP_stretch_tot_10__4398->SetBinContent(1,1.087469);
   SP_stretch_tot_10__4398->SetBinContent(2,1.115472);
   SP_stretch_tot_10__4398->SetBinContent(3,1.099913);
   SP_stretch_tot_10__4398->SetBinContent(4,1.001669);
   SP_stretch_tot_10__4398->SetBinContent(6,0.9229085);
   SP_stretch_tot_10__4398->SetBinContent(7,1.173816);
   SP_stretch_tot_10__4398->SetBinContent(8,1.204308);
   SP_stretch_tot_10__4398->SetBinError(1,0.01851475);
   SP_stretch_tot_10__4398->SetBinError(2,0.0234701);
   SP_stretch_tot_10__4398->SetBinError(3,0.01617464);
   SP_stretch_tot_10__4398->SetBinError(4,0.0138103);
   SP_stretch_tot_10__4398->SetBinError(6,0.00643497);
   SP_stretch_tot_10__4398->SetBinError(7,0.01194704);
   SP_stretch_tot_10__4398->SetBinError(8,0.0107739);
   SP_stretch_tot_10__4398->SetEntries(35138.13);
   SP_stretch_tot_10__4398->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_10__4398->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_10__4398->SetLineColor(ci);
   SP_stretch_tot_10__4398->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_10__4398->SetMarkerColor(ci);
   SP_stretch_tot_10__4398->SetMarkerStyle(20);
   SP_stretch_tot_10__4398->SetMarkerSize(0.8);
   SP_stretch_tot_10__4398->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_10__4398->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_10__4398->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_10__4398->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_10__4398->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_10__4398->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_10__4398->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_10__4398->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_10__4398->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_10__4398->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_10__4398->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_10__4398->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_10__4398->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_10__4398->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_10__4398->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_10__4398->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_10__4398->Draw("SAME E2");
   Double_t xAxis4399[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_10__4399 = new TH1D("SP_stretch_stat_10__4399","",8, xAxis4399);
   SP_stretch_stat_10__4399->SetBinContent(1,1.087469);
   SP_stretch_stat_10__4399->SetBinContent(2,1.115472);
   SP_stretch_stat_10__4399->SetBinContent(3,1.099913);
   SP_stretch_stat_10__4399->SetBinContent(4,1.001669);
   SP_stretch_stat_10__4399->SetBinContent(6,0.9229085);
   SP_stretch_stat_10__4399->SetBinContent(7,1.173816);
   SP_stretch_stat_10__4399->SetBinContent(8,1.204308);
   SP_stretch_stat_10__4399->SetBinError(1,0.003035758);
   SP_stretch_stat_10__4399->SetBinError(2,0.005175678);
   SP_stretch_stat_10__4399->SetBinError(3,0.004470872);
   SP_stretch_stat_10__4399->SetBinError(4,0.00408616);
   SP_stretch_stat_10__4399->SetBinError(6,0.004999636);
   SP_stretch_stat_10__4399->SetBinError(7,0.007767814);
   SP_stretch_stat_10__4399->SetBinError(8,0.006646952);
   SP_stretch_stat_10__4399->SetEntries(286066.9);
   SP_stretch_stat_10__4399->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_10__4399->SetLineColor(ci);
   SP_stretch_stat_10__4399->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_10__4399->SetMarkerColor(ci);
   SP_stretch_stat_10__4399->SetMarkerStyle(20);
   SP_stretch_stat_10__4399->SetMarkerSize(0.8);
   SP_stretch_stat_10__4399->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_10__4399->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_10__4399->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_10__4399->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_10__4399->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_10__4399->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_10__4399->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_10__4399->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_10__4399->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_10__4399->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_10__4399->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_10__4399->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_10__4399->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_10__4399->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_10__4399->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_10__4399->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_10__4399->Draw("SAME PZ");
   dw__732->Modified();
   c1_n35->cd();
  
// ------------>Primitives in pad: up
   TPad *up__733 = new TPad("up", "up",0,0.5,1,1);
   up__733->Draw();
   up__733->cd();
   up__733->Range(-0.3577359,-0.9407972,2.608491,2.339977);
   up__733->SetFillColor(0);
   up__733->SetFillStyle(4000);
   up__733->SetBorderMode(0);
   up__733->SetBorderSize(0);
   up__733->SetTickx(1);
   up__733->SetTicky(1);
   up__733->SetLeftMargin(0.120603);
   up__733->SetRightMargin(0.08040201);
   up__733->SetBottomMargin(0.01243523);
   up__733->SetFrameBorderMode(0);
   up__733->SetFrameBorderMode(0);
   Double_t xAxis4400[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__4400 = new TH1D("chist__4400","",8, xAxis4400);
   chist__4400->SetMinimum(-0.9);
   chist__4400->SetMaximum(2);
   chist__4400->SetDirectory(nullptr);
   chist__4400->SetStats(0);
   chist__4400->SetLineColor(0);
   chist__4400->SetLineWidth(0);
   chist__4400->SetMarkerColor(0);
   chist__4400->SetMarkerStyle(20);
   chist__4400->SetMarkerSize(0);
   chist__4400->GetXaxis()->SetRange(1,8);
   chist__4400->GetXaxis()->SetNdivisions(4000510);
   chist__4400->GetXaxis()->SetLabelFont(42);
   chist__4400->GetXaxis()->SetLabelSize(0);
   chist__4400->GetXaxis()->SetTitleSize(0.08);
   chist__4400->GetXaxis()->SetTickLength(0.04);
   chist__4400->GetXaxis()->SetTitleOffset(2.020933);
   chist__4400->GetXaxis()->SetTitleFont(42);
   chist__4400->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__4400->GetYaxis()->SetNdivisions(3000510);
   chist__4400->GetYaxis()->SetLabelFont(42);
   chist__4400->GetYaxis()->SetLabelSize(0.08);
   chist__4400->GetYaxis()->SetTitleSize(0.08);
   chist__4400->GetYaxis()->SetTickLength(0.04);
   chist__4400->GetYaxis()->SetTitleOffset(0.727387);
   chist__4400->GetYaxis()->SetTitleFont(42);
   chist__4400->GetZaxis()->SetLabelFont(42);
   chist__4400->GetZaxis()->SetLabelSize(0.05);
   chist__4400->GetZaxis()->SetTitleSize(0.05);
   chist__4400->GetZaxis()->SetTitleOffset(1);
   chist__4400->GetZaxis()->SetTitleFont(42);
   chist__4400->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_10","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_10","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_10","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_10","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5714,"Unconverted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"300.00 #leq p_{T}^{#gamma} [GeV] < 600.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis4401[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_10__4401 = new TH1D("RZ_shift_tot_10__4401","",8, xAxis4401);
   RZ_shift_tot_10__4401->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_10__4401->SetFillColor(ci);
   RZ_shift_tot_10__4401->SetMarkerStyle(20);
   RZ_shift_tot_10__4401->SetMarkerSize(0.8);
   RZ_shift_tot_10__4401->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_10__4401->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_10__4401->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_10__4401->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_10__4401->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_10__4401->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_10__4401->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_10__4401->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_10__4401->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_10__4401->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_10__4401->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_10__4401->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_10__4401->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_10__4401->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_10__4401->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_10__4401->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_10__4401->Draw("SAME E2");
   Double_t xAxis4402[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_10__4402 = new TH1D("RZ_shift_stat_10__4402","",8, xAxis4402);
   RZ_shift_stat_10__4402->SetStats(0);
   RZ_shift_stat_10__4402->SetMarkerStyle(20);
   RZ_shift_stat_10__4402->SetMarkerSize(0.8);
   RZ_shift_stat_10__4402->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_10__4402->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_10__4402->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_10__4402->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_10__4402->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_10__4402->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_10__4402->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_10__4402->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_10__4402->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_10__4402->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_10__4402->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_10__4402->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_10__4402->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_10__4402->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_10__4402->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_10__4402->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_10__4402->Draw("SAME PZ");
   Double_t xAxis4403[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_10__4403 = new TH1D("SP_shift_tot_10__4403","",8, xAxis4403);
   SP_shift_tot_10__4403->SetBinContent(1,0.2876893);
   SP_shift_tot_10__4403->SetBinContent(2,0.3823068);
   SP_shift_tot_10__4403->SetBinContent(3,0.4501324);
   SP_shift_tot_10__4403->SetBinContent(4,0.674671);
   SP_shift_tot_10__4403->SetBinContent(6,0.7674105);
   SP_shift_tot_10__4403->SetBinContent(7,0.9935351);
   SP_shift_tot_10__4403->SetBinContent(8,1.280256);
   SP_shift_tot_10__4403->SetBinError(1,0.01991009);
   SP_shift_tot_10__4403->SetBinError(2,0.02595344);
   SP_shift_tot_10__4403->SetBinError(3,0.02655513);
   SP_shift_tot_10__4403->SetBinError(4,0.03016895);
   SP_shift_tot_10__4403->SetBinError(6,0.01793038);
   SP_shift_tot_10__4403->SetBinError(7,0.01215732);
   SP_shift_tot_10__4403->SetBinError(8,0.0132172);
   SP_shift_tot_10__4403->SetEntries(7024.516);
   SP_shift_tot_10__4403->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_10__4403->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_10__4403->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_10__4403->SetMarkerColor(ci);
   SP_shift_tot_10__4403->SetMarkerStyle(20);
   SP_shift_tot_10__4403->SetMarkerSize(0.8);
   SP_shift_tot_10__4403->GetXaxis()->SetRange(1,8);
   SP_shift_tot_10__4403->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_10__4403->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_10__4403->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_10__4403->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_10__4403->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_10__4403->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_10__4403->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_10__4403->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_10__4403->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_10__4403->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_10__4403->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_10__4403->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_10__4403->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_10__4403->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_10__4403->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_10__4403->Draw("SAME E2");
   Double_t xAxis4404[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_10__4404 = new TH1D("SP_shift_stat_10__4404","",8, xAxis4404);
   SP_shift_stat_10__4404->SetBinContent(1,0.2876893);
   SP_shift_stat_10__4404->SetBinContent(2,0.3823068);
   SP_shift_stat_10__4404->SetBinContent(3,0.4501324);
   SP_shift_stat_10__4404->SetBinContent(4,0.674671);
   SP_shift_stat_10__4404->SetBinContent(6,0.7674105);
   SP_shift_stat_10__4404->SetBinContent(7,0.9935351);
   SP_shift_stat_10__4404->SetBinContent(8,1.280256);
   SP_shift_stat_10__4404->SetBinError(1,0.003112944);
   SP_shift_stat_10__4404->SetBinError(2,0.005597458);
   SP_shift_stat_10__4404->SetBinError(3,0.005800537);
   SP_shift_stat_10__4404->SetBinError(4,0.00654969);
   SP_shift_stat_10__4404->SetBinError(6,0.008625128);
   SP_shift_stat_10__4404->SetBinError(7,0.007984291);
   SP_shift_stat_10__4404->SetBinError(8,0.006024215);
   SP_shift_stat_10__4404->SetEntries(80092.27);
   SP_shift_stat_10__4404->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_10__4404->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_10__4404->SetMarkerColor(ci);
   SP_shift_stat_10__4404->SetMarkerStyle(20);
   SP_shift_stat_10__4404->SetMarkerSize(0.8);
   SP_shift_stat_10__4404->GetXaxis()->SetRange(1,8);
   SP_shift_stat_10__4404->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_10__4404->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_10__4404->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_10__4404->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_10__4404->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_10__4404->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_10__4404->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_10__4404->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_10__4404->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_10__4404->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_10__4404->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_10__4404->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_10__4404->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_10__4404->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_10__4404->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_10__4404->Draw("SAME PZ");
   Double_t xAxis4405[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__4405 = new TH1D("chist_copy__4405","",8, xAxis4405);
   chist_copy__4405->SetMinimum(-0.9);
   chist_copy__4405->SetMaximum(2);
   chist_copy__4405->SetDirectory(nullptr);
   chist_copy__4405->SetStats(0);
   chist_copy__4405->SetLineColor(0);
   chist_copy__4405->SetLineWidth(0);
   chist_copy__4405->SetMarkerColor(0);
   chist_copy__4405->SetMarkerStyle(20);
   chist_copy__4405->SetMarkerSize(0);
   chist_copy__4405->GetXaxis()->SetRange(1,8);
   chist_copy__4405->GetXaxis()->SetNdivisions(4000510);
   chist_copy__4405->GetXaxis()->SetLabelFont(42);
   chist_copy__4405->GetXaxis()->SetLabelSize(0);
   chist_copy__4405->GetXaxis()->SetTitleSize(0.08);
   chist_copy__4405->GetXaxis()->SetTickLength(0.04);
   chist_copy__4405->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__4405->GetXaxis()->SetTitleFont(42);
   chist_copy__4405->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__4405->GetYaxis()->SetNdivisions(3000510);
   chist_copy__4405->GetYaxis()->SetLabelFont(42);
   chist_copy__4405->GetYaxis()->SetLabelSize(0.08);
   chist_copy__4405->GetYaxis()->SetTitleSize(0.08);
   chist_copy__4405->GetYaxis()->SetTickLength(0.04);
   chist_copy__4405->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__4405->GetYaxis()->SetTitleFont(42);
   chist_copy__4405->GetZaxis()->SetLabelFont(42);
   chist_copy__4405->GetZaxis()->SetLabelSize(0.05);
   chist_copy__4405->GetZaxis()->SetTitleSize(0.05);
   chist_copy__4405->GetZaxis()->SetTitleOffset(1);
   chist_copy__4405->GetZaxis()->SetTitleFont(42);
   chist_copy__4405->Draw("sameaxis");
   up__733->Modified();
   c1_n35->cd();
   c1_n35->Modified();
   c1_n35->SetSelected(c1_n35);
}
