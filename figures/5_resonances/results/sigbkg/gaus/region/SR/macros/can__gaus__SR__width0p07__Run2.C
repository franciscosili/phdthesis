#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SR__width0p07__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:22 2024) by ROOT version 6.32.02
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
   up__0->Range(-399.2453,-3.30702,9212.83,3.286555);
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
   chist__1->SetMinimum(0.002250805);
   chist__1->SetMaximum(880.8851);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SR__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"SR");
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.07");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fx3001[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fy3001[33] = { 3.756231, 2.520322, 1.559543, 1.16172, 0.9041082, 0.6816304, 0.5052708, 0.3807597, 0.295241, 0.2346277, 0.1883863, 0.151149, 0.1203552, 0.09500445, 0.07475576, 0.05915704, 0.04738292,
   0.03868346, 0.03218366, 0.02743679, 0.02388166, 0.02123466, 0.01930924, 0.01785043, 0.01676605, 0.01596063, 0.01536549, 0.01489152, 0.01457234, 0.01434195, 0.01417764, 0.01406121, 0.01397861 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_felx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fely3001[33] = { 1.740165, 1.1676, 0.7224958, 0.5381948, 0.41885, 0.3157818, 0.2340789, 0.1763961, 0.1367776, 0.108697, 0.08727452, 0.07002344, 0.05575748, 0.04401311, 0.03463241, 0.02740593, 0.02195129,
   0.01792105, 0.01490986, 0.01271076, 0.01106376, 0.009837471, 0.008945474, 0.008269646, 0.007767279, 0.007394147, 0.007118437, 0.006898857, 0.006750989, 0.006644255, 0.006568134, 0.006514194, 0.00647593 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fehx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fehy3001[33] = { 3.240888, 2.170534, 1.348983, 1.002167, 0.7801946, 0.592967, 0.4435832, 0.3378911, 0.266115, 0.2148345, 0.175309, 0.1420469, 0.1141269, 0.09183394, 0.07476675, 0.06208968, 0.05283278,
   0.04572427, 0.040531, 0.03650968, 0.03350402, 0.03129415, 0.02957073, 0.02828964, 0.02732678, 0.02661079, 0.02610513, 0.02577841, 0.02548857, 0.02528306, 0.02507872, 0.02497382, 0.02489945 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->SetMinimum(0.006752414);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->SetMaximum(7.696081);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fx3002[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fy3002[33] = { 3.756231, 2.520322, 1.559543, 1.16172, 0.9041082, 0.6816304, 0.5052708, 0.3807597, 0.295241, 0.2346277, 0.1883863, 0.151149, 0.1203552, 0.09500445, 0.07475576, 0.05915704, 0.04738292,
   0.03868346, 0.03218366, 0.02743679, 0.02388166, 0.02123466, 0.01930924, 0.01785043, 0.01676605, 0.01596063, 0.01536549, 0.01489152, 0.01457234, 0.01434195, 0.01417764, 0.01406121, 0.01397861 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_felx3002[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fely3002[33] = { 1.049659, 0.7042906, 0.4358057, 0.3246363, 0.2526482, 0.190478, 0.1411952, 0.1064013, 0.08250351, 0.06556545, 0.05264355, 0.04223778, 0.03363262, 0.02654849, 0.0208901, 0.01653112, 0.0132409,
   0.01080989, 0.008993552, 0.007667063, 0.006673602, 0.005933912, 0.005395864, 0.004988207, 0.004685183, 0.004460111, 0.004293804, 0.004161356, 0.004072161, 0.00400778, 0.003961865, 0.003929329, 0.003906248 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehx3002[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehy3002[33] = { 1.468821, 0.9810015, 0.6091695, 0.4516944, 0.3516548, 0.2667499, 0.1988305, 0.1509046, 0.1182017, 0.09519546, 0.07753564, 0.06256551, 0.04982141, 0.03956405, 0.03162686, 0.02575407, 0.02143662,
   0.01811236, 0.0156354, 0.01377297, 0.01234711, 0.01122867, 0.01033497, 0.009661069, 0.009157554, 0.008772827, 0.008467212, 0.008255213, 0.008085191, 0.007929722, 0.007843528, 0.007778785, 0.00773831 };
   grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->SetMinimum(0.009065128);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->SetMaximum(5.746551);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fx3003[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fy3003[33] = { 3.756231, 2.520322, 1.559543, 1.16172, 0.9041082, 0.6816304, 0.5052708, 0.3807597, 0.295241, 0.2346277, 0.1883863, 0.151149, 0.1203552, 0.09500445, 0.07475576, 0.05915704, 0.04738292,
   0.03868346, 0.03218366, 0.02743679, 0.02388166, 0.02123466, 0.01930924, 0.01785043, 0.01676605, 0.01596063, 0.01536549, 0.01489152, 0.01457234, 0.01434195, 0.01417764, 0.01406121, 0.01397861 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_felx3003[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fely3003[33] = { 1.049659, 0.7042906, 0.4358057, 0.3246363, 0.2526482, 0.190478, 0.1411952, 0.1064013, 0.08250351, 0.06556545, 0.05264355, 0.04223778, 0.03363262, 0.02654849, 0.0208901, 0.01653112, 0.0132409,
   0.01080989, 0.008993552, 0.007667063, 0.006673602, 0.005933912, 0.005395864, 0.004988207, 0.004685183, 0.004460111, 0.004293804, 0.004161356, 0.004072161, 0.00400778, 0.003961865, 0.003929329, 0.003906248 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehx3003[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehy3003[33] = { 1.468821, 0.9810015, 0.6091695, 0.4516944, 0.3516548, 0.2667499, 0.1988305, 0.1509046, 0.1182017, 0.09519546, 0.07753564, 0.06256551, 0.04982141, 0.03956405, 0.03162686, 0.02575407, 0.02143662,
   0.01811236, 0.0156354, 0.01377297, 0.01234711, 0.01122867, 0.01033497, 0.009661069, 0.009157554, 0.008772827, 0.008467212, 0.008255213, 0.008085191, 0.007929722, 0.007843528, 0.007778785, 0.00773831 };
   grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->SetMinimum(0.009065128);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->SetMaximum(5.746551);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fx1[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fy1[33] = { 2.010189, 2.827045, 3.071645, 1.202336, 0.4749461, 0.3896351, 0.63726, 0.6075498, 0.3894451, 0.2211181, 0.1460324, 0.1169918, 0.1073518, 0.09880163, 0.08315045, 0.06665711, 0.05338735,
   0.04326752, 0.03599121, 0.03076248, 0.0265364, 0.02247405, 0.01918427, 0.01683905, 0.01546935, 0.01478639, 0.01434536, 0.01411974, 0.01397871, 0.01395544, 0.01389757, 0.01384839, 0.01382051 };
   TGraph *graph = new TGraph(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fx1,tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->SetMinimum(0.01243846);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->SetMaximum(3.377428);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,760,8440);
   chist_copy__2->SetMinimum(0.002250805);
   chist_copy__2->SetMaximum(880.8851);
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
