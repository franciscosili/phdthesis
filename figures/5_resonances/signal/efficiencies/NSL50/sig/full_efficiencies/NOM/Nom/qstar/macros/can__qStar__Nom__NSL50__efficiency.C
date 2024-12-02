#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qStar__Nom__NSL50__efficiency()
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
   TPad *up__24 = new TPad("up", "up",0,0,1,1);
   up__24->Draw();
   up__24->cd();
   up__24->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__24->SetFillColor(0);
   up__24->SetFillStyle(4000);
   up__24->SetBorderMode(0);
   up__24->SetBorderSize(0);
   up__24->SetTickx(1);
   up__24->SetTicky(1);
   up__24->SetLeftMargin(0.120603);
   up__24->SetRightMargin(0.08040201);
   up__24->SetTopMargin(0.05181347);
   up__24->SetFrameBorderMode(0);
   up__24->SetFrameBorderMode(0);
   Double_t xAxis49[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__49 = new TH1D("chist__49","",11, xAxis49);
   chist__49->SetMinimum(0);
   chist__49->SetMaximum(1.1);
   chist__49->SetDirectory(nullptr);
   chist__49->SetStats(0);
   chist__49->SetLineColor(0);
   chist__49->SetLineWidth(0);
   chist__49->SetMarkerColor(0);
   chist__49->SetMarkerStyle(20);
   chist__49->SetMarkerSize(0);
   chist__49->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist__49->GetXaxis()->SetNdivisions(4000510);
   chist__49->GetXaxis()->SetLabelFont(42);
   chist__49->GetXaxis()->SetLabelSize(0.04);
   chist__49->GetXaxis()->SetTitleSize(0.04);
   chist__49->GetXaxis()->SetTickLength(0.02);
   chist__49->GetXaxis()->SetTitleOffset(1.010466);
   chist__49->GetXaxis()->SetTitleFont(42);
   chist__49->GetYaxis()->SetTitle("Selection efficiency");
   chist__49->GetYaxis()->SetNdivisions(3000510);
   chist__49->GetYaxis()->SetLabelFont(42);
   chist__49->GetYaxis()->SetLabelSize(0.04);
   chist__49->GetYaxis()->SetTitleSize(0.04);
   chist__49->GetYaxis()->SetTickLength(0.02);
   chist__49->GetYaxis()->SetTitleOffset(1.454774);
   chist__49->GetYaxis()->SetTitleFont(42);
   chist__49->GetZaxis()->SetLabelFont(42);
   chist__49->GetZaxis()->SetLabelSize(0.05);
   chist__49->GetZaxis()->SetTitleSize(0.05);
   chist__49->GetZaxis()->SetTitleOffset(1);
   chist__49->GetZaxis()->SetTitleFont(42);
   chist__49->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__qStar_f0p01__Nom__NSL50__phjet_mq","q*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__qStar_f0p10__Nom__NSL50__phjet_mq","q*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p50__Nom__NSL50__phjet_mq","q*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p75__Nom__NSL50__phjet_mq","q*, f=0.75","PEL");

   ci = TColor::GetColor("#d65f5f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#d65f5f");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f1p00__Nom__NSL50__phjet_mq","q*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow q*#rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fx1105[2] = { 1000, 2000 };
   Double_t tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fy1105[2] = { 0.6543834, 0.67265 };
   Double_t tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fex1105[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fey1105[2] = { 0.004247746, 0.004330335 };
   TGraphErrors *gre = new TGraphErrors(2,tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fx1105,tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fy1105,tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fex1105,tgraph__qStar_f0p01__Nom__NSL50__phjet_mq_fey1105);
   gre->SetName("tgraph__qStar_f0p01__Nom__NSL50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105 = new TH1F("Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105","",100,900,2100);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetMinimum(0.6474511);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetMaximum(0.6796648);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetStats(0);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetLineWidth(2);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p01__Nom__NSL50__phjet_mq1105);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fx1106[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fy1106[4] = { 0.6492333, 0.6700333, 0.6730334, 0.6681666 };
   Double_t tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fex1106[4] = { 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fey1106[4] = { 0.004224408, 0.004318522, 0.004332065, 0.004310091 };
   gre = new TGraphErrors(4,tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fx1106,tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fy1106,tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fex1106,tgraph__qStar_f0p10__Nom__NSL50__phjet_mq_fey1106);
   gre->SetName("tgraph__qStar_f0p10__Nom__NSL50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106 = new TH1F("Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106","",100,700,4300);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetMinimum(0.6417733);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetMaximum(0.6806011);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetStats(0);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetLineWidth(2);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p10__Nom__NSL50__phjet_mq1106);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fx1107[6] = { 1000, 2000, 3000, 4000, 5000, 6000 };
   Double_t tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fy1107[6] = { 0.6548, 0.6686834, 0.6746167, 0.6688, 0.6649666, 0.6589667 };
   Double_t tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fex1107[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fey1107[6] = { 0.004249633, 0.004312425, 0.004339209, 0.003735126, 0.004295632, 0.004268496 };
   gre = new TGraphErrors(6,tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fx1107,tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fy1107,tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fex1107,tgraph__qStar_f0p50__Nom__NSL50__phjet_mq_fey1107);
   gre->SetName("tgraph__qStar_f0p50__Nom__NSL50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107 = new TH1F("Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107","",100,500,6500);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetMinimum(0.6477098);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetMaximum(0.6817965);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetStats(0);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetLineWidth(2);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p50__Nom__NSL50__phjet_mq1107);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fx1108[2] = { 6000, 7000 };
   Double_t tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fy1108[2] = { 0.66225, 0.6529 };
   Double_t tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fex1108[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fey1108[2] = { 0.004283349, 0.004241026 };
   gre = new TGraphErrors(2,tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fx1108,tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fy1108,tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fex1108,tgraph__qStar_f0p75__Nom__NSL50__phjet_mq_fey1108);
   gre->SetName("tgraph__qStar_f0p75__Nom__NSL50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108 = new TH1F("Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108","",100,5900,7100);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetMinimum(0.6468715);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetMaximum(0.6683208);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetStats(0);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetLineWidth(2);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p75__Nom__NSL50__phjet_mq1108);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fx1109[9] = { 1000, 2000, 3000, 4000, 5000, 5500, 6000, 6500, 7000 };
   Double_t tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fy1109[9] = { 0.6553167, 0.6719334, 0.6725333, 0.6680167, 0.6634333, 0.656425, 0.6575167, 0.6565334, 0.6549667 };
   Double_t tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fex1109[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fey1109[9] = { 0.004251973, 0.0043271, 0.004329809, 0.004309414, 0.0042887, 0.003686663, 0.004261934, 0.004257482, 0.004250388 };
   gre = new TGraphErrors(9,tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fx1109,tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fy1109,tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fex1109,tgraph__qStar_f1p00__Nom__NSL50__phjet_mq_fey1109);
   gre->SetName("tgraph__qStar_f1p00__Nom__NSL50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#956cb4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#956cb4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109 = new TH1F("Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109","",100,400,7600);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetMinimum(0.6481016);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetMaximum(0.6794778);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetDirectory(nullptr);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetStats(0);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetLineWidth(2);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetMarkerStyle(20);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f1p00__Nom__NSL50__phjet_mq1109);
   
   gre->Draw(" pel");
   Double_t xAxis50[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__50 = new TH1D("chist_copy__50","",11, xAxis50);
   chist_copy__50->SetMinimum(0);
   chist_copy__50->SetMaximum(1.1);
   chist_copy__50->SetDirectory(nullptr);
   chist_copy__50->SetStats(0);
   chist_copy__50->SetLineColor(0);
   chist_copy__50->SetLineWidth(0);
   chist_copy__50->SetMarkerColor(0);
   chist_copy__50->SetMarkerStyle(20);
   chist_copy__50->SetMarkerSize(0);
   chist_copy__50->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist_copy__50->GetXaxis()->SetNdivisions(4000510);
   chist_copy__50->GetXaxis()->SetLabelFont(42);
   chist_copy__50->GetXaxis()->SetLabelSize(0.04);
   chist_copy__50->GetXaxis()->SetTitleSize(0.04);
   chist_copy__50->GetXaxis()->SetTickLength(0.02);
   chist_copy__50->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__50->GetXaxis()->SetTitleFont(42);
   chist_copy__50->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__50->GetYaxis()->SetNdivisions(3000510);
   chist_copy__50->GetYaxis()->SetLabelFont(42);
   chist_copy__50->GetYaxis()->SetLabelSize(0.04);
   chist_copy__50->GetYaxis()->SetTitleSize(0.04);
   chist_copy__50->GetYaxis()->SetTickLength(0.02);
   chist_copy__50->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__50->GetYaxis()->SetTitleFont(42);
   chist_copy__50->GetZaxis()->SetLabelFont(42);
   chist_copy__50->GetZaxis()->SetLabelSize(0.05);
   chist_copy__50->GetZaxis()->SetTitleSize(0.05);
   chist_copy__50->GetZaxis()->SetTitleOffset(1);
   chist_copy__50->GetZaxis()->SetTitleFont(42);
   chist_copy__50->Draw("sameaxis");
   up__24->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
