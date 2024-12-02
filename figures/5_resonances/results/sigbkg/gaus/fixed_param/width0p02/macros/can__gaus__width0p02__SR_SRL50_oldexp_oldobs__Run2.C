#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__width0p02__SR_SRL50_oldexp_oldobs__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:01:01 2024) by ROOT version 6.32.02
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
   up__0->Range(-399.2453,-3.041906,9212.83,2.089101);
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
   chist__1->SetMaximum(66.56499);
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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SR__phjet_m_obs","SR","PL");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs","SRL50","PL");

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
      tex = new TLatex(0.160804,0.7386,"#sigma_{G}/m_{G}=0.02");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph_fx1[46] = { 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100,
   3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700,
   4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000 };
   Double_t Graph_fy1[46] = { 2.65, 2.18, 1.96, 1.69, 1.38, 1.25, 1.01, 0.929, 0.811, 0.792, 0.686, 0.58, 0.496, 0.479, 0.399, 0.351, 0.307,
   0.306, 0.267, 0.244, 0.197, 0.199, 0.164, 0.153, 0.152, 0.134, 0.123, 0.118, 0.111, 0.107, 0.0953, 0.104, 0.0949,
   0.0907, 0.0895, 0.0918, 0.0796, 0.0815, 0.0796, 0.0904, 0.0815, 0.087, 0.0736, 0.0828, 0.0806, 0.0863 };
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
   Graph_Graph1->SetMinimum(0.06624);
   Graph_Graph1->SetMaximum(2.90764);
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
   Double_t Graph_fy2[46] = { 2.64, 2.27, 2.54, 2.31, 1.38, 1.11, 1.43, 1.25, 0.626, 0.454, 0.511, 0.891, 0.43, 0.464, 0.333, 0.249, 0.286,
   0.244, 0.153, 0.251, 0.203, 0.249, 0.188, 0.124, 0.11, 0.134, 0.166, 0.162, 0.155, 0.178, 0.154, 0.135, 0.0964,
   0.0896, 0.0807, 0.0847, 0.0924, 0.105, 0.118, 0.104, 0.0825, 0.087, 0.0721, 0.0808, 0.0761, 0.0719 };
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
   Graph_Graph2->SetMinimum(0.06471);
   Graph_Graph2->SetMaximum(2.89681);
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
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fx3[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fy3[33] = { 0.8192852, 0.993613, 0.9854831, 0.3836923, 0.3424206, 0.1929501, 0.2330949, 0.2713887, 0.169442, 0.1330875, 0.05863173, 0.08366116, 0.04132766, 0.04904234, 0.05490871, 0.04215239, 0.02418932,
   0.02553165, 0.02115511, 0.02717102, 0.02266432, 0.01489686, 0.01449719, 0.01423059, 0.01404298, 0.01396985, 0.01388898, 0.01382089, 0.01378306, 0.01375601, 0.01374046, 0.01372196, 0.01368911 };
   graph = new TGraph(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fx3,tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fy3);
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3","",100,760,8440);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->SetMinimum(0.0123202);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->SetMaximum(1.091605);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3002[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3002[31] = { 0.6156878, 0.4530672, 0.3377476, 0.261236, 0.2051281, 0.1616486, 0.1285656, 0.1026193, 0.08271688, 0.06766203, 0.05595154, 0.04691369, 0.03974984, 0.0340541, 0.02952079, 0.02597244, 0.02313983,
   0.02091172, 0.01916829, 0.01779064, 0.01681106, 0.0160103, 0.01540061, 0.01493985, 0.01459461, 0.0143382, 0.01414949, 0.01401187, 0.01391217, 0.0138364, 0.01376616 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3002[31] = { 0.1720507, 0.1266072, 0.09438175, 0.073001, 0.05732196, 0.04517184, 0.03592697, 0.02867641, 0.02311479, 0.01890779, 0.01563536, 0.01310978, 0.01110788, 0.009516233, 0.008249424, 0.007257859, 0.006466301,
   0.005843669, 0.005356476, 0.004971499, 0.004697762, 0.004473994, 0.004303616, 0.004174861, 0.004078386, 0.004006732, 0.003953998, 0.003915543, 0.00388768, 0.003866508, 0.00384688 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3002[31] = { 0.2431173, 0.1796583, 0.1347637, 0.1049962, 0.08310363, 0.06627545, 0.05335236, 0.04321463, 0.03551093, 0.02965357, 0.02513353, 0.02152588, 0.01868124, 0.01640447, 0.01455562, 0.01311272, 0.0119566,
   0.01102421, 0.0102839, 0.009773455, 0.009186012, 0.008817415, 0.008525252, 0.008297926, 0.008130103, 0.007964354, 0.007859179, 0.007780003, 0.007721082, 0.00767541, 0.007653532 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetMinimum(0.008927353);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetMaximum(0.9436937);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx4[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy4[31] = { 0.6927867, 0.3675056, 0.3161232, 0.1752521, 0.1900855, 0.2554064, 0.1916486, 0.1460718, 0.05996613, 0.06127583, 0.03735804, 0.0452862, 0.05174476, 0.04377433, 0.01974806, 0.01696118, 0.01983335,
   0.02724566, 0.02220586, 0.01513713, 0.01469025, 0.01446992, 0.01423791, 0.01408281, 0.01398565, 0.01394983, 0.01388862, 0.01383095, 0.01379708, 0.01377165, 0.01374992 };
   graph = new TGraph(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx4,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy4);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->SetMinimum(0.01237493);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->SetMaximum(0.7606904);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs4);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,760,8440);
   chist_copy__2->SetMinimum(0.002959341);
   chist_copy__2->SetMaximum(66.56499);
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
