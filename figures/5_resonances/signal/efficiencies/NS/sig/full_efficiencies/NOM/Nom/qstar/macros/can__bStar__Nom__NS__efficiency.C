#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__bStar__Nom__NS__efficiency()
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
   TPad *up__2 = new TPad("up", "up",0,0,1,1);
   up__2->Draw();
   up__2->cd();
   up__2->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__2->SetFillColor(0);
   up__2->SetFillStyle(4000);
   up__2->SetBorderMode(0);
   up__2->SetBorderSize(0);
   up__2->SetTickx(1);
   up__2->SetTicky(1);
   up__2->SetLeftMargin(0.120603);
   up__2->SetRightMargin(0.08040201);
   up__2->SetTopMargin(0.05181347);
   up__2->SetFrameBorderMode(0);
   up__2->SetFrameBorderMode(0);
   Double_t xAxis5[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__5 = new TH1D("chist__5","",11, xAxis5);
   chist__5->SetMinimum(0);
   chist__5->SetMaximum(1.1);
   chist__5->SetDirectory(nullptr);
   chist__5->SetStats(0);
   chist__5->SetLineColor(0);
   chist__5->SetLineWidth(0);
   chist__5->SetMarkerColor(0);
   chist__5->SetMarkerStyle(20);
   chist__5->SetMarkerSize(0);
   chist__5->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist__5->GetXaxis()->SetNdivisions(4000510);
   chist__5->GetXaxis()->SetLabelFont(42);
   chist__5->GetXaxis()->SetLabelSize(0.04);
   chist__5->GetXaxis()->SetTitleSize(0.04);
   chist__5->GetXaxis()->SetTickLength(0.02);
   chist__5->GetXaxis()->SetTitleOffset(1.010466);
   chist__5->GetXaxis()->SetTitleFont(42);
   chist__5->GetYaxis()->SetTitle("Selection efficiency");
   chist__5->GetYaxis()->SetNdivisions(3000510);
   chist__5->GetYaxis()->SetLabelFont(42);
   chist__5->GetYaxis()->SetLabelSize(0.04);
   chist__5->GetYaxis()->SetTitleSize(0.04);
   chist__5->GetYaxis()->SetTickLength(0.02);
   chist__5->GetYaxis()->SetTitleOffset(1.454774);
   chist__5->GetYaxis()->SetTitleFont(42);
   chist__5->GetZaxis()->SetLabelFont(42);
   chist__5->GetZaxis()->SetLabelSize(0.05);
   chist__5->GetZaxis()->SetTitleSize(0.05);
   chist__5->GetZaxis()->SetTitleOffset(1);
   chist__5->GetZaxis()->SetTitleFont(42);
   chist__5->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__bStar_f0p01__Nom__NS__phjet_mb","b*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__bStar_f0p10__Nom__NS__phjet_mb","b*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f0p50__Nom__NS__phjet_mb","b*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f1p00__Nom__NS__phjet_mb","b*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow b*#rightarrow b#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__bStar_f0p01__Nom__NS__phjet_mb_fx1010[1] = { 1000 };
   Double_t tgraph__bStar_f0p01__Nom__NS__phjet_mb_fy1010[1] = { 0.7353167 };
   Double_t tgraph__bStar_f0p01__Nom__NS__phjet_mb_fex1010[1] = { 0 };
   Double_t tgraph__bStar_f0p01__Nom__NS__phjet_mb_fey1010[1] = { 0.004611593 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__bStar_f0p01__Nom__NS__phjet_mb_fx1010,tgraph__bStar_f0p01__Nom__NS__phjet_mb_fy1010,tgraph__bStar_f0p01__Nom__NS__phjet_mb_fex1010,tgraph__bStar_f0p01__Nom__NS__phjet_mb_fey1010);
   gre->SetName("tgraph__bStar_f0p01__Nom__NS__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010 = new TH1F("Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010","",100,999.9,1001.1);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetMinimum(0.7297828);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetMaximum(0.7408506);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetStats(0);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetLineWidth(2);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p01__Nom__NS__phjet_mb1010);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p10__Nom__NS__phjet_mb_fx1011[2] = { 1000, 2000 };
   Double_t tgraph__bStar_f0p10__Nom__NS__phjet_mb_fy1011[2] = { 0.7331333, 0.7686 };
   Double_t tgraph__bStar_f0p10__Nom__NS__phjet_mb_fex1011[2] = { 0, 0 };
   Double_t tgraph__bStar_f0p10__Nom__NS__phjet_mb_fey1011[2] = { 0.004601844, 0.004759807 };
   gre = new TGraphErrors(2,tgraph__bStar_f0p10__Nom__NS__phjet_mb_fx1011,tgraph__bStar_f0p10__Nom__NS__phjet_mb_fy1011,tgraph__bStar_f0p10__Nom__NS__phjet_mb_fex1011,tgraph__bStar_f0p10__Nom__NS__phjet_mb_fey1011);
   gre->SetName("tgraph__bStar_f0p10__Nom__NS__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011 = new TH1F("Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011","",100,900,2100);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetMinimum(0.7240486);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetMaximum(0.7778426);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetStats(0);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetLineWidth(2);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p10__Nom__NS__phjet_mb1011);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p50__Nom__NS__phjet_mb_fx1012[3] = { 1000, 2000, 3000 };
   Double_t tgraph__bStar_f0p50__Nom__NS__phjet_mb_fy1012[3] = { 0.7368667, 0.7620667, 0.7623833 };
   Double_t tgraph__bStar_f0p50__Nom__NS__phjet_mb_fex1012[3] = { 0, 0, 0 };
   Double_t tgraph__bStar_f0p50__Nom__NS__phjet_mb_fey1012[3] = { 0.004618512, 0.004730772, 0.00473218 };
   gre = new TGraphErrors(3,tgraph__bStar_f0p50__Nom__NS__phjet_mb_fx1012,tgraph__bStar_f0p50__Nom__NS__phjet_mb_fy1012,tgraph__bStar_f0p50__Nom__NS__phjet_mb_fex1012,tgraph__bStar_f0p50__Nom__NS__phjet_mb_fey1012);
   gre->SetName("tgraph__bStar_f0p50__Nom__NS__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012 = new TH1F("Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012","",100,800,3200);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetMinimum(0.7287614);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetMaximum(0.7706023);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetStats(0);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetLineWidth(2);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p50__Nom__NS__phjet_mb1012);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f1p00__Nom__NS__phjet_mb_fx1013[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__bStar_f1p00__Nom__NS__phjet_mb_fy1013[4] = { 0.7324833, 0.7627167, 0.7623, 0.7532667 };
   Double_t tgraph__bStar_f1p00__Nom__NS__phjet_mb_fex1013[4] = { 0, 0, 0, 0 };
   Double_t tgraph__bStar_f1p00__Nom__NS__phjet_mb_fey1013[4] = { 0.00459894, 0.004733662, 0.00473181, 0.004691619 };
   gre = new TGraphErrors(4,tgraph__bStar_f1p00__Nom__NS__phjet_mb_fx1013,tgraph__bStar_f1p00__Nom__NS__phjet_mb_fy1013,tgraph__bStar_f1p00__Nom__NS__phjet_mb_fex1013,tgraph__bStar_f1p00__Nom__NS__phjet_mb_fey1013);
   gre->SetName("tgraph__bStar_f1p00__Nom__NS__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013 = new TH1F("Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013","",100,700,4300);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetMinimum(0.7239278);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetMaximum(0.7714069);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetDirectory(nullptr);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetStats(0);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetLineWidth(2);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetMarkerStyle(20);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f1p00__Nom__NS__phjet_mb1013);
   
   gre->Draw(" pel");
   Double_t xAxis6[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__6 = new TH1D("chist_copy__6","",11, xAxis6);
   chist_copy__6->SetMinimum(0);
   chist_copy__6->SetMaximum(1.1);
   chist_copy__6->SetDirectory(nullptr);
   chist_copy__6->SetStats(0);
   chist_copy__6->SetLineColor(0);
   chist_copy__6->SetLineWidth(0);
   chist_copy__6->SetMarkerColor(0);
   chist_copy__6->SetMarkerStyle(20);
   chist_copy__6->SetMarkerSize(0);
   chist_copy__6->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist_copy__6->GetXaxis()->SetNdivisions(4000510);
   chist_copy__6->GetXaxis()->SetLabelFont(42);
   chist_copy__6->GetXaxis()->SetLabelSize(0.04);
   chist_copy__6->GetXaxis()->SetTitleSize(0.04);
   chist_copy__6->GetXaxis()->SetTickLength(0.02);
   chist_copy__6->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__6->GetXaxis()->SetTitleFont(42);
   chist_copy__6->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__6->GetYaxis()->SetNdivisions(3000510);
   chist_copy__6->GetYaxis()->SetLabelFont(42);
   chist_copy__6->GetYaxis()->SetLabelSize(0.04);
   chist_copy__6->GetYaxis()->SetTitleSize(0.04);
   chist_copy__6->GetYaxis()->SetTickLength(0.02);
   chist_copy__6->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__6->GetYaxis()->SetTitleFont(42);
   chist_copy__6->GetZaxis()->SetLabelFont(42);
   chist_copy__6->GetZaxis()->SetLabelSize(0.05);
   chist_copy__6->GetZaxis()->SetTitleSize(0.05);
   chist_copy__6->GetZaxis()->SetTitleOffset(1);
   chist_copy__6->GetZaxis()->SetTitleFont(42);
   chist_copy__6->Draw("sameaxis");
   up__2->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
