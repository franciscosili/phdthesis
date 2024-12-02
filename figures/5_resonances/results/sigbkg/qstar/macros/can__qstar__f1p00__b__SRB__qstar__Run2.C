#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__f1p00__b__SRB__qstar__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 19:05:05 2024) by ROOT version 6.32.02
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
   up__0->Range(298.8094,-3.255669,4637.76,4.925143);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,822.1,4288.9);
   chist__1->SetMinimum(0.003651);
   chist__1->SetMaximum(31715.13);
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
   
   TLegend *leg = new TLegend(0.540201,0.8266,0.879397,0.9322,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0","Exp.#pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0","Exp.#pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p0","LO prediction, b*","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.78436,0.879397,0.81956,NULL,"brNDC");
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
      tex = new TLatex(0.160804,0.7738,"SRB");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.743,"b*, f=1.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.72804," Exp. limit = 2458.0 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.70164," Obs. limit = 2493.7 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fx3001[27] = { 1111, 1222, 1333, 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889,
   3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fy3001[27] = { 6.726243, 7.256554, 4.686663, 4.006965, 3.488781, 2.868609, 2.272387, 1.803264, 1.454681, 1.256059, 1.100692, 0.9723528, 0.861645, 0.7620269, 0.6710359, 0.5882866, 0.5150097,
   0.4511252, 0.4057022, 0.3653758, 0.3309497, 0.3011577, 0.2760334, 0.2549009, 0.2378011, 0.22328, 0.2112911 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_felx3001[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fely3001[27] = { 3.116095, 3.361774, 2.17121, 1.856323, 1.616263, 1.328952, 1.052738, 0.8354058, 0.673916, 0.5818995, 0.5099223, 0.450466, 0.3991779, 0.3530274, 0.3108736, 0.272538, 0.2385907,
   0.2089947, 0.1879514, 0.1692692, 0.1533205, 0.1395186, 0.1278791, 0.118089, 0.1101671, 0.1034399, 0.09788573 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fehx3001[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fehy3001[27] = { 5.832396, 7.932087, 5.230678, 4.441849, 3.870303, 3.210361, 2.572385, 2.066596, 1.68969, 1.47966, 1.313121, 1.129931, 0.9630009, 0.8273957, 0.7327683, 0.6498832, 0.5849516,
   0.5317983, 0.4989979, 0.4715501, 0.4474081, 0.4244266, 0.4036917, 0.3859517, 0.3677852, 0.3544243, 0.3438622 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(27,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fx3001,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fy3001,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_felx3001,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fehx3001,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fely3001,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0_fehy3001);
   grae->SetName("tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p0");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001 = new TH1F("Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001","",100,822.1,4288.9);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->SetMinimum(0.1020649);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->SetMaximum(16.69616);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->SetDirectory(nullptr);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->SetLineColor(ci);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma2_fy1p03001);
   
   grae->Draw(" 3");
   
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fx3002[27] = { 1111, 1222, 1333, 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889,
   3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fy3002[27] = { 6.726243, 7.256554, 4.686663, 4.006965, 3.488781, 2.868609, 2.272387, 1.803264, 1.454681, 1.256059, 1.100692, 0.9723528, 0.861645, 0.7620269, 0.6710359, 0.5882866, 0.5150097,
   0.4511252, 0.4057022, 0.3653758, 0.3309497, 0.3011577, 0.2760334, 0.2549009, 0.2378011, 0.22328, 0.2112911 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_felx3002[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fely3002[27] = { 1.879612, 2.027805, 1.309663, 1.119725, 0.9749212, 0.8016172, 0.6350063, 0.5039125, 0.4065027, 0.3509988, 0.3075825, 0.2717187, 0.2407821, 0.2129443, 0.1875174, 0.1643935, 0.1439167,
   0.1260645, 0.1133713, 0.1021023, 0.09248212, 0.0841569, 0.07713604, 0.0712307, 0.06645223, 0.06239438, 0.05904417 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehx3002[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehy3002[27] = { 1.988201, 3.293966, 2.112514, 1.795051, 1.563203, 1.294009, 1.035697, 0.8273929, 0.6757687, 0.5905764, 0.523345, 0.4655647, 0.4009159, 0.3407081, 0.2933686, 0.2581985, 0.2308744,
   0.2093915, 0.1941957, 0.1807909, 0.1677444, 0.1562991, 0.1459938, 0.1371676, 0.1293748, 0.122924, 0.1177734 };
   grae = new TGraphAsymmErrors(27,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fx3002,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fy3002,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_felx3002,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehx3002,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fely3002,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehy3002);
   grae->SetName("tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002 = new TH1F("Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002","",100,822.1,4288.9);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->SetMinimum(0.1370223);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->SetMaximum(11.59035);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->SetDirectory(nullptr);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->SetLineColor(ci);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03002);
   
   grae->Draw(" 3");
   
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p0_fx1[36] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p0_fy1[36] = { 6328, 2725, 1304, 674.9, 372.8, 216.1, 130.1, 80.49, 51.43, 33.54, 22.32, 15.12, 10.39, 7.227, 5.093, 3.645, 2.615,
   1.893, 1.386, 1.009, 0.7495, 0.5543, 0.415, 0.3122, 0.2346, 0.177, 0.1339, 0.1018, 0.07779, 0.05907, 0.04514, 0.03466, 0.02668,
   0.02049, 0.01575, 0.01217 };
   TGraph *graph = new TGraph(36,tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p0_fx1,tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p0_fy1);
   graph->SetName("tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01 = new TH1F("Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01","",100,150,4350);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetMinimum(0.010953);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetMaximum(6960.799);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetDirectory(nullptr);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetStats(0);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetLineWidth(2);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetMarkerStyle(20);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->SetMarkerSize(1.2);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__bStar__Nom__SRB__phjet_m_xs_fy1p01);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fx3003[27] = { 1111, 1222, 1333, 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889,
   3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fy3003[27] = { 6.726243, 7.256554, 4.686663, 4.006965, 3.488781, 2.868609, 2.272387, 1.803264, 1.454681, 1.256059, 1.100692, 0.9723528, 0.861645, 0.7620269, 0.6710359, 0.5882866, 0.5150097,
   0.4511252, 0.4057022, 0.3653758, 0.3309497, 0.3011577, 0.2760334, 0.2549009, 0.2378011, 0.22328, 0.2112911 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_felx3003[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fely3003[27] = { 1.879612, 2.027805, 1.309663, 1.119725, 0.9749212, 0.8016172, 0.6350063, 0.5039125, 0.4065027, 0.3509988, 0.3075825, 0.2717187, 0.2407821, 0.2129443, 0.1875174, 0.1643935, 0.1439167,
   0.1260645, 0.1133713, 0.1021023, 0.09248212, 0.0841569, 0.07713604, 0.0712307, 0.06645223, 0.06239438, 0.05904417 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehx3003[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehy3003[27] = { 1.988201, 3.293966, 2.112514, 1.795051, 1.563203, 1.294009, 1.035697, 0.8273929, 0.6757687, 0.5905764, 0.523345, 0.4655647, 0.4009159, 0.3407081, 0.2933686, 0.2581985, 0.2308744,
   0.2093915, 0.1941957, 0.1807909, 0.1677444, 0.1562991, 0.1459938, 0.1371676, 0.1293748, 0.122924, 0.1177734 };
   grae = new TGraphAsymmErrors(27,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fx3003,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fy3003,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_felx3003,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehx3003,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fely3003,tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0_fehy3003);
   grae->SetName("tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p0");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003 = new TH1F("Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003","",100,822.1,4288.9);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->SetMinimum(0.1370223);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->SetMaximum(11.59035);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->SetDirectory(nullptr);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->SetLineColor(ci);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__bStar__Nom__SRB__phjet_m_exp_sigma1_fy1p03003);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p0_fx2[27] = { 1111, 1222, 1333, 1444, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889,
   3000, 3111, 3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000 };
   Double_t tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p0_fy2[27] = { 7.263777, 6.437366, 4.046425, 4.14302, 3.335361, 2.693768, 3.188837, 2.767863, 1.471415, 0.8839636, 0.6892271, 0.6172974, 0.6986249, 0.8449408, 0.9357747, 0.8399416, 0.6788666,
   0.552319, 0.4644613, 0.3958161, 0.3547061, 0.3116088, 0.2613095, 0.2244658, 0.2006223, 0.1854419, 0.1744583 };
   graph = new TGraph(27,tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p0_fx2,tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p0_fy2);
   graph->SetName("tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02 = new TH1F("Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02","",100,822.1,4288.9);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->SetMinimum(0.1570124);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->SetMaximum(7.972709);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->SetDirectory(nullptr);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->SetLineColor(ci);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__bStar__Nom__SRB__phjet_m_obs_fy1p02);
   
   graph->Draw(" plx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,822.1,4288.9);
   chist_copy__2->SetMinimum(0.003651);
   chist_copy__2->SetMaximum(31715.13);
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
