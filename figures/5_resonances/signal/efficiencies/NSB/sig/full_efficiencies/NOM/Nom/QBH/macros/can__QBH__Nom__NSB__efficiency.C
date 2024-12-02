#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__QBH__Nom__NSB__efficiency()
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
   TPad *up__28 = new TPad("up", "up",0,0,1,1);
   up__28->Draw();
   up__28->cd();
   up__28->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__28->SetFillColor(0);
   up__28->SetFillStyle(4000);
   up__28->SetBorderMode(0);
   up__28->SetBorderSize(0);
   up__28->SetTickx(1);
   up__28->SetTicky(1);
   up__28->SetLeftMargin(0.120603);
   up__28->SetRightMargin(0.08040201);
   up__28->SetTopMargin(0.05181347);
   up__28->SetFrameBorderMode(0);
   up__28->SetFrameBorderMode(0);
   Double_t xAxis57[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__57 = new TH1D("chist__57","",11, xAxis57);
   chist__57->SetMinimum(0);
   chist__57->SetMaximum(1.1);
   chist__57->SetDirectory(nullptr);
   chist__57->SetStats(0);
   chist__57->SetLineColor(0);
   chist__57->SetLineWidth(0);
   chist__57->SetMarkerColor(0);
   chist__57->SetMarkerStyle(20);
   chist__57->SetMarkerSize(0);
   chist__57->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist__57->GetXaxis()->SetNdivisions(4000510);
   chist__57->GetXaxis()->SetLabelFont(42);
   chist__57->GetXaxis()->SetLabelSize(0.04);
   chist__57->GetXaxis()->SetTitleSize(0.04);
   chist__57->GetXaxis()->SetTickLength(0.02);
   chist__57->GetXaxis()->SetTitleOffset(1.010466);
   chist__57->GetXaxis()->SetTitleFont(42);
   chist__57->GetYaxis()->SetTitle("Selection efficiency");
   chist__57->GetYaxis()->SetNdivisions(3000510);
   chist__57->GetYaxis()->SetLabelFont(42);
   chist__57->GetYaxis()->SetLabelSize(0.04);
   chist__57->GetYaxis()->SetTitleSize(0.04);
   chist__57->GetYaxis()->SetTickLength(0.02);
   chist__57->GetYaxis()->SetTitleOffset(1.454774);
   chist__57->GetYaxis()->SetTitleFont(42);
   chist__57->GetZaxis()->SetLabelFont(42);
   chist__57->GetZaxis()->SetLabelSize(0.05);
   chist__57->GetZaxis()->SetTitleSize(0.05);
   chist__57->GetZaxis()->SetTitleOffset(1);
   chist__57->GetZaxis()->SetTitleFont(42);
   chist__57->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__QBH_n6__Nom__NSB__phjet_mQBH","QBH n=n6","PEL");

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
   entry=leg->AddEntry("tgraph__QBH_n1__Nom__NSB__phjet_mQBH","QBH n=n1","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow QBH #rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fx1120[7] = { 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
   Double_t tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fy1120[7] = { 0.1179, 0.1124667, 0.1073667, 0.1015333, 0.09783334, 0.09292223, 0.08953334 };
   Double_t tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fex1120[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fey1120[7] = { 0.001210144, 0.001179055, 0.001149368, 0.001114761, 0.001092422, 0.001062266, 0.001041097 };
   TGraphErrors *gre = new TGraphErrors(7,tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fx1120,tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fy1120,tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fex1120,tgraph__QBH_n6__Nom__NSB__phjet_mQBH_fey1120);
   gre->SetName("tgraph__QBH_n6__Nom__NSB__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120 = new TH1F("Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120","",100,2400,9600);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetMinimum(0.08543045);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetMaximum(0.1221719);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetStats(0);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetLineWidth(2);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetMarkerStyle(20);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n6__Nom__NSB__phjet_mQBH1120);
   
   gre->Draw(" pel");
   
   Double_t tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fx1121[7] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000 };
   Double_t tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fy1121[7] = { 0.1108333, 0.1178222, 0.1173556, 0.1124333, 0.1055889, 0.1017667, 0.09786667 };
   Double_t tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fex1121[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fey1121[7] = { 0.001169603, 0.001209703, 0.001207053, 0.001178863, 0.001138898, 0.00111616, 0.001092625 };
   gre = new TGraphErrors(7,tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fx1121,tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fy1121,tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fex1121,tgraph__QBH_n1__Nom__NSB__phjet_mQBH_fey1121);
   gre->SetName("tgraph__QBH_n1__Nom__NSB__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121 = new TH1F("Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121","",100,400,7600);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetMinimum(0.09454826);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetMaximum(0.1212577);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetStats(0);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetLineWidth(2);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetMarkerStyle(20);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n1__Nom__NSB__phjet_mQBH1121);
   
   gre->Draw(" pel");
   Double_t xAxis58[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__58 = new TH1D("chist_copy__58","",11, xAxis58);
   chist_copy__58->SetMinimum(0);
   chist_copy__58->SetMaximum(1.1);
   chist_copy__58->SetDirectory(nullptr);
   chist_copy__58->SetStats(0);
   chist_copy__58->SetLineColor(0);
   chist_copy__58->SetLineWidth(0);
   chist_copy__58->SetMarkerColor(0);
   chist_copy__58->SetMarkerStyle(20);
   chist_copy__58->SetMarkerSize(0);
   chist_copy__58->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist_copy__58->GetXaxis()->SetNdivisions(4000510);
   chist_copy__58->GetXaxis()->SetLabelFont(42);
   chist_copy__58->GetXaxis()->SetLabelSize(0.04);
   chist_copy__58->GetXaxis()->SetTitleSize(0.04);
   chist_copy__58->GetXaxis()->SetTickLength(0.02);
   chist_copy__58->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__58->GetXaxis()->SetTitleFont(42);
   chist_copy__58->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__58->GetYaxis()->SetNdivisions(3000510);
   chist_copy__58->GetYaxis()->SetLabelFont(42);
   chist_copy__58->GetYaxis()->SetLabelSize(0.04);
   chist_copy__58->GetYaxis()->SetTitleSize(0.04);
   chist_copy__58->GetYaxis()->SetTickLength(0.02);
   chist_copy__58->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__58->GetYaxis()->SetTitleFont(42);
   chist_copy__58->GetZaxis()->SetLabelFont(42);
   chist_copy__58->GetZaxis()->SetLabelSize(0.05);
   chist_copy__58->GetZaxis()->SetTitleSize(0.05);
   chist_copy__58->GetZaxis()->SetTitleOffset(1);
   chist_copy__58->GetZaxis()->SetTitleFont(42);
   chist_copy__58->Draw("sameaxis");
   up__28->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
