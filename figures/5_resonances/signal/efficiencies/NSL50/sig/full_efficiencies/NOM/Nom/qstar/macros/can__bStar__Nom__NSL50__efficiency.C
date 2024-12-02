#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__bStar__Nom__NSL50__efficiency()
{
//=========Macro generated from canvas: c1/
//=========  (Sun Aug 11 05:14:55 2024) by ROOT version 6.32.02
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
  
// ------------>Primitives in pad: up
   TPad *up__26 = new TPad("up", "up",0,0,1,1);
   up__26->Draw();
   up__26->cd();
   up__26->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__26->SetFillColor(0);
   up__26->SetFillStyle(4000);
   up__26->SetBorderMode(0);
   up__26->SetBorderSize(0);
   up__26->SetTickx(1);
   up__26->SetTicky(1);
   up__26->SetLeftMargin(0.120603);
   up__26->SetRightMargin(0.08040201);
   up__26->SetTopMargin(0.05181347);
   up__26->SetFrameBorderMode(0);
   up__26->SetFrameBorderMode(0);
   Double_t xAxis53[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__53 = new TH1D("chist__53","",11, xAxis53);
   chist__53->SetMinimum(0);
   chist__53->SetMaximum(1.1);
   chist__53->SetDirectory(nullptr);
   chist__53->SetStats(0);
   chist__53->SetLineColor(0);
   chist__53->SetLineWidth(0);
   chist__53->SetMarkerColor(0);
   chist__53->SetMarkerStyle(20);
   chist__53->SetMarkerSize(0);
   chist__53->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist__53->GetXaxis()->SetNdivisions(4000510);
   chist__53->GetXaxis()->SetLabelFont(42);
   chist__53->GetXaxis()->SetLabelSize(0.04);
   chist__53->GetXaxis()->SetTitleSize(0.04);
   chist__53->GetXaxis()->SetTickLength(0.02);
   chist__53->GetXaxis()->SetTitleOffset(1.010466);
   chist__53->GetXaxis()->SetTitleFont(42);
   chist__53->GetYaxis()->SetTitle("Selection efficiency");
   chist__53->GetYaxis()->SetNdivisions(3000510);
   chist__53->GetYaxis()->SetLabelFont(42);
   chist__53->GetYaxis()->SetLabelSize(0.04);
   chist__53->GetYaxis()->SetTitleSize(0.04);
   chist__53->GetYaxis()->SetTickLength(0.02);
   chist__53->GetYaxis()->SetTitleOffset(1.454774);
   chist__53->GetYaxis()->SetTitleFont(42);
   chist__53->GetZaxis()->SetLabelFont(42);
   chist__53->GetZaxis()->SetLabelSize(0.05);
   chist__53->GetZaxis()->SetTitleSize(0.05);
   chist__53->GetZaxis()->SetTitleOffset(1);
   chist__53->GetZaxis()->SetTitleFont(42);
   chist__53->Draw("pe");
   TLatex *   tex = new TLatex(0.160804,0.897,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.853,"#sqrt{s} = 13 TeV, 140.07 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.4861809,0.754,0.879397,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__bStar_f0p01__Nom__NSL50__phjet_mb","b*, f=0.01","PEL");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f0p10__Nom__NSL50__phjet_mb","b*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f0p50__Nom__NSL50__phjet_mb","b*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f1p00__Nom__NSL50__phjet_mb","b*, f=1.00","PEL");

   ci = TColor::GetColor("#d65f5f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#d65f5f");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"NSL50");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.765,"Nom");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow b*#rightarrow b#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fx1114[1] = { 1000 };
   Double_t tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fy1114[1] = { 0.15375 };
   Double_t tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fex1114[1] = { 0 };
   Double_t tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fey1114[1] = { 0.001719443 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fx1114,tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fy1114,tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fex1114,tgraph__bStar_f0p01__Nom__NSL50__phjet_mb_fey1114);
   gre->SetName("tgraph__bStar_f0p01__Nom__NSL50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114 = new TH1F("Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114","",100,999.9,1001.1);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetMinimum(0.1516867);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetMaximum(0.1558133);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetStats(0);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetLineWidth(2);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p01__Nom__NSL50__phjet_mb1114);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fx1115[2] = { 1000, 2000 };
   Double_t tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fy1115[2] = { 0.1536, 0.1843667 };
   Double_t tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fex1115[2] = { 0, 0 };
   Double_t tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fey1115[2] = { 0.001718492, 0.001907694 };
   gre = new TGraphErrors(2,tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fx1115,tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fy1115,tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fex1115,tgraph__bStar_f0p10__Nom__NSL50__phjet_mb_fey1115);
   gre->SetName("tgraph__bStar_f0p10__Nom__NSL50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115 = new TH1F("Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115","",100,900,2100);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetMinimum(0.1484422);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetMaximum(0.1897137);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetStats(0);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetLineWidth(2);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p10__Nom__NSL50__phjet_mb1115);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fx1116[3] = { 1000, 2000, 3000 };
   Double_t tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fy1116[3] = { 0.15565, 0.1792833, 0.2400333 };
   Double_t tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fex1116[3] = { 0, 0, 0 };
   Double_t tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fey1116[3] = { 0.001731459, 0.001877169, 0.00222729 };
   gre = new TGraphErrors(3,tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fx1116,tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fy1116,tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fex1116,tgraph__bStar_f0p50__Nom__NSL50__phjet_mb_fey1116);
   gre->SetName("tgraph__bStar_f0p50__Nom__NSL50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116 = new TH1F("Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116","",100,800,3200);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetMinimum(0.1450843);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetMaximum(0.2510948);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetStats(0);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetLineWidth(2);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p50__Nom__NSL50__phjet_mb1116);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fx1117[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fy1117[4] = { 0.1554667, 0.18125, 0.2354, 0.29575 };
   Double_t tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fex1117[4] = { 0, 0, 0, 0 };
   Double_t tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fey1117[4] = { 0.001730301, 0.00188901, 0.002201564, 0.002527245 };
   gre = new TGraphErrors(4,tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fx1117,tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fy1117,tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fex1117,tgraph__bStar_f1p00__Nom__NSL50__phjet_mb_fey1117);
   gre->SetName("tgraph__bStar_f1p00__Nom__NSL50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117 = new TH1F("Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117","",100,700,4300);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetMinimum(0.1392823);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetMaximum(0.3127313);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetDirectory(nullptr);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetStats(0);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetLineWidth(2);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetMarkerStyle(20);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f1p00__Nom__NSL50__phjet_mb1117);
   
   gre->Draw(" pel");
   Double_t xAxis54[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__54 = new TH1D("chist_copy__54","",11, xAxis54);
   chist_copy__54->SetMinimum(0);
   chist_copy__54->SetMaximum(1.1);
   chist_copy__54->SetDirectory(nullptr);
   chist_copy__54->SetStats(0);
   chist_copy__54->SetLineColor(0);
   chist_copy__54->SetLineWidth(0);
   chist_copy__54->SetMarkerColor(0);
   chist_copy__54->SetMarkerStyle(20);
   chist_copy__54->SetMarkerSize(0);
   chist_copy__54->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist_copy__54->GetXaxis()->SetNdivisions(4000510);
   chist_copy__54->GetXaxis()->SetLabelFont(42);
   chist_copy__54->GetXaxis()->SetLabelSize(0.04);
   chist_copy__54->GetXaxis()->SetTitleSize(0.04);
   chist_copy__54->GetXaxis()->SetTickLength(0.02);
   chist_copy__54->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__54->GetXaxis()->SetTitleFont(42);
   chist_copy__54->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__54->GetYaxis()->SetNdivisions(3000510);
   chist_copy__54->GetYaxis()->SetLabelFont(42);
   chist_copy__54->GetYaxis()->SetLabelSize(0.04);
   chist_copy__54->GetYaxis()->SetTitleSize(0.04);
   chist_copy__54->GetYaxis()->SetTickLength(0.02);
   chist_copy__54->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__54->GetYaxis()->SetTitleFont(42);
   chist_copy__54->GetZaxis()->SetLabelFont(42);
   chist_copy__54->GetZaxis()->SetLabelSize(0.05);
   chist_copy__54->GetZaxis()->SetTitleSize(0.05);
   chist_copy__54->GetZaxis()->SetTitleOffset(1);
   chist_copy__54->GetZaxis()->SetTitleFont(42);
   chist_copy__54->Draw("sameaxis");
   up__26->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
