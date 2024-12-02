#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__cStar__Nom__NSL50__efficiency()
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
   TPad *up__25 = new TPad("up", "up",0,0,1,1);
   up__25->Draw();
   up__25->cd();
   up__25->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__25->SetFillColor(0);
   up__25->SetFillStyle(4000);
   up__25->SetBorderMode(0);
   up__25->SetBorderSize(0);
   up__25->SetTickx(1);
   up__25->SetTicky(1);
   up__25->SetLeftMargin(0.120603);
   up__25->SetRightMargin(0.08040201);
   up__25->SetTopMargin(0.05181347);
   up__25->SetFrameBorderMode(0);
   up__25->SetFrameBorderMode(0);
   Double_t xAxis51[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__51 = new TH1D("chist__51","",11, xAxis51);
   chist__51->SetMinimum(0);
   chist__51->SetMaximum(1.1);
   chist__51->SetDirectory(nullptr);
   chist__51->SetStats(0);
   chist__51->SetLineColor(0);
   chist__51->SetLineWidth(0);
   chist__51->SetMarkerColor(0);
   chist__51->SetMarkerStyle(20);
   chist__51->SetMarkerSize(0);
   chist__51->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist__51->GetXaxis()->SetNdivisions(4000510);
   chist__51->GetXaxis()->SetLabelFont(42);
   chist__51->GetXaxis()->SetLabelSize(0.04);
   chist__51->GetXaxis()->SetTitleSize(0.04);
   chist__51->GetXaxis()->SetTickLength(0.02);
   chist__51->GetXaxis()->SetTitleOffset(1.010466);
   chist__51->GetXaxis()->SetTitleFont(42);
   chist__51->GetYaxis()->SetTitle("Selection efficiency");
   chist__51->GetYaxis()->SetNdivisions(3000510);
   chist__51->GetYaxis()->SetLabelFont(42);
   chist__51->GetYaxis()->SetLabelSize(0.04);
   chist__51->GetYaxis()->SetTitleSize(0.04);
   chist__51->GetYaxis()->SetTickLength(0.02);
   chist__51->GetYaxis()->SetTitleOffset(1.454774);
   chist__51->GetYaxis()->SetTitleFont(42);
   chist__51->GetZaxis()->SetLabelFont(42);
   chist__51->GetZaxis()->SetLabelSize(0.05);
   chist__51->GetZaxis()->SetTitleSize(0.05);
   chist__51->GetZaxis()->SetTitleOffset(1);
   chist__51->GetZaxis()->SetTitleFont(42);
   chist__51->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__cStar_f0p01__Nom__NSL50__phjet_mc","c*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__cStar_f0p10__Nom__NSL50__phjet_mc","c*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f0p50__Nom__NSL50__phjet_mc","c*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f1p00__Nom__NSL50__phjet_mc","c*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow c*#rightarrow c#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fx1110[1] = { 1000 };
   Double_t tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fy1110[1] = { 0.3297 };
   Double_t tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fex1110[1] = { 0 };
   Double_t tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fey1110[1] = { 0.002703091 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fx1110,tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fy1110,tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fex1110,tgraph__cStar_f0p01__Nom__NSL50__phjet_mc_fey1110);
   gre->SetName("tgraph__cStar_f0p01__Nom__NSL50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110 = new TH1F("Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110","",100,999.9,1001.1);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetMinimum(0.3264563);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetMaximum(0.3329437);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetStats(0);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetLineWidth(2);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p01__Nom__NSL50__phjet_mc1110);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fx1111[2] = { 1000, 2000 };
   Double_t tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fy1111[2] = { 0.3296, 0.3746167 };
   Double_t tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fex1111[2] = { 0, 0 };
   Double_t tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fey1111[2] = { 0.00270258, 0.002929603 };
   gre = new TGraphErrors(2,tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fx1111,tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fy1111,tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fex1111,tgraph__cStar_f0p10__Nom__NSL50__phjet_mc_fey1111);
   gre->SetName("tgraph__cStar_f0p10__Nom__NSL50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111 = new TH1F("Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111","",100,900,2100);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetMinimum(0.3218325);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetMaximum(0.3826111);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetStats(0);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetLineWidth(2);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p10__Nom__NSL50__phjet_mc1111);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fx1112[3] = { 1000, 2000, 3000 };
   Double_t tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fy1112[3] = { 0.3338, 0.3731667, 0.42705 };
   Double_t tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fex1112[3] = { 0, 0, 0 };
   Double_t tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fey1112[3] = { 0.002724036, 0.002922385, 0.003187009 };
   gre = new TGraphErrors(3,tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fx1112,tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fy1112,tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fex1112,tgraph__cStar_f0p50__Nom__NSL50__phjet_mc_fey1112);
   gre->SetName("tgraph__cStar_f0p50__Nom__NSL50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112 = new TH1F("Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112","",100,800,3200);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetMinimum(0.3211598);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetMaximum(0.4401531);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetStats(0);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetLineWidth(2);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p50__Nom__NSL50__phjet_mc1112);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fx1113[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fy1113[4] = { 0.3353333, 0.3728167, 0.4249333, 0.4709167 };
   Double_t tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fex1113[4] = { 0, 0, 0, 0 };
   Double_t tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fey1113[4] = { 0.002731855, 0.002920642, 0.003176743, 0.003397742 };
   gre = new TGraphErrors(4,tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fx1113,tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fy1113,tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fex1113,tgraph__cStar_f1p00__Nom__NSL50__phjet_mc_fey1113);
   gre->SetName("tgraph__cStar_f1p00__Nom__NSL50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113 = new TH1F("Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113","",100,700,4300);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetMinimum(0.3184302);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetMaximum(0.4884857);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetDirectory(nullptr);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetStats(0);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetLineWidth(2);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetMarkerStyle(20);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f1p00__Nom__NSL50__phjet_mc1113);
   
   gre->Draw(" pel");
   Double_t xAxis52[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__52 = new TH1D("chist_copy__52","",11, xAxis52);
   chist_copy__52->SetMinimum(0);
   chist_copy__52->SetMaximum(1.1);
   chist_copy__52->SetDirectory(nullptr);
   chist_copy__52->SetStats(0);
   chist_copy__52->SetLineColor(0);
   chist_copy__52->SetLineWidth(0);
   chist_copy__52->SetMarkerColor(0);
   chist_copy__52->SetMarkerStyle(20);
   chist_copy__52->SetMarkerSize(0);
   chist_copy__52->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist_copy__52->GetXaxis()->SetNdivisions(4000510);
   chist_copy__52->GetXaxis()->SetLabelFont(42);
   chist_copy__52->GetXaxis()->SetLabelSize(0.04);
   chist_copy__52->GetXaxis()->SetTitleSize(0.04);
   chist_copy__52->GetXaxis()->SetTickLength(0.02);
   chist_copy__52->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__52->GetXaxis()->SetTitleFont(42);
   chist_copy__52->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__52->GetYaxis()->SetNdivisions(3000510);
   chist_copy__52->GetYaxis()->SetLabelFont(42);
   chist_copy__52->GetYaxis()->SetLabelSize(0.04);
   chist_copy__52->GetYaxis()->SetTitleSize(0.04);
   chist_copy__52->GetYaxis()->SetTickLength(0.02);
   chist_copy__52->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__52->GetYaxis()->SetTitleFont(42);
   chist_copy__52->GetZaxis()->SetLabelFont(42);
   chist_copy__52->GetZaxis()->SetLabelSize(0.05);
   chist_copy__52->GetZaxis()->SetTitleSize(0.05);
   chist_copy__52->GetZaxis()->SetTitleOffset(1);
   chist_copy__52->GetZaxis()->SetTitleFont(42);
   chist_copy__52->Draw("sameaxis");
   up__25->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
