#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRL50__width0p02__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:29 2024) by ROOT version 6.32.02
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
   up__0->Range(113.2075,-3.139855,9124.528,1.715556);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,1200,8400);
   chist__1->SetMinimum(0.002216596);
   chist__1->SetMaximum(29.10585);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs","Obs. ","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.160804,0.809,"SRL50");
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
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fx3001[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fy3001[31] = { 0.6156878, 0.4530672, 0.3377476, 0.261236, 0.2051281, 0.1616486, 0.1285656, 0.1026193, 0.08271688, 0.06766203, 0.05595154, 0.04691369, 0.03974984, 0.0340541, 0.02952079, 0.02597244, 0.02313983,
   0.02091172, 0.01916829, 0.01779064, 0.01681106, 0.0160103, 0.01540061, 0.01493985, 0.01459461, 0.0143382, 0.01414949, 0.01401187, 0.01391217, 0.0138364, 0.01376616 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_felx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fely3001[31] = { 0.2852323, 0.2098943, 0.1564698, 0.1210239, 0.09503058, 0.07488763, 0.05956114, 0.04754087, 0.0383206, 0.03134607, 0.0259209, 0.0217339, 0.01841508, 0.01577638, 0.01367622, 0.01203236, 0.01072009,
   0.009687861, 0.008880175, 0.008241945, 0.007788132, 0.007417162, 0.007134704, 0.006921249, 0.006761308, 0.006642517, 0.006555092, 0.006491339, 0.006445148, 0.006410049, 0.006377508 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fehx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fehy3001[31] = { 0.5430368, 0.4021539, 0.3030189, 0.2368122, 0.188345, 0.151083, 0.1225342, 0.1002844, 0.08327307, 0.07037312, 0.06036889, 0.05257225, 0.04639119, 0.04150554, 0.03766562, 0.03460158, 0.03219512,
   0.03035861, 0.02898058, 0.02789161, 0.02699095, 0.02635642, 0.02587607, 0.02557052, 0.02530605, 0.02511224, 0.02497168, 0.0248707, 0.02479839, 0.02474422, 0.0247161 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->SetMinimum(0.006649788);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->SetMaximum(1.273858);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3002[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3002[31] = { 0.6156878, 0.4530672, 0.3377476, 0.261236, 0.2051281, 0.1616486, 0.1285656, 0.1026193, 0.08271688, 0.06766203, 0.05595154, 0.04691369, 0.03974984, 0.0340541, 0.02952079, 0.02597244, 0.02313983,
   0.02091172, 0.01916829, 0.01779064, 0.01681106, 0.0160103, 0.01540061, 0.01493985, 0.01459461, 0.0143382, 0.01414949, 0.01401187, 0.01391217, 0.0138364, 0.01376616 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3002[31] = { 0.1720507, 0.1266072, 0.09438175, 0.073001, 0.05732196, 0.04517184, 0.03592697, 0.02867641, 0.02311479, 0.01890779, 0.01563536, 0.01310978, 0.01110788, 0.009516233, 0.008249424, 0.007257859, 0.006466301,
   0.005843669, 0.005356476, 0.004971499, 0.004697762, 0.004473994, 0.004303616, 0.004174861, 0.004078386, 0.004006732, 0.003953998, 0.003915543, 0.00388768, 0.003866508, 0.00384688 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3002[31] = { 0.2431173, 0.1796583, 0.1347637, 0.1049962, 0.08310363, 0.06627545, 0.05335236, 0.04321463, 0.03551093, 0.02965357, 0.02513353, 0.02152588, 0.01868124, 0.01640447, 0.01455562, 0.01311272, 0.0119566,
   0.01102421, 0.0102839, 0.009773455, 0.009186012, 0.008817415, 0.008525252, 0.008297926, 0.008130103, 0.007964354, 0.007859179, 0.007780003, 0.007721082, 0.00767541, 0.007653532 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetMinimum(0.008927353);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetMaximum(0.9436937);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13002);
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3003[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3003[31] = { 0.6156878, 0.4530672, 0.3377476, 0.261236, 0.2051281, 0.1616486, 0.1285656, 0.1026193, 0.08271688, 0.06766203, 0.05595154, 0.04691369, 0.03974984, 0.0340541, 0.02952079, 0.02597244, 0.02313983,
   0.02091172, 0.01916829, 0.01779064, 0.01681106, 0.0160103, 0.01540061, 0.01493985, 0.01459461, 0.0143382, 0.01414949, 0.01401187, 0.01391217, 0.0138364, 0.01376616 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3003[31] = { 0.1720507, 0.1266072, 0.09438175, 0.073001, 0.05732196, 0.04517184, 0.03592697, 0.02867641, 0.02311479, 0.01890779, 0.01563536, 0.01310978, 0.01110788, 0.009516233, 0.008249424, 0.007257859, 0.006466301,
   0.005843669, 0.005356476, 0.004971499, 0.004697762, 0.004473994, 0.004303616, 0.004174861, 0.004078386, 0.004006732, 0.003953998, 0.003915543, 0.00388768, 0.003866508, 0.00384688 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3003[31] = { 0.2431173, 0.1796583, 0.1347637, 0.1049962, 0.08310363, 0.06627545, 0.05335236, 0.04321463, 0.03551093, 0.02965357, 0.02513353, 0.02152588, 0.01868124, 0.01640447, 0.01455562, 0.01311272, 0.0119566,
   0.01102421, 0.0102839, 0.009773455, 0.009186012, 0.008817415, 0.008525252, 0.008297926, 0.008130103, 0.007964354, 0.007859179, 0.007780003, 0.007721082, 0.00767541, 0.007653532 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->SetMinimum(0.008927353);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->SetMaximum(0.9436937);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx1[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy1[31] = { 0.6927867, 0.3675056, 0.3161232, 0.1752521, 0.1900855, 0.2554064, 0.1916486, 0.1460718, 0.05996613, 0.06127583, 0.03735804, 0.0452862, 0.05174476, 0.04377433, 0.01974806, 0.01696118, 0.01983335,
   0.02724566, 0.02220586, 0.01513713, 0.01469025, 0.01446992, 0.01423791, 0.01408281, 0.01398565, 0.01394983, 0.01388862, 0.01383095, 0.01379708, 0.01377165, 0.01374992 };
   TGraph *graph = new TGraph(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetMinimum(0.01237493);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetMaximum(0.7606904);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1200,8400);
   chist_copy__2->SetMinimum(0.002216596);
   chist_copy__2->SetMaximum(29.10585);
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
