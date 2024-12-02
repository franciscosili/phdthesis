#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__width0p07__SRL50_SRB_SRC50__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:03:02 2024) by ROOT version 6.32.02
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
   up__0->Range(-531.3208,-3.057498,9180.881,2.229353);
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
   
   TH1D *chist__1 = new TH1D("chist__1","",10,640,8400);
   chist__1->SetMinimum(0.00295929);
   chist__1->SetMaximum(90.24501);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs","SRL50","PL");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs","SRB","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs","SRC50","PL");

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
      tex = new TLatex(0.160804,0.809,"95% C.L. limits");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7738,"Generic gaussians");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.160804,0.7386,"#sigma_{G}/m_{G}=0.07");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3001[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3001[31] = { 1.950943, 1.228977, 0.8054136, 0.6116486, 0.4812525, 0.3698349, 0.2781657, 0.211624, 0.1651819, 0.1322395, 0.1078492, 0.0886568, 0.07297281, 0.06001451, 0.04952861, 0.04131059, 0.03489723,
   0.02995402, 0.02621465, 0.02331684, 0.02109047, 0.01935578, 0.01810502, 0.01708926, 0.01630393, 0.01569931, 0.01523783, 0.01489061, 0.01463265, 0.01444268, 0.01430305 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3001[31] = { 0.5451806, 0.343431, 0.2250685, 0.1709219, 0.1344834, 0.1033484, 0.07773191, 0.05913717, 0.04615918, 0.03695364, 0.03013788, 0.02477467, 0.02039186, 0.01677073, 0.0138405, 0.01154402, 0.009751843,
   0.008370491, 0.007325542, 0.006515765, 0.005893618, 0.005408868, 0.00505935, 0.004775502, 0.004556046, 0.004387087, 0.004258131, 0.0041611, 0.004089014, 0.004035929, 0.003996912 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3001[31] = { 0.7557878, 0.4765333, 0.3133129, 0.235963, 0.185408, 0.1443596, 0.1097664, 0.08468794, 0.06733274, 0.05519548, 0.04612933, 0.03843329, 0.03174882, 0.02611582, 0.02187132, 0.01863268, 0.01624078,
   0.01438588, 0.01299442, 0.0118901, 0.01100823, 0.01033996, 0.009683851, 0.009254522, 0.008900762, 0.00862003, 0.008408575, 0.008240693, 0.008082121, 0.007985251, 0.007913472 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->SetMinimum(0.009275527);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->SetMaximum(2.976373);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx1[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy1[31] = { 2.847915, 1.059407, 0.4705864, 0.3393574, 0.5598819, 0.7400657, 0.5408092, 0.2801154, 0.1430342, 0.09858536, 0.08955669, 0.08751244, 0.07214302, 0.05382163, 0.04107606, 0.03414567, 0.0302795,
   0.02758736, 0.02505415, 0.02197452, 0.01915922, 0.01701384, 0.01572218, 0.01501239, 0.01464083, 0.01439888, 0.01420927, 0.01408559, 0.01399738, 0.01398243, 0.01393811 };
   TGraph *graph = new TGraph(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx1,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->SetMinimum(0.01254429);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->SetMaximum(3.131313);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs1);
   
   graph->Draw(" pl");
   
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
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   grae->SetLineColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   grae->SetMarkerColor(ci);
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
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fx2[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fy2[29] = { 0.614295, 0.5822282, 0.4405289, 0.4353821, 0.1727673, 0.08602399, 0.09445352, 0.1282567, 0.1078564, 0.06986139, 0.04572835, 0.03352009, 0.02504345, 0.01947444, 0.01648264, 0.01535912, 0.01446922,
   0.0143135, 0.01408269, 0.01399729, 0.01394405, 0.01383995, 0.01384443, 0.01377257, 0.01375211, 0.01374324, 0.01372412, 0.01369233, 0.01374688 };
   graph = new TGraph(29,tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fx2,tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs_fy2);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ee854a");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->SetMinimum(0.0123231);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->SetMaximum(0.6743553);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs2);
   
   graph->Draw(" pl");
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fx3003[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fy3003[29] = { 2.690848, 1.449118, 1.013024, 0.7139013, 0.5368932, 0.3911719, 0.3071325, 0.2380894, 0.1725129, 0.1382937, 0.108912, 0.08585875, 0.06863276, 0.0552912, 0.04465388, 0.03669173, 0.03061314,
   0.02584505, 0.02253835, 0.0199099, 0.0183269, 0.01710087, 0.01625806, 0.01547242, 0.01503567, 0.01467214, 0.01439869, 0.01424833, 0.01409388 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_felx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fely3003[29] = { 0.7519432, 0.4049481, 0.2830841, 0.1994959, 0.1500319, 0.1093109, 0.08582654, 0.06653281, 0.04820781, 0.03864543, 0.03043486, 0.02399276, 0.01917905, 0.01545083, 0.01247829, 0.01025331, 0.008554676,
   0.00722226, 0.00629822, 0.005563714, 0.005121354, 0.004778746, 0.004543226, 0.004323683, 0.004201638, 0.00410005, 0.004023637, 0.003981619, 0.003938459 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehx3003[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehy3003[29] = { 0.9018702, 0.5723014, 0.3745182, 0.3208895, 0.210023, 0.1555102, 0.1212915, 0.09196292, 0.07095901, 0.05635456, 0.04553154, 0.03644285, 0.02922548, 0.02308758, 0.01919083, 0.0162996, 0.01391664,
   0.01250411, 0.01135502, 0.01093751, 0.009843892, 0.009277113, 0.008877483, 0.008526713, 0.008308921, 0.008106484, 0.007968492, 0.007884283, 0.007804647 };
   grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetMinimum(0.009139879);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetMaximum(3.950975);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fx3[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fy3[29] = { 3.419953, 0.9502977, 1.120948, 1.132961, 0.5011958, 0.2889224, 0.3499606, 0.3650923, 0.1731864, 0.09040518, 0.07243897, 0.07647592, 0.07418472, 0.05936861, 0.0467752, 0.04123777, 0.03648893,
   0.03193763, 0.02850009, 0.02662359, 0.02336606, 0.0188812, 0.0162349, 0.01479754, 0.01431771, 0.01405569, 0.01397037, 0.01391897, 0.01386448 };
   graph = new TGraph(29,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fx3,tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3","",100,640,7360);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->SetMinimum(0.01247804);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->SetMaximum(3.760562);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRC50__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,8400);
   chist_copy__2->SetMinimum(0.00295929);
   chist_copy__2->SetMaximum(90.24501);
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
