#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRC50__width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:38:02 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.276065,8036.226,3.552733);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,640,7360);
   chist__1->SetMinimum(0.002551613);
   chist__1->SetMaximum(1580.917);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"SRC50");
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
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fx3001[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fy3001[27] = { 7.229337, 3.436231, 1.105192, 0.8121218, 0.5042659, 0.4366568, 0.320673, 0.2440044, 0.1815764, 0.1282341, 0.09222284, 0.07242796, 0.05634509, 0.04500951, 0.03728971, 0.03162936, 0.02712356,
   0.02439107, 0.02181842, 0.02043194, 0.01899975, 0.01808238, 0.01733141, 0.01682438, 0.01645355, 0.01611266, 0.01584678 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_felx3001[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fely3001[27] = { 3.349165, 1.591917, 0.5120071, 0.3762351, 0.2336134, 0.2022918, 0.1485595, 0.113041, 0.08411968, 0.05940756, 0.04272446, 0.03355401, 0.02610323, 0.02085175, 0.01727536, 0.01465307, 0.01256564,
   0.01129975, 0.01010791, 0.009465591, 0.008802093, 0.008377103, 0.008029193, 0.007794299, 0.007622505, 0.007464578, 0.007341405 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fehx3001[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fehy3001[27] = { 5.328335, 2.678567, 0.9109007, 0.6164033, 0.5242432, 0.3518132, 0.2934911, 0.2036824, 0.1417245, 0.09292791, 0.08773419, 0.06358409, 0.05545271, 0.04946805, 0.04371334, 0.04094274, 0.03771683,
   0.03515798, 0.03348879, 0.03172767, 0.03041783, 0.02942868, 0.0286159, 0.0280425, 0.02759492, 0.02721964, 0.02693562 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->SetMinimum(0.007654838);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->SetMaximum(13.81259);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fx3002[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fy3002[27] = { 7.229337, 3.436231, 1.105192, 0.8121218, 0.5042659, 0.4366568, 0.320673, 0.2440044, 0.1815764, 0.1282341, 0.09222284, 0.07242796, 0.05634509, 0.04500951, 0.03728971, 0.03162936, 0.02712356,
   0.02439107, 0.02181842, 0.02043194, 0.01899975, 0.01808238, 0.01733141, 0.01682438, 0.01645355, 0.01611266, 0.01584678 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_felx3002[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fely3002[27] = { 2.020199, 0.9602364, 0.30884, 0.2269431, 0.1409144, 0.1220214, 0.08961033, 0.06818574, 0.05074056, 0.03583433, 0.02577118, 0.0202396, 0.01574533, 0.01257767, 0.01042041, 0.008838656, 0.007579532,
   0.006815953, 0.006097041, 0.005709595, 0.005309378, 0.005053025, 0.004843168, 0.004701481, 0.004597856, 0.004502595, 0.004428297 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehx3002[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehy3002[27] = { 2.472413, 1.182245, 0.4081559, 0.2860002, 0.2852185, 0.1376132, 0.1302369, 0.0951067, 0.06237717, 0.04647815, 0.03862295, 0.02200926, 0.02290989, 0.01950826, 0.01672366, 0.01491322, 0.0138302,
   0.01185304, 0.01164085, 0.01059433, 0.01039896, 0.009813194, 0.00942063, 0.009161544, 0.008938684, 0.008789043, 0.008688623 };
   grae = new TGraphAsymmErrors(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->SetMinimum(0.01027663);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->SetMaximum(10.67078);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
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
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
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
   
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fx1[27] = { 1200, 1400, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fy1[27] = { 5.265066, 2.662195, 1.074623, 0.8817103, 0.6308822, 0.3655887, 0.2468223, 0.1814678, 0.1512758, 0.1305289, 0.106673, 0.08507764, 0.06706753, 0.05461153, 0.0456677, 0.0389475, 0.03416537,
   0.03024264, 0.0267751, 0.02399293, 0.01908472, 0.01778793, 0.01786041, 0.01793525, 0.01716778, 0.01659343, 0.01618085 };
   TGraph *graph = new TGraph(27,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fx1,tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->SetMinimum(0.01456277);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->SetMaximum(5.789955);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRC50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.002551613);
   chist_copy__2->SetMaximum(1580.917);
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
