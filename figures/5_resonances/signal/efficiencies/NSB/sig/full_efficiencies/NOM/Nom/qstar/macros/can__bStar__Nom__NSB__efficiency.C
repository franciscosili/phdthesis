#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__bStar__Nom__NSB__efficiency()
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
   TPad *up__5 = new TPad("up", "up",0,0,1,1);
   up__5->Draw();
   up__5->cd();
   up__5->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__5->SetFillColor(0);
   up__5->SetFillStyle(4000);
   up__5->SetBorderMode(0);
   up__5->SetBorderSize(0);
   up__5->SetTickx(1);
   up__5->SetTicky(1);
   up__5->SetLeftMargin(0.120603);
   up__5->SetRightMargin(0.08040201);
   up__5->SetTopMargin(0.05181347);
   up__5->SetFrameBorderMode(0);
   up__5->SetFrameBorderMode(0);
   Double_t xAxis11[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__11 = new TH1D("chist__11","",11, xAxis11);
   chist__11->SetMinimum(0);
   chist__11->SetMaximum(1.1);
   chist__11->SetDirectory(nullptr);
   chist__11->SetStats(0);
   chist__11->SetLineColor(0);
   chist__11->SetLineWidth(0);
   chist__11->SetMarkerColor(0);
   chist__11->SetMarkerStyle(20);
   chist__11->SetMarkerSize(0);
   chist__11->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist__11->GetXaxis()->SetNdivisions(4000510);
   chist__11->GetXaxis()->SetLabelFont(42);
   chist__11->GetXaxis()->SetLabelSize(0.04);
   chist__11->GetXaxis()->SetTitleSize(0.04);
   chist__11->GetXaxis()->SetTickLength(0.02);
   chist__11->GetXaxis()->SetTitleOffset(1.010466);
   chist__11->GetXaxis()->SetTitleFont(42);
   chist__11->GetYaxis()->SetTitle("Selection efficiency");
   chist__11->GetYaxis()->SetNdivisions(3000510);
   chist__11->GetYaxis()->SetLabelFont(42);
   chist__11->GetYaxis()->SetLabelSize(0.04);
   chist__11->GetYaxis()->SetTitleSize(0.04);
   chist__11->GetYaxis()->SetTickLength(0.02);
   chist__11->GetYaxis()->SetTitleOffset(1.454774);
   chist__11->GetYaxis()->SetTitleFont(42);
   chist__11->GetZaxis()->SetLabelFont(42);
   chist__11->GetZaxis()->SetLabelSize(0.05);
   chist__11->GetZaxis()->SetTitleSize(0.05);
   chist__11->GetZaxis()->SetTitleOffset(1);
   chist__11->GetZaxis()->SetTitleFont(42);
   chist__11->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__bStar_f0p01__Nom__NSB__phjet_mb","b*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__bStar_f0p10__Nom__NSB__phjet_mb","b*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f0p50__Nom__NSB__phjet_mb","b*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar_f1p00__Nom__NSB__phjet_mb","b*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow b*#rightarrow b#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fx1023[1] = { 1000 };
   Double_t tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fy1023[1] = { 0.4842333 };
   Double_t tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fex1023[1] = { 0 };
   Double_t tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fey1023[1] = { 0.00346101 };
   TGraphErrors *gre = new TGraphErrors(1,tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fx1023,tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fy1023,tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fex1023,tgraph__bStar_f0p01__Nom__NSB__phjet_mb_fey1023);
   gre->SetName("tgraph__bStar_f0p01__Nom__NSB__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023 = new TH1F("Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023","",100,999.9,1001.1);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetMinimum(0.4800801);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetMaximum(0.4883865);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetStats(0);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetLineWidth(2);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p01__Nom__NSB__phjet_mb1023);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fx1024[2] = { 1000, 2000 };
   Double_t tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fy1024[2] = { 0.48465, 0.4640333 };
   Double_t tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fex1024[2] = { 0, 0 };
   Double_t tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fey1024[2] = { 0.003462984, 0.003364918 };
   gre = new TGraphErrors(2,tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fx1024,tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fy1024,tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fex1024,tgraph__bStar_f0p10__Nom__NSB__phjet_mb_fey1024);
   gre->SetName("tgraph__bStar_f0p10__Nom__NSB__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024 = new TH1F("Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024","",100,900,2100);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetMinimum(0.457924);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetMaximum(0.4908574);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetStats(0);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetLineWidth(2);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p10__Nom__NSB__phjet_mb1024);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fx1025[3] = { 1000, 2000, 3000 };
   Double_t tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fy1025[3] = { 0.4861333, 0.4627333, 0.3909667 };
   Double_t tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fex1025[3] = { 0, 0, 0 };
   Double_t tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fey1025[3] = { 0.003470012, 0.003358709, 0.003010597 };
   gre = new TGraphErrors(3,tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fx1025,tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fy1025,tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fex1025,tgraph__bStar_f0p50__Nom__NSB__phjet_mb_fey1025);
   gre->SetName("tgraph__bStar_f0p50__Nom__NSB__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025 = new TH1F("Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025","",100,800,3200);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetMinimum(0.3777913);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetMaximum(0.4997681);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetDirectory(nullptr);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetStats(0);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetLineWidth(2);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetMarkerStyle(20);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f0p50__Nom__NSB__phjet_mb1025);
   
   gre->Draw(" pel");
   
   Double_t tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fx1026[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fy1026[4] = { 0.4826333, 0.4628, 0.3936167, 0.3255667 };
   Double_t tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fex1026[4] = { 0, 0, 0, 0 };
   Double_t tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fey1026[4] = { 0.003453424, 0.003359027, 0.003023659, 0.002681916 };
   gre = new TGraphErrors(4,tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fx1026,tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fy1026,tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fex1026,tgraph__bStar_f1p00__Nom__NSB__phjet_mb_fey1026);
   gre->SetName("tgraph__bStar_f1p00__Nom__NSB__phjet_mb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026 = new TH1F("Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026","",100,700,4300);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetMinimum(0.3065646);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetMaximum(0.5024069);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetDirectory(nullptr);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetStats(0);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetLineWidth(2);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetMarkerStyle(20);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->SetMarkerSize(1.2);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__bStar_f1p00__Nom__NSB__phjet_mb1026);
   
   gre->Draw(" pel");
   Double_t xAxis12[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__12 = new TH1D("chist_copy__12","",11, xAxis12);
   chist_copy__12->SetMinimum(0);
   chist_copy__12->SetMaximum(1.1);
   chist_copy__12->SetDirectory(nullptr);
   chist_copy__12->SetStats(0);
   chist_copy__12->SetLineColor(0);
   chist_copy__12->SetLineWidth(0);
   chist_copy__12->SetMarkerColor(0);
   chist_copy__12->SetMarkerStyle(20);
   chist_copy__12->SetMarkerSize(0);
   chist_copy__12->GetXaxis()->SetTitle("m_{b*} [GeV]");
   chist_copy__12->GetXaxis()->SetNdivisions(4000510);
   chist_copy__12->GetXaxis()->SetLabelFont(42);
   chist_copy__12->GetXaxis()->SetLabelSize(0.04);
   chist_copy__12->GetXaxis()->SetTitleSize(0.04);
   chist_copy__12->GetXaxis()->SetTickLength(0.02);
   chist_copy__12->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__12->GetXaxis()->SetTitleFont(42);
   chist_copy__12->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__12->GetYaxis()->SetNdivisions(3000510);
   chist_copy__12->GetYaxis()->SetLabelFont(42);
   chist_copy__12->GetYaxis()->SetLabelSize(0.04);
   chist_copy__12->GetYaxis()->SetTitleSize(0.04);
   chist_copy__12->GetYaxis()->SetTickLength(0.02);
   chist_copy__12->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__12->GetYaxis()->SetTitleFont(42);
   chist_copy__12->GetZaxis()->SetLabelFont(42);
   chist_copy__12->GetZaxis()->SetLabelSize(0.05);
   chist_copy__12->GetZaxis()->SetTitleSize(0.05);
   chist_copy__12->GetZaxis()->SetTitleOffset(1);
   chist_copy__12->GetZaxis()->SetTitleFont(42);
   chist_copy__12->Draw("sameaxis");
   up__5->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
