#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__q_b_c____qstar__SR_SRB_SRC50_SRB_SRL50__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 17:18:43 2024) by ROOT version 6.32.02
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
   up__0->Range(-325.532,-0.1178986,10359.06,1.061087);
   up__0->SetFillColor(0);
   up__0->SetFillStyle(4000);
   up__0->SetBorderMode(0);
   up__0->SetBorderSize(0);
   up__0->SetTickx(1);
   up__0->SetTicky(1);
   up__0->SetLeftMargin(0.120603);
   up__0->SetRightMargin(0.08040201);
   up__0->SetTopMargin(0.05181347);
   up__0->SetFrameBorderMode(0);
   up__0->SetFrameBorderMode(0);
   
   TH1D *chist__1 = new TH1D("chist__1","",10,963.0624,9500);
   chist__1->SetMinimum(0);
   chist__1->SetMaximum(1);
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
   chist__1->GetYaxis()->SetTitle("Coupling (f=f_{s}=f')");
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
   TLatex *   tex = new TLatex(0.540201,0.298,"#bf{#it{ATLAS}} #scale[1.0]{Internal}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.540201,0.342,"#sqrt{s} = 13 TeV, 140.07 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.540201,0.13652,0.879397,0.24872,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.034);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__qStar__Nom__SR__phjet_m_obs_intersection","SR, q*","L");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__bStar__Nom__SRB__phjet_m_obs_intersection","SRB, b*","L");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection","SRC50+SRB+SRL50, c*","L");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.25576,0.879397,0.29096,NULL,"brNDC");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Expected","LF");

   ci = 1181;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.4);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(7);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.540201,0.386,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t Graph0_fx1[61] = { 1526.316, 1622.73, 1868.421, 2210.526, 2552.632, 2814.259, 2894.737, 3236.842, 3488.042, 3578.947, 3921.053, 3989.354, 4263.158, 4307.652, 4555.189, 4605.263, 4760.269,
   4925.745, 4947.369, 5100.266, 5231.018, 5289.474, 5330.029, 5431.982, 5518.438, 5595.145, 5631.579, 5663.863, 5743.775, 5808.531, 5861.405, 5904.022, 6288.197,
   6254.906, 6209, 6153.246, 6086.13, 6002.426, 5973.684, 5932.364, 5861.042, 5770.866, 5666.838, 5631.579, 5552.628, 5428.529, 5289.474, 5287.744, 5285.585,
   4263.158, 4126.336, 3921.053, 3578.947, 3452.242, 3118.054, 2894.737, 2552.632, 2324.318, 2167.853, 1868.421, 1526.316 };
   Double_t Graph0_fy1[61] = { 0.05831371, 0.06210526, 0.07058442, 0.07896828, 0.09783645, 0.1142105, 0.1188345, 0.1431987, 0.1663158, 0.1746478, 0.2094735, 0.2184211, 0.2632779, 0.2705263, 0.3226316, 0.3381068, 0.3747368,
   0.4268421, 0.434101, 0.4789474, 0.5310526, 0.5650872, 0.5831579, 0.6352631, 0.6873684, 0.7394737, 0.7718746, 0.7915789, 0.8436842, 0.8957894, 0.9478948, 1, 1,
   0.9478948, 0.8957894, 0.8436842, 0.7915789, 0.7394737, 0.7228807, 0.6873684, 0.6352631, 0.5831579, 0.5310526, 0.517615, 0.4789474, 0.4268421, 0.3755824, 0.3747368, 0.3741446,
   0.1824603, 0.1663158, 0.1442363, 0.1224758, 0.1142105, 0.09611823, 0.08152701, 0.07331683, 0.06210526, 0.05560572, 0.04280076, 0.035323 };
   TGraph *graph = new TGraph(61,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("");

   ci = 1438;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,1050.128,6764.385);
   Graph_Graph01->SetMinimum(0.0317907);
   Graph_Graph01->SetMaximum(1.096468);
   Graph_Graph01->SetDirectory(nullptr);
   Graph_Graph01->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw(" f");
   
   Double_t tgraph__qStar__Nom__SR__phjet_m_exp_intersection_fx2[31] = { 1526.316, 1868.421, 2009.593, 2210.526, 2552.632, 2894.737, 3148.554, 3236.842, 3578.947, 3853.799, 3921.053, 4263.158, 4662.175, 4894.806, 4947.369, 5087.739, 5210.47,
   5289.474, 5345.653, 5494.354, 5579.344, 5631.579, 5664.803, 5763.742, 5847.199, 5909.778, 5960.598, 5973.684, 6028.511, 6089.834, 6139.267 };
   Double_t tgraph__qStar__Nom__SR__phjet_m_exp_intersection_fy2[31] = { 0.04424378, 0.05606816, 0.06210526, 0.07009036, 0.08138889, 0.09762648, 0.1142105, 0.1197847, 0.1443727, 0.1663158, 0.1720347, 0.2145521, 0.2791944, 0.3226316, 0.336228, 0.3747368, 0.4268421,
   0.4600182, 0.4789474, 0.5310526, 0.5831579, 0.6195787, 0.6352631, 0.6873684, 0.7394737, 0.7915789, 0.8436842, 0.8580869, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(31,tgraph__qStar__Nom__SR__phjet_m_exp_intersection_fx2,tgraph__qStar__Nom__SR__phjet_m_exp_intersection_fy2);
   graph->SetName("tgraph__qStar__Nom__SR__phjet_m_exp_intersection");
   graph->SetTitle("");

   ci = 1438;
   color = new TColor(ci, 0.282353, 0.4705882, 0.8156863, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2 = new TH1F("Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2","",100,1065.021,6600.562);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->SetMinimum(0.0398194);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->SetMaximum(1.095576);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->SetDirectory(nullptr);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->SetLineColor(ci);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__qStar__Nom__SR__phjet_m_exp_intersection2);
   
   graph->Draw(" lx");
   
   Double_t tgraph__qStar__Nom__SR__phjet_m_obs_intersection_fx3[24] = { 1526.316, 1795.515, 1868.421, 2893.089, 2894.737, 3578.947, 3905.178, 3921.053, 4263.158, 5297.646, 5320.604, 5356.644, 5513.601, 5582.369, 5631.579, 5696.358, 5806.607,
   5891.819, 5959.873, 5973.684, 6038.535, 6075.062, 6127.704, 6200.188 };
   Double_t tgraph__qStar__Nom__SR__phjet_m_obs_intersection_fy3[24] = { 0.03560409, 0.06210526, 0.07298912, 0.1142105, 0.1144616, 0.1431565, 0.1663158, 0.1672242, 0.1962462, 0.3759816, 0.4268421, 0.4789474, 0.5310526, 0.5831579, 0.6100476, 0.6352631, 0.6873684,
   0.7394737, 0.7915789, 0.802977, 0.8436842, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(24,tgraph__qStar__Nom__SR__phjet_m_obs_intersection_fx3,tgraph__qStar__Nom__SR__phjet_m_obs_intersection_fy3);
   graph->SetName("tgraph__qStar__Nom__SR__phjet_m_obs_intersection");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3 = new TH1F("Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3","",100,1058.929,6667.575);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->SetMinimum(0.03204368);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->SetMaximum(1.09644);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->SetDirectory(nullptr);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->SetLineColor(ci);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__qStar__Nom__SR__phjet_m_obs_intersection3);
   
   graph->Draw(" lx");
   
   Double_t Graph1_fx4[47] = { 1162.252, 1236.842, 1258.636, 1369.373, 1421.053, 1440.174, 1529.757, 1601.327, 1605.263, 1699.176, 1776.208, 1789.474, 1872.066, 1955.68, 1973.684, 2031.532, 2111.138,
   2157.895, 2184.413, 2244.875, 2277.565, 2271.468, 2644.213, 2659.208, 2638.783, 2596.113, 2533.454, 2526.316, 2465.994, 2381.395, 2342.105, 2294.438, 2201.846,
   2157.895, 2108.125, 2000.549, 1973.684, 1863.441, 1789.474, 1734.913, 1605.263, 1599.615, 1472.246, 1421.053, 1330.431, 1236.842, 1190.589 };
   Double_t Graph1_fy4[47] = { 0.2184211, 0.26276, 0.2705263, 0.3226316, 0.3656982, 0.3747368, 0.4268421, 0.4789474, 0.4823363, 0.5310526, 0.5831579, 0.5930284, 0.6352631, 0.6873684, 0.7011601, 0.7394737, 0.7915789,
   0.8257247, 0.8436842, 0.8957894, 0.9478948, 1, 1, 0.9478948, 0.8957894, 0.8436842, 0.7915789, 0.7865514, 0.7394737, 0.6873684, 0.6656814, 0.6352631, 0.5831579,
   0.5606424, 0.5310526, 0.4789474, 0.468651, 0.4268421, 0.4016206, 0.3747368, 0.325758, 0.3226316, 0.2705263, 0.2556476, 0.2184211, 0.189481, 0.1663158 };
   graph = new TGraph(47,Graph1_fx4,Graph1_fy4);
   graph->SetName("Graph1");
   graph->SetTitle("");

   ci = 1440;
   color = new TColor(ci, 0.9333333, 0.5215687, 0.2901961, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,1012.556,2808.904);
   Graph_Graph14->SetMinimum(0.08294737);
   Graph_Graph14->SetMaximum(1.083368);
   Graph_Graph14->SetDirectory(nullptr);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw(" f");
   
   Double_t tgraph__bStar__Nom__SRB__phjet_m_exp_intersection_fx5[24] = { 1118.454, 1227.14, 1236.842, 1369.236, 1421.053, 1482.453, 1582.648, 1605.263, 1691.387, 1789.474, 1797.296, 1919.593, 1973.684, 2019.572, 2106.738, 2157.895, 2192.181,
   2278.786, 2342.105, 2359.175, 2427.589, 2471.577, 2487.847, 2467.986 };
   Double_t tgraph__bStar__Nom__SRB__phjet_m_exp_intersection_fy5[24] = { 0.1663158, 0.2184211, 0.223705, 0.2705263, 0.3001397, 0.3226316, 0.3747368, 0.3895487, 0.4268421, 0.4761715, 0.4789474, 0.5310526, 0.5593747, 0.5831579, 0.6352631, 0.668382, 0.6873684,
   0.7394737, 0.7810391, 0.7915789, 0.8436842, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(24,tgraph__bStar__Nom__SRB__phjet_m_exp_intersection_fx5,tgraph__bStar__Nom__SRB__phjet_m_exp_intersection_fy5);
   graph->SetName("tgraph__bStar__Nom__SRB__phjet_m_exp_intersection");
   graph->SetTitle("");

   ci = 1440;
   color = new TColor(ci, 0.9333333, 0.5215687, 0.2901961, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5 = new TH1F("Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5","",100,981.5145,2624.786);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->SetMinimum(0.08294737);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->SetMaximum(1.083368);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->SetDirectory(nullptr);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->SetLineColor(ci);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__bStar__Nom__SRB__phjet_m_exp_intersection5);
   
   graph->Draw(" lx");
   
   Double_t tgraph__bStar__Nom__SRB__phjet_m_obs_intersection_fx6[24] = { 1103.936, 1221.382, 1236.842, 1359.896, 1421.053, 1470.255, 1574.037, 1605.263, 1671.058, 1735.144, 1785.061, 1789.474, 1973.684, 2006.654, 2113.176, 2157.895, 2192.768,
   2275.192, 2342.105, 2361.163, 2440.054, 2494.934, 2512.675, 2502.616 };
   Double_t tgraph__bStar__Nom__SRB__phjet_m_obs_intersection_fy6[24] = { 0.1663158, 0.2184211, 0.2272353, 0.2705263, 0.3046276, 0.3226316, 0.3747368, 0.3947591, 0.4268421, 0.4789474, 0.5310526, 0.5340338, 0.5764782, 0.5831579, 0.6352631, 0.6643636, 0.6873684,
   0.7394737, 0.7797085, 0.7915789, 0.8436842, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(24,tgraph__bStar__Nom__SRB__phjet_m_obs_intersection_fx6,tgraph__bStar__Nom__SRB__phjet_m_obs_intersection_fy6);
   graph->SetName("tgraph__bStar__Nom__SRB__phjet_m_obs_intersection");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6 = new TH1F("Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6","",100,963.0624,2653.549);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->SetMinimum(0.08294737);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->SetMaximum(1.083368);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->SetDirectory(nullptr);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->SetLineColor(ci);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__bStar__Nom__SRB__phjet_m_obs_intersection6);
   
   graph->Draw(" lx");
   
   Double_t Graph2_fx7[48] = { 1605.263, 1789.474, 1797.283, 1973.684, 1980.178, 2128.244, 2157.895, 2247.706, 2338.309, 2342.105, 2437.944, 2521.177, 2526.316, 2629.28, 2682.478, 2710.526, 2757.748,
   2861.954, 2894.737, 2899.016, 2974.44, 3004.954, 3445.729, 3408.837, 3378.536, 3327.402, 3263.158, 3250.055, 3168.101, 3082.489, 3078.947, 2991.731, 2894.737,
   2892.083, 2799.016, 2710.526, 2670.497, 2547.885, 2526.316, 2460.221, 2342.105, 2274.371, 2157.895, 2028.637, 1973.684, 1789.474, 1720.041, 1605.263 };
   Double_t Graph2_fy7[48] = { 0.2794616, 0.3208621, 0.3226316, 0.3726512, 0.3747368, 0.4268421, 0.4407339, 0.4789474, 0.5310526, 0.5337296, 0.5831579, 0.6352631, 0.6381778, 0.6873684, 0.7394737, 0.7616472, 0.7915789,
   0.8436842, 0.8916995, 0.8957894, 0.9478948, 1, 1, 0.9478948, 0.8957894, 0.8436842, 0.8008776, 0.7915789, 0.7394737, 0.6873684, 0.6854356, 0.6352631, 0.5847198,
   0.5831579, 0.5310526, 0.4966215, 0.4789474, 0.4268421, 0.4160394, 0.3747368, 0.3412544, 0.3226316, 0.3017295, 0.2705263, 0.2603572, 0.2283122, 0.2184211, 0.2009127 };
   graph = new TGraph(48,Graph2_fx7,Graph2_fy7);
   graph->SetName("Graph2");
   graph->SetTitle("");

   ci = 1442;
   color = new TColor(ci, 0.4156863, 0.8, 0.3921569, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","",100,1421.217,3629.776);
   Graph_Graph27->SetMinimum(0.121004);
   Graph_Graph27->SetMaximum(1.079909);
   Graph_Graph27->SetDirectory(nullptr);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetTitleOffset(1);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
   graph->Draw(" f");
   
   Double_t tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fx8[24] = { 1605.263, 1789.474, 1796.809, 1973.684, 2035.744, 2157.895, 2197.954, 2342.105, 2346.99, 2464.922, 2526.316, 2570.412, 2671.36, 2710.526, 2763.538, 2859.71, 2894.737,
   2937.834, 3018.85, 3074.934, 3078.947, 3145.22, 3203.819, 3237.416 };
   Double_t tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fy8[24] = { 0.2360754, 0.2691537, 0.2705263, 0.30672, 0.3226316, 0.3635786, 0.3747368, 0.424944, 0.4268421, 0.4789474, 0.5124584, 0.5310526, 0.5831579, 0.6076735, 0.6352631, 0.6873684, 0.7140746,
   0.7394737, 0.7915789, 0.8436842, 0.8475714, 0.8957894, 0.9478948, 1 };
   graph = new TGraph(24,tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fx8,tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection_fy8);
   graph->SetName("tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection");
   graph->SetTitle("");

   ci = 1442;
   color = new TColor(ci, 0.4156863, 0.8, 0.3921569, " ", 0.4);
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8 = new TH1F("Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8","",100,1442.048,3400.631);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->SetMinimum(0.159683);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->SetMaximum(1.076392);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->SetDirectory(nullptr);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->SetLineColor(ci);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_exp_intersection8);
   
   graph->Draw(" lx");
   
   Double_t tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection_fx9[26] = { 1605.263, 1718.331, 1789.474, 1913.076, 1973.684, 2057.844, 2157.895, 2184.611, 2322.676, 2342.105, 2474.667, 2526.316, 2576.449, 2671.348, 2710.526, 2740.505, 2808.164,
   2861.537, 2894.737, 2930.435, 2979.384, 3078.947, 3129.818, 3263.158, 3269.56, 3403.263 };
   Double_t tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection_fy9[26] = { 0.1921722, 0.2184211, 0.2366725, 0.2705263, 0.2925476, 0.3226316, 0.3637589, 0.3747368, 0.4268421, 0.4323379, 0.4789474, 0.514222, 0.5310526, 0.5831579, 0.6218212, 0.6352631, 0.6873684,
   0.7394737, 0.7685981, 0.7915789, 0.8436842, 0.8715554, 0.8957894, 0.9445735, 0.9478948, 1 };
   graph = new TGraph(26,tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection_fx9,tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection_fy9);
   graph->SetName("tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9 = new TH1F("Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9","",100,1425.463,3583.063);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->SetMinimum(0.1113894);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->SetMaximum(1.080783);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->SetDirectory(nullptr);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->SetLineColor(ci);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__cStar__Nom__SRC50_SRB_SRL50__phjet_m_obs_intersection9);
   
   graph->Draw(" lx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,963.0624,9500);
   chist_copy__2->SetMinimum(0);
   chist_copy__2->SetMaximum(1);
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
   chist_copy__2->GetYaxis()->SetTitle("Coupling (f=f_{s}=f')");
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
