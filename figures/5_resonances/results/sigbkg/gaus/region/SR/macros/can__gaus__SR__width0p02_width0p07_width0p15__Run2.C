#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SR__width0p02_width0p07_width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:24:24 2024) by ROOT version 6.32.02
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
   up__0->Range(-399.2453,-3.126207,9212.83,2.847817);
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
   chist__1->SetMinimum(0.002959341);
   chist__1->SetMaximum(345.3678);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SR__phjet_m_obs","#sigma_{G}/m_{G}=0.02","PL");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SR__phjet_m_obs","#sigma_{G}/m_{G}=0.07","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SR__phjet_m_obs","#sigma_{G}/m_{G}=0.15","PL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
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
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fx3001[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fy3001[33] = { 1.271553, 0.9107315, 0.6559292, 0.4973253, 0.3843244, 0.2975258, 0.2310256, 0.180801, 0.1429956, 0.1144516, 0.0924719, 0.07510052, 0.06134415, 0.05050465, 0.04194883, 0.035138, 0.02974523,
   0.02571186, 0.02255507, 0.02015935, 0.01832218, 0.01703044, 0.01603439, 0.01527536, 0.01475946, 0.01439766, 0.01414872, 0.01398075, 0.01386961, 0.01378367, 0.01373752, 0.01370807, 0.01369009 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_felx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fely3001[33] = { 0.3553287, 0.254499, 0.1832959, 0.1389749, 0.1073974, 0.08314198, 0.06455887, 0.05052385, 0.03995935, 0.03198288, 0.02584077, 0.02098644, 0.01714229, 0.01411325, 0.01172237, 0.009819124, 0.008312144,
   0.007185043, 0.006302894, 0.005633422, 0.005120034, 0.004759065, 0.004480724, 0.004268618, 0.004124451, 0.004023348, 0.003953784, 0.003906847, 0.003875788, 0.003851772, 0.003838875, 0.003830647, 0.003825622 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehy3001[33] = { 0.4992247, 0.3585594, 0.2592237, 0.197047, 0.1530225, 0.1192504, 0.0934493, 0.0738763, 0.05918906, 0.04799244, 0.03943641, 0.03264965, 0.02719063, 0.02296372, 0.01953553, 0.01683637, 0.01468128,
   0.01305851, 0.01177082, 0.01076423, 0.01000391, 0.00929966, 0.008857773, 0.008516301, 0.00821853, 0.007998259, 0.007858826, 0.007761381, 0.007694874, 0.007664234, 0.007635355, 0.007623092, 0.007590181 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001","",100,760,8440);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->SetMinimum(0.008878022);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->SetMaximum(1.946869);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fx1[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fy1[33] = { 0.8192852, 0.993613, 0.9854831, 0.3836923, 0.3424206, 0.1929501, 0.2330949, 0.2713887, 0.169442, 0.1330875, 0.05863173, 0.08366116, 0.04132766, 0.04904234, 0.05490871, 0.04215239, 0.02418932,
   0.02553165, 0.02115511, 0.02717102, 0.02266432, 0.01489686, 0.01449719, 0.01423059, 0.01404298, 0.01396985, 0.01388898, 0.01382089, 0.01378306, 0.01375601, 0.01374046, 0.01372196, 0.01368911 };
   TGraph *graph = new TGraph(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1","",100,760,8440);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->SetMinimum(0.0123202);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->SetMaximum(1.091605);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs1);
   
   graph->Draw(" pl");
   
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
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
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
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fx2[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fy2[33] = { 2.010189, 2.827045, 3.071645, 1.202336, 0.4749461, 0.3896351, 0.63726, 0.6075498, 0.3894451, 0.2211181, 0.1460324, 0.1169918, 0.1073518, 0.09880163, 0.08315045, 0.06665711, 0.05338735,
   0.04326752, 0.03599121, 0.03076248, 0.0265364, 0.02247405, 0.01918427, 0.01683905, 0.01546935, 0.01478639, 0.01434536, 0.01411974, 0.01397871, 0.01395544, 0.01389757, 0.01384839, 0.01382051 };
   graph = new TGraph(33,tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fx2,tgraph__gaus_width0p07__Nom__SR__phjet_m_obs_fy2);
   graph->SetName("tgraph__gaus_width0p07__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2","",100,760,8440);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->SetMinimum(0.01243846);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->SetMaximum(3.377428);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SR__phjet_m_obs2);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fx3003[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fy3003[32] = { 10.21918, 5.659808, 3.354964, 2.603894, 1.991096, 1.344686, 0.9135114, 0.6711003, 0.5320345, 0.4375453, 0.3458925, 0.2537589, 0.1214007, 0.09504904, 0.07200487, 0.05634792, 0.04545207,
   0.0378165, 0.03227844, 0.02820027, 0.02521189, 0.02291452, 0.0211613, 0.01981395, 0.01877287, 0.01796408, 0.01733181, 0.01683395, 0.01643952, 0.0161243, 0.01587029, 0.01566316 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_felx3003[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fely3003[32] = { 2.855695, 1.581603, 0.9375266, 0.7276444, 0.556401, 0.3757654, 0.2552759, 0.1875354, 0.1486742, 0.1222697, 0.09665779, 0.07091156, 0.03392478, 0.02656095, 0.02012137, 0.01574613, 0.01270134,
   0.01056762, 0.009020037, 0.007880414, 0.007045328, 0.00640334, 0.005913411, 0.005536901, 0.005245978, 0.005019966, 0.00484328, 0.004704156, 0.004593935, 0.004505849, 0.004434868, 0.004376985 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehx3003[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehy3003[32] = { 3.530161, 2.171173, 1.279447, 0.9646798, 0.7433173, 0.5121309, 0.3533436, 0.2681346, 0.2264461, 0.1887422, 0.1251688, 0.08872426, 0.05725872, 0.03854405, 0.03092585, 0.02547744, 0.02137435,
   0.01837245, 0.01613314, 0.01440202, 0.01302694, 0.0120071, 0.01113384, 0.01056769, 0.01008395, 0.009704489, 0.009405894, 0.009168836, 0.008988619, 0.008781639, 0.008658517, 0.008558793 };
   grae = new TGraphAsymmErrors(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003","",100,760,8440);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->SetMinimum(0.01015756);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->SetMaximum(15.12315);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fx3[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fy3[32] = { 6.994833, 10.10339, 4.504708, 1.757709, 1.219746, 1.263659, 1.105303, 0.7893554, 0.5392376, 0.3939351, 0.30952, 0.2452524, 0.1414112, 0.1061159, 0.08077276, 0.06283242, 0.05021739,
   0.04111273, 0.03471212, 0.02975638, 0.0260258, 0.02330914, 0.02123231, 0.01960914, 0.01839291, 0.01745165, 0.01667562, 0.01615045, 0.01574332, 0.0154276, 0.0151813, 0.01501248 };
   graph = new TGraph(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fx3,tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
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
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,760,8440);
   chist_copy__2->SetMinimum(0.002959341);
   chist_copy__2->SetMaximum(345.3678);
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
