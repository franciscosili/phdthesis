#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__f1p00__c__SRC50__qstar__1p0_0p5__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 19:07:23 2024) by ROOT version 6.32.02
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
   up__0->Range(583.2207,-3.053744,4588.753,5.712561);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,1066.3,4266.7);
   chist__1->SetMinimum(0.006651);
   chist__1->SetMaximum(181279.4);
   chist__1->SetDirectory(nullptr);
   chist__1->SetStats(0);
   chist__1->SetLineColor(0);
   chist__1->SetLineWidth(0);
   chist__1->SetMarkerColor(0);
   chist__1->SetMarkerStyle(20);
   chist__1->SetMarkerSize(0);
   chist__1->GetXaxis()->SetTitle("Excited quark mass [GeV]");
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
   
   TLegend *leg = new TLegend(0.540201,0.7914,0.879397,0.9322,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p0","LO prediction, c*, f=1.00","L");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#8c613c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p0","c*, f=1.00","PL");

   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p5","LO prediction, c*, f=0.50","L");

   ci = TColor::GetColor("#dc7ec0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p5","c*, f=0.50","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.74916,0.879397,0.78436,NULL,"brNDC");
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
      tex = new TLatex(0.160804,0.7738,"SRC50");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.743,"c*");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6858,"c*, f=1.00 Exp. limit = 3016.6 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6594,"c*, f=1.00 Obs. limit = 3220.2 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.633,"c*, f=0.50 Exp. limit = 2357.5 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6066,"c*, f=0.50 Obs. limit = 2392.8 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p0_fx1[36] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p0_fy1[36] = { 36170, 15720, 7668, 4019, 2240, 1310, 793.1, 492, 316.6, 208.4, 139.6, 95.51, 65.89, 46.52, 32.89, 23.63, 17.15,
   12.52, 9.169, 6.748, 5.049, 3.779, 2.851, 2.159, 1.635, 1.244, 0.9504, 0.724, 0.5543, 0.4272, 0.3293, 0.254, 0.1972,
   0.1517, 0.1173, 0.09083 };
   TGraph *graph = new TGraph(36,tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p0_fx1,tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p0_fy1);
   graph->SetName("tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#8c613c");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#8c613c");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01","",100,150,4350);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetMinimum(0.081747);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetMaximum(39786.99);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetStats(0);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetLineWidth(2);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetMarkerStyle(20);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->SetMarkerSize(1.2);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy1p01);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fx3001[25] = { 1333, 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fy3001[25] = { 14.51461, 12.04944, 8.971436, 6.932876, 5.948689, 4.723401, 3.966456, 3.494215, 3.045578, 2.631594, 2.273165, 1.97414, 1.726247, 1.521364, 1.351271, 1.205289, 1.100111,
   1.006628, 0.9166009, 0.8312077, 0.751046, 0.6768433, 0.6096503, 0.5498911, 0.4985997 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_felx3001[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fely3001[25] = { 4.05603, 3.367152, 2.50702, 1.937355, 1.662329, 1.319929, 1.108405, 0.9764398, 0.8510702, 0.7353849, 0.6352238, 0.5516627, 0.4823904, 0.4251368, 0.3776054, 0.3368116, 0.3074201,
   0.2812969, 0.2561391, 0.2322765, 0.2098757, 0.1891403, 0.1703635, 0.1536641, 0.139331 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fehx3001[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fehy3001[25] = { 6.489025, 5.422136, 4.029584, 3.128517, 2.249042, 2.136859, 1.787849, 1.583512, 1.387612, 1.206367, 1.045406, 0.9138821, 0.8028389, 0.7157609, 0.6420938, 0.5815647, 0.5384338,
   0.49279, 0.4500208, 0.4085901, 0.3693204, 0.3334383, 0.3019368, 0.2749625, 0.2507452 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fx3001,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fy3001,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_felx3001,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fehx3001,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fely3001,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0_fehy3001);
   grae->SetName("tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p0");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001","",100,1066.3,4266.7);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->SetMinimum(0.3233418);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->SetMaximum(23.06807);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy1p03001);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p0_fx2[25] = { 1333, 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p0_fy2[25] = { 15.064, 7.896627, 7.139402, 10.11783, 9.795125, 5.247374, 3.528963, 3.570594, 1.960616, 1.792754, 2.719906, 2.884786, 2.614322, 1.673239, 1.060551, 0.8308324, 0.7237214,
   0.6853372, 0.6182186, 0.7052617, 0.8629523, 0.8382936, 0.7263154, 0.6110353, 0.5577026 };
   graph = new TGraph(25,tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p0_fx2,tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p0_fy2);
   graph->SetName("tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02","",100,1066.3,4266.7);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->SetMinimum(0.5019324);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->SetMaximum(16.51463);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy1p02);
   
   graph->Draw(" plx");
   
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p5_fx3[36] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p5_fy3[36] = { 9062, 3990, 1951, 1019, 567.8, 331.8, 200.1, 125.6, 81.09, 53.2, 35.71, 24.35, 16.85, 11.77, 8.454, 6.031, 4.353,
   3.182, 2.335, 1.724, 1.279, 0.9645, 0.7244, 0.5456, 0.4122, 0.3143, 0.2388, 0.1827, 0.1396, 0.1068, 0.08219, 0.06303, 0.04851,
   0.03758, 0.02879, 0.02217 };
   graph = new TGraph(36,tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p5_fx3,tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p5_fy3);
   graph->SetName("tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p5");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#dc7ec0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#dc7ec0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53","",100,150,4350);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetMinimum(0.019953);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetMaximum(9968.198);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetStats(0);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetLineWidth(2);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetMarkerStyle(20);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->SetMarkerSize(1.2);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_xs_fy0p53);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fx3002[14] = { 1333, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fy3002[14] = { 10.49334, 5.30431, 4.362023, 3.657701, 3.080453, 2.694848, 2.334658, 2.021019, 1.750768, 1.524757, 1.335751, 1.179807, 1.048192, 0.9359614 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_felx3002[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fely3002[14] = { 2.932307, 1.482261, 1.218944, 1.022125, 0.860816, 0.7530609, 0.6524077, 0.5647628, 0.4892428, 0.4260851, 0.3732685, 0.3296907, 0.2929117, 0.2615494 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fehx3002[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fehy3002[14] = { 4.764777, 2.401636, 1.976982, 1.663243, 1.399565, 1.224513, 1.066712, 0.9319056, 0.8146447, 0.7132923, 0.6277603, 0.5602532, 0.501957, 0.4539437 };
   grae = new TGraphAsymmErrors(14,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fx3002,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fy3002,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_felx3002,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fehx3002,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fely3002,tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5_fehy3002);
   grae->SetName("tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p5");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002","",100,1166.3,3166.7);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->SetMinimum(0.6069708);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->SetMaximum(16.71649);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_exp_sigma1_fy0p53002);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p5_fx4[14] = { 1333, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000 };
   Double_t tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p5_fy4[14] = { 11.1427, 7.733315, 7.505149, 3.845839, 2.646943, 3.113944, 1.42919, 1.294531, 2.162659, 2.457326, 2.127484, 1.290205, 0.8079671, 0.6390575 };
   graph = new TGraph(14,tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p5_fx4,tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p5_fy4);
   graph->SetName("tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p5");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54 = new TH1F("Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54","",100,1166.3,3166.7);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->SetMinimum(0.5751517);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->SetMaximum(12.19306);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->SetDirectory(nullptr);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->SetLineColor(ci);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__cStar__Nom__SRC50__phjet_m_obs_fy0p54);
   
   graph->Draw(" plx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1066.3,4266.7);
   chist_copy__2->SetMinimum(0.006651);
   chist_copy__2->SetMaximum(181279.4);
   chist_copy__2->SetDirectory(nullptr);
   chist_copy__2->SetStats(0);
   chist_copy__2->SetLineColor(0);
   chist_copy__2->SetLineWidth(0);
   chist_copy__2->SetMarkerColor(0);
   chist_copy__2->SetMarkerStyle(20);
   chist_copy__2->SetMarkerSize(0);
   chist_copy__2->GetXaxis()->SetTitle("Excited quark mass [GeV]");
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
