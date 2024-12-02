#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRL50__width0p02_width0p07_width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:24:29 2024) by ROOT version 6.32.02
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
   up__0->Range(113.2075,-3.08588,9124.528,2.508931);
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
   chist__1->SetMinimum(0.002975784);
   chist__1->SetMaximum(165.5939);
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
   
   TLegend *leg = new TLegend(0.540201,0.8178,0.879397,0.9234,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs","#sigma_{G}/m_{G}=0.02","PL");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4878d0");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs","#sigma_{G}/m_{G}=0.07","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs","#sigma_{G}/m_{G}=0.15","PL");

   ci = TColor::GetColor("#6acc64");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.540201,0.77556,0.879397,0.81076,NULL,"brNDC");
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
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3001[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3001[31] = { 0.6156878, 0.4530672, 0.3377476, 0.261236, 0.2051281, 0.1616486, 0.1285656, 0.1026193, 0.08271688, 0.06766203, 0.05595154, 0.04691369, 0.03974984, 0.0340541, 0.02952079, 0.02597244, 0.02313983,
   0.02091172, 0.01916829, 0.01779064, 0.01681106, 0.0160103, 0.01540061, 0.01493985, 0.01459461, 0.0143382, 0.01414949, 0.01401187, 0.01391217, 0.0138364, 0.01376616 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3001[31] = { 0.1720507, 0.1266072, 0.09438175, 0.073001, 0.05732196, 0.04517184, 0.03592697, 0.02867641, 0.02311479, 0.01890779, 0.01563536, 0.01310978, 0.01110788, 0.009516233, 0.008249424, 0.007257859, 0.006466301,
   0.005843669, 0.005356476, 0.004971499, 0.004697762, 0.004473994, 0.004303616, 0.004174861, 0.004078386, 0.004006732, 0.003953998, 0.003915543, 0.00388768, 0.003866508, 0.00384688 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3001[31] = { 0.2431173, 0.1796583, 0.1347637, 0.1049962, 0.08310363, 0.06627545, 0.05335236, 0.04321463, 0.03551093, 0.02965357, 0.02513353, 0.02152588, 0.01868124, 0.01640447, 0.01455562, 0.01311272, 0.0119566,
   0.01102421, 0.0102839, 0.009773455, 0.009186012, 0.008817415, 0.008525252, 0.008297926, 0.008130103, 0.007964354, 0.007859179, 0.007780003, 0.007721082, 0.00767541, 0.007653532 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001","",100,1200,8400);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetMinimum(0.008927353);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetMaximum(0.9436937);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRL50__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx1[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy1[31] = { 0.6927867, 0.3675056, 0.3161232, 0.1752521, 0.1900855, 0.2554064, 0.1916486, 0.1460718, 0.05996613, 0.06127583, 0.03735804, 0.0452862, 0.05174476, 0.04377433, 0.01974806, 0.01696118, 0.01983335,
   0.02724566, 0.02220586, 0.01513713, 0.01469025, 0.01446992, 0.01423791, 0.01408281, 0.01398565, 0.01394983, 0.01388862, 0.01383095, 0.01379708, 0.01377165, 0.01374992 };
   TGraph *graph = new TGraph(31,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
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
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3002[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3002[31] = { 1.950943, 1.228977, 0.8054136, 0.6116486, 0.4812525, 0.3698349, 0.2781657, 0.211624, 0.1651819, 0.1322395, 0.1078492, 0.0886568, 0.07297281, 0.06001451, 0.04952861, 0.04131059, 0.03489723,
   0.02995402, 0.02621465, 0.02331684, 0.02109047, 0.01935578, 0.01810502, 0.01708926, 0.01630393, 0.01569931, 0.01523783, 0.01489061, 0.01463265, 0.01444268, 0.01430305 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3002[31] = { 0.5451806, 0.343431, 0.2250685, 0.1709219, 0.1344834, 0.1033484, 0.07773191, 0.05913717, 0.04615918, 0.03695364, 0.03013788, 0.02477467, 0.02039186, 0.01677073, 0.0138405, 0.01154402, 0.009751843,
   0.008370491, 0.007325542, 0.006515765, 0.005893618, 0.005408868, 0.00505935, 0.004775502, 0.004556046, 0.004387087, 0.004258131, 0.0041611, 0.004089014, 0.004035929, 0.003996912 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3002[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3002[31] = { 0.7557878, 0.4765333, 0.3133129, 0.235963, 0.185408, 0.1443596, 0.1097664, 0.08468794, 0.06733274, 0.05519548, 0.04612933, 0.03843329, 0.03174882, 0.02611582, 0.02187132, 0.01863268, 0.01624078,
   0.01438588, 0.01299442, 0.0118901, 0.01100823, 0.01033996, 0.009683851, 0.009254522, 0.008900762, 0.00862003, 0.008408575, 0.008240693, 0.008082121, 0.007985251, 0.007913472 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3002,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3002);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetMinimum(0.009275527);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetMaximum(2.976373);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13002);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx2[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy2[31] = { 2.847915, 1.059407, 0.4705864, 0.3393574, 0.5598819, 0.7400657, 0.5408092, 0.2801154, 0.1430342, 0.09858536, 0.08955669, 0.08751244, 0.07214302, 0.05382163, 0.04107606, 0.03414567, 0.0302795,
   0.02758736, 0.02505415, 0.02197452, 0.01915922, 0.01701384, 0.01572218, 0.01501239, 0.01464083, 0.01439888, 0.01420927, 0.01408559, 0.01399738, 0.01398243, 0.01393811 };
   graph = new TGraph(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx2,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy2);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->SetMinimum(0.01254429);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->SetMaximum(3.131313);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs2);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3003[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3003[31] = { 5.079536, 2.61146, 1.730264, 1.354633, 1.035138, 0.7114445, 0.488781, 0.3621958, 0.2916115, 0.2436063, 0.1888707, 0.1447668, 0.1094893, 0.08352342, 0.06544996, 0.05270412, 0.04355129,
   0.03692763, 0.03199271, 0.02828028, 0.02543139, 0.02334646, 0.02167929, 0.02038457, 0.01937329, 0.01857901, 0.01795083, 0.01745025, 0.0170482, 0.01672259, 0.01645658 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3003[31] = { 1.419449, 0.7297584, 0.483513, 0.3785448, 0.2892638, 0.1988094, 0.1365872, 0.1012137, 0.08148927, 0.06807448, 0.05277889, 0.04045431, 0.03059618, 0.02334017, 0.01828964, 0.01472788, 0.01217017,
   0.01031923, 0.008940189, 0.007902772, 0.007106667, 0.006524043, 0.006058162, 0.005696359, 0.005413761, 0.005191806, 0.005016263, 0.004876379, 0.004764029, 0.00467304, 0.004598702 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3003[31] = { 1.512875, 0.9789369, 0.629464, 0.4697999, 0.3610391, 0.2612363, 0.1867705, 0.1502355, 0.1332433, 0.08373126, 0.05568445, 0.04172819, 0.03476643, 0.03072295, 0.02625248, 0.02237001, 0.019535,
   0.01715807, 0.01541373, 0.01401428, 0.01293145, 0.01197468, 0.01128135, 0.01065144, 0.01025371, 0.009903629, 0.009625765, 0.00940131, 0.009219419, 0.009071289, 0.008957534 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetMinimum(0.01067209);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetMaximum(7.250466);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fx3[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fy3[31] = { 4.625118, 1.3646, 1.012781, 1.471253, 1.789855, 1.262768, 0.7156395, 0.4141138, 0.2720908, 0.199297, 0.1528492, 0.1160989, 0.08792468, 0.06752287, 0.05319135, 0.0431869, 0.03623499,
   0.03103451, 0.02736557, 0.02445753, 0.02217679, 0.02047504, 0.01911199, 0.01807741, 0.0172654, 0.01664579, 0.01618435, 0.01581258, 0.01552443, 0.01529976, 0.01512568 };
   graph = new TGraph(31,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fx3,tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3","",100,1200,8400);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->SetMinimum(0.01361312);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->SetMaximum(5.086117);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRL50__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1200,8400);
   chist_copy__2->SetMinimum(0.002975784);
   chist_copy__2->SetMaximum(165.5939);
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
