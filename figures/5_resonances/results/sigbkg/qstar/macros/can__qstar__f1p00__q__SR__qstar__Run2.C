#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__qstar__f1p00__q__SR__qstar__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep 25 19:14:59 2024) by ROOT version 6.32.02
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
   up__0->Range(-402.3812,-3.772263,8275.521,8.204727);
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
   chist__1->SetMinimum(0.0026634);
   chist__1->SetMaximum(3.838464e+07);
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
   TLegendEntry *entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0","Exp.#pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0","Exp.#pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph2d__qStar__Nom__SR__phjet_m_xs_fy1p0","LO prediction, q*","L");
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
      tex = new TLatex(0.160804,0.7738,"SR");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.743,"q*, f=1.00");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.72804," Exp. limit = 6114.3 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5201005,0.70164," Obs. limit = 6174.9 GeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.024);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fx3001[70] = { 1222, 1333, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889,
   5000, 5056, 5111, 5167, 5222, 5278, 5333, 5389, 5444, 5500, 5556, 5611, 5667, 5722, 5778, 5833,
   5889, 5944, 6000, 6056, 6111, 6167, 6222, 6278, 6333, 6389, 6444, 6500, 6556, 6611, 6667, 6722,
   6778, 6833, 6889, 6944, 7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fy3001[70] = { 13.99227, 11.51472, 7.390591, 5.646623, 4.363079, 3.408564, 2.691445, 2.295994, 1.973101, 1.700148, 1.466672, 1.26442, 1.088093, 0.9343908, 0.8011612, 0.685988, 0.5998512,
   0.5242482, 0.458402, 0.4012985, 0.3517553, 0.3088849, 0.2718867, 0.2399483, 0.2124163, 0.1907145, 0.1715269, 0.1548252, 0.1399842, 0.1269878, 0.1156525, 0.1056884, 0.09711912,
   0.08955328, 0.08666607, 0.08384662, 0.08116407, 0.07853151, 0.0761085, 0.0737034, 0.0714444, 0.0695286, 0.06757507, 0.06626402, 0.0650035, 0.06377672, 0.06260363, 0.06147386, 0.06039894,
   0.05937678, 0.05840515, 0.05748722, 0.05691794, 0.05643265, 0.05597846, 0.05554658, 0.055359, 0.05499385, 0.05465726, 0.05434742, 0.05406433, 0.05419807, 0.05434049, 0.05449607, 0.05466823,
   0.05484659, 0.05503879, 0.05524769, 0.05547127, 0.05570944 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_felx3001[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fely3001[70] = { 6.482256, 5.334474, 3.42387, 2.615935, 2.021302, 1.5791, 1.246877, 1.063675, 0.914087, 0.7876347, 0.6794711, 0.5857731, 0.5040857, 0.4328792, 0.3711573, 0.3178006, 0.2778956,
   0.2428707, 0.2123659, 0.1859112, 0.1629592, 0.1430984, 0.1259581, 0.1111619, 0.09840699, 0.08835312, 0.079464, 0.07172653, 0.06485109, 0.05883019, 0.05357881, 0.04896269, 0.04499278,
   0.04148773, 0.04015016, 0.03884398, 0.03760122, 0.03638163, 0.03525911, 0.03414489, 0.03309835, 0.03221081, 0.03130579, 0.03069841, 0.03011445, 0.02954611, 0.02900265, 0.02847925, 0.02798127,
   0.02750773, 0.0270576, 0.02663235, 0.02636861, 0.02614379, 0.02593338, 0.0257333, 0.0256464, 0.02547723, 0.0253213, 0.02517776, 0.02504661, 0.02510857, 0.02517455, 0.02524663, 0.02532638,
   0.02540901, 0.02549805, 0.02559483, 0.02569841, 0.02580875 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fehx3001[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fehy3001[70] = { 12.46712, 10.25875, 6.581044, 5.02823, 3.896749, 3.055329, 2.423097, 2.074674, 1.789207, 1.548024, 1.340611, 1.160269, 1.002684, 0.8652124, 0.7461082, 0.6433578, 0.5667609,
   0.4997407, 0.4415446, 0.3908718, 0.3472623, 0.3095772, 0.2771099, 0.2490735, 0.2248988, 0.2058014, 0.189191, 0.1741669, 0.1611321, 0.1497161, 0.1397562, 0.1310079, 0.1232182,
   0.1165149, 0.1139695, 0.1115085, 0.1091783, 0.1069174, 0.1048306, 0.1027665, 0.1009659, 0.09897955, 0.09730358, 0.09618287, 0.09528335, 0.09426749, 0.09330268, 0.09236354, 0.09149907,
   0.09067652, 0.08989844, 0.08916813, 0.08895918, 0.08873977, 0.08854744, 0.08837353, 0.08806928, 0.08793884, 0.08783458, 0.08775289, 0.08769358, 0.08812652, 0.08857746, 0.08905008, 0.08955179,
   0.09006445, 0.09060059, 0.09116403, 0.09175215, 0.09236353 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(70,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fx3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fy3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_felx3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fehx3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fely3001,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0_fehy3001);
   grae->SetName("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p0");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001","",100,644.2,7577.8);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->SetMinimum(0.02611595);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->SetMaximum(29.10243);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma2_fy1p03001);
   
   grae->Draw(" 3");
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fx3002[70] = { 1222, 1333, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889,
   5000, 5056, 5111, 5167, 5222, 5278, 5333, 5389, 5444, 5500, 5556, 5611, 5667, 5722, 5778, 5833,
   5889, 5944, 6000, 6056, 6111, 6167, 6222, 6278, 6333, 6389, 6444, 6500, 6556, 6611, 6667, 6722,
   6778, 6833, 6889, 6944, 7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fy3002[70] = { 13.99227, 11.51472, 7.390591, 5.646623, 4.363079, 3.408564, 2.691445, 2.295994, 1.973101, 1.700148, 1.466672, 1.26442, 1.088093, 0.9343908, 0.8011612, 0.685988, 0.5998512,
   0.5242482, 0.458402, 0.4012985, 0.3517553, 0.3088849, 0.2718867, 0.2399483, 0.2124163, 0.1907145, 0.1715269, 0.1548252, 0.1399842, 0.1269878, 0.1156525, 0.1056884, 0.09711912,
   0.08955328, 0.08666607, 0.08384662, 0.08116407, 0.07853151, 0.0761085, 0.0737034, 0.0714444, 0.0695286, 0.06757507, 0.06626402, 0.0650035, 0.06377672, 0.06260363, 0.06147386, 0.06039894,
   0.05937678, 0.05840515, 0.05748722, 0.05691794, 0.05643265, 0.05597846, 0.05554658, 0.055359, 0.05499385, 0.05465726, 0.05434742, 0.05406433, 0.05419807, 0.05434049, 0.05449607, 0.05466823,
   0.05484659, 0.05503879, 0.05524769, 0.05547127, 0.05570944 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_felx3002[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fely3002[70] = { 3.910064, 3.217728, 2.065261, 1.577918, 1.219239, 0.9525049, 0.7521098, 0.6416032, 0.5513726, 0.4750972, 0.4098535, 0.3533353, 0.3040619, 0.2611105, 0.2238802, 0.1916957, 0.1676252,
   0.1464983, 0.128098, 0.1121407, 0.09829613, 0.08631625, 0.07597728, 0.06705227, 0.05935859, 0.05329415, 0.04793228, 0.04326507, 0.03911785, 0.03548607, 0.03231847, 0.02953405, 0.02713942,
   0.02502518, 0.02421837, 0.02343049, 0.02268086, 0.02194521, 0.02126811, 0.02059602, 0.01996475, 0.01942939, 0.01888349, 0.01851712, 0.01816488, 0.01782206, 0.01749425, 0.01717854, 0.01687816,
   0.01659252, 0.016321, 0.0160645, 0.01590541, 0.0157698, 0.01564288, 0.01552219, 0.01546977, 0.01536773, 0.01527368, 0.01518709, 0.01510799, 0.01514536, 0.01518516, 0.01522864, 0.01527674,
   0.01532658, 0.01538029, 0.01543867, 0.01550115, 0.0155677 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehx3002[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehy3002[70] = { 5.499405, 4.526984, 2.925298, 2.228821, 1.730903, 1.357294, 1.074892, 0.9190244, 0.7916834, 0.6845355, 0.5920373, 0.5117239, 0.4415355, 0.3802875, 0.3272461, 0.2814078, 0.2472024,
   0.2172418, 0.1912372, 0.1684511, 0.1489119, 0.1320043, 0.1174425, 0.1047977, 0.09392077, 0.08534643, 0.07796376, 0.07113719, 0.065227, 0.06003428, 0.05548794, 0.05148114, 0.0477538,
   0.04462253, 0.04359582, 0.04243925, 0.04133441, 0.0402493, 0.03924329, 0.03823632, 0.0373992, 0.03624219, 0.03539695, 0.03484315, 0.03430751, 0.03378628, 0.03328437, 0.03278969, 0.03232562,
   0.0318783, 0.03144989, 0.03118375, 0.03103484, 0.03087351, 0.03033729, 0.03027261, 0.02989187, 0.02972751, 0.02957553, 0.02943493, 0.02930575, 0.02938033, 0.02946298, 0.02955149, 0.02964872,
   0.02974896, 0.02985653, 0.02997287, 0.0300971, 0.03025601 };
   grae = new TGraphAsymmErrors(70,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fx3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fy3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_felx3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehx3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fely3002,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehy3002);
   grae->SetName("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002","",100,644.2,7577.8);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->SetMinimum(0.03506071);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->SetMaximum(21.43694);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03002);
   
   grae->Draw(" 3");
   
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
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
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
   
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fx3003[70] = { 1222, 1333, 1556, 1667, 1778, 1889, 2000, 2111, 2222, 2333, 2444, 2556, 2667, 2778, 2889, 3000, 3111,
   3222, 3333, 3444, 3556, 3667, 3778, 3889, 4000, 4111, 4222, 4333, 4444, 4556, 4667, 4778, 4889,
   5000, 5056, 5111, 5167, 5222, 5278, 5333, 5389, 5444, 5500, 5556, 5611, 5667, 5722, 5778, 5833,
   5889, 5944, 6000, 6056, 6111, 6167, 6222, 6278, 6333, 6389, 6444, 6500, 6556, 6611, 6667, 6722,
   6778, 6833, 6889, 6944, 7000 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fy3003[70] = { 13.99227, 11.51472, 7.390591, 5.646623, 4.363079, 3.408564, 2.691445, 2.295994, 1.973101, 1.700148, 1.466672, 1.26442, 1.088093, 0.9343908, 0.8011612, 0.685988, 0.5998512,
   0.5242482, 0.458402, 0.4012985, 0.3517553, 0.3088849, 0.2718867, 0.2399483, 0.2124163, 0.1907145, 0.1715269, 0.1548252, 0.1399842, 0.1269878, 0.1156525, 0.1056884, 0.09711912,
   0.08955328, 0.08666607, 0.08384662, 0.08116407, 0.07853151, 0.0761085, 0.0737034, 0.0714444, 0.0695286, 0.06757507, 0.06626402, 0.0650035, 0.06377672, 0.06260363, 0.06147386, 0.06039894,
   0.05937678, 0.05840515, 0.05748722, 0.05691794, 0.05643265, 0.05597846, 0.05554658, 0.055359, 0.05499385, 0.05465726, 0.05434742, 0.05406433, 0.05419807, 0.05434049, 0.05449607, 0.05466823,
   0.05484659, 0.05503879, 0.05524769, 0.05547127, 0.05570944 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_felx3003[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fely3003[70] = { 3.910064, 3.217728, 2.065261, 1.577918, 1.219239, 0.9525049, 0.7521098, 0.6416032, 0.5513726, 0.4750972, 0.4098535, 0.3533353, 0.3040619, 0.2611105, 0.2238802, 0.1916957, 0.1676252,
   0.1464983, 0.128098, 0.1121407, 0.09829613, 0.08631625, 0.07597728, 0.06705227, 0.05935859, 0.05329415, 0.04793228, 0.04326507, 0.03911785, 0.03548607, 0.03231847, 0.02953405, 0.02713942,
   0.02502518, 0.02421837, 0.02343049, 0.02268086, 0.02194521, 0.02126811, 0.02059602, 0.01996475, 0.01942939, 0.01888349, 0.01851712, 0.01816488, 0.01782206, 0.01749425, 0.01717854, 0.01687816,
   0.01659252, 0.016321, 0.0160645, 0.01590541, 0.0157698, 0.01564288, 0.01552219, 0.01546977, 0.01536773, 0.01527368, 0.01518709, 0.01510799, 0.01514536, 0.01518516, 0.01522864, 0.01527674,
   0.01532658, 0.01538029, 0.01543867, 0.01550115, 0.0155677 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehx3003[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehy3003[70] = { 5.499405, 4.526984, 2.925298, 2.228821, 1.730903, 1.357294, 1.074892, 0.9190244, 0.7916834, 0.6845355, 0.5920373, 0.5117239, 0.4415355, 0.3802875, 0.3272461, 0.2814078, 0.2472024,
   0.2172418, 0.1912372, 0.1684511, 0.1489119, 0.1320043, 0.1174425, 0.1047977, 0.09392077, 0.08534643, 0.07796376, 0.07113719, 0.065227, 0.06003428, 0.05548794, 0.05148114, 0.0477538,
   0.04462253, 0.04359582, 0.04243925, 0.04133441, 0.0402493, 0.03924329, 0.03823632, 0.0373992, 0.03624219, 0.03539695, 0.03484315, 0.03430751, 0.03378628, 0.03328437, 0.03278969, 0.03232562,
   0.0318783, 0.03144989, 0.03118375, 0.03103484, 0.03087351, 0.03033729, 0.03027261, 0.02989187, 0.02972751, 0.02957553, 0.02943493, 0.02930575, 0.02938033, 0.02946298, 0.02955149, 0.02964872,
   0.02974896, 0.02985653, 0.02997287, 0.0300971, 0.03025601 };
   grae = new TGraphAsymmErrors(70,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fx3003,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fy3003,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_felx3003,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehx3003,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fely3003,tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0_fehy3003);
   grae->SetName("tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p0");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003 = new TH1F("Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003","",100,644.2,7577.8);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->SetMinimum(0.03506071);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->SetMaximum(21.43694);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->SetDirectory(nullptr);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->SetLineColor(ci);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph2d__qStar__Nom__SR__phjet_m_exp_sigma1_fy1p03003);
   
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
   graph->SetLineWidth(2);
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
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,644.2,7577.8);
   chist_copy__2->SetMinimum(0.0026634);
   chist_copy__2->SetMaximum(3.838464e+07);
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
