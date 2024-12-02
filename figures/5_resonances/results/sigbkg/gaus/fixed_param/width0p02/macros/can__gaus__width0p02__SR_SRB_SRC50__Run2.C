#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__width0p02__SR_SRB_SRC50__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 13:53:20 2024) by ROOT version 6.32.02
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
   up__0->Range(-537.3585,-3.042737,9224.906,2.089147);
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
   chist__1->SetMinimum(0.002954276);
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
   
   TLegend *leg = new TLegend(0.540201,0.7474,0.879397,0.9234,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","ATLAS 36.1 fb^{-1} Exp., #sigma_{G}/m_{G}=0.02","L");
   entry->SetLineColor(14);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","ATLAS 36.1 fb^{-1} Obs., #sigma_{G}/m_{G}=0.02","L");
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
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs","SRB","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs","SRC50","PL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.70516,0.879397,0.74036,NULL,"brNDC");
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
      tex = new TLatex(0.160804,0.7738,"#sigma_{G}/m_{G}=0.02");
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
   grae->SetLineWidth(4);

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
   graph->SetLineWidth(4);

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
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3002[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3002[29] = { 0.3230809, 0.2249303, 0.1708023, 0.128091, 0.09788312, 0.07621336, 0.05956569, 0.04767097, 0.03885354, 0.0314597, 0.02599546, 0.02274691, 0.01920974, 0.01740341, 0.0161141, 0.01521086, 0.01462023,
   0.01424338, 0.0140095, 0.01386829, 0.01371853, 0.01372381, 0.01369708, 0.01368243, 0.01367456, 0.01367043, 0.01366829, 0.0136672, 0.01366666 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3002[29] = { 0.09028321, 0.06285556, 0.04772978, 0.03579435, 0.02735291, 0.02129741, 0.01664532, 0.0133214, 0.01085741, 0.008791244, 0.007264291, 0.006356503, 0.005368058, 0.004863291, 0.004502997, 0.004250594, 0.004085546,
   0.003980235, 0.00391488, 0.00387542, 0.003833568, 0.003835046, 0.003827577, 0.003823482, 0.003821283, 0.003820127, 0.00381953, 0.003819225, 0.003819075 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3002[29] = { 0.1289749, 0.09082138, 0.06662173, 0.05317215, 0.04141959, 0.03226802, 0.02645493, 0.02177281, 0.01822663, 0.01523147, 0.01288508, 0.01174044, 0.01027756, 0.009498442, 0.008928996, 0.008438034, 0.008159354,
   0.007912678, 0.007778875, 0.007694568, 0.007623348, 0.007626948, 0.007616187, 0.007585307, 0.007580021, 0.007577207, 0.007575749, 0.007575003, 0.007574629 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetMinimum(0.008862828);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetMaximum(0.4962767);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx4[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy4[29] = { 0.3059949, 0.1822239, 0.1692658, 0.1967188, 0.07973257, 0.06377523, 0.05077324, 0.05614776, 0.06416271, 0.03081094, 0.02186922, 0.02805254, 0.01631152, 0.01502355, 0.01451346, 0.01417622, 0.01412868,
   0.01392072, 0.01383071, 0.01378279, 0.0137255, 0.01373723, 0.01358756, 0.01374401, 0.0136841, 0.01371452, 0.01368302, 0.01368267, 0.01360748 };
   graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx4,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy4);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->SetMinimum(0.0122288);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->SetMaximum(0.3352356);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs4);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3003[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3003[29] = { 0.8164591, 0.5650953, 0.4095534, 0.3081763, 0.2352097, 0.179719, 0.1389411, 0.1100019, 0.086843, 0.06966374, 0.05642008, 0.04608348, 0.03833544, 0.03205648, 0.02741685, 0.02379441, 0.02102126,
   0.01894352, 0.01748014, 0.0163741, 0.01553102, 0.01493937, 0.01454422, 0.01426356, 0.01404706, 0.01391529, 0.0138412, 0.01376031, 0.01371883 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3003[29] = { 0.2281551, 0.1579129, 0.1144475, 0.08611821, 0.06572808, 0.05022151, 0.03882634, 0.03073945, 0.02426781, 0.01946716, 0.01576629, 0.01287778, 0.01071263, 0.008958011, 0.00766149, 0.006649221, 0.005874277,
   0.005293665, 0.004884732, 0.004575653, 0.004340059, 0.004174728, 0.004064304, 0.003985874, 0.003925375, 0.003888554, 0.003867849, 0.003845245, 0.003833653 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3003[29] = { 0.3142573, 0.2234769, 0.1612454, 0.1235598, 0.09498546, 0.07383116, 0.05912286, 0.04631406, 0.03670938, 0.03029571, 0.02521121, 0.02109876, 0.01807696, 0.01558992, 0.0136226, 0.01225133, 0.01111798,
   0.01024797, 0.009564646, 0.008997873, 0.0085955, 0.008302355, 0.008107595, 0.007924993, 0.00780087, 0.00772359, 0.007678055, 0.007649978, 0.007623804 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetMinimum(0.008896658);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetMaximum(1.2428);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx5[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy5[29] = { 0.9072906, 0.4217105, 0.4345653, 0.4016608, 0.1715572, 0.1549278, 0.1298564, 0.1495244, 0.08629203, 0.05493229, 0.04790922, 0.02932806, 0.05927906, 0.03257054, 0.02709482, 0.02309875, 0.01594141,
   0.0258554, 0.02782621, 0.01795036, 0.01433541, 0.01408004, 0.01395343, 0.01393519, 0.01384823, 0.01379141, 0.01378911, 0.01376426, 0.01372465 };
   graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx5,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy5);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->SetMinimum(0.01235218);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->SetMaximum(0.9966472);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs5);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,8440);
   chist_copy__2->SetMinimum(0.002954276);
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
