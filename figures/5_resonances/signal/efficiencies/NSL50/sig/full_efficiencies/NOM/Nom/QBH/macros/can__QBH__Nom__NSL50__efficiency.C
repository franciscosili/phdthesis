#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__QBH__Nom__NSL50__efficiency()
{
//=========Macro generated from canvas: c1/
//=========  (Sun Aug 11 05:14:57 2024) by ROOT version 6.32.02
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
   TPad *up__35 = new TPad("up", "up",0,0,1,1);
   up__35->Draw();
   up__35->cd();
   up__35->Range(-933.9623,-0.1296885,10955.97,1.167196);
   up__35->SetFillColor(0);
   up__35->SetFillStyle(4000);
   up__35->SetBorderMode(0);
   up__35->SetBorderSize(0);
   up__35->SetTickx(1);
   up__35->SetTicky(1);
   up__35->SetLeftMargin(0.120603);
   up__35->SetRightMargin(0.08040201);
   up__35->SetTopMargin(0.05181347);
   up__35->SetFrameBorderMode(0);
   up__35->SetFrameBorderMode(0);
   Double_t xAxis71[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist__71 = new TH1D("chist__71","",11, xAxis71);
   chist__71->SetMinimum(0);
   chist__71->SetMaximum(1.1);
   chist__71->SetDirectory(nullptr);
   chist__71->SetStats(0);
   chist__71->SetLineColor(0);
   chist__71->SetLineWidth(0);
   chist__71->SetMarkerColor(0);
   chist__71->SetMarkerStyle(20);
   chist__71->SetMarkerSize(0);
   chist__71->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist__71->GetXaxis()->SetNdivisions(4000510);
   chist__71->GetXaxis()->SetLabelFont(42);
   chist__71->GetXaxis()->SetLabelSize(0.04);
   chist__71->GetXaxis()->SetTitleSize(0.04);
   chist__71->GetXaxis()->SetTickLength(0.02);
   chist__71->GetXaxis()->SetTitleOffset(1.010466);
   chist__71->GetXaxis()->SetTitleFont(42);
   chist__71->GetYaxis()->SetTitle("Selection efficiency");
   chist__71->GetYaxis()->SetNdivisions(3000510);
   chist__71->GetYaxis()->SetLabelFont(42);
   chist__71->GetYaxis()->SetLabelSize(0.04);
   chist__71->GetYaxis()->SetTitleSize(0.04);
   chist__71->GetYaxis()->SetTickLength(0.02);
   chist__71->GetYaxis()->SetTitleOffset(1.454774);
   chist__71->GetYaxis()->SetTitleFont(42);
   chist__71->GetZaxis()->SetLabelFont(42);
   chist__71->GetZaxis()->SetLabelSize(0.05);
   chist__71->GetZaxis()->SetTitleSize(0.05);
   chist__71->GetZaxis()->SetTitleOffset(1);
   chist__71->GetZaxis()->SetTitleFont(42);
   chist__71->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__QBH_n6__Nom__NSL50__phjet_mQBH","QBH n=n6","PEL");

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
   entry=leg->AddEntry("tgraph__QBH_n1__Nom__NSL50__phjet_mQBH","QBH n=n1","PEL");

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
      tex = new TLatex(0.160804,0.7342,"pp#rightarrow QBH #rightarrow q#gamma");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fx1134[7] = { 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
   Double_t tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fy1134[7] = { 0.4760111, 0.4902778, 0.4982444, 0.5035778, 0.5069667, 0.5071222, 0.5084 };
   Double_t tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fex1134[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fey1134[7] = { 0.002794037, 0.002849269, 0.002879992, 0.002900514, 0.002913535, 0.002914133, 0.002919038 };
   TGraphErrors *gre = new TGraphErrors(7,tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fx1134,tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fy1134,tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fex1134,tgraph__QBH_n6__Nom__NSL50__phjet_mQBH_fey1134);
   gre->SetName("tgraph__QBH_n6__Nom__NSL50__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134 = new TH1F("Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134","",100,2400,9600);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetMinimum(0.4694069);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetMaximum(0.5151293);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetDirectory(nullptr);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetStats(0);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetLineWidth(2);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetMarkerStyle(20);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n6__Nom__NSL50__phjet_mQBH1134);
   
   gre->Draw(" pel");
   
   Double_t tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fx1135[7] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000 };
   Double_t tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fy1135[7] = { 0.4597333, 0.4630778, 0.4754556, 0.4902889, 0.4991778, 0.5047445, 0.5055889 };
   Double_t tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fex1135[7] = { 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fey1135[7] = { 0.002730665, 0.002743718, 0.00279188, 0.002849312, 0.002883586, 0.002904998, 0.002908243 };
   gre = new TGraphErrors(7,tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fx1135,tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fy1135,tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fex1135,tgraph__QBH_n1__Nom__NSL50__phjet_mQBH_fey1135);
   gre->SetName("tgraph__QBH_n1__Nom__NSL50__phjet_mQBH");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135 = new TH1F("Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135","",100,400,7600);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetMinimum(0.4518532);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetMaximum(0.5136466);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetDirectory(nullptr);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetStats(0);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetLineWidth(2);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetMarkerStyle(20);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->SetMarkerSize(1.2);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_tgraph__QBH_n1__Nom__NSL50__phjet_mQBH1135);
   
   gre->Draw(" pel");
   Double_t xAxis72[12] = {500, 600, 700, 800, 900, 1000, 1250, 1500, 1750, 2000, 4000, 10000}; 
   
   TH1D *chist_copy__72 = new TH1D("chist_copy__72","",11, xAxis72);
   chist_copy__72->SetMinimum(0);
   chist_copy__72->SetMaximum(1.1);
   chist_copy__72->SetDirectory(nullptr);
   chist_copy__72->SetStats(0);
   chist_copy__72->SetLineColor(0);
   chist_copy__72->SetLineWidth(0);
   chist_copy__72->SetMarkerColor(0);
   chist_copy__72->SetMarkerStyle(20);
   chist_copy__72->SetMarkerSize(0);
   chist_copy__72->GetXaxis()->SetTitle("m_{QBH} [GeV]");
   chist_copy__72->GetXaxis()->SetNdivisions(4000510);
   chist_copy__72->GetXaxis()->SetLabelFont(42);
   chist_copy__72->GetXaxis()->SetLabelSize(0.04);
   chist_copy__72->GetXaxis()->SetTitleSize(0.04);
   chist_copy__72->GetXaxis()->SetTickLength(0.02);
   chist_copy__72->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__72->GetXaxis()->SetTitleFont(42);
   chist_copy__72->GetYaxis()->SetTitle("Selection efficiency");
   chist_copy__72->GetYaxis()->SetNdivisions(3000510);
   chist_copy__72->GetYaxis()->SetLabelFont(42);
   chist_copy__72->GetYaxis()->SetLabelSize(0.04);
   chist_copy__72->GetYaxis()->SetTitleSize(0.04);
   chist_copy__72->GetYaxis()->SetTickLength(0.02);
   chist_copy__72->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__72->GetYaxis()->SetTitleFont(42);
   chist_copy__72->GetZaxis()->SetLabelFont(42);
   chist_copy__72->GetZaxis()->SetLabelSize(0.05);
   chist_copy__72->GetZaxis()->SetTitleSize(0.05);
   chist_copy__72->GetZaxis()->SetTitleOffset(1);
   chist_copy__72->GetZaxis()->SetTitleFont(42);
   chist_copy__72->Draw("sameaxis");
   up__35->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
