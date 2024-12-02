#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__QBH__Nom__NSC50__efficiency()
{
//=========Macro generated from canvas: c1/
//=========  (Sun Aug 11 05:14:56 2024) by ROOT version 6.32.02
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
   TPad *up__32 = new TPad("up", "up",0,0,1,1);
   up__32->Draw();
   up__32->cd();
   up__32->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__32->SetFillColor(0);
   up__32->SetFillStyle(4000);
   up__32->SetBorderMode(0);
   up__32->SetBorderSize(0);
   up__32->SetTickx(1);
   up__32->SetTicky(1);
   up__32->SetLeftMargin(0.120603);
   up__32->SetRightMargin(0.08040201);
   up__32->SetTopMargin(0.05181347);
   up__32->SetFrameBorderMode(0);
   up__32->SetFrameBorderMode(0);
   Double_t xAxis65[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__65 = new TH1D("chist__65","",11, xAxis65);
   chist__65->SetMinimum(0);
   chist__65->SetMaximum(1.1);
   chist__65->SetDirectory(nullptr);
   chist__65->SetStats(0);
   chist__65->SetLineColor(0);
   chist__65->SetLineWidth(0);
   chist__65->SetMarkerColor(0);
   chist__65->SetMarkerStyle(20);
   chist__65->SetMarkerSize(0);
   chist__65->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist__65->GetXaxis()->SetNdivisions(4000510);
   chist__65->GetXaxis()->SetLabelFont(42);
   chist__65->GetXaxis()->SetLabelSize(0.04);
   chist__65->GetXaxis()->SetTitleSize(0.04);
   chist__65->GetXaxis()->SetTickLength(0.02);
   chist__65->GetXaxis()->SetTitleOffset(1.010466);
   chist__65->GetXaxis()->SetTitleFont(42);
   chist__65->GetYaxis()->SetTitle("Selection efficiency");
   chist__65->GetYaxis()->SetNdivisions(3000510);
   chist__65->GetYaxis()->SetLabelFont(42);
   chist__65->GetYaxis()->SetLabelSize(0.04);
   chist__65->GetYaxis()->SetTitleSize(0.04);
   chist__65->GetYaxis()->SetTickLength(0.02);
   chist__65->GetYaxis()->SetTitleOffset(1.454774);
   chist__65->GetYaxis()->SetTitleFont(42);
   chist__65->GetZaxis()->SetLabelFont(42);
   chist__65->GetZaxis()->SetLabelSize(0.05);
   chist__65->GetZaxis()->SetTitleSize(0.05);
   chist__65->GetZaxis()->SetTitleOffset(1);
   chist__65->GetZaxis()->SetTitleFont(42);
   chist__65->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__QBH_n6__Nom__NSC50__phjet_mQBH","QBH n=n6","PEL");

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
   entry=leg->AddEntry("tgraph__QBH_n1__Nom__NSC50__phjet_mQBH","QBH n=n1","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow QBH #rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fx1128[7] = { 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
   Double_t tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fy1128[7] = { 0.1435111, 0.1310333, 0.118, 0.1126889, 0.1064, 0.1045, 0.1046111 };
   Double_t tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fex1128[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fey1128[7] = { 0.001350336, 0.001283238, 0.001210711, 0.001180337, 0.001143683, 0.001132452, 0.001133111 };
   TGraphErrors *gre = new TGraphErrors(7,tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fx1128,tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fy1128,tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fex1128,tgraph__QBH_n6__Nom__NSC50__phjet_mQBH_fey1128);
   gre->SetName("tgraph__QBH_n6__Nom__NSC50__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128 = new TH1F("Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128","",100,2400,9600);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetMinimum(0.09921816);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetMaximum(0.1490108);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetStats(0);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetLineWidth(2);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetMarkerStyle(20);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n6__Nom__NSC50__phjet_mQBH1128);
   
   gre->Draw(" pel");
   
   Double_t tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fx1129[7] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000 };
   Double_t tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fy1129[7] = { 0.1471111, 0.1582111, 0.1454222, 0.1317, 0.1189333, 0.1125333, 0.1060333 };
   Double_t tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fex1129[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fey1129[7] = { 0.001369318, 0.001426892, 0.001360432, 0.001286878, 0.001215997, 0.00117944, 0.001141521 };
   gre = new TGraphErrors(7,tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fx1129,tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fy1129,tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fex1129,tgraph__QBH_n1__Nom__NSC50__phjet_mQBH_fey1129);
   gre->SetName("tgraph__QBH_n1__Nom__NSC50__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129 = new TH1F("Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129","",100,400,7600);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetMinimum(0.09941719);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetMaximum(0.1651126);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetStats(0);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetLineWidth(2);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetMarkerStyle(20);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n1__Nom__NSC50__phjet_mQBH1129);
   
   gre->Draw(" pel");
   Double_t xAxis66[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__66 = new TH1D("chist_copy__66","",11, xAxis66);
   chist_copy__66->SetMinimum(0);
   chist_copy__66->SetMaximum(1.1);
   chist_copy__66->SetDirectory(nullptr);
   chist_copy__66->SetStats(0);
   chist_copy__66->SetLineColor(0);
   chist_copy__66->SetLineWidth(0);
   chist_copy__66->SetMarkerColor(0);
   chist_copy__66->SetMarkerStyle(20);
   chist_copy__66->SetMarkerSize(0);
   chist_copy__66->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist_copy__66->GetXaxis()->SetNdivisions(4000510);
   chist_copy__66->GetXaxis()->SetLabelFont(42);
   chist_copy__66->GetXaxis()->SetLabelSize(0.04);
   chist_copy__66->GetXaxis()->SetTitleSize(0.04);
   chist_copy__66->GetXaxis()->SetTickLength(0.02);
   chist_copy__66->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__66->GetXaxis()->SetTitleFont(42);
   chist_copy__66->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__66->GetYaxis()->SetNdivisions(3000510);
   chist_copy__66->GetYaxis()->SetLabelFont(42);
   chist_copy__66->GetYaxis()->SetLabelSize(0.04);
   chist_copy__66->GetYaxis()->SetTitleSize(0.04);
   chist_copy__66->GetYaxis()->SetTickLength(0.02);
   chist_copy__66->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__66->GetYaxis()->SetTitleFont(42);
   chist_copy__66->GetZaxis()->SetLabelFont(42);
   chist_copy__66->GetZaxis()->SetLabelSize(0.05);
   chist_copy__66->GetZaxis()->SetTitleSize(0.05);
   chist_copy__66->GetZaxis()->SetTitleOffset(1);
   chist_copy__66->GetZaxis()->SetTitleFont(42);
   chist_copy__66->Draw("sameaxis");
   up__32->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
