#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__cStar__Nom__NS__efficiency()
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
   TPad *up__1 = new TPad("up", "up",0,0,1,1);
   up__1->Draw();
   up__1->cd();
   up__1->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__1->SetFillColor(0);
   up__1->SetFillStyle(4000);
   up__1->SetBorderMode(0);
   up__1->SetBorderSize(0);
   up__1->SetTickx(1);
   up__1->SetTicky(1);
   up__1->SetLeftMargin(0.120603);
   up__1->SetRightMargin(0.08040201);
   up__1->SetTopMargin(0.05181347);
   up__1->SetFrameBorderMode(0);
   up__1->SetFrameBorderMode(0);
   Double_t xAxis3[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__3 = new TH1D("chist__3","",11, xAxis3);
   chist__3->SetMinimum(0);
   chist__3->SetMaximum(1.1);
   chist__3->SetDirectory(nullptr);
   chist__3->SetStats(0);
   chist__3->SetLineColor(0);
   chist__3->SetLineWidth(0);
   chist__3->SetMarkerColor(0);
   chist__3->SetMarkerStyle(20);
   chist__3->SetMarkerSize(0);
   chist__3->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist__3->GetXaxis()->SetNdivisions(4000510);
   chist__3->GetXaxis()->SetLabelFont(42);
   chist__3->GetXaxis()->SetLabelSize(0.04);
   chist__3->GetXaxis()->SetTitleSize(0.04);
   chist__3->GetXaxis()->SetTickLength(0.02);
   chist__3->GetXaxis()->SetTitleOffset(1.010466);
   chist__3->GetXaxis()->SetTitleFont(42);
   chist__3->GetYaxis()->SetTitle("Selection efficiency");
   chist__3->GetYaxis()->SetNdivisions(3000510);
   chist__3->GetYaxis()->SetLabelFont(42);
   chist__3->GetYaxis()->SetLabelSize(0.04);
   chist__3->GetYaxis()->SetTitleSize(0.04);
   chist__3->GetYaxis()->SetTickLength(0.02);
   chist__3->GetYaxis()->SetTitleOffset(1.454774);
   chist__3->GetYaxis()->SetTitleFont(42);
   chist__3->GetZaxis()->SetLabelFont(42);
   chist__3->GetZaxis()->SetLabelSize(0.05);
   chist__3->GetZaxis()->SetTitleSize(0.05);
   chist__3->GetZaxis()->SetTitleOffset(1);
   chist__3->GetZaxis()->SetTitleFont(42);
   chist__3->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__cStar_f0p01__Nom__NS__phjet_mc","c*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__cStar_f0p10__Nom__NS__phjet_mc","c*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f0p50__Nom__NS__phjet_mc","c*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar_f1p00__Nom__NS__phjet_mc","c*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow c*#rightarrow c#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__cStar_f0p01__Nom__NS__phjet_mc_fx1006[1] = { 1000 };
   Double_t tgraph__cStar_f0p01__Nom__NS__phjet_mc_fy1006[1] = { 0.73415 };
   Double_t tgraph__cStar_f0p01__Nom__NS__phjet_mc_fex1006[1] = { 0 };
   Double_t tgraph__cStar_f0p01__Nom__NS__phjet_mc_fey1006[1] = { 0.004606384 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__cStar_f0p01__Nom__NS__phjet_mc_fx1006,tgraph__cStar_f0p01__Nom__NS__phjet_mc_fy1006,tgraph__cStar_f0p01__Nom__NS__phjet_mc_fex1006,tgraph__cStar_f0p01__Nom__NS__phjet_mc_fey1006);
   gre->SetName("tgraph__cStar_f0p01__Nom__NS__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006 = new TH1F("Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006","",100,999.9,1001.1);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetMinimum(0.7286223);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetMaximum(0.7396777);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetStats(0);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetLineWidth(2);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p01__Nom__NS__phjet_mc1006);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p10__Nom__NS__phjet_mc_fx1007[2] = { 1000, 2000 };
   Double_t tgraph__cStar_f0p10__Nom__NS__phjet_mc_fy1007[2] = { 0.7379667, 0.7725667 };
   Double_t tgraph__cStar_f0p10__Nom__NS__phjet_mc_fex1007[2] = { 0, 0 };
   Double_t tgraph__cStar_f0p10__Nom__NS__phjet_mc_fey1007[2] = { 0.004623421, 0.004777423 };
   gre = new TGraphErrors(2,tgraph__cStar_f0p10__Nom__NS__phjet_mc_fx1007,tgraph__cStar_f0p10__Nom__NS__phjet_mc_fy1007,tgraph__cStar_f0p10__Nom__NS__phjet_mc_fex1007,tgraph__cStar_f0p10__Nom__NS__phjet_mc_fey1007);
   gre->SetName("tgraph__cStar_f0p10__Nom__NS__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007 = new TH1F("Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007","",100,900,2100);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetMinimum(0.7289431);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetMaximum(0.7817442);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetStats(0);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetLineWidth(2);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p10__Nom__NS__phjet_mc1007);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f0p50__Nom__NS__phjet_mc_fx1008[3] = { 1000, 2000, 3000 };
   Double_t tgraph__cStar_f0p50__Nom__NS__phjet_mc_fy1008[3] = { 0.7417667, 0.7715167, 0.7652166 };
   Double_t tgraph__cStar_f0p50__Nom__NS__phjet_mc_fex1008[3] = { 0, 0, 0 };
   Double_t tgraph__cStar_f0p50__Nom__NS__phjet_mc_fey1008[3] = { 0.004640374, 0.00477276, 0.004744775 };
   gre = new TGraphErrors(3,tgraph__cStar_f0p50__Nom__NS__phjet_mc_fx1008,tgraph__cStar_f0p50__Nom__NS__phjet_mc_fy1008,tgraph__cStar_f0p50__Nom__NS__phjet_mc_fex1008,tgraph__cStar_f0p50__Nom__NS__phjet_mc_fey1008);
   gre->SetName("tgraph__cStar_f0p50__Nom__NS__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008 = new TH1F("Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008","",100,800,3200);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetMinimum(0.73321);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetMaximum(0.7802058);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetDirectory(nullptr);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetStats(0);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetLineWidth(2);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetMarkerStyle(20);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f0p50__Nom__NS__phjet_mc1008);
   
   gre->Draw(" pel");
   
   Double_t tgraph__cStar_f1p00__Nom__NS__phjet_mc_fx1009[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__cStar_f1p00__Nom__NS__phjet_mc_fy1009[4] = { 0.7384667, 0.7685667, 0.7650833, 0.7586167 };
   Double_t tgraph__cStar_f1p00__Nom__NS__phjet_mc_fex1009[4] = { 0, 0, 0, 0 };
   Double_t tgraph__cStar_f1p00__Nom__NS__phjet_mc_fey1009[4] = { 0.004625652, 0.004759659, 0.004744182, 0.004715428 };
   gre = new TGraphErrors(4,tgraph__cStar_f1p00__Nom__NS__phjet_mc_fx1009,tgraph__cStar_f1p00__Nom__NS__phjet_mc_fy1009,tgraph__cStar_f1p00__Nom__NS__phjet_mc_fex1009,tgraph__cStar_f1p00__Nom__NS__phjet_mc_fey1009);
   gre->SetName("tgraph__cStar_f1p00__Nom__NS__phjet_mc");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009 = new TH1F("Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009","",100,700,4300);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetMinimum(0.7298925);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetMaximum(0.7772749);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetDirectory(nullptr);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetStats(0);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetLineWidth(2);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetMarkerStyle(20);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->SetMarkerSize(1.2);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__cStar_f1p00__Nom__NS__phjet_mc1009);
   
   gre->Draw(" pel");
   Double_t xAxis4[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__4 = new TH1D("chist_copy__4","",11, xAxis4);
   chist_copy__4->SetMinimum(0);
   chist_copy__4->SetMaximum(1.1);
   chist_copy__4->SetDirectory(nullptr);
   chist_copy__4->SetStats(0);
   chist_copy__4->SetLineColor(0);
   chist_copy__4->SetLineWidth(0);
   chist_copy__4->SetMarkerColor(0);
   chist_copy__4->SetMarkerStyle(20);
   chist_copy__4->SetMarkerSize(0);
   chist_copy__4->GetXaxis()->SetTitle("m_{c*} [GeV]");
   chist_copy__4->GetXaxis()->SetNdivisions(4000510);
   chist_copy__4->GetXaxis()->SetLabelFont(42);
   chist_copy__4->GetXaxis()->SetLabelSize(0.04);
   chist_copy__4->GetXaxis()->SetTitleSize(0.04);
   chist_copy__4->GetXaxis()->SetTickLength(0.02);
   chist_copy__4->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__4->GetXaxis()->SetTitleFont(42);
   chist_copy__4->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__4->GetYaxis()->SetNdivisions(3000510);
   chist_copy__4->GetYaxis()->SetLabelFont(42);
   chist_copy__4->GetYaxis()->SetLabelSize(0.04);
   chist_copy__4->GetYaxis()->SetTitleSize(0.04);
   chist_copy__4->GetYaxis()->SetTickLength(0.02);
   chist_copy__4->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__4->GetYaxis()->SetTitleFont(42);
   chist_copy__4->GetZaxis()->SetLabelFont(42);
   chist_copy__4->GetZaxis()->SetLabelSize(0.05);
   chist_copy__4->GetZaxis()->SetTitleSize(0.05);
   chist_copy__4->GetZaxis()->SetTitleOffset(1);
   chist_copy__4->GetZaxis()->SetTitleFont(42);
   chist_copy__4->Draw("sameaxis");
   up__1->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
