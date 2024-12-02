#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRB__width0p07__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:46 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.160052,8036.226,1.873194);
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
   chist__1->SetMinimum(0.00220431);
   chist__1->SetMaximum(40.96412);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"SRB");
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
   
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fx3001[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fy3001[29] = { 0.877131, 0.5153669, 0.3857932, 0.2866402, 0.2055844, 0.1514864, 0.116483, 0.09300667, 0.07145113, 0.05520448, 0.04404196, 0.03448811, 0.02642601, 0.02271324, 0.01994884, 0.01790754, 0.01584583,
   0.01547809, 0.01488396, 0.01448511, 0.01421663, 0.01403749, 0.0139176, 0.01382396, 0.01377117, 0.01373643, 0.01371385, 0.01369928, 0.01368986 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_felx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fely3001[29] = { 0.4063521, 0.2387562, 0.178728, 0.132793, 0.09524197, 0.07017975, 0.05396356, 0.04308759, 0.03310147, 0.02557482, 0.0204035, 0.01597745, 0.01224249, 0.01052246, 0.009241786, 0.0082961, 0.007340965,
   0.0071706, 0.006895353, 0.006710576, 0.006586198, 0.006503209, 0.006447667, 0.006404283, 0.006379825, 0.006363734, 0.006353273, 0.006346524, 0.006342157 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fehx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fehy3001[29] = { 0.7536799, 0.4493998, 0.3351153, 0.2520554, 0.1855589, 0.1416923, 0.1128584, 0.08904891, 0.07175697, 0.05808982, 0.04546131, 0.03886751, 0.03499939, 0.03115596, 0.02933605, 0.02790271, 0.02646877,
   0.02617756, 0.02563537, 0.02532919, 0.02509728, 0.02494193, 0.02483898, 0.02478246, 0.02473726, 0.02470754, 0.02468821, 0.02467566, 0.02466756 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->SetMinimum(0.006612929);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->SetMaximum(1.793157);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fx3002[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fy3002[29] = { 0.877131, 0.5153669, 0.3857932, 0.2866402, 0.2055844, 0.1514864, 0.116483, 0.09300667, 0.07145113, 0.05520448, 0.04404196, 0.03448811, 0.02642601, 0.02271324, 0.01994884, 0.01790754, 0.01584583,
   0.01547809, 0.01488396, 0.01448511, 0.01421663, 0.01403749, 0.0139176, 0.01382396, 0.01377117, 0.01373643, 0.01371385, 0.01369928, 0.01368986 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_felx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fely3002[29] = { 0.2451095, 0.1440165, 0.1078078, 0.08010007, 0.05744947, 0.04233207, 0.03255054, 0.02599022, 0.01996663, 0.0154266, 0.01230729, 0.009637518, 0.007384606, 0.006347094, 0.005574598, 0.005004165, 0.004428033,
   0.004325269, 0.004159242, 0.004047785, 0.003972761, 0.003922702, 0.0038892, 0.003863031, 0.003848278, 0.003838572, 0.003832263, 0.00382819, 0.003825556 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehx3002[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehy3002[29] = { 0.3400096, 0.2016667, 0.1498827, 0.1126991, 0.08908113, 0.07745731, 0.04877462, 0.0378445, 0.03046105, 0.02419683, 0.018801, 0.01454559, 0.01298232, 0.01077229, 0.01036765, 0.00946611, 0.008726179,
   0.008520764, 0.008241194, 0.008007892, 0.007867839, 0.007771473, 0.007706453, 0.007676675, 0.007647579, 0.007634849, 0.007622349, 0.007593036, 0.007587735 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->SetMinimum(0.008877869);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->SetMaximum(1.337868);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fx3003[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fy3003[29] = { 0.877131, 0.5153669, 0.3857932, 0.2866402, 0.2055844, 0.1514864, 0.116483, 0.09300667, 0.07145113, 0.05520448, 0.04404196, 0.03448811, 0.02642601, 0.02271324, 0.01994884, 0.01790754, 0.01584583,
   0.01547809, 0.01488396, 0.01448511, 0.01421663, 0.01403749, 0.0139176, 0.01382396, 0.01377117, 0.01373643, 0.01371385, 0.01369928, 0.01368986 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_felx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fely3003[29] = { 0.2451095, 0.1440165, 0.1078078, 0.08010007, 0.05744947, 0.04233207, 0.03255054, 0.02599022, 0.01996663, 0.0154266, 0.01230729, 0.009637518, 0.007384606, 0.006347094, 0.005574598, 0.005004165, 0.004428033,
   0.004325269, 0.004159242, 0.004047785, 0.003972761, 0.003922702, 0.0038892, 0.003863031, 0.003848278, 0.003838572, 0.003832263, 0.00382819, 0.003825556 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehy3003[29] = { 0.3400096, 0.2016667, 0.1498827, 0.1126991, 0.08908113, 0.07745731, 0.04877462, 0.0378445, 0.03046105, 0.02419683, 0.018801, 0.01454559, 0.01298232, 0.01077229, 0.01036765, 0.00946611, 0.008726179,
   0.008520764, 0.008241194, 0.008007892, 0.007867839, 0.007771473, 0.007706453, 0.007676675, 0.007647579, 0.007634849, 0.007622349, 0.007593036, 0.007587735 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->SetMinimum(0.008877869);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->SetMaximum(1.337868);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fx1[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fy1[29] = { 0.614295, 0.5822282, 0.4405289, 0.4353821, 0.1727673, 0.08602399, 0.09445352, 0.1282567, 0.1078564, 0.06986139, 0.04572835, 0.03352009, 0.02504345, 0.01947444, 0.01648264, 0.01535912, 0.01446922,
   0.0143135, 0.01408269, 0.01399729, 0.01394405, 0.01383995, 0.01384443, 0.01377257, 0.01375211, 0.01374324, 0.01372412, 0.01369233, 0.01374688 };
   TGraph *graph = new TGraph(29,tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fx1,tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->SetMinimum(0.0123231);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->SetMaximum(0.6743553);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.00220431);
   chist_copy__2->SetMaximum(40.96412);
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
