#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__width0p07__SR_SRL50_oldexp_oldobs__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:01:05 2024) by ROOT version 6.32.02
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
   up__0->Range(-399.2453,-3.082958,9212.83,2.549152);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,760,8440);
   chist__1->SetMinimum(0.003021709);
   chist__1->SetMaximum(180.8558);
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
   
   TLegend *leg = new TLegend(0.540201,0.8178,0.879397,0.9234,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","ATLAS 36.1 fb^{-1}","L");
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SR__phjet_m_obs","SR","PL");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs","SRL50","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.77556,0.879397,0.81076,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Observed","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Expected","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7738,"Generic gaussians");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7386,"#sigma_{G}/m_{G}=0.07");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph_fx1[46] = { 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100,
   3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700,
   4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000 };
   Double_t Graph_fy1[46] = { 6.04, 5.6, 4.36, 3.45, 3.06, 2.53, 2.19, 2.11, 1.73, 1.65, 1.31, 1.15, 0.981, 0.825, 0.744, 0.756, 0.664,
   0.511, 0.455, 0.435, 0.399, 0.357, 0.325, 0.275, 0.249, 0.23, 0.201, 0.191, 0.163, 0.147, 0.141, 0.136, 0.127,
   0.117, 0.109, 0.0922, 0.107, 0.0985, 0.0896, 0.0868, 0.093, 0.085, 0.0886, 0.0825, 0.0851, 0.0805 };
   TGraph *graph = new TGraph(46,Graph_fx1,Graph_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(14);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(14);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,1050,6450);
   Graph_Graph1->SetMinimum(0.07245);
   Graph_Graph1->SetMaximum(6.63595);
   Graph_Graph1->SetDirectory(nullptr);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->SetMarkerSize(1.2);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw(" lx");
   
   Double_t Graph_fx2[46] = { 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100,
   3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700,
   4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000 };
   Double_t Graph_fy2[46] = { 5.05, 6.92, 7.2, 5.63, 4.03, 3.76, 2.25, 1.39, 0.994, 1.13, 1.01, 1.06, 0.868, 0.703, 0.555, 0.543, 0.436,
   0.406, 0.391, 0.345, 0.388, 0.292, 0.293, 0.269, 0.278, 0.274, 0.26, 0.251, 0.268, 0.23, 0.228, 0.263, 0.217,
   0.186, 0.168, 0.149, 0.14, 0.129, 0.11, 0.111, 0.104, 0.0986, 0.0947, 0.0892, 0.0926, 0.0893 };
   graph = new TGraph(46,Graph_fx2,Graph_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(14);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(14);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,1050,6450);
   Graph_Graph2->SetMinimum(0.08028);
   Graph_Graph2->SetMaximum(7.91108);
   Graph_Graph2->SetDirectory(nullptr);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->SetMarkerSize(1.2);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw(" l");
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fx3001[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fy3001[33] = { 3.756231, 2.520322, 1.559543, 1.16172, 0.9041082, 0.6816304, 0.5052708, 0.3807597, 0.295241, 0.2346277, 0.1883863, 0.151149, 0.1203552, 0.09500445, 0.07475576, 0.05915704, 0.04738292,
   0.03868346, 0.03218366, 0.02743679, 0.02388166, 0.02123466, 0.01930924, 0.01785043, 0.01676605, 0.01596063, 0.01536549, 0.01489152, 0.01457234, 0.01434195, 0.01417764, 0.01406121, 0.01397861 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_felx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fely3001[33] = { 1.049659, 0.7042906, 0.4358057, 0.3246363, 0.2526482, 0.190478, 0.1411952, 0.1064013, 0.08250351, 0.06556545, 0.05264355, 0.04223778, 0.03363262, 0.02654849, 0.0208901, 0.01653112, 0.0132409,
   0.01080989, 0.008993552, 0.007667063, 0.006673602, 0.005933912, 0.005395864, 0.004988207, 0.004685183, 0.004460111, 0.004293804, 0.004161356, 0.004072161, 0.00400778, 0.003961865, 0.003929329, 0.003906248 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehy3001[33] = { 1.468821, 0.9810015, 0.6091695, 0.4516944, 0.3516548, 0.2667499, 0.1988305, 0.1509046, 0.1182017, 0.09519546, 0.07753564, 0.06256551, 0.04982141, 0.03956405, 0.03162686, 0.02575407, 0.02143662,
   0.01811236, 0.0156354, 0.01377297, 0.01234711, 0.01122867, 0.01033497, 0.009661069, 0.009157554, 0.008772827, 0.008467212, 0.008255213, 0.008085191, 0.007929722, 0.007843528, 0.007778785, 0.00773831 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->SetMinimum(0.009065128);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->SetMaximum(5.746551);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fx3[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fy3[33] = { 2.010189, 2.827045, 3.071645, 1.202336, 0.4749461, 0.3896351, 0.63726, 0.6075498, 0.3894451, 0.2211181, 0.1460324, 0.1169918, 0.1073518, 0.09880163, 0.08315045, 0.06665711, 0.05338735,
   0.04326752, 0.03599121, 0.03076248, 0.0265364, 0.02247405, 0.01918427, 0.01683905, 0.01546935, 0.01478639, 0.01434536, 0.01411974, 0.01397871, 0.01395544, 0.01389757, 0.01384839, 0.01382051 };
   graph = new TGraph(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fx3,tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->SetMinimum(0.01243846);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->SetMaximum(3.377428);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3002[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3002[31] = { 1.950943, 1.228977, 0.8054136, 0.6116486, 0.4812525, 0.3698349, 0.2781657, 0.211624, 0.1651819, 0.1322395, 0.1078492, 0.0886568, 0.07297281, 0.06001451, 0.04952861, 0.04131059, 0.03489723,
   0.02995402, 0.02621465, 0.02331684, 0.02109047, 0.01935578, 0.01810502, 0.01708926, 0.01630393, 0.01569931, 0.01523783, 0.01489061, 0.01463265, 0.01444268, 0.01430305 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3002[31] = { 0.5451806, 0.343431, 0.2250685, 0.1709219, 0.1344834, 0.1033484, 0.07773191, 0.05913717, 0.04615918, 0.03695364, 0.03013788, 0.02477467, 0.02039186, 0.01677073, 0.0138405, 0.01154402, 0.009751843,
   0.008370491, 0.007325542, 0.006515765, 0.005893618, 0.005408868, 0.00505935, 0.004775502, 0.004556046, 0.004387087, 0.004258131, 0.0041611, 0.004089014, 0.004035929, 0.003996912 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3002[31] = { 0.7557878, 0.4765333, 0.3133129, 0.235963, 0.185408, 0.1443596, 0.1097664, 0.08468794, 0.06733274, 0.05519548, 0.04612933, 0.03843329, 0.03174882, 0.02611582, 0.02187132, 0.01863268, 0.01624078,
   0.01438588, 0.01299442, 0.0118901, 0.01100823, 0.01033996, 0.009683851, 0.009254522, 0.008900762, 0.00862003, 0.008408575, 0.008240693, 0.008082121, 0.007985251, 0.007913472 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetMinimum(0.009275527);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetMaximum(2.976373);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx4[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy4[31] = { 2.847915, 1.059407, 0.4705864, 0.3393574, 0.5598819, 0.7400657, 0.5408092, 0.2801154, 0.1430342, 0.09858536, 0.08955669, 0.08751244, 0.07214302, 0.05382163, 0.04107606, 0.03414567, 0.0302795,
   0.02758736, 0.02505415, 0.02197452, 0.01915922, 0.01701384, 0.01572218, 0.01501239, 0.01464083, 0.01439888, 0.01420927, 0.01408559, 0.01399738, 0.01398243, 0.01393811 };
   graph = new TGraph(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx4,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy4);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->SetMinimum(0.01254429);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->SetMaximum(3.131313);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs4);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,760,8440);
   chist_copy__2->SetMinimum(0.003021709);
   chist_copy__2->SetMaximum(180.8558);
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
