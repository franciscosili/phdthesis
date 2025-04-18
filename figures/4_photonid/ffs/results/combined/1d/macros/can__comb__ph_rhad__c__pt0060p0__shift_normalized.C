#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__comb__ph_rhad__c__pt0060p0__shift_normalized()
{
//=========Macro generated from canvas: c1_n51/
//=========  (Thu Apr  4 19:00:28 2024) by ROOT version 6.30/02
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
   TPad *dw__380 = new TPad("dw", "dw",0,0,1,0.5);
   dw__380->Draw();
   dw__380->cd();
   dw__380->Range(-0.3577359,-0.5843137,2.608491,3.2);
   dw__380->SetFillColor(0);
   dw__380->SetFillStyle(4000);
   dw__380->SetBorderMode(0);
   dw__380->SetBorderSize(0);
   dw__380->SetTickx(1);
   dw__380->SetTicky(1);
   dw__380->SetLeftMargin(0.120603);
   dw__380->SetRightMargin(0.08040201);
   dw__380->SetTopMargin(0);
   dw__380->SetBottomMargin(0.2072539);
   dw__380->SetFrameBorderMode(0);
   dw__380->SetFrameBorderMode(0);
   Double_t xAxis2287[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_dw__2287 = new TH1D("chist_dw__2287","",8, xAxis2287);
   chist_dw__2287->SetMinimum(0.2);
   chist_dw__2287->SetMaximum(3.2);
   chist_dw__2287->SetDirectory(nullptr);
   chist_dw__2287->SetStats(0);
   chist_dw__2287->SetLineColor(0);
   chist_dw__2287->SetLineWidth(0);
   chist_dw__2287->SetMarkerColor(0);
   chist_dw__2287->SetMarkerStyle(20);
   chist_dw__2287->SetMarkerSize(0);
   chist_dw__2287->GetXaxis()->SetTitle("|#eta^{#gamma}|");
   chist_dw__2287->GetXaxis()->SetRange(1,8);
   chist_dw__2287->GetXaxis()->SetLabelFont(42);
   chist_dw__2287->GetXaxis()->SetLabelSize(0.08);
   chist_dw__2287->GetXaxis()->SetTitleSize(0.08);
   chist_dw__2287->GetXaxis()->SetTickLength(0.04);
   chist_dw__2287->GetXaxis()->SetTitleOffset(1.154819);
   chist_dw__2287->GetXaxis()->SetTitleFont(42);
   chist_dw__2287->GetYaxis()->SetTitle("Stretch");
   chist_dw__2287->GetYaxis()->CenterTitle(true);
   chist_dw__2287->GetYaxis()->SetNdivisions(405);
   chist_dw__2287->GetYaxis()->SetLabelFont(42);
   chist_dw__2287->GetYaxis()->SetLabelSize(0.08);
   chist_dw__2287->GetYaxis()->SetTitleSize(0.08);
   chist_dw__2287->GetYaxis()->SetTickLength(0.04);
   chist_dw__2287->GetYaxis()->SetTitleOffset(0.727387);
   chist_dw__2287->GetYaxis()->SetTitleFont(42);
   chist_dw__2287->GetZaxis()->SetLabelFont(42);
   chist_dw__2287->GetZaxis()->SetLabelSize(0.05);
   chist_dw__2287->GetZaxis()->SetTitleSize(0.05);
   chist_dw__2287->GetZaxis()->SetTitleOffset(1);
   chist_dw__2287->GetZaxis()->SetTitleFont(42);
   chist_dw__2287->Draw("");
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
   Double_t xAxis2288[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_tot_6__2288 = new TH1D("RZ_stretch_tot_6__2288","",8, xAxis2288);
   RZ_stretch_tot_6__2288->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_stretch_tot_6__2288->SetFillColor(ci);
   RZ_stretch_tot_6__2288->SetLineWidth(2);
   RZ_stretch_tot_6__2288->SetMarkerStyle(20);
   RZ_stretch_tot_6__2288->SetMarkerSize(0.8);
   RZ_stretch_tot_6__2288->GetXaxis()->SetRange(1,8);
   RZ_stretch_tot_6__2288->GetXaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2288->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2288->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2288->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__2288->GetXaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2288->GetYaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2288->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2288->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2288->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_tot_6__2288->GetYaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2288->GetZaxis()->SetLabelFont(42);
   RZ_stretch_tot_6__2288->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_tot_6__2288->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_tot_6__2288->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_tot_6__2288->GetZaxis()->SetTitleFont(42);
   RZ_stretch_tot_6__2288->Draw("SAME E2");
   Double_t xAxis2289[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_stretch_stat_6__2289 = new TH1D("RZ_stretch_stat_6__2289","",8, xAxis2289);
   RZ_stretch_stat_6__2289->SetStats(0);
   RZ_stretch_stat_6__2289->SetLineWidth(2);
   RZ_stretch_stat_6__2289->SetMarkerStyle(20);
   RZ_stretch_stat_6__2289->SetMarkerSize(0.8);
   RZ_stretch_stat_6__2289->GetXaxis()->SetRange(1,8);
   RZ_stretch_stat_6__2289->GetXaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2289->GetXaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2289->GetXaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2289->GetXaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__2289->GetXaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2289->GetYaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2289->GetYaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2289->GetYaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2289->GetYaxis()->SetTitleOffset(1.4);
   RZ_stretch_stat_6__2289->GetYaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2289->GetZaxis()->SetLabelFont(42);
   RZ_stretch_stat_6__2289->GetZaxis()->SetLabelSize(0.05);
   RZ_stretch_stat_6__2289->GetZaxis()->SetTitleSize(0.05);
   RZ_stretch_stat_6__2289->GetZaxis()->SetTitleOffset(1);
   RZ_stretch_stat_6__2289->GetZaxis()->SetTitleFont(42);
   RZ_stretch_stat_6__2289->Draw("SAME PZ");
   Double_t xAxis2290[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_tot_6__2290 = new TH1D("SP_stretch_tot_6__2290","",8, xAxis2290);
   SP_stretch_tot_6__2290->SetBinContent(3,1.142171);
   SP_stretch_tot_6__2290->SetBinContent(4,1.105847);
   SP_stretch_tot_6__2290->SetBinError(3,0.004003966);
   SP_stretch_tot_6__2290->SetBinError(4,0.009500494);
   SP_stretch_tot_6__2290->SetEntries(47544.74);
   SP_stretch_tot_6__2290->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_stretch_tot_6__2290->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__2290->SetLineColor(ci);
   SP_stretch_tot_6__2290->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_tot_6__2290->SetMarkerColor(ci);
   SP_stretch_tot_6__2290->SetMarkerStyle(20);
   SP_stretch_tot_6__2290->SetMarkerSize(0.8);
   SP_stretch_tot_6__2290->GetXaxis()->SetRange(1,8);
   SP_stretch_tot_6__2290->GetXaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2290->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2290->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2290->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__2290->GetXaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2290->GetYaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2290->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2290->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2290->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_tot_6__2290->GetYaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2290->GetZaxis()->SetLabelFont(42);
   SP_stretch_tot_6__2290->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_tot_6__2290->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_tot_6__2290->GetZaxis()->SetTitleOffset(1);
   SP_stretch_tot_6__2290->GetZaxis()->SetTitleFont(42);
   SP_stretch_tot_6__2290->Draw("SAME E2");
   Double_t xAxis2291[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_stretch_stat_6__2291 = new TH1D("SP_stretch_stat_6__2291","",8, xAxis2291);
   SP_stretch_stat_6__2291->SetBinContent(3,1.142171);
   SP_stretch_stat_6__2291->SetBinContent(4,1.105847);
   SP_stretch_stat_6__2291->SetBinError(3,0.0004603095);
   SP_stretch_stat_6__2291->SetBinError(4,0.000523924);
   SP_stretch_stat_6__2291->SetEntries(1.039017e+07);
   SP_stretch_stat_6__2291->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__2291->SetLineColor(ci);
   SP_stretch_stat_6__2291->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   SP_stretch_stat_6__2291->SetMarkerColor(ci);
   SP_stretch_stat_6__2291->SetMarkerStyle(20);
   SP_stretch_stat_6__2291->SetMarkerSize(0.8);
   SP_stretch_stat_6__2291->GetXaxis()->SetRange(1,8);
   SP_stretch_stat_6__2291->GetXaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2291->GetXaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2291->GetXaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2291->GetXaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__2291->GetXaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2291->GetYaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2291->GetYaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2291->GetYaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2291->GetYaxis()->SetTitleOffset(1.4);
   SP_stretch_stat_6__2291->GetYaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2291->GetZaxis()->SetLabelFont(42);
   SP_stretch_stat_6__2291->GetZaxis()->SetLabelSize(0.05);
   SP_stretch_stat_6__2291->GetZaxis()->SetTitleSize(0.05);
   SP_stretch_stat_6__2291->GetZaxis()->SetTitleOffset(1);
   SP_stretch_stat_6__2291->GetZaxis()->SetTitleFont(42);
   SP_stretch_stat_6__2291->Draw("SAME PZ");
   dw__380->Modified();
   c1_n51->cd();
  
// ------------>Primitives in pad: up
   TPad *up__381 = new TPad("up", "up",0,0.5,1,1);
   up__381->Draw();
   up__381->cd();
   up__381->Range(-0.3577359,-0.7253224,2.608491,1.31102);
   up__381->SetFillColor(0);
   up__381->SetFillStyle(4000);
   up__381->SetBorderMode(0);
   up__381->SetBorderSize(0);
   up__381->SetTickx(1);
   up__381->SetTicky(1);
   up__381->SetLeftMargin(0.120603);
   up__381->SetRightMargin(0.08040201);
   up__381->SetBottomMargin(0.01243523);
   up__381->SetFrameBorderMode(0);
   up__381->SetFrameBorderMode(0);
   Double_t xAxis2292[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist__2292 = new TH1D("chist__2292","",8, xAxis2292);
   chist__2292->SetMinimum(-0.7);
   chist__2292->SetMaximum(1.1);
   chist__2292->SetDirectory(nullptr);
   chist__2292->SetStats(0);
   chist__2292->SetLineColor(0);
   chist__2292->SetLineWidth(0);
   chist__2292->SetMarkerColor(0);
   chist__2292->SetMarkerStyle(20);
   chist__2292->SetMarkerSize(0);
   chist__2292->GetXaxis()->SetRange(1,8);
   chist__2292->GetXaxis()->SetNdivisions(4000510);
   chist__2292->GetXaxis()->SetLabelFont(42);
   chist__2292->GetXaxis()->SetLabelSize(0);
   chist__2292->GetXaxis()->SetTitleSize(0.08);
   chist__2292->GetXaxis()->SetTickLength(0.04);
   chist__2292->GetXaxis()->SetTitleOffset(2.020933);
   chist__2292->GetXaxis()->SetTitleFont(42);
   chist__2292->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist__2292->GetYaxis()->SetNdivisions(3000510);
   chist__2292->GetYaxis()->SetLabelFont(42);
   chist__2292->GetYaxis()->SetLabelSize(0.08);
   chist__2292->GetYaxis()->SetTitleSize(0.08);
   chist__2292->GetYaxis()->SetTickLength(0.04);
   chist__2292->GetYaxis()->SetTitleOffset(0.727387);
   chist__2292->GetYaxis()->SetTitleFont(42);
   chist__2292->GetZaxis()->SetLabelFont(42);
   chist__2292->GetZaxis()->SetLabelSize(0.05);
   chist__2292->GetZaxis()->SetTitleSize(0.05);
   chist__2292->GetZaxis()->SetTitleOffset(1);
   chist__2292->GetZaxis()->SetTitleFont(42);
   chist__2292->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("RZ_shift_tot_6","RZ, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("RZ_shift_stat_6","RZ, Stat unc., TUNE26","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SP_shift_tot_6","SP, Total unc., TUNE26","F");

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
   entry=leg->AddEntry("SP_shift_stat_6","SP, Stat unc., TUNE26","PE");

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
      tex = new TLatex(0.160804,0.5714,"Converted #gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.5098,"60.00 #leq p_{T}^{#gamma} [GeV] < 80.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis2293[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_tot_6__2293 = new TH1D("RZ_shift_tot_6__2293","",8, xAxis2293);
   RZ_shift_tot_6__2293->SetStats(0);

   ci = 1434;
   color = new TColor(ci, 0, 0, 0, " ", 0.4);
   RZ_shift_tot_6__2293->SetFillColor(ci);
   RZ_shift_tot_6__2293->SetMarkerStyle(20);
   RZ_shift_tot_6__2293->SetMarkerSize(0.8);
   RZ_shift_tot_6__2293->GetXaxis()->SetRange(1,8);
   RZ_shift_tot_6__2293->GetXaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2293->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2293->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2293->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__2293->GetXaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2293->GetYaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2293->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2293->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2293->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_tot_6__2293->GetYaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2293->GetZaxis()->SetLabelFont(42);
   RZ_shift_tot_6__2293->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_tot_6__2293->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_tot_6__2293->GetZaxis()->SetTitleOffset(1);
   RZ_shift_tot_6__2293->GetZaxis()->SetTitleFont(42);
   RZ_shift_tot_6__2293->Draw("SAME E2");
   Double_t xAxis2294[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *RZ_shift_stat_6__2294 = new TH1D("RZ_shift_stat_6__2294","",8, xAxis2294);
   RZ_shift_stat_6__2294->SetStats(0);
   RZ_shift_stat_6__2294->SetMarkerStyle(20);
   RZ_shift_stat_6__2294->SetMarkerSize(0.8);
   RZ_shift_stat_6__2294->GetXaxis()->SetRange(1,8);
   RZ_shift_stat_6__2294->GetXaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2294->GetXaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2294->GetXaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2294->GetXaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__2294->GetXaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2294->GetYaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2294->GetYaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2294->GetYaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2294->GetYaxis()->SetTitleOffset(1.4);
   RZ_shift_stat_6__2294->GetYaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2294->GetZaxis()->SetLabelFont(42);
   RZ_shift_stat_6__2294->GetZaxis()->SetLabelSize(0.05);
   RZ_shift_stat_6__2294->GetZaxis()->SetTitleSize(0.05);
   RZ_shift_stat_6__2294->GetZaxis()->SetTitleOffset(1);
   RZ_shift_stat_6__2294->GetZaxis()->SetTitleFont(42);
   RZ_shift_stat_6__2294->Draw("SAME PZ");
   Double_t xAxis2295[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_tot_6__2295 = new TH1D("SP_shift_tot_6__2295","",8, xAxis2295);
   SP_shift_tot_6__2295->SetBinContent(3,-0.03356793);
   SP_shift_tot_6__2295->SetBinContent(4,0.002387797);
   SP_shift_tot_6__2295->SetBinError(3,0.004153663);
   SP_shift_tot_6__2295->SetBinError(4,0.007494859);
   SP_shift_tot_6__2295->SetEntries(13.24058);
   SP_shift_tot_6__2295->SetStats(0);

   ci = 1435;
   color = new TColor(ci, 0, 0, 1, " ", 0.4);
   SP_shift_tot_6__2295->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__2295->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_tot_6__2295->SetMarkerColor(ci);
   SP_shift_tot_6__2295->SetMarkerStyle(20);
   SP_shift_tot_6__2295->SetMarkerSize(0.8);
   SP_shift_tot_6__2295->GetXaxis()->SetRange(1,8);
   SP_shift_tot_6__2295->GetXaxis()->SetLabelFont(42);
   SP_shift_tot_6__2295->GetXaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2295->GetXaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2295->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__2295->GetXaxis()->SetTitleFont(42);
   SP_shift_tot_6__2295->GetYaxis()->SetLabelFont(42);
   SP_shift_tot_6__2295->GetYaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2295->GetYaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2295->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_tot_6__2295->GetYaxis()->SetTitleFont(42);
   SP_shift_tot_6__2295->GetZaxis()->SetLabelFont(42);
   SP_shift_tot_6__2295->GetZaxis()->SetLabelSize(0.05);
   SP_shift_tot_6__2295->GetZaxis()->SetTitleSize(0.05);
   SP_shift_tot_6__2295->GetZaxis()->SetTitleOffset(1);
   SP_shift_tot_6__2295->GetZaxis()->SetTitleFont(42);
   SP_shift_tot_6__2295->Draw("SAME E2");
   Double_t xAxis2296[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *SP_shift_stat_6__2296 = new TH1D("SP_shift_stat_6__2296","",8, xAxis2296);
   SP_shift_stat_6__2296->SetBinContent(3,-0.03356793);
   SP_shift_stat_6__2296->SetBinContent(4,0.002387797);
   SP_shift_stat_6__2296->SetBinError(3,0.0002298557);
   SP_shift_stat_6__2296->SetBinError(4,0.0002977267);
   SP_shift_stat_6__2296->SetEntries(6871.9);
   SP_shift_stat_6__2296->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__2296->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   SP_shift_stat_6__2296->SetMarkerColor(ci);
   SP_shift_stat_6__2296->SetMarkerStyle(20);
   SP_shift_stat_6__2296->SetMarkerSize(0.8);
   SP_shift_stat_6__2296->GetXaxis()->SetRange(1,8);
   SP_shift_stat_6__2296->GetXaxis()->SetLabelFont(42);
   SP_shift_stat_6__2296->GetXaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2296->GetXaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2296->GetXaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__2296->GetXaxis()->SetTitleFont(42);
   SP_shift_stat_6__2296->GetYaxis()->SetLabelFont(42);
   SP_shift_stat_6__2296->GetYaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2296->GetYaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2296->GetYaxis()->SetTitleOffset(1.4);
   SP_shift_stat_6__2296->GetYaxis()->SetTitleFont(42);
   SP_shift_stat_6__2296->GetZaxis()->SetLabelFont(42);
   SP_shift_stat_6__2296->GetZaxis()->SetLabelSize(0.05);
   SP_shift_stat_6__2296->GetZaxis()->SetTitleSize(0.05);
   SP_shift_stat_6__2296->GetZaxis()->SetTitleOffset(1);
   SP_shift_stat_6__2296->GetZaxis()->SetTitleFont(42);
   SP_shift_stat_6__2296->Draw("SAME PZ");
   Double_t xAxis2297[9] = {0, 0.6, 0.8, 1.15, 1.37, 1.52, 1.81, 2.01, 2.37}; 
   
   TH1D *chist_copy__2297 = new TH1D("chist_copy__2297","",8, xAxis2297);
   chist_copy__2297->SetMinimum(-0.7);
   chist_copy__2297->SetMaximum(1.1);
   chist_copy__2297->SetDirectory(nullptr);
   chist_copy__2297->SetStats(0);
   chist_copy__2297->SetLineColor(0);
   chist_copy__2297->SetLineWidth(0);
   chist_copy__2297->SetMarkerColor(0);
   chist_copy__2297->SetMarkerStyle(20);
   chist_copy__2297->SetMarkerSize(0);
   chist_copy__2297->GetXaxis()->SetRange(1,8);
   chist_copy__2297->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2297->GetXaxis()->SetLabelFont(42);
   chist_copy__2297->GetXaxis()->SetLabelSize(0);
   chist_copy__2297->GetXaxis()->SetTitleSize(0.08);
   chist_copy__2297->GetXaxis()->SetTickLength(0.04);
   chist_copy__2297->GetXaxis()->SetTitleOffset(2.020933);
   chist_copy__2297->GetXaxis()->SetTitleFont(42);
   chist_copy__2297->GetYaxis()->SetTitle("Shift / final std.dev.");
   chist_copy__2297->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2297->GetYaxis()->SetLabelFont(42);
   chist_copy__2297->GetYaxis()->SetLabelSize(0.08);
   chist_copy__2297->GetYaxis()->SetTitleSize(0.08);
   chist_copy__2297->GetYaxis()->SetTickLength(0.04);
   chist_copy__2297->GetYaxis()->SetTitleOffset(0.727387);
   chist_copy__2297->GetYaxis()->SetTitleFont(42);
   chist_copy__2297->GetZaxis()->SetLabelFont(42);
   chist_copy__2297->GetZaxis()->SetLabelSize(0.05);
   chist_copy__2297->GetZaxis()->SetTitleSize(0.05);
   chist_copy__2297->GetZaxis()->SetTitleOffset(1);
   chist_copy__2297->GetZaxis()->SetTitleFont(42);
   chist_copy__2297->Draw("sameaxis");
   up__381->Modified();
   c1_n51->cd();
   c1_n51->Modified();
   c1_n51->SetSelected(c1_n51);
}
