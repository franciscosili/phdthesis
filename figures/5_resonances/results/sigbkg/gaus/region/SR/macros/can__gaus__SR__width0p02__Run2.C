#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SR__width0p02__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:18 2024) by ROOT version 6.32.02
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
   up__0->Range(-399.2453,-3.179405,9212.83,2.047442);
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
   chist__1->SetMinimum(0.002204348);
   chist__1->SetMaximum(59.78901);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SR__phjet_m_obs","Obs. ","PL");
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.02");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fx3001[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fy3001[33] = { 1.271553, 0.9107315, 0.6559292, 0.4973253, 0.3843244, 0.2975258, 0.2310256, 0.180801, 0.1429956, 0.1144516, 0.0924719, 0.07510052, 0.06134415, 0.05050465, 0.04194883, 0.035138, 0.02974523,
   0.02571186, 0.02255507, 0.02015935, 0.01832218, 0.01703044, 0.01603439, 0.01527536, 0.01475946, 0.01439766, 0.01414872, 0.01398075, 0.01386961, 0.01378367, 0.01373752, 0.01370807, 0.01369009 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_felx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fely3001[33] = { 0.5890778, 0.4219184, 0.3038751, 0.230398, 0.1780476, 0.137836, 0.1070282, 0.08376043, 0.06624617, 0.05302246, 0.04283985, 0.03479213, 0.02841917, 0.0233975, 0.01943381, 0.01627853, 0.0137802,
   0.01191164, 0.01044918, 0.009339309, 0.008488192, 0.007889764, 0.007428319, 0.007076681, 0.006837675, 0.006670063, 0.006554738, 0.006476923, 0.006425433, 0.006385617, 0.006364237, 0.006350597, 0.006342266 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fehx3001[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fehy3001[33] = { 1.10869, 0.7968831, 0.577332, 0.440944, 0.3433751, 0.2685279, 0.2113148, 0.1679965, 0.1355288, 0.1108859, 0.09178324, 0.07676951, 0.06490001, 0.05559131, 0.04817901, 0.04238255, 0.03783526,
   0.03439516, 0.03175391, 0.02981112, 0.02834348, 0.02719292, 0.02641474, 0.02584481, 0.02543957, 0.02516233, 0.02497486, 0.02485054, 0.02476963, 0.024729, 0.02469641, 0.02467594, 0.02466362 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001","",100,760,8440);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->SetMinimum(0.006613043);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->SetMaximum(2.617533);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fx3002[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fy3002[33] = { 1.271553, 0.9107315, 0.6559292, 0.4973253, 0.3843244, 0.2975258, 0.2310256, 0.180801, 0.1429956, 0.1144516, 0.0924719, 0.07510052, 0.06134415, 0.05050465, 0.04194883, 0.035138, 0.02974523,
   0.02571186, 0.02255507, 0.02015935, 0.01832218, 0.01703044, 0.01603439, 0.01527536, 0.01475946, 0.01439766, 0.01414872, 0.01398075, 0.01386961, 0.01378367, 0.01373752, 0.01370807, 0.01369009 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_felx3002[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fely3002[33] = { 0.3553287, 0.254499, 0.1832959, 0.1389749, 0.1073974, 0.08314198, 0.06455887, 0.05052385, 0.03995935, 0.03198288, 0.02584077, 0.02098644, 0.01714229, 0.01411325, 0.01172237, 0.009819124, 0.008312144,
   0.007185043, 0.006302894, 0.005633422, 0.005120034, 0.004759065, 0.004480724, 0.004268618, 0.004124451, 0.004023348, 0.003953784, 0.003906847, 0.003875788, 0.003851772, 0.003838875, 0.003830647, 0.003825622 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehx3002[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehy3002[33] = { 0.4992247, 0.3585594, 0.2592237, 0.197047, 0.1530225, 0.1192504, 0.0934493, 0.0738763, 0.05918906, 0.04799244, 0.03943641, 0.03264965, 0.02719063, 0.02296372, 0.01953553, 0.01683637, 0.01468128,
   0.01305851, 0.01177082, 0.01076423, 0.01000391, 0.00929966, 0.008857773, 0.008516301, 0.00821853, 0.007998259, 0.007858826, 0.007761381, 0.007694874, 0.007664234, 0.007635355, 0.007623092, 0.007590181 };
   grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002","",100,760,8440);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->SetMinimum(0.008878022);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->SetMaximum(1.946869);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fx3003[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fy3003[33] = { 1.271553, 0.9107315, 0.6559292, 0.4973253, 0.3843244, 0.2975258, 0.2310256, 0.180801, 0.1429956, 0.1144516, 0.0924719, 0.07510052, 0.06134415, 0.05050465, 0.04194883, 0.035138, 0.02974523,
   0.02571186, 0.02255507, 0.02015935, 0.01832218, 0.01703044, 0.01603439, 0.01527536, 0.01475946, 0.01439766, 0.01414872, 0.01398075, 0.01386961, 0.01378367, 0.01373752, 0.01370807, 0.01369009 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_felx3003[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fely3003[33] = { 0.3553287, 0.254499, 0.1832959, 0.1389749, 0.1073974, 0.08314198, 0.06455887, 0.05052385, 0.03995935, 0.03198288, 0.02584077, 0.02098644, 0.01714229, 0.01411325, 0.01172237, 0.009819124, 0.008312144,
   0.007185043, 0.006302894, 0.005633422, 0.005120034, 0.004759065, 0.004480724, 0.004268618, 0.004124451, 0.004023348, 0.003953784, 0.003906847, 0.003875788, 0.003851772, 0.003838875, 0.003830647, 0.003825622 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehx3003[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehy3003[33] = { 0.4992247, 0.3585594, 0.2592237, 0.197047, 0.1530225, 0.1192504, 0.0934493, 0.0738763, 0.05918906, 0.04799244, 0.03943641, 0.03264965, 0.02719063, 0.02296372, 0.01953553, 0.01683637, 0.01468128,
   0.01305851, 0.01177082, 0.01076423, 0.01000391, 0.00929966, 0.008857773, 0.008516301, 0.00821853, 0.007998259, 0.007858826, 0.007761381, 0.007694874, 0.007664234, 0.007635355, 0.007623092, 0.007590181 };
   grae = new TGraphAsymmErrors(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003","",100,760,8440);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->SetMinimum(0.008878022);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->SetMaximum(1.946869);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SR__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fx1[33] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fy1[33] = { 0.8192852, 0.993613, 0.9854831, 0.3836923, 0.3424206, 0.1929501, 0.2330949, 0.2713887, 0.169442, 0.1330875, 0.05863173, 0.08366116, 0.04132766, 0.04904234, 0.05490871, 0.04215239, 0.02418932,
   0.02553165, 0.02115511, 0.02717102, 0.02266432, 0.01489686, 0.01449719, 0.01423059, 0.01404298, 0.01396985, 0.01388898, 0.01382089, 0.01378306, 0.01375601, 0.01374046, 0.01372196, 0.01368911 };
   TGraph *graph = new TGraph(33,tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SR__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
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
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,760,8440);
   chist_copy__2->SetMinimum(0.002204348);
   chist_copy__2->SetMaximum(59.78901);
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
