#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__cStar__Nom__NSC50__efficiency()
{
//=========Macro generated from canvas: c1/
//=========  (Sun Aug 11 05:14:54 2024) by ROOT version 6.32.02
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
   TPad *up__16 = new TPad("up", "up",0,0,1,1);
   up__16->Draw();
   up__16->cd();
   up__16->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__16->SetFillColor(0);
   up__16->SetFillStyle(4000);
   up__16->SetBorderMode(0);
   up__16->SetBorderSize(0);
   up__16->SetTickx(1);
   up__16->SetTicky(1);
   up__16->SetLeftMargin(0.120603);
   up__16->SetRightMargin(0.08040201);
   up__16->SetTopMargin(0.05181347);
   up__16->SetFrameBorderMode(0);
   up__16->SetFrameBorderMode(0);
   Double_t xAxis33[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__33 = new TH1D("chist__33","",11, xAxis33);
   chist__33->SetMinimum(0);
   chist__33->SetMaximum(1.1);
   chist__33->SetDirectory(nullptr);
   chist__33->SetStats(0);
   chist__33->SetLineColor(0);
   chist__33->SetLineWidth(0);
   chist__33->SetMarkerColor(0);
   chist__33->SetMarkerStyle(20);
   chist__33->SetMarkerSize(0);
   chist__33->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist__33->GetXaxis()->SetNdivisions(4000510);
   chist__33->GetXaxis()->SetLabelFont(42);
   chist__33->GetXaxis()->SetLabelSize(0.04);
   chist__33->GetXaxis()->SetTitleSize(0.04);
   chist__33->GetXaxis()->SetTickLength(0.02);
   chist__33->GetXaxis()->SetTitleOffset(1.010466);
   chist__33->GetXaxis()->SetTitleFont(42);
   chist__33->GetYaxis()->SetTitle("Selection efficiency");
   chist__33->GetYaxis()->SetNdivisions(3000510);
   chist__33->GetYaxis()->SetLabelFont(42);
   chist__33->GetYaxis()->SetLabelSize(0.04);
   chist__33->GetYaxis()->SetTitleSize(0.04);
   chist__33->GetYaxis()->SetTickLength(0.02);
   chist__33->GetYaxis()->SetTitleOffset(1.454774);
   chist__33->GetYaxis()->SetTitleFont(42);
   chist__33->GetZaxis()->SetLabelFont(42);
   chist__33->GetZaxis()->SetLabelSize(0.05);
   chist__33->GetZaxis()->SetTitleSize(0.05);
   chist__33->GetZaxis()->SetTitleOffset(1);
   chist__33->GetZaxis()->SetTitleFont(42);
   chist__33->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__cStar_f0p01__Nom__NSC50__phjet_mc","c*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__cStar_f0p10__Nom__NSC50__phjet_mc","c*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f0p50__Nom__NSC50__phjet_mc","c*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f1p00__Nom__NSC50__phjet_mc","c*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.809,"NSC50");
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
   
   Double_t tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fx1071[1] = { 1000 };
   Double_t tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fy1071[1] = { 0.36605 };
   Double_t tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fex1071[1] = { 0 };
   Double_t tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fey1071[1] = { 0.002886874 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fx1071,tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fy1071,tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fex1071,tgraph__cStar_f0p01__Nom__NSC50__phjet_mc_fey1071);
   gre->SetName("tgraph__cStar_f0p01__Nom__NSC50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071 = new TH1F("Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071","",100,999.9,1001.1);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetMinimum(0.3625858);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetMaximum(0.3695143);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetStats(0);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetLineWidth(2);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p01__Nom__NSC50__phjet_mc1071);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fx1072[2] = { 1000, 2000 };
   Double_t tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fy1072[2] = { 0.3688833, 0.3467833 };
   Double_t tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fex1072[2] = { 0, 0 };
   Double_t tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fey1072[2] = { 0.002901029, 0.002789988 };
   gre = new TGraphErrors(2,tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fx1072,tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fy1072,tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fex1072,tgraph__cStar_f0p10__Nom__NSC50__phjet_mc_fey1072);
   gre->SetName("tgraph__cStar_f0p10__Nom__NSC50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072 = new TH1F("Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072","",100,900,2100);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetMinimum(0.3412142);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetMaximum(0.3745635);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetStats(0);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetLineWidth(2);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p10__Nom__NSC50__phjet_mc1072);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fx1073[3] = { 1000, 2000, 3000 };
   Double_t tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fy1073[3] = { 0.36885, 0.3475333, 0.2878833 };
   Double_t tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fex1073[3] = { 0, 0, 0 };
   Double_t tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fey1073[3] = { 0.002900863, 0.002793781, 0.002485827 };
   gre = new TGraphErrors(3,tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fx1073,tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fy1073,tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fex1073,tgraph__cStar_f0p50__Nom__NSC50__phjet_mc_fey1073);
   gre->SetName("tgraph__cStar_f0p50__Nom__NSC50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073 = new TH1F("Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073","",100,800,3200);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetMinimum(0.2767622);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetMaximum(0.3803862);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetStats(0);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetLineWidth(2);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p50__Nom__NSC50__phjet_mc1073);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fx1074[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fy1074[4] = { 0.3653667, 0.34605, 0.2890667, 0.2400833 };
   Double_t tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fex1074[4] = { 0, 0, 0, 0 };
   Double_t tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fey1074[4] = { 0.002883457, 0.002786278, 0.002492075, 0.002227567 };
   gre = new TGraphErrors(4,tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fx1074,tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fy1074,tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fex1074,tgraph__cStar_f1p00__Nom__NSC50__phjet_mc_fey1074);
   gre->SetName("tgraph__cStar_f1p00__Nom__NSC50__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074 = new TH1F("Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074","",100,700,4300);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetMinimum(0.2248163);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetMaximum(0.3812896);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetDirectory(nullptr);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetStats(0);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetLineWidth(2);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetMarkerStyle(20);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f1p00__Nom__NSC50__phjet_mc1074);
   
   gre->Draw(" pel");
   Double_t xAxis34[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__34 = new TH1D("chist_copy__34","",11, xAxis34);
   chist_copy__34->SetMinimum(0);
   chist_copy__34->SetMaximum(1.1);
   chist_copy__34->SetDirectory(nullptr);
   chist_copy__34->SetStats(0);
   chist_copy__34->SetLineColor(0);
   chist_copy__34->SetLineWidth(0);
   chist_copy__34->SetMarkerColor(0);
   chist_copy__34->SetMarkerStyle(20);
   chist_copy__34->SetMarkerSize(0);
   chist_copy__34->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist_copy__34->GetXaxis()->SetNdivisions(4000510);
   chist_copy__34->GetXaxis()->SetLabelFont(42);
   chist_copy__34->GetXaxis()->SetLabelSize(0.04);
   chist_copy__34->GetXaxis()->SetTitleSize(0.04);
   chist_copy__34->GetXaxis()->SetTickLength(0.02);
   chist_copy__34->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__34->GetXaxis()->SetTitleFont(42);
   chist_copy__34->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__34->GetYaxis()->SetNdivisions(3000510);
   chist_copy__34->GetYaxis()->SetLabelFont(42);
   chist_copy__34->GetYaxis()->SetLabelSize(0.04);
   chist_copy__34->GetYaxis()->SetTitleSize(0.04);
   chist_copy__34->GetYaxis()->SetTickLength(0.02);
   chist_copy__34->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__34->GetYaxis()->SetTitleFont(42);
   chist_copy__34->GetZaxis()->SetLabelFont(42);
   chist_copy__34->GetZaxis()->SetLabelSize(0.05);
   chist_copy__34->GetZaxis()->SetTitleSize(0.05);
   chist_copy__34->GetZaxis()->SetTitleOffset(1);
   chist_copy__34->GetZaxis()->SetTitleFont(42);
   chist_copy__34->Draw("sameaxis");
   up__16->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
