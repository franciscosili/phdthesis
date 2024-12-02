#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__bStar__Nom__NSC50__efficiency()
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
   TPad *up__17 = new TPad("up", "up",0,0,1,1);
   up__17->Draw();
   up__17->cd();
   up__17->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__17->SetFillColor(0);
   up__17->SetFillStyle(4000);
   up__17->SetBorderMode(0);
   up__17->SetBorderSize(0);
   up__17->SetTickx(1);
   up__17->SetTicky(1);
   up__17->SetLeftMargin(0.120603);
   up__17->SetRightMargin(0.08040201);
   up__17->SetTopMargin(0.05181347);
   up__17->SetFrameBorderMode(0);
   up__17->SetFrameBorderMode(0);
   Double_t xAxis35[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__35 = new TH1D("chist__35","",11, xAxis35);
   chist__35->SetMinimum(0);
   chist__35->SetMaximum(1.1);
   chist__35->SetDirectory(nullptr);
   chist__35->SetStats(0);
   chist__35->SetLineColor(0);
   chist__35->SetLineWidth(0);
   chist__35->SetMarkerColor(0);
   chist__35->SetMarkerStyle(20);
   chist__35->SetMarkerSize(0);
   chist__35->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist__35->GetXaxis()->SetNdivisions(4000510);
   chist__35->GetXaxis()->SetLabelFont(42);
   chist__35->GetXaxis()->SetLabelSize(0.04);
   chist__35->GetXaxis()->SetTitleSize(0.04);
   chist__35->GetXaxis()->SetTickLength(0.02);
   chist__35->GetXaxis()->SetTitleOffset(1.010466);
   chist__35->GetXaxis()->SetTitleFont(42);
   chist__35->GetYaxis()->SetTitle("Selection efficiency");
   chist__35->GetYaxis()->SetNdivisions(3000510);
   chist__35->GetYaxis()->SetLabelFont(42);
   chist__35->GetYaxis()->SetLabelSize(0.04);
   chist__35->GetYaxis()->SetTitleSize(0.04);
   chist__35->GetYaxis()->SetTickLength(0.02);
   chist__35->GetYaxis()->SetTitleOffset(1.454774);
   chist__35->GetYaxis()->SetTitleFont(42);
   chist__35->GetZaxis()->SetLabelFont(42);
   chist__35->GetZaxis()->SetLabelSize(0.05);
   chist__35->GetZaxis()->SetTitleSize(0.05);
   chist__35->GetZaxis()->SetTitleOffset(1);
   chist__35->GetZaxis()->SetTitleFont(42);
   chist__35->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__bStar_f0p01__Nom__NSC50__phjet_mb","b*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__bStar_f0p10__Nom__NSC50__phjet_mb","b*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f0p50__Nom__NSC50__phjet_mb","b*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f1p00__Nom__NSC50__phjet_mb","b*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow b*#rightarrow b#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fx1075[1] = { 1000 };
   Double_t tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fy1075[1] = { 0.09733333 };
   Double_t tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fex1075[1] = { 0 };
   Double_t tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fey1075[1] = { 0.001334211 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fx1075,tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fy1075,tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fex1075,tgraph__bStar_f0p01__Nom__NSC50__phjet_mb_fey1075);
   gre->SetName("tgraph__bStar_f0p01__Nom__NSC50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075 = new TH1F("Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075","",100,999.9,1001.1);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetMinimum(0.09573228);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetMaximum(0.09893439);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetStats(0);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetLineWidth(2);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p01__Nom__NSC50__phjet_mb1075);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fx1076[2] = { 1000, 2000 };
   Double_t tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fy1076[2] = { 0.09488333, 0.1202 };
   Double_t tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fex1076[2] = { 0, 0 };
   Double_t tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fey1076[2] = { 0.001315841, 0.001498043 };
   gre = new TGraphErrors(2,tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fx1076,tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fy1076,tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fex1076,tgraph__bStar_f0p10__Nom__NSC50__phjet_mb_fey1076);
   gre->SetName("tgraph__bStar_f0p10__Nom__NSC50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076 = new TH1F("Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076","",100,900,2100);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetMinimum(0.09075443);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetMaximum(0.1245111);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetStats(0);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetLineWidth(2);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p10__Nom__NSC50__phjet_mb1076);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fx1077[3] = { 1000, 2000, 3000 };
   Double_t tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fy1077[3] = { 0.09508333, 0.12005, 0.1313833 };
   Double_t tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fex1077[3] = { 0, 0, 0 };
   Double_t tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fey1077[3] = { 0.001317347, 0.001497008, 0.001573981 };
   gre = new TGraphErrors(3,tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fx1077,tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fy1077,tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fex1077,tgraph__bStar_f0p50__Nom__NSC50__phjet_mb_fey1077);
   gre->SetName("tgraph__bStar_f0p50__Nom__NSC50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077 = new TH1F("Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077","",100,800,3200);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetMinimum(0.08984685);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetMaximum(0.1368764);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetStats(0);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetLineWidth(2);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p50__Nom__NSC50__phjet_mb1077);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fx1078[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fy1078[4] = { 0.09438334, 0.1186667, 0.1332833, 0.13195 };
   Double_t tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fex1078[4] = { 0, 0, 0, 0 };
   Double_t tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fey1078[4] = { 0.001312069, 0.001487439, 0.001586652, 0.001577766 };
   gre = new TGraphErrors(4,tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fx1078,tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fy1078,tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fex1078,tgraph__bStar_f1p00__Nom__NSC50__phjet_mb_fey1078);
   gre->SetName("tgraph__bStar_f1p00__Nom__NSC50__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078 = new TH1F("Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078","",100,700,4300);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetMinimum(0.0888914);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetMaximum(0.1390499);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetDirectory(nullptr);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetStats(0);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetLineWidth(2);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetMarkerStyle(20);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f1p00__Nom__NSC50__phjet_mb1078);
   
   gre->Draw(" pel");
   Double_t xAxis36[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__36 = new TH1D("chist_copy__36","",11, xAxis36);
   chist_copy__36->SetMinimum(0);
   chist_copy__36->SetMaximum(1.1);
   chist_copy__36->SetDirectory(nullptr);
   chist_copy__36->SetStats(0);
   chist_copy__36->SetLineColor(0);
   chist_copy__36->SetLineWidth(0);
   chist_copy__36->SetMarkerColor(0);
   chist_copy__36->SetMarkerStyle(20);
   chist_copy__36->SetMarkerSize(0);
   chist_copy__36->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist_copy__36->GetXaxis()->SetNdivisions(4000510);
   chist_copy__36->GetXaxis()->SetLabelFont(42);
   chist_copy__36->GetXaxis()->SetLabelSize(0.04);
   chist_copy__36->GetXaxis()->SetTitleSize(0.04);
   chist_copy__36->GetXaxis()->SetTickLength(0.02);
   chist_copy__36->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__36->GetXaxis()->SetTitleFont(42);
   chist_copy__36->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__36->GetYaxis()->SetNdivisions(3000510);
   chist_copy__36->GetYaxis()->SetLabelFont(42);
   chist_copy__36->GetYaxis()->SetLabelSize(0.04);
   chist_copy__36->GetYaxis()->SetTitleSize(0.04);
   chist_copy__36->GetYaxis()->SetTickLength(0.02);
   chist_copy__36->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__36->GetYaxis()->SetTitleFont(42);
   chist_copy__36->GetZaxis()->SetLabelFont(42);
   chist_copy__36->GetZaxis()->SetLabelSize(0.05);
   chist_copy__36->GetZaxis()->SetTitleSize(0.05);
   chist_copy__36->GetZaxis()->SetTitleOffset(1);
   chist_copy__36->GetZaxis()->SetTitleFont(42);
   chist_copy__36->Draw("sameaxis");
   up__17->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
