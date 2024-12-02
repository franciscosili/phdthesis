#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRL50__width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:38 2024) by ROOT version 6.32.02
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
   TPad *up__0 = new TPad("up", "up",0,0,1,1);
   up__0->Draw();
   up__0->cd();
   up__0->Range(113.2075,-3.234515,9124.528,3.342771);
   up__0->SetFillColor(0);
   up__0->SetFillStyle(4000);
   up__0->SetBorderMode(0);
   up__0->SetBorderSize(0);
   up__0->SetLogy();
   up__0->SetTickx(1);
   up__0->SetTicky(1);
   up__0->SetLeftMargin(0.120603);
   up__0->SetRightMargin(0.08040201);
   up__0->SetTopMargin(0.05181347);
   up__0->SetFrameBorderMode(0);
   up__0->SetFrameBorderMode(0);
   
   TH1D *chist__1 = new TH1D("chist__1","",10,1200,8400);
   chist__1->SetMinimum(0.002649801);
   chist__1->SetMaximum(1004.567);
   chist__1->SetDirectory(nullptr);
   chist__1->SetStats(0);
   chist__1->SetLineColor(0);
   chist__1->SetLineWidth(0);
   chist__1->SetMarkerColor(0);
   chist__1->SetMarkerStyle(20);
   chist__1->SetMarkerSize(0);
   chist__1->GetXaxis()->SetTitle("m_{G} [GeV]");
   chist__1->GetXaxis()->SetNdivisions(4000510);
   chist__1->GetXaxis()->SetLabelFont(42);
   chist__1->GetXaxis()->SetLabelSize(0.04);
   chist__1->GetXaxis()->SetTitleSize(0.04);
   chist__1->GetXaxis()->SetTickLength(0.02);
   chist__1->GetXaxis()->SetTitleOffset(1.010466);
   chist__1->GetXaxis()->SetTitleFont(42);
   chist__1->GetYaxis()->SetTitle("#sigma#times BR [fb]");
   chist__1->GetYaxis()->SetNdivisions(3000510);
   chist__1->GetYaxis()->SetLabelFont(42);
   chist__1->GetYaxis()->SetLabelSize(0.04);
   chist__1->GetYaxis()->SetTitleSize(0.04);
   chist__1->GetYaxis()->SetTickLength(0.02);
   chist__1->GetYaxis()->SetTitleOffset(1.454774);
   chist__1->GetYaxis()->SetTitleFont(42);
   chist__1->GetZaxis()->SetLabelFont(42);
   chist__1->GetZaxis()->SetTitleOffset(1);
   chist__1->GetZaxis()->SetTitleFont(42);
   chist__1->Draw("pe");
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"SRL50");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.765,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7298,"Generic gaussians");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.15");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fx3001[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fy3001[31] = { 5.079536, 2.61146, 1.730264, 1.354633, 1.035138, 0.7114445, 0.488781, 0.3621958, 0.2916115, 0.2436063, 0.1888707, 0.1447668, 0.1094893, 0.08352342, 0.06544996, 0.05270412, 0.04355129,
   0.03692763, 0.03199271, 0.02828028, 0.02543139, 0.02334646, 0.02167929, 0.02038457, 0.01937329, 0.01857901, 0.01795083, 0.01745025, 0.0170482, 0.01672259, 0.01645658 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_felx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fely3001[31] = { 2.353218, 1.209822, 0.8015868, 0.6275664, 0.4795529, 0.3295939, 0.2264396, 0.167796, 0.1350961, 0.1128565, 0.0874989, 0.06706674, 0.05072355, 0.03869425, 0.03032128, 0.02441646, 0.02017619,
   0.01710762, 0.0148214, 0.01310152, 0.01178171, 0.01081581, 0.01004346, 0.009443646, 0.008975145, 0.008607178, 0.008316157, 0.008084251, 0.007897993, 0.007747147, 0.007623908 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fehx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fehy3001[31] = { 2.900022, 2.151847, 1.377362, 1.022748, 0.7916351, 0.5738323, 0.4152164, 0.3576948, 0.2526039, 0.1639993, 0.1086813, 0.1026577, 0.08461314, 0.07410087, 0.06573564, 0.05777295, 0.0512596,
   0.04601828, 0.04202157, 0.03891446, 0.03641227, 0.03433368, 0.0328025, 0.03158138, 0.03055637, 0.029729, 0.02911299, 0.02858348, 0.02815586, 0.02781354, 0.02756902 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->SetMinimum(0.007949402);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->SetMaximum(8.776632);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3002[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3002[31] = { 5.079536, 2.61146, 1.730264, 1.354633, 1.035138, 0.7114445, 0.488781, 0.3621958, 0.2916115, 0.2436063, 0.1888707, 0.1447668, 0.1094893, 0.08352342, 0.06544996, 0.05270412, 0.04355129,
   0.03692763, 0.03199271, 0.02828028, 0.02543139, 0.02334646, 0.02167929, 0.02038457, 0.01937329, 0.01857901, 0.01795083, 0.01745025, 0.0170482, 0.01672259, 0.01645658 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3002[31] = { 1.419449, 0.7297584, 0.483513, 0.3785448, 0.2892638, 0.1988094, 0.1365872, 0.1012137, 0.08148927, 0.06807448, 0.05277889, 0.04045431, 0.03059618, 0.02334017, 0.01828964, 0.01472788, 0.01217017,
   0.01031923, 0.008940189, 0.007902772, 0.007106667, 0.006524043, 0.006058162, 0.005696359, 0.005413761, 0.005191806, 0.005016263, 0.004876379, 0.004764029, 0.00467304, 0.004598702 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3002[31] = { 1.512875, 0.9789369, 0.629464, 0.4697999, 0.3610391, 0.2612363, 0.1867705, 0.1502355, 0.1332433, 0.08373126, 0.05568445, 0.04172819, 0.03476643, 0.03072295, 0.02625248, 0.02237001, 0.019535,
   0.01715807, 0.01541373, 0.01401428, 0.01293145, 0.01197468, 0.01128135, 0.01065144, 0.01025371, 0.009903629, 0.009625765, 0.00940131, 0.009219419, 0.009071289, 0.008957534 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->SetMinimum(0.01067209);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->SetMaximum(7.250466);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3003[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3003[31] = { 5.079536, 2.61146, 1.730264, 1.354633, 1.035138, 0.7114445, 0.488781, 0.3621958, 0.2916115, 0.2436063, 0.1888707, 0.1447668, 0.1094893, 0.08352342, 0.06544996, 0.05270412, 0.04355129,
   0.03692763, 0.03199271, 0.02828028, 0.02543139, 0.02334646, 0.02167929, 0.02038457, 0.01937329, 0.01857901, 0.01795083, 0.01745025, 0.0170482, 0.01672259, 0.01645658 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3003[31] = { 1.419449, 0.7297584, 0.483513, 0.3785448, 0.2892638, 0.1988094, 0.1365872, 0.1012137, 0.08148927, 0.06807448, 0.05277889, 0.04045431, 0.03059618, 0.02334017, 0.01828964, 0.01472788, 0.01217017,
   0.01031923, 0.008940189, 0.007902772, 0.007106667, 0.006524043, 0.006058162, 0.005696359, 0.005413761, 0.005191806, 0.005016263, 0.004876379, 0.004764029, 0.00467304, 0.004598702 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3003[31] = { 1.512875, 0.9789369, 0.629464, 0.4697999, 0.3610391, 0.2612363, 0.1867705, 0.1502355, 0.1332433, 0.08373126, 0.05568445, 0.04172819, 0.03476643, 0.03072295, 0.02625248, 0.02237001, 0.019535,
   0.01715807, 0.01541373, 0.01401428, 0.01293145, 0.01197468, 0.01128135, 0.01065144, 0.01025371, 0.009903629, 0.009625765, 0.00940131, 0.009219419, 0.009071289, 0.008957534 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetMinimum(0.01067209);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetMaximum(7.250466);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fx1[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fy1[31] = { 4.625118, 1.3646, 1.012781, 1.471253, 1.789855, 1.262768, 0.7156395, 0.4141138, 0.2720908, 0.199297, 0.1528492, 0.1160989, 0.08792468, 0.06752287, 0.05319135, 0.0431869, 0.03623499,
   0.03103451, 0.02736557, 0.02445753, 0.02217679, 0.02047504, 0.01911199, 0.01807741, 0.0172654, 0.01664579, 0.01618435, 0.01581258, 0.01552443, 0.01529976, 0.01512568 };
   TGraph *graph = new TGraph(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fx1,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->SetMinimum(0.01361312);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->SetMaximum(5.086117);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1200,8400);
   chist_copy__2->SetMinimum(0.002649801);
   chist_copy__2->SetMaximum(1004.567);
   chist_copy__2->SetDirectory(nullptr);
   chist_copy__2->SetStats(0);
   chist_copy__2->SetLineColor(0);
   chist_copy__2->SetLineWidth(0);
   chist_copy__2->SetMarkerColor(0);
   chist_copy__2->SetMarkerStyle(20);
   chist_copy__2->SetMarkerSize(0);
   chist_copy__2->GetXaxis()->SetTitle("m_{G} [GeV]");
   chist_copy__2->GetXaxis()->SetNdivisions(4000510);
   chist_copy__2->GetXaxis()->SetLabelFont(42);
   chist_copy__2->GetXaxis()->SetLabelSize(0.04);
   chist_copy__2->GetXaxis()->SetTitleSize(0.04);
   chist_copy__2->GetXaxis()->SetTickLength(0.02);
   chist_copy__2->GetXaxis()->SetTitleOffset(1.010466);
   chist_copy__2->GetXaxis()->SetTitleFont(42);
   chist_copy__2->GetYaxis()->SetTitle("#sigma#times BR [fb]");
   chist_copy__2->GetYaxis()->SetNdivisions(3000510);
   chist_copy__2->GetYaxis()->SetLabelFont(42);
   chist_copy__2->GetYaxis()->SetLabelSize(0.04);
   chist_copy__2->GetYaxis()->SetTitleSize(0.04);
   chist_copy__2->GetYaxis()->SetTickLength(0.02);
   chist_copy__2->GetYaxis()->SetTitleOffset(1.454774);
   chist_copy__2->GetYaxis()->SetTitleFont(42);
   chist_copy__2->GetZaxis()->SetLabelFont(42);
   chist_copy__2->GetZaxis()->SetTitleOffset(1);
   chist_copy__2->GetZaxis()->SetTitleFont(42);
   chist_copy__2->Draw("sameaxis");
   up__0->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
