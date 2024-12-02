#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qStar__Nom__NSC50__efficiency()
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
   TPad *up__15 = new TPad("up", "up",0,0,1,1);
   up__15->Draw();
   up__15->cd();
   up__15->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__15->SetFillColor(0);
   up__15->SetFillStyle(4000);
   up__15->SetBorderMode(0);
   up__15->SetBorderSize(0);
   up__15->SetTickx(1);
   up__15->SetTicky(1);
   up__15->SetLeftMargin(0.120603);
   up__15->SetRightMargin(0.08040201);
   up__15->SetTopMargin(0.05181347);
   up__15->SetFrameBorderMode(0);
   up__15->SetFrameBorderMode(0);
   Double_t xAxis31[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__31 = new TH1D("chist__31","",11, xAxis31);
   chist__31->SetMinimum(0);
   chist__31->SetMaximum(1.1);
   chist__31->SetDirectory(nullptr);
   chist__31->SetStats(0);
   chist__31->SetLineColor(0);
   chist__31->SetLineWidth(0);
   chist__31->SetMarkerColor(0);
   chist__31->SetMarkerStyle(20);
   chist__31->SetMarkerSize(0);
   chist__31->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist__31->GetXaxis()->SetNdivisions(4000510);
   chist__31->GetXaxis()->SetLabelFont(42);
   chist__31->GetXaxis()->SetLabelSize(0.04);
   chist__31->GetXaxis()->SetTitleSize(0.04);
   chist__31->GetXaxis()->SetTickLength(0.02);
   chist__31->GetXaxis()->SetTitleOffset(1.010466);
   chist__31->GetXaxis()->SetTitleFont(42);
   chist__31->GetYaxis()->SetTitle("Selection efficiency");
   chist__31->GetYaxis()->SetNdivisions(3000510);
   chist__31->GetYaxis()->SetLabelFont(42);
   chist__31->GetYaxis()->SetLabelSize(0.04);
   chist__31->GetYaxis()->SetTitleSize(0.04);
   chist__31->GetYaxis()->SetTickLength(0.02);
   chist__31->GetYaxis()->SetTitleOffset(1.454774);
   chist__31->GetYaxis()->SetTitleFont(42);
   chist__31->GetZaxis()->SetLabelFont(42);
   chist__31->GetZaxis()->SetLabelSize(0.05);
   chist__31->GetZaxis()->SetTitleSize(0.05);
   chist__31->GetZaxis()->SetTitleOffset(1);
   chist__31->GetZaxis()->SetTitleFont(42);
   chist__31->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__qStar_f0p01__Nom__NSC50__phjet_mq","q*, f=0.01","PEL");

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
   entry=leg->AddEntry("tgraph__qStar_f0p10__Nom__NSC50__phjet_mq","q*, f=0.10","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p50__Nom__NSC50__phjet_mq","q*, f=0.50","PEL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f0p75__Nom__NSC50__phjet_mq","q*, f=0.75","PEL");

   ci = TColor::GetColor("#d65f5f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#d65f5f");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__qStar_f1p00__Nom__NSC50__phjet_mq","q*, f=1.00","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow q*#rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fx1066[2] = { 1000, 2000 };
   Double_t tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fy1066[2] = { 0.07401667, 0.09375 };
   Double_t tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fex1066[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fey1066[2] = { 0.001151051, 0.001307281 };
   TGraphErrors *gre = new TGraphErrors(2,tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fx1066,tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fy1066,tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fex1066,tgraph__qStar_f0p01__Nom__NSC50__phjet_mq_fey1066);
   gre->SetName("tgraph__qStar_f0p01__Nom__NSC50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066 = new TH1F("Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066","",100,900,2100);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetMinimum(0.07064645);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetMaximum(0.09727645);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetStats(0);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetLineWidth(2);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p01__Nom__NSC50__phjet_mq1066);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fx1067[4] = { 1000, 2000, 3000, 4000 };
   Double_t tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fy1067[4] = { 0.07625, 0.09558333, 0.08773334, 0.0775 };
   Double_t tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fex1067[4] = { 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fey1067[4] = { 0.001169502, 0.001321107, 0.001261153, 0.001179733 };
   gre = new TGraphErrors(4,tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fx1067,tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fy1067,tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fex1067,tgraph__qStar_f0p10__Nom__NSC50__phjet_mq_fey1067);
   gre->SetName("tgraph__qStar_f0p10__Nom__NSC50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067 = new TH1F("Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067","",100,700,4300);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetMinimum(0.07289811);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetMaximum(0.09908684);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetStats(0);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetLineWidth(2);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p10__Nom__NSC50__phjet_mq1067);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fx1068[6] = { 1000, 2000, 3000, 4000, 5000, 6000 };
   Double_t tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fy1068[6] = { 0.07633334, 0.0955, 0.0878, 0.0798, 0.0691, 0.06201667 };
   Double_t tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fex1068[6] = { 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fey1068[6] = { 0.001170186, 0.001320481, 0.001261671, 0.001037835, 0.001109616, 0.001047718 };
   gre = new TGraphErrors(6,tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fx1068,tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fy1068,tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fex1068,tgraph__qStar_f0p50__Nom__NSC50__phjet_mq_fey1068);
   gre->SetName("tgraph__qStar_f0p50__Nom__NSC50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068 = new TH1F("Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068","",100,500,6500);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetMinimum(0.0573838);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetMaximum(0.1004056);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetStats(0);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetLineWidth(2);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p50__Nom__NSC50__phjet_mq1068);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fx1069[2] = { 6000, 7000 };
   Double_t tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fy1069[2] = { 0.06301667, 0.06321666 };
   Double_t tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fex1069[2] = { 0, 0 };
   Double_t tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fey1069[2] = { 0.001056628, 0.001058403 };
   gre = new TGraphErrors(2,tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fx1069,tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fy1069,tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fex1069,tgraph__qStar_f0p75__Nom__NSC50__phjet_mq_fey1069);
   gre->SetName("tgraph__qStar_f0p75__Nom__NSC50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#d65f5f");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069 = new TH1F("Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069","",100,5900,7100);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetMinimum(0.06172854);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetMaximum(0.06450657);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetDirectory(nullptr);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetStats(0);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetLineWidth(2);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetMarkerStyle(20);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f0p75__Nom__NSC50__phjet_mq1069);
   
   gre->Draw(" pel");
   
   Double_t tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fx1070[9] = { 1000, 2000, 3000, 4000, 5000, 5500, 6000, 6500, 7000 };
   Double_t tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fy1070[9] = { 0.0765, 0.09333333, 0.08736667, 0.0798, 0.07073333, 0.0713, 0.06553333, 0.06546666, 0.0659 };
   Double_t tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fex1070[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fey1070[9] = { 0.001171554, 0.001304124, 0.001258303, 0.001198388, 0.00112351, 0.0009771367, 0.001078795, 0.001078213, 0.001081995 };
   gre = new TGraphErrors(9,tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fx1070,tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fy1070,tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fex1070,tgraph__qStar_f1p00__Nom__NSC50__phjet_mq_fey1070);
   gre->SetName("tgraph__qStar_f1p00__Nom__NSC50__phjet_mq");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#956cb4");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#956cb4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070 = new TH1F("Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070","",100,400,7600);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetMinimum(0.06136355);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetMaximum(0.09766236);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetDirectory(nullptr);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetStats(0);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetLineWidth(2);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetMarkerStyle(20);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->SetMarkerSize(1.2);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__qStar_f1p00__Nom__NSC50__phjet_mq1070);
   
   gre->Draw(" pel");
   Double_t xAxis32[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__32 = new TH1D("chist_copy__32","",11, xAxis32);
   chist_copy__32->SetMinimum(0);
   chist_copy__32->SetMaximum(1.1);
   chist_copy__32->SetDirectory(nullptr);
   chist_copy__32->SetStats(0);
   chist_copy__32->SetLineColor(0);
   chist_copy__32->SetLineWidth(0);
   chist_copy__32->SetMarkerColor(0);
   chist_copy__32->SetMarkerStyle(20);
   chist_copy__32->SetMarkerSize(0);
   chist_copy__32->GetXaxis()->SetTitle("m_{q*} [GeV]");
   chist_copy__32->GetXaxis()->SetNdivisions(4000510);
   chist_copy__32->GetXaxis()->SetLabelFont(42);
   chist_copy__32->GetXaxis()->SetLabelSize(0.04);
   chist_copy__32->GetXaxis()->SetTitleSize(0.04);
   chist_copy__32->GetXaxis()->SetTickLength(0.02);
   chist_copy__32->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__32->GetXaxis()->SetTitleFont(42);
   chist_copy__32->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__32->GetYaxis()->SetNdivisions(3000510);
   chist_copy__32->GetYaxis()->SetLabelFont(42);
   chist_copy__32->GetYaxis()->SetLabelSize(0.04);
   chist_copy__32->GetYaxis()->SetTitleSize(0.04);
   chist_copy__32->GetYaxis()->SetTickLength(0.02);
   chist_copy__32->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__32->GetYaxis()->SetTitleFont(42);
   chist_copy__32->GetZaxis()->SetLabelFont(42);
   chist_copy__32->GetZaxis()->SetLabelSize(0.05);
   chist_copy__32->GetZaxis()->SetTitleSize(0.05);
   chist_copy__32->GetZaxis()->SetTitleOffset(1);
   chist_copy__32->GetZaxis()->SetTitleFont(42);
   chist_copy__32->Draw("sameaxis");
   up__15->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
