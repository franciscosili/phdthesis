#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRL50__width0p07__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:37:34 2024) by ROOT version 6.32.02
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
   up__0->Range(113.2075,-3.259979,9124.528,2.962836);
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
   chist__1->SetMinimum(0.002303045);
   chist__1->SetMaximum(436.9288);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2","Exp. #pm2#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1","Exp. #pm1#sigma ","LF");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1","Exp. ","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs","Obs. ","PL");
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
      tex = new TLatex(0.160804,0.6946,"#sigma_{G}/m_{G}=0.07");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.028);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fx3001[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fy3001[31] = { 1.950943, 1.228977, 0.8054136, 0.6116486, 0.4812525, 0.3698349, 0.2781657, 0.211624, 0.1651819, 0.1322395, 0.1078492, 0.0886568, 0.07297281, 0.06001451, 0.04952861, 0.04131059, 0.03489723,
   0.02995402, 0.02621465, 0.02331684, 0.02109047, 0.01935578, 0.01810502, 0.01708926, 0.01630393, 0.01569931, 0.01523783, 0.01489061, 0.01463265, 0.01444268, 0.01430305 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_felx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fely3001[31] = { 0.9038216, 0.5693533, 0.3731274, 0.283361, 0.2229519, 0.171335, 0.128867, 0.09803993, 0.0765245, 0.06126318, 0.04996375, 0.04107241, 0.03380642, 0.02780318, 0.02294533, 0.01913813, 0.01616699,
   0.01387693, 0.01214457, 0.01080209, 0.009770671, 0.008967033, 0.008387589, 0.007917015, 0.00755319, 0.007273085, 0.007059295, 0.006898434, 0.006778927, 0.00669092, 0.006626236 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fehx3001[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fehy3001[31] = { 1.519706, 1.056613, 0.696706, 0.5236481, 0.4132213, 0.3229851, 0.2474258, 0.1913098, 0.1533761, 0.1269561, 0.1066361, 0.0892546, 0.07431212, 0.062545, 0.05357137, 0.0468738, 0.04180943,
   0.03801795, 0.03496532, 0.03262148, 0.03091808, 0.0294935, 0.02835849, 0.02750067, 0.02682843, 0.02630435, 0.02596742, 0.02567399, 0.02545216, 0.02528616, 0.02516501 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fx3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fy3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_felx3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fehx3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fely3001,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2_fehy3001);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma2");
   grae->SetTitle("");

   ci = 1434;
   color = new TColor(ci, 1, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(5);
   grae->SetMarkerColor(5);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->SetMinimum(0.006909135);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->SetMaximum(3.816946);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma23001);
   
   grae->Draw(" 3");
   
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

   ci = 1435;
   color = new TColor(ci, 0, 1, 0, " ", 0.6);
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
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
   
   grae->Draw(" 3");
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3003[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3003[31] = { 1.950943, 1.228977, 0.8054136, 0.6116486, 0.4812525, 0.3698349, 0.2781657, 0.211624, 0.1651819, 0.1322395, 0.1078492, 0.0886568, 0.07297281, 0.06001451, 0.04952861, 0.04131059, 0.03489723,
   0.02995402, 0.02621465, 0.02331684, 0.02109047, 0.01935578, 0.01810502, 0.01708926, 0.01630393, 0.01569931, 0.01523783, 0.01489061, 0.01463265, 0.01444268, 0.01430305 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3003[31] = { 0.5451806, 0.343431, 0.2250685, 0.1709219, 0.1344834, 0.1033484, 0.07773191, 0.05913717, 0.04615918, 0.03695364, 0.03013788, 0.02477467, 0.02039186, 0.01677073, 0.0138405, 0.01154402, 0.009751843,
   0.008370491, 0.007325542, 0.006515765, 0.005893618, 0.005408868, 0.00505935, 0.004775502, 0.004556046, 0.004387087, 0.004258131, 0.0041611, 0.004089014, 0.004035929, 0.003996912 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3003[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3003[31] = { 0.7557878, 0.4765333, 0.3133129, 0.235963, 0.185408, 0.1443596, 0.1097664, 0.08468794, 0.06733274, 0.05519548, 0.04612933, 0.03843329, 0.03174882, 0.02611582, 0.02187132, 0.01863268, 0.01624078,
   0.01438588, 0.01299442, 0.0118901, 0.01100823, 0.01033996, 0.009683851, 0.009254522, 0.008900762, 0.00862003, 0.008408575, 0.008240693, 0.008082121, 0.007985251, 0.007913472 };
   grae = new TGraphAsymmErrors(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma1");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003","",100,1200,8400);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->SetMinimum(0.009275527);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->SetMaximum(2.976373);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p07__Nom__SRL50__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx1[31] = { 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000,
   5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800 };
   Double_t tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy1[31] = { 2.847915, 1.059407, 0.4705864, 0.3393574, 0.5598819, 0.7400657, 0.5408092, 0.2801154, 0.1430342, 0.09858536, 0.08955669, 0.08751244, 0.07214302, 0.05382163, 0.04107606, 0.03414567, 0.0302795,
   0.02758736, 0.02505415, 0.02197452, 0.01915922, 0.01701384, 0.01572218, 0.01501239, 0.01464083, 0.01439888, 0.01420927, 0.01408559, 0.01399738, 0.01398243, 0.01393811 };
   TGraph *graph = new TGraph(31,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fx1,tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p07__Nom__SRL50__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(3);
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
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,1200,8400);
   chist_copy__2->SetMinimum(0.002303045);
   chist_copy__2->SetMaximum(436.9288);
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
