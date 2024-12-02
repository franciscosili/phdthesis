#ifdef __CLING__
#pragma cling optimize(0)
#endif
void can__gaus__SRB__width0p02_width0p07_width0p15__Run2()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Sep  4 19:24:33 2024) by ROOT version 6.32.02
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
   up__0->Range(-374.3397,-3.044582,8036.226,2.105751);
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
   chist__1->SetMinimum(0.002954276);
   chist__1->SetMaximum(69.00723);
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
   TLegendEntry *entry=leg->AddEntry("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs","#sigma_{G}/m_{G}=0.02","PL");

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
   entry=leg->AddEntry("tgraph__gaus_width0p07__Nom__SRB__phjet_m_obs","#sigma_{G}/m_{G}=0.07","PL");

   ci = TColor::GetColor("#ee854a");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ee854a");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs","#sigma_{G}/m_{G}=0.15","PL");

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
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3001[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3001[29] = { 0.3230809, 0.2249303, 0.1708023, 0.128091, 0.09788312, 0.07621336, 0.05956569, 0.04767097, 0.03885354, 0.0314597, 0.02599546, 0.02274691, 0.01920974, 0.01740341, 0.0161141, 0.01521086, 0.01462023,
   0.01424338, 0.0140095, 0.01386829, 0.01371853, 0.01372381, 0.01369708, 0.01368243, 0.01367456, 0.01367043, 0.01366829, 0.0136672, 0.01366666 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3001[29] = { 0.09028321, 0.06285556, 0.04772978, 0.03579435, 0.02735291, 0.02129741, 0.01664532, 0.0133214, 0.01085741, 0.008791244, 0.007264291, 0.006356503, 0.005368058, 0.004863291, 0.004502997, 0.004250594, 0.004085546,
   0.003980235, 0.00391488, 0.00387542, 0.003833568, 0.003835046, 0.003827577, 0.003823482, 0.003821283, 0.003820127, 0.00381953, 0.003819225, 0.003819075 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3001[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3001[29] = { 0.1289749, 0.09082138, 0.06662173, 0.05317215, 0.04141959, 0.03226802, 0.02645493, 0.02177281, 0.01822663, 0.01523147, 0.01288508, 0.01174044, 0.01027756, 0.009498442, 0.008928996, 0.008438034, 0.008159354,
   0.007912678, 0.007778875, 0.007694568, 0.007623348, 0.007626948, 0.007616187, 0.007585307, 0.007580021, 0.007577207, 0.007575749, 0.007575003, 0.007574629 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fx3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fy3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_felx3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehx3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fely3001,tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1_fehy3001);
   grae->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->SetMinimum(0.008862828);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->SetMaximum(0.4962767);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_exp_sigma13001);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx1[29] = { 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400,
   4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy1[29] = { 0.3059949, 0.1822239, 0.1692658, 0.1967188, 0.07973257, 0.06377523, 0.05077324, 0.05614776, 0.06416271, 0.03081094, 0.02186922, 0.02805254, 0.01631152, 0.01502355, 0.01451346, 0.01417622, 0.01412868,
   0.01392072, 0.01383071, 0.01378279, 0.0137255, 0.01373723, 0.01358756, 0.01374401, 0.0136841, 0.01371452, 0.01368302, 0.01368267, 0.01360748 };
   TGraph *graph = new TGraph(29,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fx1,tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs_fy1);
   graph->SetName("tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#4878d0");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#4878d0");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1 = new TH1F("Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1","",100,640,7360);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetMinimum(0.0122288);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetMaximum(0.3352356);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->SetLineColor(ci);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p02__Nom__SRB__phjet_m_obs1);
   
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
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3003[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3003[28] = { 2.001915, 1.259964, 0.5833117, 0.374046, 0.2742914, 0.2244913, 0.1604392, 0.1070003, 0.07334555, 0.052921, 0.0417059, 0.03190643, 0.02657177, 0.0233255, 0.02132879, 0.01904572, 0.01777106,
   0.01683146, 0.01626591, 0.01559596, 0.01519789, 0.01489852, 0.01466902, 0.01449317, 0.01435303, 0.01413025, 0.01417367, 0.0141123 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3003[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3003[28] = { 0.5594244, 0.3520902, 0.1630033, 0.1045252, 0.07664928, 0.06273288, 0.04483387, 0.02990066, 0.02049602, 0.01478849, 0.01165449, 0.008916081, 0.007425339, 0.006518186, 0.005960215, 0.005322224, 0.004966027,
   0.004703461, 0.004545421, 0.004358208, 0.004246969, 0.004163311, 0.004099179, 0.004050039, 0.004010877, 0.003948624, 0.003960757, 0.003943606 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3003[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3003[28] = { 0.7453121, 0.4053957, 0.2137424, 0.1888776, 0.1390246, 0.08641794, 0.0366069, 0.03735055, 0.02973799, 0.02152531, 0.0169589, 0.01539829, 0.01342095, 0.01227969, 0.01047893, 0.01011935, 0.009550535,
   0.009175995, 0.008799796, 0.008520852, 0.008329843, 0.00818496, 0.008085224, 0.007988616, 0.007936623, 0.007824525, 0.007847043, 0.007816732 };
   grae = new TGraphAsymmErrors(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fx3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fy3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_felx3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehx3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fely3003,tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1_fehy3003);
   grae->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma1");
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
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetMinimum(0.009151823);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetMaximum(3.020933);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_exp_sigma13003);
   
   grae->Draw(" lx");
   
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fx3[28] = { 1200, 1400, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600,
   4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800 };
   Double_t tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fy3[28] = { 1.557401, 1.47315, 0.570798, 0.2878938, 0.246479, 0.2795095, 0.2061042, 0.1145121, 0.08361584, 0.05335686, 0.03924939, 0.02872128, 0.02425728, 0.02085869, 0.01841586, 0.01688421, 0.01609473,
   0.01530491, 0.01504085, 0.01467747, 0.01443762, 0.01417532, 0.01412433, 0.01404809, 0.01400067, 0.0139106, 0.01392086, 0.01392508 };
   graph = new TGraph(28,tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fx3,tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs_fy3);
   graph->SetName("tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#6acc64");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#6acc64");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3 = new TH1F("Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3","",100,640,7360);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->SetMinimum(0.01251954);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->SetMaximum(1.71175);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->SetDirectory(nullptr);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->SetLineColor(ci);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetXaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetXaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetXaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetYaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetYaxis()->SetTitleFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetZaxis()->SetLabelFont(42);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetZaxis()->SetTitleOffset(1);
   Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tgraph__gaus_width0p15__Nom__SRB__phjet_m_obs3);
   
   graph->Draw(" pl");
   
   TH1D *chist_copy__2 = new TH1D("chist_copy__2","",10,640,7360);
   chist_copy__2->SetMinimum(0.002954276);
   chist_copy__2->SetMaximum(69.00723);
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
