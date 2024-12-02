#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__width0p15__SR_SRB_SRC50_SRL50__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 13:48:47 2024) by ROOT version 6.32.02
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
   up__0->Range(-537.3585,-3.131913,9224.906,3.03108);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,640,8440);
   chist__1->SetMinimum(0.003050608);
   chist__1->SetMaximum(514.9367);
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
   
   TLegend *leg = new TLegend(0.540201,0.7122,0.879397,0.9234,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","ATLAS 36.1 fb^{-1} Exp., #sigma_{G}/m_{G}=0.15","L");
   entry->SetLineColor(14);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","ATLAS 36.1 fb^{-1} Obs., #sigma_{G}/m_{G}=0.15","L");
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SR__phjet_m_obs","SR","PL");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs","SRB","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs","SRC50","PL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs","SRL50","PL");

   ci = TColor::GetColor("#d65f5f");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#d65f5f");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.66996,0.879397,0.70516,NULL,"brNDC");
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
      tex = new TLatex(0.160804,0.809,"Generic gaussians");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7738,"#sigma_{G}/m_{G}=0.15");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph_fx1[46] = { 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100,
   3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700,
   4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000 };
   Double_t Graph_fy1[46] = { 15.5, 11.9, 8.19, 8.09, 7.59, 5.82, 5.43, 4.17, 3.67, 2.69, 2.56, 1.98, 1.74, 1.45, 1.28, 1.24, 0.992,
   0.841, 0.746, 0.71, 0.541, 0.541, 0.479, 0.407, 0.371, 0.331, 0.287, 0.265, 0.229, 0.199, 0.188, 0.164, 0.145,
   0.145, 0.14, 0.138, 0.12, 0.125, 0.127, 0.127, 0.112, 0.116, 0.111, 0.105, 0.101, 0.0883 };
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
   Graph_Graph1->SetMinimum(0.07947);
   Graph_Graph1->SetMaximum(17.04117);
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
   Double_t Graph_fy2[46] = { 20.5, 19.4, 16.3, 13.8, 9.84, 4.13, 4.89, 2.51, 2.25, 1.75, 1.35, 1.29, 0.998, 0.857, 0.765, 1.08, 0.62,
   0.632, 0.623, 0.787, 0.561, 0.662, 0.618, 0.582, 0.552, 0.527, 0.484, 0.452, 0.415, 0.389, 0.354, 0.319, 0.305,
   0.226, 0.219, 0.202, 0.188, 0.18, 0.169, 0.155, 0.156, 0.158, 0.157, 0.139, 0.139, 0.138 };
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
   Graph_Graph2->SetMinimum(0.1242);
   Graph_Graph2->SetMaximum(22.5362);
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
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fx3001[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fy3001[32] = { 10.21918, 5.659808, 3.354964, 2.603894, 1.991096, 1.344686, 0.9135114, 0.6711003, 0.5320345, 0.4375453, 0.3458925, 0.2537589, 0.1214007, 0.09504904, 0.07200487, 0.05634792, 0.04545207,
   0.0378165, 0.03227844, 0.02820027, 0.02521189, 0.02291452, 0.0211613, 0.01981395, 0.01877287, 0.01796408, 0.01733181, 0.01683395, 0.01643952, 0.0161243, 0.01587029, 0.01566316 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_felx3001[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fely3001[32] = { 2.855695, 1.581603, 0.9375266, 0.7276444, 0.556401, 0.3757654, 0.2552759, 0.1875354, 0.1486742, 0.1222697, 0.09665779, 0.07091156, 0.03392478, 0.02656095, 0.02012137, 0.01574613, 0.01270134,
   0.01056762, 0.009020037, 0.007880414, 0.007045328, 0.00640334, 0.005913411, 0.005536901, 0.005245978, 0.005019966, 0.00484328, 0.004704156, 0.004593935, 0.004505849, 0.004434868, 0.004376985 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehx3001[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehy3001[32] = { 3.530161, 2.171173, 1.279447, 0.9646798, 0.7433173, 0.5121309, 0.3533436, 0.2681346, 0.2264461, 0.1887422, 0.1251688, 0.08872426, 0.05725872, 0.03854405, 0.03092585, 0.02547744, 0.02137435,
   0.01837245, 0.01613314, 0.01440202, 0.01302694, 0.0120071, 0.01113384, 0.01056769, 0.01008395, 0.009704489, 0.009405894, 0.009168836, 0.008988619, 0.008781639, 0.008658517, 0.008558793 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(4);

   ci = TColor::GetColor("#4878d0");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001","",100,760,8440);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->SetMinimum(0.01015756);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->SetMaximum(15.12315);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fx3[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fy3[32] = { 6.994833, 10.10339, 4.504708, 1.757709, 1.219746, 1.263659, 1.105303, 0.7893554, 0.5392376, 0.3939351, 0.30952, 0.2452524, 0.1414112, 0.1061159, 0.08077276, 0.06283242, 0.05021739,
   0.04111273, 0.03471212, 0.02975638, 0.0260258, 0.02330914, 0.02123231, 0.01960914, 0.01839291, 0.01745165, 0.01667562, 0.01615045, 0.01574332, 0.0154276, 0.0151813, 0.01501248 };
   graph = new TGraph(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fx3,tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3","",100,760,8440);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->SetMinimum(0.01351123);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->SetMaximum(11.11223);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3002[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3002[28] = { 2.001915, 1.259964, 0.5833117, 0.374046, 0.2742914, 0.2244913, 0.1604392, 0.1070003, 0.07334555, 0.052921, 0.0417059, 0.03190643, 0.02657177, 0.0233255, 0.02132879, 0.01904572, 0.01777106,
   0.01683146, 0.01626591, 0.01559596, 0.01519789, 0.01489852, 0.01466902, 0.01449317, 0.01435303, 0.01413025, 0.01417367, 0.0141123 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3002[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3002[28] = { 0.5594244, 0.3520902, 0.1630033, 0.1045252, 0.07664928, 0.06273288, 0.04483387, 0.02990066, 0.02049602, 0.01478849, 0.01165449, 0.008916081, 0.007425339, 0.006518186, 0.005960215, 0.005322224, 0.004966027,
   0.004703461, 0.004545421, 0.004358208, 0.004246969, 0.004163311, 0.004099179, 0.004050039, 0.004010877, 0.003948624, 0.003960757, 0.003943606 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3002[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3002[28] = { 0.7453121, 0.4053957, 0.2137424, 0.1888776, 0.1390246, 0.08641794, 0.0366069, 0.03735055, 0.02973799, 0.02152531, 0.0169589, 0.01539829, 0.01342095, 0.01227969, 0.01047893, 0.01011935, 0.009550535,
   0.009175995, 0.008799796, 0.008520852, 0.008329843, 0.00818496, 0.008085224, 0.007988616, 0.007936623, 0.007824525, 0.007847043, 0.007816732 };
   grae = new TGraphAsymmErrors(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(4);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetMinimum(0.009151823);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetMaximum(3.020933);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fx4[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fy4[28] = { 1.557401, 1.47315, 0.570798, 0.2878938, 0.246479, 0.2795095, 0.2061042, 0.1145121, 0.08361584, 0.05335686, 0.03924939, 0.02872128, 0.02425728, 0.02085869, 0.01841586, 0.01688421, 0.01609473,
   0.01530491, 0.01504085, 0.01467747, 0.01443762, 0.01417532, 0.01412433, 0.01404809, 0.01400067, 0.0139106, 0.01392086, 0.01392508 };
   graph = new TGraph(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fx4,tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fy4);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->SetMinimum(0.01251954);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->SetMaximum(1.71175);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs4);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fx3003[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fy3003[27] = { 7.229337, 3.436231, 1.105192, 0.8121218, 0.5042659, 0.4366568, 0.320673, 0.2440044, 0.1815764, 0.1282341, 0.09222284, 0.07242796, 0.05634509, 0.04500951, 0.03728971, 0.03162936, 0.02712356,
   0.02439107, 0.02181842, 0.02043194, 0.01899975, 0.01808238, 0.01733141, 0.01682438, 0.01645355, 0.01611266, 0.01584678 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_felx3003[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fely3003[27] = { 2.020199, 0.9602364, 0.30884, 0.2269431, 0.1409144, 0.1220214, 0.08961033, 0.06818574, 0.05074056, 0.03583433, 0.02577118, 0.0202396, 0.01574533, 0.01257767, 0.01042041, 0.008838656, 0.007579532,
   0.006815953, 0.006097041, 0.005709595, 0.005309378, 0.005053025, 0.004843168, 0.004701481, 0.004597856, 0.004502595, 0.004428297 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehx3003[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehy3003[27] = { 2.472413, 1.182245, 0.4081559, 0.2860002, 0.2852185, 0.1376132, 0.1302369, 0.0951067, 0.06237717, 0.04647815, 0.03862295, 0.02200926, 0.02290989, 0.01950826, 0.01672366, 0.01491322, 0.0138302,
   0.01185304, 0.01164085, 0.01059433, 0.01039896, 0.009813194, 0.00942063, 0.009161544, 0.008938684, 0.008789043, 0.008688623 };
   grae = new TGraphAsymmErrors(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(4);

   ci = TColor::GetColor("#6acc64");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetMinimum(0.01027663);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetMaximum(10.67078);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fx5[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fy5[27] = { 5.265066, 2.662195, 1.074623, 0.8817103, 0.6308822, 0.3655887, 0.2468223, 0.1814678, 0.1512758, 0.1305289, 0.106673, 0.08507764, 0.06706753, 0.05461153, 0.0456677, 0.0389475, 0.03416537,
   0.03024264, 0.0267751, 0.02399293, 0.01908472, 0.01778793, 0.01786041, 0.01793525, 0.01716778, 0.01659343, 0.01618085 };
   graph = new TGraph(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fx5,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fy5);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->SetMinimum(0.01456277);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->SetMaximum(5.789955);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs5);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3004[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3004[31] = { 5.079536, 2.61146, 1.730264, 1.354633, 1.035138, 0.7114445, 0.488781, 0.3621958, 0.2916115, 0.2436063, 0.1888707, 0.1447668, 0.1094893, 0.08352342, 0.06544996, 0.05270412, 0.04355129,
   0.03692763, 0.03199271, 0.02828028, 0.02543139, 0.02334646, 0.02167929, 0.02038457, 0.01937329, 0.01857901, 0.01795083, 0.01745025, 0.0170482, 0.01672259, 0.01645658 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3004[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3004[31] = { 1.419449, 0.7297584, 0.483513, 0.3785448, 0.2892638, 0.1988094, 0.1365872, 0.1012137, 0.08148927, 0.06807448, 0.05277889, 0.04045431, 0.03059618, 0.02334017, 0.01828964, 0.01472788, 0.01217017,
   0.01031923, 0.008940189, 0.007902772, 0.007106667, 0.006524043, 0.006058162, 0.005696359, 0.005413761, 0.005191806, 0.005016263, 0.004876379, 0.004764029, 0.00467304, 0.004598702 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3004[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3004[31] = { 1.512875, 0.9789369, 0.629464, 0.4697999, 0.3610391, 0.2612363, 0.1867705, 0.1502355, 0.1332433, 0.08373126, 0.05568445, 0.04172819, 0.03476643, 0.03072295, 0.02625248, 0.02237001, 0.019535,
   0.01715807, 0.01541373, 0.01401428, 0.01293145, 0.01197468, 0.01128135, 0.01065144, 0.01025371, 0.009903629, 0.009625765, 0.00940131, 0.009219419, 0.009071289, 0.008957534 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3004,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3004,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3004,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3004,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3004,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3004);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(4);

   ci = TColor::GetColor("#d65f5f");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->SetMinimum(0.01067209);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->SetMaximum(7.250466);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13004);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fx6[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fy6[31] = { 4.625118, 1.3646, 1.012781, 1.471253, 1.789855, 1.262768, 0.7156395, 0.4141138, 0.2720908, 0.199297, 0.1528492, 0.1160989, 0.08792468, 0.06752287, 0.05319135, 0.0431869, 0.03623499,
   0.03103451, 0.02736557, 0.02445753, 0.02217679, 0.02047504, 0.01911199, 0.01807741, 0.0172654, 0.01664579, 0.01618435, 0.01581258, 0.01552443, 0.01529976, 0.01512568 };
   graph = new TGraph(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fx6,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fy6);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#d65f5f");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#d65f5f");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->SetMinimum(0.01361312);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->SetMaximum(5.086117);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs6);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,8440);
   chist_copy__2->SetMinimum(0.003050608);
   chist_copy__2->SetMaximum(514.9367);
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
