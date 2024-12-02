#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRC50__width0p02__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:54 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.156431,8036.226,1.849785);
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
   chist__1->SetMinimum(0.002208975);
   chist__1->SetMaximum(38.93997);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs","Obs. ","PL");
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.02");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fx3001[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fy3001[29] = { 0.8164591, 0.5650953, 0.4095534, 0.3081763, 0.2352097, 0.179719, 0.1389411, 0.1100019, 0.086843, 0.06966374, 0.05642008, 0.04608348, 0.03833544, 0.03205648, 0.02741685, 0.02379441, 0.02102126,
   0.01894352, 0.01748014, 0.0163741, 0.01553102, 0.01493937, 0.01454422, 0.01426356, 0.01404706, 0.01391529, 0.0138412, 0.01376031, 0.01371883 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_felx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fely3001[29] = { 0.3782444, 0.2617941, 0.1897356, 0.1427701, 0.1089666, 0.08325918, 0.06436783, 0.05096106, 0.04023212, 0.03227341, 0.02613797, 0.02134929, 0.01775982, 0.01485094, 0.01270152, 0.01102334, 0.009738607,
   0.008776045, 0.008098099, 0.007585697, 0.00719512, 0.006921027, 0.006737961, 0.006607937, 0.00650764, 0.006446596, 0.00641227, 0.006374796, 0.00635558 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fehx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fehy3001[29] = { 0.7337691, 0.4993043, 0.3761849, 0.2827264, 0.2147206, 0.1675435, 0.1343094, 0.1047552, 0.08713734, 0.07196509, 0.06054903, 0.05174935, 0.04501254, 0.03983235, 0.03572779, 0.03275113, 0.03055064,
   0.02883636, 0.02755653, 0.0266625, 0.02597516, 0.02557358, 0.02527114, 0.02505619, 0.02489724, 0.02480128, 0.02474814, 0.02471182, 0.02468315 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->SetMinimum(0.006626924);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->SetMaximum(1.704515);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3002[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3002[29] = { 0.8164591, 0.5650953, 0.4095534, 0.3081763, 0.2352097, 0.179719, 0.1389411, 0.1100019, 0.086843, 0.06966374, 0.05642008, 0.04608348, 0.03833544, 0.03205648, 0.02741685, 0.02379441, 0.02102126,
   0.01894352, 0.01748014, 0.0163741, 0.01553102, 0.01493937, 0.01454422, 0.01426356, 0.01404706, 0.01391529, 0.0138412, 0.01376031, 0.01371883 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3002[29] = { 0.2281551, 0.1579129, 0.1144475, 0.08611821, 0.06572808, 0.05022151, 0.03882634, 0.03073945, 0.02426781, 0.01946716, 0.01576629, 0.01287778, 0.01071263, 0.008958011, 0.00766149, 0.006649221, 0.005874277,
   0.005293665, 0.004884732, 0.004575653, 0.004340059, 0.004174728, 0.004064304, 0.003985874, 0.003925375, 0.003888554, 0.003867849, 0.003845245, 0.003833653 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3002[29] = { 0.3142573, 0.2234769, 0.1612454, 0.1235598, 0.09498546, 0.07383116, 0.05912286, 0.04631406, 0.03670938, 0.03029571, 0.02521121, 0.02109876, 0.01807696, 0.01558992, 0.0136226, 0.01225133, 0.01111798,
   0.01024797, 0.009564646, 0.008997873, 0.0085955, 0.008302355, 0.008107595, 0.007924993, 0.00780087, 0.00772359, 0.007678055, 0.007649978, 0.007623804 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->SetMinimum(0.008896658);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->SetMaximum(1.2428);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
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
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
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
   
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx1[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy1[29] = { 0.9072906, 0.4217105, 0.4345653, 0.4016608, 0.1715572, 0.1549278, 0.1298564, 0.1495244, 0.08629203, 0.05493229, 0.04790922, 0.02932806, 0.05927906, 0.03257054, 0.02709482, 0.02309875, 0.01594141,
   0.0258554, 0.02782621, 0.01795036, 0.01433541, 0.01408004, 0.01395343, 0.01393519, 0.01384823, 0.01379141, 0.01378911, 0.01376426, 0.01372465 };
   TGraph *graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetMinimum(0.01235218);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetMaximum(0.9966472);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRC50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.002208975);
   chist_copy__2->SetMaximum(38.93997);
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
