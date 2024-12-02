#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qStar__Nom__NS__efficiency()
{
//=========Macro generated from canvas: c1/
//=========  (Sun Aug 11 05:14:52 2024) by ROOT version 6.32.02
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
   TPad *up__0 = new TPad("up", "up",0,0,1,1);
   up__0->Draw();
   up__0->cd();
   up__0->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__0->SetFillColor(0);
   up__0->SetFillStyle(4000);
   up__0->SetBorderMode(0);
   up__0->SetBorderSize(0);
   up__0->SetTickx(1);
   up__0->SetTicky(1);
   up__0->SetLeftMargin(0.120603);
   up__0->SetRightMargin(0.08040201);
   up__0->SetTopMargin(0.05181347);
   up__0->SetFrameBorderMode(0);
   up__0->SetFrameBorderMode(0);
   Double_t xAxis1[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__1 = new TH1D("chist__1","",11, xAxis1);
   chist__1->SetMinimum(0);
   chist__1->SetMaximum(1.1);
   chist__1->SetDirectory(nullptr);
   chist__1->SetStats(0);
   chist__1->SetLineColor(0);
   chist__1->SetLineWidth(0);
   chist__1->SetMarkerColor(0);
   chist__1->SetMarkerStyle(20);
   chist__1->SetMarkerSize(0);
   chist__1->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist__1->GetXaxis()->SetNdivisions(4000510);
   chist__1->GetXaxis()->SetLabelFont(42);
   chist__1->GetXaxis()->SetLabelSize(0.04);
   chist__1->GetXaxis()->SetTitleSize(0.04);
   chist__1->GetXaxis()->SetTickLength(0.02);
   chist__1->GetXaxis()->SetTitleOffset(1.010466);
   chist__1->GetXaxis()->SetTitleFont(42);
   chist__1->GetYaxis()->SetTitle("Selection efficiency");
   chist__1->GetYaxis()->SetNdivisions(3000510);
   chist__1->GetYaxis()->SetLabelFont(42);
   chist__1->GetYaxis()->SetLabelSize(0.04);
   chist__1->GetYaxis()->SetTitleSize(0.04);
   chist__1->GetYaxis()->SetTickLength(0.02);
   chist__1->GetYaxis()->SetTitleOffset(1.454774);
   chist__1->GetYaxis()->SetTitleFont(42);
   chist__1->GetZaxis()->SetLabelFont(42);
   chist__1->GetZaxis()->SetTitleOffset(1);
   chist__1->GetZaxis()->SetTitleFont(42);
   chist__1->Draw("pe");
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
   
   TLegend *leg = new TLegend(0.4861809,0.71,0.879397,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__qStar_f0p01__Nom__NS__phjet_mq","q*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__qStar_f0p10__Nom__NS__phjet_mq","q*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p50__Nom__NS__phjet_mq","q*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p75__Nom__NS__phjet_mq","q*, f=0.75","PEL");

   ci = TColor::GetColor("#d65f5f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#d65f5f");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f1p00__Nom__NS__phjet_mq","q*, f=1.00","PEL");

   ci = TColor::GetColor("#956cb4");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#956cb4");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"NS");
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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow q*#rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__qStar_f0p01__Nom__NS__phjet_mq_fx1001[2] = { 1000, 2000 };
   Double_t tgraph__qStar_f0p01__Nom__NS__phjet_mq_fy1001[2] = { 0.7392333, 0.7800333 };
   Double_t tgraph__qStar_f0p01__Nom__NS__phjet_mq_fex1001[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p01__Nom__NS__phjet_mq_fey1001[2] = { 0.004629074, 0.004810553 };
   TGraphErrors *gre = new TGraphErrors(2,tgraph__qStar_f0p01__Nom__NS__phjet_mq_fx1001,tgraph__qStar_f0p01__Nom__NS__phjet_mq_fy1001,tgraph__qStar_f0p01__Nom__NS__phjet_mq_fex1001,tgraph__qStar_f0p01__Nom__NS__phjet_mq_fey1001);
   gre->SetName("tgraph__qStar_f0p01__Nom__NS__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001 = new TH1F("Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001","",100,900,2100);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetMinimum(0.7295803);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetMaximum(0.7898679);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetStats(0);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetLineWidth(2);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p01__Nom__NS__phjet_mq1001);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p10__Nom__NS__phjet_mq_fx1002[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__qStar_f0p10__Nom__NS__phjet_mq_fy1002[4] = { 0.7353, 0.77975, 0.77725, 0.76375 };
   Double_t tgraph__qStar_f0p10__Nom__NS__phjet_mq_fex1002[4] = { 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p10__Nom__NS__phjet_mq_fey1002[4] = { 0.004611518, 0.004809297, 0.004798207, 0.004738256 };
   gre = new TGraphErrors(4,tgraph__qStar_f0p10__Nom__NS__phjet_mq_fx1002,tgraph__qStar_f0p10__Nom__NS__phjet_mq_fy1002,tgraph__qStar_f0p10__Nom__NS__phjet_mq_fex1002,tgraph__qStar_f0p10__Nom__NS__phjet_mq_fey1002);
   gre->SetName("tgraph__qStar_f0p10__Nom__NS__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002 = new TH1F("Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002","",100,700,4300);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetMinimum(0.7253014);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetMaximum(0.7899464);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetStats(0);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetLineWidth(2);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p10__Nom__NS__phjet_mq1002);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p50__Nom__NS__phjet_mq_fx1003[6] = { 1000, 2000, 3000, 4000, 5000, 6000 };
   Double_t tgraph__qStar_f0p50__Nom__NS__phjet_mq_fy1003[6] = { 0.74165, 0.7790167, 0.7790334, 0.7667875, 0.7532667, 0.7397166 };
   Double_t tgraph__qStar_f0p50__Nom__NS__phjet_mq_fex1003[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p50__Nom__NS__phjet_mq_fey1003[6] = { 0.004639854, 0.004806044, 0.004806118, 0.004115141, 0.004691619, 0.00463123 };
   gre = new TGraphErrors(6,tgraph__qStar_f0p50__Nom__NS__phjet_mq_fx1003,tgraph__qStar_f0p50__Nom__NS__phjet_mq_fy1003,tgraph__qStar_f0p50__Nom__NS__phjet_mq_fex1003,tgraph__qStar_f0p50__Nom__NS__phjet_mq_fey1003);
   gre->SetName("tgraph__qStar_f0p50__Nom__NS__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003 = new TH1F("Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003","",100,500,6500);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetMinimum(0.73021);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetMaximum(0.7887149);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetStats(0);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetLineWidth(2);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p50__Nom__NS__phjet_mq1003);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p75__Nom__NS__phjet_mq_fx1004[2] = { 6000, 7000 };
   Double_t tgraph__qStar_f0p75__Nom__NS__phjet_mq_fy1004[2] = { 0.7445833, 0.7356333 };
   Double_t tgraph__qStar_f0p75__Nom__NS__phjet_mq_fex1004[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p75__Nom__NS__phjet_mq_fey1004[2] = { 0.004652934, 0.004613006 };
   gre = new TGraphErrors(2,tgraph__qStar_f0p75__Nom__NS__phjet_mq_fx1004,tgraph__qStar_f0p75__Nom__NS__phjet_mq_fy1004,tgraph__qStar_f0p75__Nom__NS__phjet_mq_fex1004,tgraph__qStar_f0p75__Nom__NS__phjet_mq_fey1004);
   gre->SetName("tgraph__qStar_f0p75__Nom__NS__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004 = new TH1F("Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004","",100,5900,7100);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetMinimum(0.7291987);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetMaximum(0.7510578);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetStats(0);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetLineWidth(2);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p75__Nom__NS__phjet_mq1004);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f1p00__Nom__NS__phjet_mq_fx1005[9] = { 1000, 2000, 3000, 4000, 5000, 5500, 6000, 6500, 7000 };
   Double_t tgraph__qStar_f1p00__Nom__NS__phjet_mq_fy1005[9] = { 0.7417667, 0.7794, 0.7767166, 0.7650833, 0.7533666, 0.747025, 0.7430333, 0.7422833, 0.7404 };
   Double_t tgraph__qStar_f1p00__Nom__NS__phjet_mq_fex1005[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f1p00__Nom__NS__phjet_mq_fey1005[9] = { 0.004640374, 0.004807744, 0.004795841, 0.004744182, 0.004692064, 0.004038984, 0.004646023, 0.004642678, 0.004634278 };
   gre = new TGraphErrors(9,tgraph__qStar_f1p00__Nom__NS__phjet_mq_fx1005,tgraph__qStar_f1p00__Nom__NS__phjet_mq_fy1005,tgraph__qStar_f1p00__Nom__NS__phjet_mq_fex1005,tgraph__qStar_f1p00__Nom__NS__phjet_mq_fey1005);
   gre->SetName("tgraph__qStar_f1p00__Nom__NS__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#956cb4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#956cb4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005 = new TH1F("Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005","",100,400,7600);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetMinimum(0.7309215);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetMaximum(0.7890519);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetDirectory(nullptr);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetStats(0);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetLineWidth(2);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetMarkerStyle(20);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f1p00__Nom__NS__phjet_mq1005);
   
   gre->Draw(" pel");
   Double_t xAxis2[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",11, xAxis2);
   chist_copy__2->SetMinimum(0);
   chist_copy__2->SetMaximum(1.1);
   chist_copy__2->SetDirectory(nullptr);
   chist_copy__2->SetStats(0);
   chist_copy__2->SetLineColor(0);
   chist_copy__2->SetLineWidth(0);
   chist_copy__2->SetMarkerColor(0);
   chist_copy__2->SetMarkerStyle(20);
   chist_copy__2->SetMarkerSize(0);
   chist_copy__2->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist_copy__2->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2->GetXaxis()->SetLabelFont(42);
   chist_copy__2->GetXaxis()->SetLabelSize(0.04);
   chist_copy__2->GetXaxis()->SetTitleSize(0.04);
   chist_copy__2->GetXaxis()->SetTickLength(0.02);
   chist_copy__2->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__2->GetXaxis()->SetTitleFont(42);
   chist_copy__2->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__2->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2->GetYaxis()->SetLabelFont(42);
   chist_copy__2->GetYaxis()->SetLabelSize(0.04);
   chist_copy__2->GetYaxis()->SetTitleSize(0.04);
   chist_copy__2->GetYaxis()->SetTickLength(0.02);
   chist_copy__2->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__2->GetYaxis()->SetTitleFont(42);
   chist_copy__2->GetZaxis()->SetLabelFont(42);
   chist_copy__2->GetZaxis()->SetTitleOffset(1);
   chist_copy__2->GetZaxis()->SetTitleFont(42);
   chist_copy__2->Draw("sameaxis");
   up__0->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
