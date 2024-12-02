#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SR__gaus__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:28:12 2024) by ROOT version 6.32.02
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
   up__0->Range(-399.2453,-3.294477,9212.83,3.667824);
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
   chist__1->SetMinimum(0.002522046);
   chist__1->SetMaximum(2028.071);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SR__phjet_m_obs","Obs. ","PL");
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.15");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fx3001[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fy3001[32] = { 10.21918, 5.659808, 3.354964, 2.603894, 1.991096, 1.344686, 0.9135114, 0.6711003, 0.5320345, 0.4375453, 0.3458925, 0.2537589, 0.1214007, 0.09504904, 0.07200487, 0.05634792, 0.04545207,
   0.0378165, 0.03227844, 0.02820027, 0.02521189, 0.02291452, 0.0211613, 0.01981395, 0.01877287, 0.01796408, 0.01733181, 0.01683395, 0.01643952, 0.0161243, 0.01587029, 0.01566316 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_felx3001[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fely3001[32] = { 4.734282, 2.622043, 1.554268, 1.206317, 0.9224233, 0.6229585, 0.4232063, 0.3109035, 0.2464779, 0.2027034, 0.1602431, 0.1175599, 0.05624183, 0.04403377, 0.033358, 0.02610454, 0.02105677,
   0.01751941, 0.01495377, 0.01306446, 0.01168002, 0.01061571, 0.009803484, 0.009179291, 0.008696987, 0.008322295, 0.008029379, 0.007798734, 0.007616006, 0.007469973, 0.007352297, 0.007256337 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fehx3001[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fehy3001[32] = { 5.890364, 4.781079, 2.814141, 2.109797, 1.623154, 1.128567, 0.7813403, 0.6001766, 0.5141805, 0.3529736, 0.2278163, 0.1753517, 0.1236396, 0.09242179, 0.07617468, 0.06406922, 0.0553522,
   0.04864396, 0.04369824, 0.03984738, 0.03681884, 0.03458245, 0.03275649, 0.03135124, 0.03023199, 0.02934832, 0.02866457, 0.02816347, 0.02766601, 0.02737239, 0.02708463, 0.02685103 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001","",100,760,8440);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->SetMinimum(0.007566139);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->SetMaximum(17.71966);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fx3002[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fy3002[32] = { 10.21918, 5.659808, 3.354964, 2.603894, 1.991096, 1.344686, 0.9135114, 0.6711003, 0.5320345, 0.4375453, 0.3458925, 0.2537589, 0.1214007, 0.09504904, 0.07200487, 0.05634792, 0.04545207,
   0.0378165, 0.03227844, 0.02820027, 0.02521189, 0.02291452, 0.0211613, 0.01981395, 0.01877287, 0.01796408, 0.01733181, 0.01683395, 0.01643952, 0.0161243, 0.01587029, 0.01566316 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_felx3002[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fely3002[32] = { 2.855695, 1.581603, 0.9375266, 0.7276444, 0.556401, 0.3757654, 0.2552759, 0.1875354, 0.1486742, 0.1222697, 0.09665779, 0.07091156, 0.03392478, 0.02656095, 0.02012137, 0.01574613, 0.01270134,
   0.01056762, 0.009020037, 0.007880414, 0.007045328, 0.00640334, 0.005913411, 0.005536901, 0.005245978, 0.005019966, 0.00484328, 0.004704156, 0.004593935, 0.004505849, 0.004434868, 0.004376985 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehx3002[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehy3002[32] = { 3.530161, 2.171173, 1.279447, 0.9646798, 0.7433173, 0.5121309, 0.3533436, 0.2681346, 0.2264461, 0.1887422, 0.1251688, 0.08872426, 0.05725872, 0.03854405, 0.03092585, 0.02547744, 0.02137435,
   0.01837245, 0.01613314, 0.01440202, 0.01302694, 0.0120071, 0.01113384, 0.01056769, 0.01008395, 0.009704489, 0.009405894, 0.009168836, 0.008988619, 0.008781639, 0.008658517, 0.008558793 };
   grae = new TGraphAsymmErrors(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002","",100,760,8440);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->SetMinimum(0.01015756);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->SetMaximum(15.12315);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
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
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
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
   
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fx1[32] = { 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 4000, 4200, 4400, 4600, 4800,
   5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fy1[32] = { 6.994833, 10.10339, 4.504708, 1.757709, 1.219746, 1.263659, 1.105303, 0.7893554, 0.5392376, 0.3939351, 0.30952, 0.2452524, 0.1414112, 0.1061159, 0.08077276, 0.06283242, 0.05021739,
   0.04111273, 0.03471212, 0.02975638, 0.0260258, 0.02330914, 0.02123231, 0.01960914, 0.01839291, 0.01745165, 0.01667562, 0.01615045, 0.01574332, 0.0154276, 0.0151813, 0.01501248 };
   TGraph *graph = new TGraph(32,tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fx1,tgraph__gaus_width0p15__Nom__SR__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p15__Nom__SR__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1","",100,760,8440);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->SetMinimum(0.01351123);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->SetMaximum(11.11223);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SR__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,760,8440);
   chist_copy__2->SetMinimum(0.002522046);
   chist_copy__2->SetMaximum(2028.071);
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
