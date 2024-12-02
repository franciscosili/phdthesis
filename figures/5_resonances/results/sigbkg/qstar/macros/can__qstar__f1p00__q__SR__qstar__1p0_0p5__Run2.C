#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__f1p00__q__SR__qstar__1p0_0p5__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 18:43:38 2024) by ROOT version 6.32.02
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
   up__0->Range(-402.3812,-4.66102,8275.521,8.991544);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,644.2,7577.8);
   chist__1->SetMinimum(0.0005061);
   chist__1->SetMaximum(1.923789e+08);
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
   TLegendEntry *entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0","LO prediction, q*, f=1.00","L");

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
   entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p0","q*, f=1.00","PL");

   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p5","LO prediction, q*, f=0.50","L");

   ci = TColor::GetColor("#dc7ec0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p5","q*, f=0.50","PL");

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
      tex = new TLatex(0.160804,0.7738,"SR");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.743,"q*");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6858,"q*, f=1.00 Exp. limit = 6114.3 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6594,"q*, f=1.00 Obs. limit = 6174.9 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.633,"q*, f=0.50 Exp. limit = 5396.7 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.6066,"q*, f=0.50 Obs. limit = 5406.3 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0_fx1[66] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000, 5100, 5200, 5300,
   5400, 5500, 5600, 5700, 5800, 5900, 6000, 6100, 6200, 6300, 6400, 6500, 6600, 6700, 6800, 6900,
   7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0_fy1[66] = { 304900, 146100, 77300, 43690, 26190, 16450, 10620, 7112, 4852, 3383, 2390, 1721, 1263, 934.1, 697.4, 522.2, 396.9,
   302.8, 234.1, 181.3, 140.9, 110.8, 86.47, 68.37, 54.15, 43.03, 34.29, 27.39, 21.87, 17.59, 14.18, 11.35, 9.18,
   7.409, 5.984, 4.82, 3.899, 3.159, 2.557, 2.072, 1.684, 1.362, 1.105, 0.8958, 0.729, 0.5903, 0.4783, 0.3868, 0.3142,
   0.2547, 0.2056, 0.1668, 0.1354, 0.1098, 0.08861, 0.07179, 0.0581, 0.04722, 0.03812, 0.03091, 0.02498, 0.02033, 0.01645, 0.0134, 0.01092,
   0.008878 };
   TGraph *graph = new TGraph(66,tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0_fx1,tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0_fy1);
   graph->SetName("tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#8c613c");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#8c613c");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01","",100,0,7650);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetMinimum(0.0079902);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetMaximum(335390);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetStats(0);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetLineWidth(2);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetMarkerStyle(20);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->SetMarkerSize(1.2);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p01);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fx3001[70] = { 1222, 1333, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889,
   5000, 5056, 5111, 5167, 5222, 5278, 5333, 5389, 5444, 5500, 5556, 5611, 5667, 5722, 5778, 5833,
   5889, 5944, 6000, 6056, 6111, 6167, 6222, 6278, 6333, 6389, 6444, 6500, 6556, 6611, 6667, 6722,
   6778, 6833, 6889, 6944, 7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fy3001[70] = { 13.99227, 11.51472, 7.390591, 5.646623, 4.363079, 3.408564, 2.691445, 2.295994, 1.973101, 1.700148, 1.466672, 1.26442, 1.088093, 0.9343908, 0.8011612, 0.685988, 0.5998512,
   0.5242482, 0.458402, 0.4012985, 0.3517553, 0.3088849, 0.2718867, 0.2399483, 0.2124163, 0.1907145, 0.1715269, 0.1548252, 0.1399842, 0.1269878, 0.1156525, 0.1056884, 0.09711912,
   0.08955328, 0.08666607, 0.08384662, 0.08116407, 0.07853151, 0.0761085, 0.0737034, 0.0714444, 0.0695286, 0.06757507, 0.06626402, 0.0650035, 0.06377672, 0.06260363, 0.06147386, 0.06039894,
   0.05937678, 0.05840515, 0.05748722, 0.05691794, 0.05643265, 0.05597846, 0.05554658, 0.055359, 0.05499385, 0.05465726, 0.05434742, 0.05406433, 0.05419807, 0.05434049, 0.05449607, 0.05466823,
   0.05484659, 0.05503879, 0.05524769, 0.05547127, 0.05570944 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_felx3001[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fely3001[70] = { 3.910064, 3.217728, 2.065261, 1.577918, 1.219239, 0.9525049, 0.7521098, 0.6416032, 0.5513726, 0.4750972, 0.4098535, 0.3533353, 0.3040619, 0.2611105, 0.2238802, 0.1916957, 0.1676252,
   0.1464983, 0.128098, 0.1121407, 0.09829613, 0.08631625, 0.07597728, 0.06705227, 0.05935859, 0.05329415, 0.04793228, 0.04326507, 0.03911785, 0.03548607, 0.03231847, 0.02953405, 0.02713942,
   0.02502518, 0.02421837, 0.02343049, 0.02268086, 0.02194521, 0.02126811, 0.02059602, 0.01996475, 0.01942939, 0.01888349, 0.01851712, 0.01816488, 0.01782206, 0.01749425, 0.01717854, 0.01687816,
   0.01659252, 0.016321, 0.0160645, 0.01590541, 0.0157698, 0.01564288, 0.01552219, 0.01546977, 0.01536773, 0.01527368, 0.01518709, 0.01510799, 0.01514536, 0.01518516, 0.01522864, 0.01527674,
   0.01532658, 0.01538029, 0.01543867, 0.01550115, 0.0155677 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehx3001[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehy3001[70] = { 5.499405, 4.526984, 2.925298, 2.228821, 1.730903, 1.357294, 1.074892, 0.9190244, 0.7916834, 0.6845355, 0.5920373, 0.5117239, 0.4415355, 0.3802875, 0.3272461, 0.2814078, 0.2472024,
   0.2172418, 0.1912372, 0.1684511, 0.1489119, 0.1320043, 0.1174425, 0.1047977, 0.09392077, 0.08534643, 0.07796376, 0.07113719, 0.065227, 0.06003428, 0.05548794, 0.05148114, 0.0477538,
   0.04462253, 0.04359582, 0.04243925, 0.04133441, 0.0402493, 0.03924329, 0.03823632, 0.0373992, 0.03624219, 0.03539695, 0.03484315, 0.03430751, 0.03378628, 0.03328437, 0.03278969, 0.03232562,
   0.0318783, 0.03144989, 0.03118375, 0.03103484, 0.03087351, 0.03033729, 0.03027261, 0.02989187, 0.02972751, 0.02957553, 0.02943493, 0.02930575, 0.02938033, 0.02946298, 0.02955149, 0.02964872,
   0.02974896, 0.02985653, 0.02997287, 0.0300971, 0.03025601 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(70,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fx3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fy3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_felx3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehx3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fely3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehy3001);
   grae->SetName("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0");
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
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001","",100,644.2,7577.8);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->SetMinimum(0.03506071);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->SetMaximum(21.43694);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03001);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p0_fx2[70] = { 1222, 1333, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889,
   5000, 5056, 5111, 5167, 5222, 5278, 5333, 5389, 5444, 5500, 5556, 5611, 5667, 5722, 5778, 5833,
   5889, 5944, 6000, 6056, 6111, 6167, 6222, 6278, 6333, 6389, 6444, 6500, 6556, 6611, 6667, 6722,
   6778, 6833, 6889, 6944, 7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p0_fy2[70] = { 12.58502, 10.54883, 5.92295, 9.433296, 9.380128, 5.532848, 3.089722, 2.304938, 1.279284, 0.9332105, 1.005514, 1.268147, 1.70299, 1.389303, 0.9438321, 0.8260419, 0.6729864,
   0.4380938, 0.2987902, 0.2722625, 0.2761001, 0.2331098, 0.1879325, 0.1745017, 0.17804, 0.188559, 0.1746731, 0.1528166, 0.1236524, 0.1052608, 0.09830232, 0.09101289, 0.08757027,
   0.08765466, 0.08890197, 0.08755274, 0.08716868, 0.0806391, 0.08325792, 0.06958787, 0.07555936, 0.06321705, 0.06599863, 0.05840849, 0.06036166, 0.05548466, 0.05715758, 0.05414418, 0.0533629,
   0.05283335, 0.05135811, 0.05066611, 0.05035451, 0.0501009, 0.0497864, 0.04947685, 0.04930328, 0.04912962, 0.04896994, 0.04888908, 0.04877442, 0.0490061, 0.04925137, 0.04950919, 0.04977995,
   0.05005683, 0.0503436, 0.05064394, 0.05095568, 0.05127843 };
   graph = new TGraph(70,tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p0_fx2,tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p0_fy2);
   graph->SetName("tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02","",100,644.2,7577.8);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->SetMinimum(0.04389698);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->SetMaximum(13.83864);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy1p02);
   
   graph->Draw(" plx");
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p5_fx3[66] = { 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
   2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700,
   3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000, 5100, 5200, 5300,
   5400, 5500, 5600, 5700, 5800, 5900, 6000, 6100, 6200, 6300, 6400, 6500, 6600, 6700, 6800, 6900,
   7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p5_fy3[66] = { 75200, 36210, 19230, 11010, 6597, 4125, 2680, 1790, 1232, 857.5, 610.1, 438.6, 319.7, 237.5, 176.5, 133, 101.5,
   77.49, 59.69, 46.29, 36.06, 28.17, 22.14, 17.47, 13.87, 10.94, 8.761, 7.003, 5.565, 4.444, 3.586, 2.896, 2.326,
   1.872, 1.511, 1.212, 0.9843, 0.7932, 0.641, 0.5181, 0.4191, 0.3397, 0.2743, 0.2222, 0.1791, 0.1442, 0.1171, 0.09383, 0.07568,
   0.06095, 0.04925, 0.03967, 0.03175, 0.02543, 0.02051, 0.01638, 0.01308, 0.01047, 0.008351, 0.006646, 0.005301, 0.004224, 0.00337, 0.002662, 0.002114,
   0.001687 };
   graph = new TGraph(66,tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p5_fx3,tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p5_fy3);
   graph->SetName("tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p5");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#dc7ec0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#dc7ec0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53","",100,0,7650);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetMinimum(0.0015183);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetMaximum(82720);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetStats(0);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetLineWidth(2);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetMarkerStyle(20);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->SetMarkerSize(1.2);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetXaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetXaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetXaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetYaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetYaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetYaxis()->SetTitleOffset(1.4);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetZaxis()->SetLabelSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetZaxis()->SetTitleSize(0.05);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_xs_fy0p53);
   
   graph->Draw(" l");
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fx3002[41] = { 1444, 1556, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222, 3333,
   3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889, 5000, 5111,
   5222, 5333, 5444, 5556, 5667, 5778, 5889, 6000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fy3002[41] = { 7.352641, 5.765046, 3.477202, 2.733002, 2.165728, 1.837819, 1.570853, 1.348111, 1.159097, 0.9964978, 0.8576314, 0.7374804, 0.6344126, 0.5459079, 0.4781003, 0.4193583, 0.3680666,
   0.3235725, 0.285058, 0.2517016, 0.2227044, 0.1976681, 0.1760316, 0.1580776, 0.1423142, 0.1285443, 0.1164616, 0.1059656, 0.09693709, 0.08914462, 0.0822207, 0.07629669, 0.07144003,
   0.06710685, 0.06333237, 0.05994889, 0.05700837, 0.05443588, 0.05218704, 0.05017547, 0.04846619 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_felx3002[41] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fely3002[41] = { 2.054656, 1.611011, 0.9716856, 0.7637226, 0.605201, 0.5135686, 0.4389663, 0.3767223, 0.3239035, 0.278466, 0.2396605, 0.206085, 0.1772832, 0.152551, 0.1336026, 0.1171874, 0.1028542,
   0.09042058, 0.07965792, 0.07033665, 0.06223355, 0.05523729, 0.04919109, 0.04417394, 0.03976893, 0.03592101, 0.03254458, 0.02961152, 0.02708855, 0.02491098, 0.02297613, 0.0213207, 0.01996353,
   0.01875265, 0.01769789, 0.01675239, 0.01593068, 0.01521182, 0.01458339, 0.01402127, 0.01354362 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fehx3002[41] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fehy3002[41] = { 2.894365, 2.27206, 1.380891, 1.089721, 0.865938, 0.7363309, 0.6315495, 0.5437584, 0.4690644, 0.404567, 0.3496098, 0.3019424, 0.2611098, 0.2260618, 0.1991885, 0.1757204, 0.1553881,
   0.1377327, 0.1224905, 0.1092773, 0.09773299, 0.08777528, 0.07934978, 0.07205977, 0.06577559, 0.06027097, 0.05542533, 0.05120306, 0.04751115, 0.04412793, 0.04140461, 0.03894356, 0.03690856,
   0.03508145, 0.0332373, 0.03174895, 0.03044049, 0.02928623, 0.02839074, 0.02748646, 0.02658327 };
   grae = new TGraphAsymmErrors(41,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fx3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fy3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_felx3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fehx3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fely3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5_fehy3002);
   grae->SetName("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p5");
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
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002","",100,988.4,6455.6);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->SetMinimum(0.03143032);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->SetMaximum(11.26821);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy0p53002);
   
   grae->Draw(" lx");
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p5_fx4[41] = { 1444, 1556, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111, 3222, 3333,
   3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889, 5000, 5111,
   5222, 5333, 5444, 5556, 5667, 5778, 5889, 6000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p5_fy4[41] = { 4.275472, 4.469327, 7.186177, 4.35741, 2.400788, 1.929528, 1.055525, 0.7459866, 0.8242135, 0.9587304, 1.392507, 1.082405, 0.6931933, 0.6805686, 0.5844907, 0.3546355, 0.2330107,
   0.2221934, 0.2395586, 0.2158921, 0.1442048, 0.1421014, 0.1533511, 0.1639512, 0.1557018, 0.1317479, 0.103284, 0.08466188, 0.08259675, 0.07752313, 0.07063549, 0.07649054, 0.07794872,
   0.07638822, 0.06735681, 0.05642155, 0.05171608, 0.0488881, 0.04661849, 0.04472388, 0.04348161 };
   graph = new TGraph(41,tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p5_fx4,tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p5_fy4);
   graph->SetName("tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p5");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54","",100,988.4,6455.6);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->SetMinimum(0.03913345);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->SetMaximum(7.900446);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_obs_fy0p54);
   
   graph->Draw(" plx");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,644.2,7577.8);
   chist_copy__2->SetMinimum(0.0005061);
   chist_copy__2->SetMaximum(1.923789e+08);
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
