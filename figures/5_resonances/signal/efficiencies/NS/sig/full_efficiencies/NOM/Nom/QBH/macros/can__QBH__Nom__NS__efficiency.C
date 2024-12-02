#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__QBH__Nom__NS__efficiency()
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
   TPad *up__27 = new TPad("up", "up",0,0,1,1);
   up__27->Draw();
   up__27->cd();
   up__27->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__27->SetFillColor(0);
   up__27->SetFillStyle(4000);
   up__27->SetBorderMode(0);
   up__27->SetBorderSize(0);
   up__27->SetTickx(1);
   up__27->SetTicky(1);
   up__27->SetLeftMargin(0.120603);
   up__27->SetRightMargin(0.08040201);
   up__27->SetTopMargin(0.05181347);
   up__27->SetFrameBorderMode(0);
   up__27->SetFrameBorderMode(0);
   Double_t xAxis55[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__55 = new TH1D("chist__55","",11, xAxis55);
   chist__55->SetMinimum(0);
   chist__55->SetMaximum(1.1);
   chist__55->SetDirectory(nullptr);
   chist__55->SetStats(0);
   chist__55->SetLineColor(0);
   chist__55->SetLineWidth(0);
   chist__55->SetMarkerColor(0);
   chist__55->SetMarkerStyle(20);
   chist__55->SetMarkerSize(0);
   chist__55->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist__55->GetXaxis()->SetNdivisions(4000510);
   chist__55->GetXaxis()->SetLabelFont(42);
   chist__55->GetXaxis()->SetLabelSize(0.04);
   chist__55->GetXaxis()->SetTitleSize(0.04);
   chist__55->GetXaxis()->SetTickLength(0.02);
   chist__55->GetXaxis()->SetTitleOffset(1.010466);
   chist__55->GetXaxis()->SetTitleFont(42);
   chist__55->GetYaxis()->SetTitle("Selection efficiency");
   chist__55->GetYaxis()->SetNdivisions(3000510);
   chist__55->GetYaxis()->SetLabelFont(42);
   chist__55->GetYaxis()->SetLabelSize(0.04);
   chist__55->GetYaxis()->SetTitleSize(0.04);
   chist__55->GetYaxis()->SetTickLength(0.02);
   chist__55->GetYaxis()->SetTitleOffset(1.454774);
   chist__55->GetYaxis()->SetTitleFont(42);
   chist__55->GetZaxis()->SetLabelFont(42);
   chist__55->GetZaxis()->SetLabelSize(0.05);
   chist__55->GetZaxis()->SetTitleSize(0.05);
   chist__55->GetZaxis()->SetTitleOffset(1);
   chist__55->GetZaxis()->SetTitleFont(42);
   chist__55->Draw("pe");
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
   
   TLegend *leg = new TLegend(0.4861809,0.842,0.879397,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__QBH_n6__Nom__NS__phjet_mQBH","QBH n=n6","PEL");

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
   entry=leg->AddEntry("tgraph__QBH_n1__Nom__NS__phjet_mQBH","QBH n=n1","PEL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ee854a");
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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow QBH #rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__QBH_n6__Nom__NS__phjet_mQBH_fx1118[7] = { 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
   Double_t tgraph__QBH_n6__Nom__NS__phjet_mQBH_fy1118[7] = { 0.7374222, 0.7337778, 0.7236111, 0.7178, 0.7112, 0.7045444, 0.7025445 };
   Double_t tgraph__QBH_n6__Nom__NS__phjet_mQBH_fex1118[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__NS__phjet_mQBH_fey1118[7] = { 0.003773024, 0.003759739, 0.00372264, 0.003701406, 0.003677266, 0.003652894, 0.003645565 };
   TGraphErrors *gre = new TGraphErrors(7,tgraph__QBH_n6__Nom__NS__phjet_mQBH_fx1118,tgraph__QBH_n6__Nom__NS__phjet_mQBH_fy1118,tgraph__QBH_n6__Nom__NS__phjet_mQBH_fex1118,tgraph__QBH_n6__Nom__NS__phjet_mQBH_fey1118);
   gre->SetName("tgraph__QBH_n6__Nom__NS__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118 = new TH1F("Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118","",100,2400,9600);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetMinimum(0.6946692);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetMaximum(0.7454249);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetStats(0);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetLineWidth(2);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetMarkerStyle(20);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n6__Nom__NS__phjet_mQBH1118);
   
   gre->Draw(" pel");
   
   Double_t tgraph__QBH_n1__Nom__NS__phjet_mQBH_fx1119[7] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000 };
   Double_t tgraph__QBH_n1__Nom__NS__phjet_mQBH_fy1119[7] = { 0.7176778, 0.7391111, 0.7382333, 0.7344222, 0.7237, 0.7190444, 0.7094889 };
   Double_t tgraph__QBH_n1__Nom__NS__phjet_mQBH_fex1119[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__NS__phjet_mQBH_fey1119[7] = { 0.003700959, 0.003779177, 0.003775979, 0.003762089, 0.003722964, 0.003705955, 0.003671003 };
   gre = new TGraphErrors(7,tgraph__QBH_n1__Nom__NS__phjet_mQBH_fx1119,tgraph__QBH_n1__Nom__NS__phjet_mQBH_fy1119,tgraph__QBH_n1__Nom__NS__phjet_mQBH_fex1119,tgraph__QBH_n1__Nom__NS__phjet_mQBH_fey1119);
   gre->SetName("tgraph__QBH_n1__Nom__NS__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119 = new TH1F("Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119","",100,400,7600);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetMinimum(0.7021106);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetMaximum(0.7465975);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetStats(0);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetLineWidth(2);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetMarkerStyle(20);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n1__Nom__NS__phjet_mQBH1119);
   
   gre->Draw(" pel");
   Double_t xAxis56[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__56 = new TH1D("chist_copy__56","",11, xAxis56);
   chist_copy__56->SetMinimum(0);
   chist_copy__56->SetMaximum(1.1);
   chist_copy__56->SetDirectory(nullptr);
   chist_copy__56->SetStats(0);
   chist_copy__56->SetLineColor(0);
   chist_copy__56->SetLineWidth(0);
   chist_copy__56->SetMarkerColor(0);
   chist_copy__56->SetMarkerStyle(20);
   chist_copy__56->SetMarkerSize(0);
   chist_copy__56->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist_copy__56->GetXaxis()->SetNdivisions(4000510);
   chist_copy__56->GetXaxis()->SetLabelFont(42);
   chist_copy__56->GetXaxis()->SetLabelSize(0.04);
   chist_copy__56->GetXaxis()->SetTitleSize(0.04);
   chist_copy__56->GetXaxis()->SetTickLength(0.02);
   chist_copy__56->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__56->GetXaxis()->SetTitleFont(42);
   chist_copy__56->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__56->GetYaxis()->SetNdivisions(3000510);
   chist_copy__56->GetYaxis()->SetLabelFont(42);
   chist_copy__56->GetYaxis()->SetLabelSize(0.04);
   chist_copy__56->GetYaxis()->SetTitleSize(0.04);
   chist_copy__56->GetYaxis()->SetTickLength(0.02);
   chist_copy__56->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__56->GetYaxis()->SetTitleFont(42);
   chist_copy__56->GetZaxis()->SetLabelFont(42);
   chist_copy__56->GetZaxis()->SetLabelSize(0.05);
   chist_copy__56->GetZaxis()->SetTitleSize(0.05);
   chist_copy__56->GetZaxis()->SetTitleOffset(1);
   chist_copy__56->GetZaxis()->SetTitleFont(42);
   chist_copy__56->Draw("sameaxis");
   up__27->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
