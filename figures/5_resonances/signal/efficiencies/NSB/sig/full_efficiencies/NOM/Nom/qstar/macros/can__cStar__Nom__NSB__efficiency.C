#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__cStar__Nom__NSB__efficiency()
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
   TPad *up__4 = new TPad("up", "up",0,0,1,1);
   up__4->Draw();
   up__4->cd();
   up__4->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__4->SetFillColor(0);
   up__4->SetFillStyle(4000);
   up__4->SetBorderMode(0);
   up__4->SetBorderSize(0);
   up__4->SetTickx(1);
   up__4->SetTicky(1);
   up__4->SetLeftMargin(0.120603);
   up__4->SetRightMargin(0.08040201);
   up__4->SetTopMargin(0.05181347);
   up__4->SetFrameBorderMode(0);
   up__4->SetFrameBorderMode(0);
   Double_t xAxis9[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__9 = new TH1D("chist__9","",11, xAxis9);
   chist__9->SetMinimum(0);
   chist__9->SetMaximum(1.1);
   chist__9->SetDirectory(nullptr);
   chist__9->SetStats(0);
   chist__9->SetLineColor(0);
   chist__9->SetLineWidth(0);
   chist__9->SetMarkerColor(0);
   chist__9->SetMarkerStyle(20);
   chist__9->SetMarkerSize(0);
   chist__9->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist__9->GetXaxis()->SetNdivisions(4000510);
   chist__9->GetXaxis()->SetLabelFont(42);
   chist__9->GetXaxis()->SetLabelSize(0.04);
   chist__9->GetXaxis()->SetTitleSize(0.04);
   chist__9->GetXaxis()->SetTickLength(0.02);
   chist__9->GetXaxis()->SetTitleOffset(1.010466);
   chist__9->GetXaxis()->SetTitleFont(42);
   chist__9->GetYaxis()->SetTitle("Selection efficiency");
   chist__9->GetYaxis()->SetNdivisions(3000510);
   chist__9->GetYaxis()->SetLabelFont(42);
   chist__9->GetYaxis()->SetLabelSize(0.04);
   chist__9->GetYaxis()->SetTitleSize(0.04);
   chist__9->GetYaxis()->SetTickLength(0.02);
   chist__9->GetYaxis()->SetTitleOffset(1.454774);
   chist__9->GetYaxis()->SetTitleFont(42);
   chist__9->GetZaxis()->SetLabelFont(42);
   chist__9->GetZaxis()->SetLabelSize(0.05);
   chist__9->GetZaxis()->SetTitleSize(0.05);
   chist__9->GetZaxis()->SetTitleOffset(1);
   chist__9->GetZaxis()->SetTitleFont(42);
   chist__9->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__cStar_f0p01__Nom__NSB__phjet_mc","c*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__cStar_f0p10__Nom__NSB__phjet_mc","c*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f0p50__Nom__NSB__phjet_mc","c*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f1p00__Nom__NSB__phjet_mc","c*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.809,"NSB");
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
   
   Double_t tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fx1019[1] = { 1000 };
   Double_t tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fy1019[1] = { 0.0384 };
   Double_t tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fex1019[1] = { 0 };
   Double_t tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fey1019[1] = { 0.0008152153 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fx1019,tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fy1019,tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fex1019,tgraph__cStar_f0p01__Nom__NSB__phjet_mc_fey1019);
   gre->SetName("tgraph__cStar_f0p01__Nom__NSB__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019 = new TH1F("Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019","",100,999.9,1001.1);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetMinimum(0.03742174);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetMaximum(0.03937826);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetStats(0);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetLineWidth(2);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p01__Nom__NSB__phjet_mc1019);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fx1020[2] = { 1000, 2000 };
   Double_t tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fy1020[2] = { 0.03948333, 0.05116666 };
   Double_t tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fex1020[2] = { 0, 0 };
   Double_t tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fey1020[2] = { 0.0008270658, 0.0009467902 };
   gre = new TGraphErrors(2,tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fx1020,tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fy1020,tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fex1020,tgraph__cStar_f0p10__Nom__NSB__phjet_mc_fey1020);
   gre->SetName("tgraph__cStar_f0p10__Nom__NSB__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020 = new TH1F("Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020","",100,900,2100);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetMinimum(0.03731055);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetMaximum(0.05345917);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetStats(0);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetLineWidth(2);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p10__Nom__NSB__phjet_mc1020);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fx1021[3] = { 1000, 2000, 3000 };
   Double_t tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fy1021[3] = { 0.03911667, 0.05081667, 0.05028334 };
   Double_t tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fex1021[3] = { 0, 0, 0 };
   Double_t tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fey1021[3] = { 0.0008230713, 0.0009433893, 0.0009381875 };
   gre = new TGraphErrors(3,tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fx1021,tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fy1021,tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fex1021,tgraph__cStar_f0p50__Nom__NSB__phjet_mc_fey1021);
   gre->SetName("tgraph__cStar_f0p50__Nom__NSB__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021 = new TH1F("Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021","",100,800,3200);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetMinimum(0.03694695);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetMaximum(0.0531067);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetStats(0);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetLineWidth(2);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p50__Nom__NSB__phjet_mc1021);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fx1022[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fy1022[4] = { 0.03776667, 0.0497, 0.05108333, 0.04761667 };
   Double_t tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fex1022[4] = { 0, 0, 0, 0 };
   Double_t tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fey1022[4] = { 0.0008082181, 0.0009324707, 0.0009459813, 0.0009118115 };
   gre = new TGraphErrors(4,tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fx1022,tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fy1022,tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fex1022,tgraph__cStar_f1p00__Nom__NSB__phjet_mc_fey1022);
   gre->SetName("tgraph__cStar_f1p00__Nom__NSB__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022 = new TH1F("Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022","",100,700,4300);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetMinimum(0.03545136);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetMaximum(0.0535364);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetDirectory(nullptr);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetStats(0);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetLineWidth(2);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetMarkerStyle(20);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f1p00__Nom__NSB__phjet_mc1022);
   
   gre->Draw(" pel");
   Double_t xAxis10[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__10 = new TH1D("chist_copy__10","",11, xAxis10);
   chist_copy__10->SetMinimum(0);
   chist_copy__10->SetMaximum(1.1);
   chist_copy__10->SetDirectory(nullptr);
   chist_copy__10->SetStats(0);
   chist_copy__10->SetLineColor(0);
   chist_copy__10->SetLineWidth(0);
   chist_copy__10->SetMarkerColor(0);
   chist_copy__10->SetMarkerStyle(20);
   chist_copy__10->SetMarkerSize(0);
   chist_copy__10->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist_copy__10->GetXaxis()->SetNdivisions(4000510);
   chist_copy__10->GetXaxis()->SetLabelFont(42);
   chist_copy__10->GetXaxis()->SetLabelSize(0.04);
   chist_copy__10->GetXaxis()->SetTitleSize(0.04);
   chist_copy__10->GetXaxis()->SetTickLength(0.02);
   chist_copy__10->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__10->GetXaxis()->SetTitleFont(42);
   chist_copy__10->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__10->GetYaxis()->SetNdivisions(3000510);
   chist_copy__10->GetYaxis()->SetLabelFont(42);
   chist_copy__10->GetYaxis()->SetLabelSize(0.04);
   chist_copy__10->GetYaxis()->SetTitleSize(0.04);
   chist_copy__10->GetYaxis()->SetTickLength(0.02);
   chist_copy__10->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__10->GetYaxis()->SetTitleFont(42);
   chist_copy__10->GetZaxis()->SetLabelFont(42);
   chist_copy__10->GetZaxis()->SetLabelSize(0.05);
   chist_copy__10->GetZaxis()->SetTitleSize(0.05);
   chist_copy__10->GetZaxis()->SetTitleOffset(1);
   chist_copy__10->GetZaxis()->SetTitleFont(42);
   chist_copy__10->Draw("sameaxis");
   up__4->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
