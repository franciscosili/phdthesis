#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qStar__Nom__NSB__efficiency()
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
   TPad *up__3 = new TPad("up", "up",0,0,1,1);
   up__3->Draw();
   up__3->cd();
   up__3->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__3->SetFillColor(0);
   up__3->SetFillStyle(4000);
   up__3->SetBorderMode(0);
   up__3->SetBorderSize(0);
   up__3->SetTickx(1);
   up__3->SetTicky(1);
   up__3->SetLeftMargin(0.120603);
   up__3->SetRightMargin(0.08040201);
   up__3->SetTopMargin(0.05181347);
   up__3->SetFrameBorderMode(0);
   up__3->SetFrameBorderMode(0);
   Double_t xAxis7[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__7 = new TH1D("chist__7","",11, xAxis7);
   chist__7->SetMinimum(0);
   chist__7->SetMaximum(1.1);
   chist__7->SetDirectory(nullptr);
   chist__7->SetStats(0);
   chist__7->SetLineColor(0);
   chist__7->SetLineWidth(0);
   chist__7->SetMarkerColor(0);
   chist__7->SetMarkerStyle(20);
   chist__7->SetMarkerSize(0);
   chist__7->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist__7->GetXaxis()->SetNdivisions(4000510);
   chist__7->GetXaxis()->SetLabelFont(42);
   chist__7->GetXaxis()->SetLabelSize(0.04);
   chist__7->GetXaxis()->SetTitleSize(0.04);
   chist__7->GetXaxis()->SetTickLength(0.02);
   chist__7->GetXaxis()->SetTitleOffset(1.010466);
   chist__7->GetXaxis()->SetTitleFont(42);
   chist__7->GetYaxis()->SetTitle("Selection efficiency");
   chist__7->GetYaxis()->SetNdivisions(3000510);
   chist__7->GetYaxis()->SetLabelFont(42);
   chist__7->GetYaxis()->SetLabelSize(0.04);
   chist__7->GetYaxis()->SetTitleSize(0.04);
   chist__7->GetYaxis()->SetTickLength(0.02);
   chist__7->GetYaxis()->SetTitleOffset(1.454774);
   chist__7->GetYaxis()->SetTitleFont(42);
   chist__7->GetZaxis()->SetLabelFont(42);
   chist__7->GetZaxis()->SetLabelSize(0.05);
   chist__7->GetZaxis()->SetTitleSize(0.05);
   chist__7->GetZaxis()->SetTitleOffset(1);
   chist__7->GetZaxis()->SetTitleFont(42);
   chist__7->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__qStar_f0p01__Nom__NSB__phjet_mq","q*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__qStar_f0p10__Nom__NSB__phjet_mq","q*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p50__Nom__NSB__phjet_mq","q*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p75__Nom__NSB__phjet_mq","q*, f=0.75","PEL");

   ci = TColor::GetColor("#d65f5f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#d65f5f");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f1p00__Nom__NSB__phjet_mq","q*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow q*#rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fx1014[2] = { 1000, 2000 };
   Double_t tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fy1014[2] = { 0.01083333, 0.01363333 };
   Double_t tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fex1014[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fey1014[2] = { 0.0004272137, 0.0004799167 };
   TGraphErrors *gre = new TGraphErrors(2,tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fx1014,tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fy1014,tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fex1014,tgraph__qStar_f0p01__Nom__NSB__phjet_mq_fey1014);
   gre->SetName("tgraph__qStar_f0p01__Nom__NSB__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014 = new TH1F("Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014","",100,900,2100);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetMinimum(0.01003541);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetMaximum(0.01448396);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetStats(0);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetLineWidth(2);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p01__Nom__NSB__phjet_mq1014);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fx1015[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fy1015[4] = { 0.009816667, 0.01413333, 0.01648333, 0.01808333 };
   Double_t tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fex1015[4] = { 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fey1015[4] = { 0.0004064692, 0.0004887584, 0.0005284416, 0.0005539305 };
   gre = new TGraphErrors(4,tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fx1015,tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fy1015,tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fex1015,tgraph__qStar_f0p10__Nom__NSB__phjet_mq_fey1015);
   gre->SetName("tgraph__qStar_f0p10__Nom__NSB__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015 = new TH1F("Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015","",100,700,4300);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetMinimum(0.008487491);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetMaximum(0.01955997);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetStats(0);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetLineWidth(2);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p10__Nom__NSB__phjet_mq1015);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fx1016[6] = { 1000, 2000, 3000, 4000, 5000, 6000 };
   Double_t tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fy1016[6] = { 0.01051667, 0.01483333, 0.01661667, 0.0181875, 0.0192, 0.01873333 };
   Double_t tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fex1016[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fey1016[6] = { 0.0004208576, 0.0005008886, 0.0005306094, 0.0004811222, 0.0005710902, 0.000563978 };
   gre = new TGraphErrors(6,tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fx1016,tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fy1016,tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fex1016,tgraph__qStar_f0p50__Nom__NSB__phjet_mq_fey1016);
   gre->SetName("tgraph__qStar_f0p50__Nom__NSB__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016 = new TH1F("Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016","",100,500,6500);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetMinimum(0.009128281);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetMaximum(0.02073862);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetStats(0);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetLineWidth(2);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p50__Nom__NSB__phjet_mq1016);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fx1017[2] = { 6000, 7000 };
   Double_t tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fy1017[2] = { 0.01931667, 0.01951667 };
   Double_t tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fex1017[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fey1017[2] = { 0.0005728554, 0.0005758699 };
   gre = new TGraphErrors(2,tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fx1017,tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fy1017,tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fex1017,tgraph__qStar_f0p75__Nom__NSB__phjet_mq_fey1017);
   gre->SetName("tgraph__qStar_f0p75__Nom__NSB__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017 = new TH1F("Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017","",100,5900,7100);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetMinimum(0.01860894);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetMaximum(0.02022741);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetStats(0);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetLineWidth(2);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p75__Nom__NSB__phjet_mq1017);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fx1018[9] = { 1000, 2000, 3000, 4000, 5000, 5500, 6000, 6500, 7000 };
   Double_t tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fy1018[9] = { 0.00995, 0.01413333, 0.01681667, 0.01726667, 0.0192, 0.0193, 0.01998333, 0.02028333, 0.01953333 };
   Double_t tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fex1018[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fey1018[9] = { 0.0004092473, 0.0004887584, 0.0005338456, 0.0005410608, 0.0005710902, 0.0004958892, 0.0005828474, 0.0005872925, 0.0005761204 };
   gre = new TGraphErrors(9,tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fx1018,tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fy1018,tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fex1018,tgraph__qStar_f1p00__Nom__NSB__phjet_mq_fey1018);
   gre->SetName("tgraph__qStar_f1p00__Nom__NSB__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#956cb4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#956cb4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018 = new TH1F("Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018","",100,400,7600);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetMinimum(0.008407765);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetMaximum(0.02200361);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetDirectory(nullptr);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetStats(0);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetLineWidth(2);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetMarkerStyle(20);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f1p00__Nom__NSB__phjet_mq1018);
   
   gre->Draw(" pel");
   Double_t xAxis8[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__8 = new TH1D("chist_copy__8","",11, xAxis8);
   chist_copy__8->SetMinimum(0);
   chist_copy__8->SetMaximum(1.1);
   chist_copy__8->SetDirectory(nullptr);
   chist_copy__8->SetStats(0);
   chist_copy__8->SetLineColor(0);
   chist_copy__8->SetLineWidth(0);
   chist_copy__8->SetMarkerColor(0);
   chist_copy__8->SetMarkerStyle(20);
   chist_copy__8->SetMarkerSize(0);
   chist_copy__8->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist_copy__8->GetXaxis()->SetNdivisions(4000510);
   chist_copy__8->GetXaxis()->SetLabelFont(42);
   chist_copy__8->GetXaxis()->SetLabelSize(0.04);
   chist_copy__8->GetXaxis()->SetTitleSize(0.04);
   chist_copy__8->GetXaxis()->SetTickLength(0.02);
   chist_copy__8->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__8->GetXaxis()->SetTitleFont(42);
   chist_copy__8->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__8->GetYaxis()->SetNdivisions(3000510);
   chist_copy__8->GetYaxis()->SetLabelFont(42);
   chist_copy__8->GetYaxis()->SetLabelSize(0.04);
   chist_copy__8->GetYaxis()->SetTitleSize(0.04);
   chist_copy__8->GetYaxis()->SetTickLength(0.02);
   chist_copy__8->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__8->GetYaxis()->SetTitleFont(42);
   chist_copy__8->GetZaxis()->SetLabelFont(42);
   chist_copy__8->GetZaxis()->SetLabelSize(0.05);
   chist_copy__8->GetZaxis()->SetTitleSize(0.05);
   chist_copy__8->GetZaxis()->SetTitleOffset(1);
   chist_copy__8->GetZaxis()->SetTitleFont(42);
   chist_copy__8->Draw("sameaxis");
   up__3->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
